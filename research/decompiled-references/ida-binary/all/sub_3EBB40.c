void __fastcall sub_3EBB40(
        __m128i **a1,
        __int64 a2,
        char a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        char a6)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rdx
  __int64 eah; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  char v13; // al
  __int64 v14; // r15
  __m128i *v15; // rax
  __m128i *v16; // rsi
  __m128i *v17; // rdx
  __m128i *v18; // rsi
  __int64 v19; // rax
  char v20; // al
  __m128i *v21; // rbp
  __int64 v22; // rax
  __m128i *v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  __int8 v32; // [rsp+31h] [rbp-47h]
  unsigned __int64 v33; // [rsp+38h] [rbp-40h]

  v26 = a2;
  v33 = __readfsqword(0x28u);
  v8 = getinf(25);
  eah = get_eah(25, a2, v9);
  v11 = -1;
  if ( *(_DWORD *)(eah + 24) != 8 )
    v11 = 0x100000000LL;
  v12 = v11 - a2;
  if ( v12 > v8 )
    v12 = v8;
  if ( v12 )
  {
    v28 = a2 + v12;
    get_flags_ex(a2, 4);
    while ( (a3 & 2) != 0 )
    {
      v13 = xrefblk_t_first_to(&v30, v26, a3 & 1);
      v14 = v30;
      if ( v13 )
        goto LABEL_9;
LABEL_21:
      if ( v28 == ++v26 || (get_flags_ex(v26, 4) & 0x600) != 0x200 )
        goto LABEL_23;
    }
    v20 = xrefblk_t_first_from(&v30, v26, a3 & 1);
    v14 = v31;
    if ( !v20 )
      goto LABEL_21;
LABEL_9:
    while ( !a4 )
    {
      while ( 1 )
      {
LABEL_11:
        v15 = a1[1];
        v16 = *a1;
        v17 = (__m128i *)&v15->m128i_i8[1];
        if ( a1[2] < (__m128i *)&v15->m128i_i8[1] )
        {
          v19 = qvector_reserve(a1, v16, v17, 16);
          *a1 = (__m128i *)v19;
          v16 = (__m128i *)v19;
          v15 = a1[1];
          v17 = (__m128i *)&v15->m128i_i8[1];
        }
        a1[1] = v17;
        v18 = &v16[(_QWORD)v15];
        v18->m128i_i64[0] = v14;
        v18->m128i_i8[8] = 0;
        v18->m128i_i8[9] = v32;
LABEL_14:
        if ( (a3 & 2) == 0 )
          break;
        if ( !(unsigned __int8)xrefblk_t_next_to(&v30) )
          goto LABEL_21;
        v14 = v30;
        if ( a4 )
          goto LABEL_10;
      }
      if ( !(unsigned __int8)xrefblk_t_next_from(&v30) )
        goto LABEL_21;
      v14 = v31;
    }
LABEL_10:
    if ( !a4(v14, a5) )
      goto LABEL_14;
    goto LABEL_11;
  }
LABEL_23:
  if ( a6 )
  {
    v21 = *a1;
    v22 = (__int64)a1[1];
    v23 = &(*a1)[v22];
    if ( *a1 != v23 )
    {
      v24 = (v22 * 16) >> 4;
      v25 = -2;
      if ( v24 )
      {
        _BitScanReverse64(&v24, v24);
        v25 = 2LL * (int)v24;
      }
      sub_3EB850(v21, (unsigned __int64 *)v23, v25);
      sub_3EB460(v21, v23);
    }
  }
}
