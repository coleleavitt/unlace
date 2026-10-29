__int64 __fastcall sub_366880(
        _QWORD *a1,
        __int64 *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  int v15; // r13d
  __int64 v16; // rax
  const char *v17; // rcx
  const char *v18; // rdx
  const char *v19; // rsi
  double v20; // xmm0_8
  __int64 v21; // rdx
  __int64 v22; // rax
  char v23; // al
  __int64 v24; // rbp
  __int64 v25; // r12
  unsigned __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v29; // rax
  const char *v30; // [rsp+10h] [rbp-78h] BYREF
  __int128 v31; // [rsp+18h] [rbp-70h]
  const char *v32; // [rsp+30h] [rbp-58h] BYREF
  __int128 v33; // [rsp+38h] [rbp-50h]
  unsigned __int64 v34; // [rsp+48h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  a2[1] = 0;
  if ( !a1[10] )
    return 0;
  v15 = 0;
  v16 = 0;
  do
  {
    while ( 1 )
    {
      v21 = a1[9];
      v20 = 0.0;
      v30 = nullptr;
      v31 = 0;
      v22 = *(int *)(v21 + 4 * v16);
      v33 = 0;
      v32 = nullptr;
      v23 = sub_34DD50(
              (__int64 *)&v30,
              (__int64 *)&v32,
              a1[6] + 24 * v22,
              a12,
              a13,
              a14,
              (__m128)0LL,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10);
      v24 = (__int64)v30;
      v25 = (__int64)v32;
      if ( v23 )
      {
        v17 = &s1;
        v18 = &s1;
        if ( (_QWORD)v31 )
          v17 = v30;
        if ( (_QWORD)v33 )
          v18 = v32;
        if ( (unsigned __int64)a2[1] <= 1 )
        {
          v19 = "ABI options\n<#%s###%s:C>";
          sub_169A50(a2, (__int64)"ABI options\n<#%s###%s:C>", v18, v17);
        }
        else
        {
          v19 = "\n<#%s#%s:C>";
          sub_16FAA0(a2, (__int64)"\n<#%s#%s:C>", v18, v17);
        }
        if ( v25 )
          v20 = qfree(v25, v19);
        if ( v24 )
          qfree(v24, v19, v20);
        goto LABEL_13;
      }
      if ( v32 )
        qfree(v32, (const char *)&v32);
      if ( v24 )
        break;
LABEL_13:
      v16 = ++v15;
      if ( (unsigned __int64)v15 >= a1[10] )
        goto LABEL_19;
    }
    ++v15;
    qfree(v24, (const char *)&v32);
    v16 = v15;
  }
  while ( (unsigned __int64)v15 < a1[10] );
LABEL_19:
  v26 = a2[1];
  if ( v26 <= 1 )
    return 0;
  v27 = *a2;
  if ( a2[2] < v26 + 1 )
  {
    v29 = qvector_reserve(a2, v27, v26 + 1, 1);
    *a2 = v29;
    v27 = v29;
  }
  a2[1] = v26 + 1;
  *(_BYTE *)(v27 + v26 - 1) = 62;
  *(_BYTE *)(*a2 + v26) = 0;
  return 1;
}
