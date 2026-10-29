unsigned __int64 __fastcall sub_E90530(__int64 *a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  int v5; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  __m128 v9; // [rsp+8h] [rbp-18h] BYREF

  v1 = *a1;
  if ( !*a1 )
    return 0;
  v2 = *(_QWORD *)(v1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v2 )
  {
    LODWORD(v3) = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(v2 + 8);
      if ( !*(_QWORD *)(v2 + 16) )
        break;
      v5 = 8;
      if ( ((unsigned int)(v4 >> 1) & 3) <= 1 )
      {
LABEL_4:
        v3 = (unsigned int)(v5 + v3);
        v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_9;
      }
      else
      {
        if ( ((v4 >> 1) & 3) != 2 )
          return sub_E90670(a1);
        v3 = (unsigned int)(v3 + 12);
        v2 = v4 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v4 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_9;
      }
    }
    v5 = 4;
    goto LABEL_4;
  }
  v3 = 0;
LABEL_9:
  if ( !*(_QWORD *)(v1 + 16) )
    return ((unsigned __int64)*(unsigned int *)(a1[1] + v3) << 32) | *(unsigned int *)(a1[1] + v3);
  if ( ((unsigned int)(*(__int64 *)(v1 + 8) >> 1) & 3) <= 1 )
    return ((unsigned __int64)*(unsigned int *)(a1[1] + (unsigned int)(v3 + 4)) << 32) | *(unsigned int *)(a1[1] + v3);
  if ( ((*(__int64 *)(v1 + 8) >> 1) & 3) != 2 )
    return sub_E90670(a1);
  v7 = a1[1];
  v9 = _mm_loadh_ps((const double *)(v7 + (unsigned int)v3));
  v8 = *(unsigned int *)(v7 + (unsigned int)(v3 + 8));
  return (v8 << 32) | (unsigned int)sub_F6CCB0(&v9);
}
