__int64 __fastcall sub_3772C0(__int64 a1, __m128i *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned int tinfo_udt_member; // ebx
  void *v6; // rax
  __m128i v7; // xmm0
  __int64 v9; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-A8h] BYREF
  void *v11; // [rsp+20h] [rbp-98h]
  __int128 v12; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+38h] [rbp-80h]
  __m128i v14; // [rsp+40h] [rbp-78h] BYREF
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+70h] [rbp-48h]
  int v17; // [rsp+78h] [rbp-40h]
  __int64 v18; // [rsp+80h] [rbp-38h]
  char v19; // [rsp+88h] [rbp-30h]
  unsigned __int64 v20; // [rsp+98h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  v9 = 0;
  if ( (unsigned __int8)get_type_by_tid(&v9, v3) )
  {
    v4 = *(unsigned int *)(a1 + 40);
    v10[1] = 0;
    v12 = 0;
    v11 = nullptr;
    ptr = nullptr;
    v16 = 1;
    v17 = -1;
    v18 = 0;
    v19 = 0;
    v10[0] = 8 * v4;
    v14 = 0;
    v15 = 0;
    tinfo_udt_member = find_tinfo_udt_member((int)v10);
    if ( tinfo_udt_member != -1 )
    {
      v6 = ptr;
      v7 = _mm_load_si128(&v14);
      a2->m128i_i8[0] = 7;
      tinfo_udt_member = 0;
      ptr = nullptr;
      a2->m128i_i64[1] = (__int64)v6;
      a2[1] = v7;
      v14 = 0;
    }
    clear_tinfo_t(&v15);
    if ( ptr )
    {
      v14.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree(v11);
    }
  }
  else
  {
    tinfo_udt_member = -1;
  }
  clear_tinfo_t(&v9);
  return tinfo_udt_member;
}

