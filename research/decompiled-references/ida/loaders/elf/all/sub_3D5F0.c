__int64 __fastcall sub_3D5F0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 76) )
    goto LABEL_2;
  v5 = *(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 64);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 < v5 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 56) < v5 )
    {
      v9 = qvector_reserve(a1 + 40, v8, v5, 16);
      v6 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 40) = v9;
      v8 = v9;
    }
    memset((void *)(v8 + 16 * v6), 0, 16 * (v5 - v6));
    *(_QWORD *)(a1 + 48) = v5;
  }
  else if ( v5 != v6 )
  {
    *(_QWORD *)(a1 + 48) = v5;
  }
  *(_DWORD *)(a1 + 72) = 0;
  v7 = sub_3D400((_QWORD *)a1, v5);
  *(_DWORD *)(a1 + 76) = v7;
  if ( !v7 )
    return 0;
  *(_QWORD *)(a1 + 64) += v7;
  v3 = *(unsigned int *)(a1 + 72);
  if ( (unsigned int)v3 < v7 )
  {
LABEL_2:
    *a2 = *(_QWORD *)(a1 + 40) + 16 * v3;
    ++*(_DWORD *)(a1 + 72);
    return 1;
  }
  return 0;
}

