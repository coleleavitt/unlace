__int64 __fastcall sub_9A2380(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  int v5; // r8d
  unsigned int *v6; // rdx
  unsigned int *i; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx

  v3 = a1[93];
  v5 = 1;
  if ( !*(_QWORD *)(v3 + 8LL * a2) )
    v5 = *(_QWORD *)(a1[94] + 8LL * a2) != 0;
  v6 = *(unsigned int **)(a1[89] + 16LL * a2);
  if ( v6 )
  {
    for ( i = &v6[2 * *(v6 - 1)]; i != v6; v6 += 2 )
    {
      v8 = *v6;
      if ( (_DWORD)v8 != -1 )
      {
        v9 = *(unsigned int *)(a1[87] + 24 * v8 + 12);
        if ( (_DWORD)v9 != -1 && ((*(_BYTE *)(a1[90] + 4 * v9 + 3) >> 4) & 3) == 1 )
        {
          v10 = 1;
          if ( !*(_QWORD *)(v3 + 8 * v9) )
            v10 = *(_QWORD *)(a1[94] + 8 * v9) != 0;
          v5 += v10;
          if ( a3 < v5 )
            break;
        }
      }
    }
  }
  return (unsigned int)v5;
}

