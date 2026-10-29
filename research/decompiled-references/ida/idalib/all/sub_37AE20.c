__int64 __fastcall sub_37AE20(const __m128i *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 not_tail; // r12
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // r9d
  void *v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  unsigned int v11; // ebx
  const char *v12; // rsi
  __int128 v13; // [rsp+10h] [rbp-E8h] BYREF
  void *v14; // [rsp+20h] [rbp-D8h]
  __m128i v15; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+38h] [rbp-C0h]
  __int128 v17; // [rsp+40h] [rbp-B8h]
  _OWORD v18[3]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+80h] [rbp-78h]
  int v20; // [rsp+88h] [rbp-70h]
  __int64 v21; // [rsp+90h] [rbp-68h]
  char v22; // [rsp+98h] [rbp-60h]
  _BYTE v23[10]; // [rsp+AEh] [rbp-4Ah] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v2 = a1->m128i_i64[1];
  not_tail = v2;
  if ( (get_flags_ex(v2, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(v2);
  v14 = nullptr;
  v13 = 0;
  ptr = nullptr;
  v19 = 1;
  v20 = -1;
  v21 = 0;
  v22 = 0;
  v15 = 0;
  v17 = 0;
  v18[0] = 0;
  if ( (unsigned __int8)sub_371B60(not_tail, (__int64)v18) )
  {
    while ( v2 != not_tail )
    {
      if ( (get_tinfo_property(*(_QWORD *)&v18[0], 2) & 0x3F) == 0x1D )
        v4 = 0;
      else
        v4 = 8 * (v2 - not_tail);
      *(_QWORD *)&v13 = v4;
      if ( (unsigned int)find_tinfo_udt_member((int)&v13) == -1 )
      {
        qsnprintf((unsigned int)v23, 10, (unsigned int)"%llu", v2 - not_tail, v5, v6);
        set_error_string(0, v23);
        goto LABEL_20;
      }
      if ( (get_tinfo_property(*(_QWORD *)&v18[0], 2) & 0xF) == 0xE )
        break;
      not_tail = v2 - ((unsigned __int64)(v4 - v13) >> 3);
    }
    v7 = (void *)a1[2].m128i_i64[1];
    v8 = _mm_loadu_si128(&v15);
    v9 = _mm_loadu_si128(a1 + 3);
    a1[2].m128i_i64[1] = (__int64)v14;
    v14 = v7;
    a1[3] = v8;
    v15 = v9;
    if ( (unsigned int)find_tinfo_udt_member((int)&v13) != -1 )
    {
      v11 = 0;
      *(_QWORD *)(a2 + 8) = v2 + ((unsigned __int64)v13 >> 3);
      goto LABEL_14;
    }
    v12 = haystack;
    if ( v15.m128i_i64[0] )
      v12 = (const char *)v14;
    set_error_string(0, v12);
LABEL_20:
    v11 = set_qerrno(1538);
  }
  else
  {
    v11 = set_qerrno(1542);
  }
LABEL_14:
  clear_tinfo_t(v18);
  if ( ptr )
  {
    *(_QWORD *)&v17 = 0;
    qfree(ptr);
  }
  if ( v14 )
  {
    v15.m128i_i64[0] = 0;
    qfree(v14);
  }
  return v11;
}
