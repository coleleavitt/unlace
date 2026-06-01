unsigned int *__fastcall sub_B0E2D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned int v10; // edx
  char v11; // cl
  __int64 v12; // r13
  unsigned int v13; // esi
  __int64 v14; // rdx
  unsigned int *result; // rax
  unsigned int v16[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 16);
  if ( v5 )
  {
    do
    {
      if ( v6 >= *(_DWORD *)(v5 - 4) )
        break;
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_DWORD *)(v5 + 4LL * v6);
      v9 = *(_QWORD *)(v7 + 8872) + 16LL * (v8 >> 1);
      v10 = *(_DWORD *)(v9 + 8) & 0xFFFFFF;
      if ( *(_DWORD *)(v7 + 9468) < v10 )
      {
        v11 = *(_BYTE *)(v9 + 11);
        if ( (v11 & 1) == 0 && v10 == *(_DWORD *)(a1 + 848) )
        {
          *(_BYTE *)(v9 + 11) = v11 | 1;
          ++*(_DWORD *)(a1 + 832);
        }
      }
      ++v6;
      sub_B0CFA0(a1, v8, a3);
      v5 = *(_QWORD *)(a2 + 8);
    }
    while ( v5 );
    v6 = *(_DWORD *)(a2 + 16);
  }
  v12 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v5 + 4 * v12++);
      sub_B0CFA0(a1, v13, a3);
      if ( (unsigned int)v12 >= *(_DWORD *)(a2 + 16) )
        break;
      v5 = *(_QWORD *)(a2 + 8);
    }
  }
  v14 = *(_QWORD *)(a1 + 16);
  result = (unsigned int *)(*(_DWORD *)(*(_QWORD *)(v14 + 8872) + 16LL * (*(_DWORD *)a2 >> 1) + 8) & 0xFFFFFF);
  if ( *(_DWORD *)(v14 + 9468) < (unsigned int)result )
  {
    v16[0] = *(_DWORD *)a2;
    return sub_B0E290((unsigned int **)(a1 + 880), v16);
  }
  return result;
}

