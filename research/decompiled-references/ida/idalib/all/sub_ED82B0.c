__m128 *__fastcall sub_ED82B0(__m128 *a1, __int64 a2, __int64 a3)
{
  __int8 v4; // di
  _QWORD *v5; // rcx
  __int64 v6; // r9
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  __int8 v11; // dl
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  double v15[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(_BYTE *)(a2 + 20);
  if ( !v4 )
    goto LABEL_10;
  v5 = *(_QWORD **)a2;
  v6 = *(unsigned int *)(a2 + 12);
  v7 = (_QWORD *)(*(_QWORD *)a2 + 8 * v6);
  if ( *(_QWORD **)a2 != v7 )
  {
    v8 = *(_QWORD **)a2;
    if ( a3 == *v5 )
    {
LABEL_18:
      v4 = 0;
      v10 = &v5[*(unsigned int *)(a2 + 12)];
      goto LABEL_12;
    }
    while ( v7 != ++v8 )
    {
      if ( a3 == *v8 )
        goto LABEL_18;
    }
  }
  if ( (unsigned int)v6 < *(_DWORD *)(a2 + 8) )
  {
    *(_DWORD *)(a2 + 12) = v6 + 1;
    *v7 = a3;
    v9 = *(_QWORD **)a2;
    v8 = (_QWORD *)(*(_QWORD *)a2 + 8 * v6);
  }
  else
  {
LABEL_10:
    v8 = (_QWORD *)sub_2236760(a2, a3);
    v9 = *(_QWORD **)a2;
    v4 = v11;
    if ( !*(_BYTE *)(a2 + 20) )
    {
      v10 = &v9[*(unsigned int *)(a2 + 8)];
      goto LABEL_12;
    }
  }
  v10 = &v9[*(unsigned int *)(a2 + 12)];
LABEL_12:
  if ( v10 != v8 && *v8 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v12 = v8 + 1;
    do
    {
      v13 = v12;
      if ( v10 == v12 )
        break;
      ++v12;
    }
    while ( *v13 >= 0xFFFFFFFFFFFFFFFELL );
  }
  *(_QWORD *)&v15[0] = v10;
  a1[1].m128_i8[0] = v4;
  *a1 = _mm_loadh_ps(v15);
  return a1;
}
