__int64 __fastcall sub_6EF430(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 *v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 *v15; // r12
  unsigned __int64 v16; // rax
  __int64 *v17; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+8h] [rbp-40h]
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v10 = (__int64 *)(a2 + 24);
  v11 = *(unsigned int *)(a2 + 16);
  v19 = __readfsqword(0x28u);
  v12 = v11;
  v13 = a2 + v12 * 8 + 24;
  if ( v13 != a2 + 24 )
  {
    while ( (unsigned __int8)sub_6ED600(a1, *v10, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      if ( (__int64 *)v13 == ++v10 )
      {
        v12 = *(unsigned int *)(a2 + 16);
        v10 = (__int64 *)(a2 + v12 * 8 + 24);
        goto LABEL_7;
      }
    }
    return 0;
  }
LABEL_7:
  v17 = v10;
  v15 = &v10[v12];
  v16 = 0;
  v18 = 0;
LABEL_8:
  if ( v15 != v10 )
  {
LABEL_9:
    if ( (v16 & 3) != 0 )
      v10 = (__int64 *)sub_ECEDF0(&v17);
    while ( (unsigned __int8)sub_6ED600(a1, *v10, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    {
      v16 = v18;
      if ( (v18 & 3) != 0 )
      {
        if ( v18 <= 3 )
          sub_ECEA10(&v17, 1);
        else
          sub_ECEC20(&v17);
        v10 = v17;
        v16 = v18;
        goto LABEL_8;
      }
      v10 = v17 + 1;
      v17 = v10;
      if ( v15 == v10 )
        goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  if ( v16 )
    goto LABEL_9;
  return 1;
}

