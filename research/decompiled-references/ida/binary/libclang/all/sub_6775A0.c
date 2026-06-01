__int64 __fastcall sub_6775A0(__int64 *a1, __int64 a2, __int64 a3, double a4, __m128i a5, double a6, __m128 a7)
{
  __int64 v7; // rbp
  __int64 *v8; // r15
  __int64 v10; // rax
  unsigned int **v11; // rbp
  char v12; // al
  unsigned int *v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i v19; // xmm0
  __int64 v20; // rbp
  __int64 v21; // r13
  __m128i v22; // rax
  __int64 v23; // rdx
  unsigned int **v24; // [rsp+8h] [rbp-A0h]
  unsigned __int8 v25; // [rsp+17h] [rbp-91h]
  __m128i v27; // [rsp+20h] [rbp-88h] BYREF
  __int64 v28; // [rsp+30h] [rbp-78h]
  __m128i v29; // [rsp+40h] [rbp-68h] BYREF
  __int64 v30; // [rsp+50h] [rbp-58h]
  __int64 v31; // [rsp+58h] [rbp-50h]
  __int64 v32; // [rsp+60h] [rbp-48h]

  v25 = sub_66D270(a1, *(_QWORD *)(a2 + 24), a4, a5, a6, a7);
  if ( !v25 )
    return 0;
  v7 = a2 + 48 + 8LL * *(unsigned int *)(a2 + 16);
  if ( v7 == a2 + 48 )
  {
    v10 = 0;
  }
  else
  {
    v8 = (__int64 *)(a2 + 48);
    do
    {
      if ( !(unsigned __int8)sub_66D270(a1, *v8, a4, a5, a6, a7) )
        return 0;
      ++v8;
    }
    while ( (__int64 *)v7 != v8 );
    v10 = 8LL * *(unsigned int *)(a2 + 16);
  }
  v11 = (unsigned int **)(a2 + v10 + 48);
  v24 = &v11[*(unsigned int *)(a2 + 20)];
  while ( v24 != v11 )
  {
    v13 = *v11;
    v14 = **v11;
    if ( v14 > 2 )
    {
      if ( !*((_BYTE *)v13 + 24) )
      {
        v12 = sub_672CC0(a1, *((_QWORD *)v13 + 1), a4, a5, a6, a7);
LABEL_13:
        if ( !v12 )
          return 0;
      }
    }
    else if ( v14 )
    {
      if ( v13[10] != 1 && !(unsigned __int8)sub_672CC0(a1, *((_QWORD *)v13 + 1) & 0xFFFFFFFFFFFFFFFCLL, a4, a5, a6, a7) )
        return 0;
      if ( (*((_QWORD *)v13 + 3) & 0xFFFFFFFFFFFFFFFCLL) > 7 && (v13[6] & 4) == 0 )
      {
        v15 = sub_81F070(v13 + 6);
        if ( !(unsigned __int8)sub_677500(a1, *(_QWORD *)(v15 + 8), a4, a5, a6, a7) )
          return 0;
      }
    }
    else if ( v13[4] != 1 )
    {
      v12 = sub_673BB0(
              a1,
              *(_QWORD *)(*((_QWORD *)v13 + 1) & 0xFFFFFFFFFFFFFFF8LL),
              (*((_QWORD *)v13 + 1) & 0xFFFFFFFFFFFFFFF8LL) + 8,
              a4,
              a5,
              a6,
              a7);
      goto LABEL_13;
    }
    ++v11;
  }
  sub_AC4830(&v29);
  v19 = _mm_load_si128(&v29);
  v20 = v31;
  v21 = v32;
  v28 = v30;
  v22 = v19;
  v27 = v19;
LABEL_26:
  if ( v20 == v22.m128i_i64[0] )
  {
LABEL_32:
    if ( v22.m128i_i64[1] == v21 )
      return v25;
  }
  v23 = v22.m128i_i8[8] & 3;
  if ( (_DWORD)v23 )
    v22.m128i_i64[0] = sub_ACE280(&v27, a2, v23, v16, v17, v18);
  while ( 1 )
  {
    a2 = *(_QWORD *)v22.m128i_i64[0];
    if ( !(unsigned __int8)sub_672860(a1, *(_QWORD *)v22.m128i_i64[0], a3, *(double *)v19.m128i_i64, a5, a6, a7) )
      return 0;
    v22.m128i_i64[1] = v27.m128i_i64[1];
    if ( (v27.m128i_i8[8] & 3) != 0 )
    {
      if ( v27.m128i_i64[1] <= 3uLL )
      {
        a2 = 1;
        sub_ACE0F0(&v27, 1);
      }
      else
      {
        sub_ACE150(&v27);
      }
      v22 = v27;
      goto LABEL_26;
    }
    v22.m128i_i64[0] = v27.m128i_i64[0] + 8;
    v27.m128i_i64[0] = v22.m128i_i64[0];
    if ( v20 == v22.m128i_i64[0] )
      goto LABEL_32;
  }
}

