__int64 __fastcall sub_145D490(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  int *v3; // rbp
  int *v4; // r12
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r14d
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r14d

  v2 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  v3 = *(int **)(a2 + 3160);
  *(_QWORD *)(a1 + 8) = 0x4000000000LL;
  v4 = &v3[2 * *(unsigned int *)(a2 + 3168)];
  if ( v3 != v4 )
  {
    v5 = 64;
    v6 = 0;
    while ( 1 )
    {
      v7 = *v3;
      if ( v6 + 1 > v5 )
      {
        sub_2237220(a1, v2, v6 + 1, 4);
        v6 = *(unsigned int *)(a1 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = v7;
      v8 = *(unsigned int *)(a1 + 12);
      v9 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v9;
      v10 = v3[1];
      if ( v9 + 1 > v8 )
      {
        sub_2237220(a1, v2, v9 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a1 + 4LL * *(unsigned int *)(a1 + 8)) = v10;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a1 + 4 * v9) = v10;
      }
      v3 += 2;
      v6 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
      *(_DWORD *)(a1 + 8) = v6;
      if ( v4 == v3 )
        break;
      v5 = *(unsigned int *)(a1 + 12);
    }
  }
  return a1;
}
