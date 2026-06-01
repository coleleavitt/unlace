__int64 __fastcall sub_377430(const __m128i *a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int not_tail; // r12d
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // r9d
  void *v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  unsigned int v11; // ebx
  const char *v12; // rsi
  char v13; // [rsp+0h] [rbp-E8h]
  __int128 v14; // [rsp+10h] [rbp-D8h] BYREF
  void *v15; // [rsp+20h] [rbp-C8h]
  __m128i v16; // [rsp+28h] [rbp-C0h] BYREF
  void *ptr; // [rsp+38h] [rbp-B0h]
  __int128 v18; // [rsp+40h] [rbp-A8h]
  _OWORD v19[2]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v20; // [rsp+70h] [rbp-78h]
  int v21; // [rsp+78h] [rbp-70h]
  __int64 v22; // [rsp+80h] [rbp-68h]
  char v23; // [rsp+88h] [rbp-60h]
  _BYTE v24[10]; // [rsp+9Eh] [rbp-4Ah] BYREF
  unsigned __int64 v25; // [rsp+A8h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = a1->m128i_u32[2];
  not_tail = v2;
  if ( (get_flags_ex(v2, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(v2);
  v15 = nullptr;
  v21 = -1;
  ptr = nullptr;
  v20 = 1;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v19[0] = 0;
  if ( (unsigned __int8)sub_36E350(not_tail, (__int64)v19) )
  {
    while ( v2 != not_tail )
    {
      if ( (get_tinfo_property(*(_QWORD *)&v19[0], 2) & 0x3F) == 0x1D )
        v4 = 0;
      else
        v4 = 8LL * (v2 - not_tail);
      *(_QWORD *)&v14 = v4;
      if ( (unsigned int)find_tinfo_udt_member((int)&v14) == -1 )
      {
        qsnprintf((int)v24, 10, (int)"%u", v2 - not_tail, v5, v6, v13);
        v12 = v24;
        set_error_string();
        goto LABEL_20;
      }
      if ( (get_tinfo_property(*(_QWORD *)&v19[0], 2) & 0xF) == 0xE )
        break;
      not_tail = v2 - ((unsigned __int64)(v4 - v14) >> 3);
    }
    v7 = (void *)a1[2].m128i_i64[1];
    v8 = _mm_loadu_si128(&v16);
    v9 = _mm_loadu_si128(a1 + 3);
    a1[2].m128i_i64[1] = (__int64)v15;
    v15 = v7;
    a1[3] = v8;
    v16 = v9;
    if ( (unsigned int)find_tinfo_udt_member((int)&v14) != -1 )
    {
      v11 = 0;
      *(_DWORD *)(a2 + 8) = ((unsigned __int64)v14 >> 3) + v2;
      goto LABEL_14;
    }
    v12 = haystack;
    if ( v16.m128i_i64[0] )
      v12 = (const char *)v15;
    set_error_string();
LABEL_20:
    v11 = set_qerrno(1538, v12);
  }
  else
  {
    v11 = set_qerrno(1542, v19);
  }
LABEL_14:
  clear_tinfo_t(v19);
  if ( ptr )
  {
    *(_QWORD *)&v18 = 0;
    qfree(ptr);
  }
  if ( v15 )
  {
    v16.m128i_i64[0] = 0;
    qfree(v15);
  }
  return v11;
}

