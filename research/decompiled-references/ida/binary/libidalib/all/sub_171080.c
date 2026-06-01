void __fastcall sub_171080(
        __m128i **a1,
        __int64 a2,
        char a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        char a6)
{
  unsigned __int64 v8; // r12
  __int64 eah; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // r15
  __m128i *v13; // rax
  __m128i *v14; // rsi
  __m128i *v15; // rdx
  __m128i *v16; // rsi
  __int64 v17; // rax
  __m128i *v18; // rbp
  __int64 v19; // rax
  __m128i *v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-78h]
  __int64 v25; // [rsp+10h] [rbp-68h]
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  __int8 v29; // [rsp+31h] [rbp-47h]

  v23 = a2;
  v8 = getinf();
  eah = get_eah();
  v10 = -1;
  if ( *(_DWORD *)(eah + 24) != 8 )
    v10 = 0x100000000LL;
  v11 = v10 - a2;
  if ( v11 > v8 )
    v11 = v8;
  if ( v11 )
  {
    v25 = a2 + v11;
    get_flags_ex();
    while ( (a3 & 2) != 0 )
    {
      v12 = v27;
      if ( (unsigned __int8)xrefblk_t_first_to() )
        goto LABEL_9;
LABEL_21:
      if ( v25 == ++v23 || (get_flags_ex() & 0x600) != 0x200 )
        goto LABEL_23;
    }
    v12 = v28;
    if ( !(unsigned __int8)xrefblk_t_first_from() )
      goto LABEL_21;
LABEL_9:
    while ( !a4 )
    {
      while ( 1 )
      {
LABEL_11:
        v13 = a1[1];
        v14 = *a1;
        v15 = (__m128i *)&v13->m128i_i8[1];
        if ( a1[2] < (__m128i *)&v13->m128i_i8[1] )
        {
          v17 = qvector_reserve();
          *a1 = (__m128i *)v17;
          v14 = (__m128i *)v17;
          v13 = a1[1];
          v15 = (__m128i *)&v13->m128i_i8[1];
        }
        a1[1] = v15;
        v16 = &v14[(_QWORD)v13];
        v16->m128i_i64[0] = v12;
        v16->m128i_i8[8] = 0;
        v16->m128i_i8[9] = v29;
LABEL_14:
        if ( (a3 & 2) == 0 )
          break;
        if ( !(unsigned __int8)xrefblk_t_next_to() )
          goto LABEL_21;
        v12 = v27;
        if ( a4 )
          goto LABEL_10;
      }
      if ( !(unsigned __int8)xrefblk_t_next_from() )
        goto LABEL_21;
      v12 = v28;
    }
LABEL_10:
    if ( !a4(v12, a5) )
      goto LABEL_14;
    goto LABEL_11;
  }
LABEL_23:
  if ( a6 )
  {
    v18 = *a1;
    v19 = (__int64)a1[1];
    v20 = &(*a1)[v19];
    if ( *a1 != v20 )
    {
      v21 = (v19 * 16) >> 4;
      v22 = -2;
      if ( v21 )
      {
        _BitScanReverse64(&v21, v21);
        v22 = 2LL * (int)v21;
      }
      sub_170D90(v18, (unsigned __int64 *)v20, v22);
      sub_1709A0(v18, v20);
    }
  }
}

