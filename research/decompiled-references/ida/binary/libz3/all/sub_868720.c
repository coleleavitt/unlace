__int64 __fastcall sub_868720(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rdx
  bool v15; // r8
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // r14
  bool v19; // bl
  __int64 *v20; // r15
  __int64 v21; // r13
  int i; // r12d
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r9d
  unsigned int v26; // eax
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+10h] [rbp-48h]
  bool v31; // [rsp+1Fh] [rbp-39h]

  if ( (unsigned __int8)sub_15D2760(*(_QWORD *)(a1 + 8), a4, a5) )
    return 1;
  if ( (unsigned __int8)sub_15D27F0(*(_QWORD *)(a1 + 8), a4, a5) )
    return 0xFFFFFFFFLL;
  if ( *(_WORD *)(a4 + 4) )
    return 0;
  if ( *(_WORD *)(a5 + 4) )
    return 0;
  v12 = *(_QWORD *)(a4 + 16);
  if ( v12 != *(_QWORD *)(a5 + 16) )
    return 0;
  v13 = *(_DWORD *)(a4 + 24);
  if ( v13 != *(_DWORD *)(a5 + 24) )
    return 0;
  v14 = *(_QWORD *)(v12 + 24);
  v15 = 0;
  if ( v14 )
    v15 = (*(_BYTE *)(v14 + 17) & 0x40) != 0;
  v16 = *a6;
  if ( *a6 )
    v17 = *(_DWORD *)(v16 - 4);
  else
    v17 = 0;
  if ( !v13 )
    return 1;
  v18 = a4;
  v19 = v15;
  v30 = a3;
  v20 = a6;
  v21 = 8LL * (unsigned int)(v13 - 1);
  v31 = 0;
  v29 = a1;
  if ( !v16 )
    goto LABEL_22;
LABEL_15:
  for ( i = *(_DWORD *)(v16 - 4); ; i = 0 )
  {
    v23 = sub_867AF0(v29, a2, v30, *(unsigned int **)(v18 + v21 + 32), *(unsigned int **)(a5 + v21 + 32), v20);
    if ( v23 == -1 )
    {
      if ( !v19 )
        return 0;
      v24 = *v20;
      if ( *v20 )
      {
        v25 = *(_DWORD *)(v24 - 4);
        if ( v25 == i )
        {
LABEL_30:
          *(_DWORD *)(v24 - 4) = v17;
          return 0xFFFFFFFFLL;
        }
      }
      else
      {
        v25 = 0;
        if ( !i )
          return 0xFFFFFFFFLL;
      }
      v26 = 0;
      do
      {
        v27 = _mm_loadu_si128((const __m128i *)(v24 + 16LL * (i + v26)));
        v28 = v17 + v26++;
        *(__m128i *)(v24 + 16 * v28) = v27;
      }
      while ( v26 < v25 - i );
      if ( v24 )
      {
        v17 = v25 + v17 - i;
        goto LABEL_30;
      }
      return 0xFFFFFFFFLL;
    }
    if ( !v23 )
    {
      if ( !v19 )
        return 0;
      v31 = v19;
    }
    v21 -= 8;
    if ( v21 == -8 )
      break;
    v16 = *v20;
    if ( *v20 )
      goto LABEL_15;
LABEL_22:
    ;
  }
  if ( !v31 )
    return 1;
  if ( !*v20 )
    return 0;
  *(_DWORD *)(*v20 - 4) = v17;
  return 0;
}

