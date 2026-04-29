unsigned __int64 __fastcall sub_5C620(__m128i *a1, __int64 a2, unsigned __int64 a3, char a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // rdx
  unsigned __int8 v8; // r14
  __m128i *v9; // r15
  __m128i *v10; // rbp
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __m128i *v14; // rbx
  const __m128i *v16; // [rsp+18h] [rbp-60h] BYREF
  unsigned __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+28h] [rbp-50h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a5 + 8);
  v19 = __readfsqword(0x28u);
  if ( a3 == 4 )
  {
    v7 = 0x8000000000000006LL;
    v8 = 20;
    if ( !a4 )
    {
      v7 = 0x8000000000000007LL;
      v8 = 36;
    }
  }
  else if ( a3 > 4 )
  {
    if ( a3 != 8 )
      goto LABEL_20;
    v7 = 0x8000000000000008LL;
    v8 = 21;
    if ( !a4 )
    {
      v7 = 0x8000000000000009LL;
      v8 = 37;
    }
  }
  else
  {
    if ( a3 != 1 )
    {
      if ( a3 == 2 )
      {
        v7 = 0x8000000000000004LL;
        v8 = 19;
        if ( !a4 )
        {
          v7 = 0x8000000000000005LL;
          v8 = 35;
        }
        goto LABEL_7;
      }
LABEL_20:
      v18 = v5;
      return 0x8000000000000000LL;
    }
    v7 = 0x8000000000000002LL;
    v8 = 18;
    if ( !a4 )
    {
      v7 = 0x8000000000000003LL;
      v8 = 34;
    }
  }
LABEL_7:
  v9 = (__m128i *)a1[1].m128i_i64[1];
  v18 = v5;
  v17 = v7;
  if ( !v9 )
  {
    v10 = a1 + 1;
    goto LABEL_27;
  }
  v10 = a1 + 1;
  do
  {
    while ( 1 )
    {
      v11 = sub_849A0(&v9[2], &v17);
      v12 = v9[1].m128i_i64[0];
      v13 = v9[1].m128i_i64[1];
      if ( v11 < 0 )
        break;
      v10 = v9;
      v9 = (__m128i *)v9[1].m128i_i64[0];
      if ( !v12 )
        goto LABEL_12;
    }
    v9 = (__m128i *)v9[1].m128i_i64[1];
  }
  while ( v13 );
LABEL_12:
  if ( &a1[1] == v10 || (int)sub_849A0(&v17, &v10[2]) < 0 )
  {
LABEL_27:
    v16 = (const __m128i *)&v17;
    v14 = sub_5C230(&a1->m128i_i64[1], v10, &v16) + 3;
    if ( v14->m128i_i8[0] )
      goto LABEL_15;
    goto LABEL_28;
  }
  v14 = v10 + 3;
  if ( v10[3].m128i_i8[0] )
    goto LABEL_15;
LABEL_28:
  create_tinfo(v14, v8, 7, 0);
LABEL_15:
  if ( a2 )
    copy_tinfo_t(a2, v14);
  return v17;
}
