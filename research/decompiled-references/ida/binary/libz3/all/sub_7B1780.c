__int64 __fastcall sub_7B1780(_QWORD *a1, __m128i a2)
{
  unsigned int v2; // eax
  unsigned int **v3; // rbx
  unsigned int v4; // r12d
  unsigned int **v5; // r13
  unsigned int **v7; // rbx
  unsigned int **v8; // r13

  v2 = sub_7B0900(a1, *(double *)a2.m128i_i64);
  if ( !(_BYTE)v2 )
    return 0;
  v3 = (unsigned int **)a1[93];
  v4 = v2;
  if ( v3 )
  {
    v5 = &v3[*((unsigned int *)v3 - 1)];
    if ( v5 != v3 )
    {
      while ( (unsigned __int8)sub_7B0E50((__int64)a1, *v3, a2) )
      {
        if ( v5 == ++v3 )
          goto LABEL_9;
      }
      return 0;
    }
  }
LABEL_9:
  v7 = (unsigned int **)a1[94];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v8 != v7 )
    {
      while ( (unsigned __int8)sub_7B0E50((__int64)a1, *v7, a2) )
      {
        if ( v8 == ++v7 )
          return v4;
      }
      return 0;
    }
  }
  return v4;
}

