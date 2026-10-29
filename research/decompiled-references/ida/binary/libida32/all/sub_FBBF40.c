unsigned __int64 __fastcall sub_FBBF40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  unsigned __int64 *v7; // r13
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  if ( !a2 )
    BUG();
  v4 = *(unsigned int *)(a3 + 8);
  v5 = *(_DWORD *)(a2 - 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_22134E0(a3, a3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(a3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a3 + 4 * v4) = v5 - 3;
  v6 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
  *(_DWORD *)(a3 + 8) = v6;
  if ( v5 != 3 )
  {
    v7 = (unsigned __int64 *)(a2 + 8);
    v8 = a2 + 8LL * (unsigned int)(v5 - 4) + 16;
    do
    {
      v9 = *v7;
      if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_22134E0(a3, a3 + 16, v6 + 1, 4);
        v6 = *(unsigned int *)(a3 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a3 + 4 * v6) = v9;
      v10 = HIDWORD(v9);
      v11 = *(unsigned int *)(a3 + 12);
      v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = v12;
      if ( v12 + 1 > v11 )
      {
        sub_22134E0(a3, a3 + 16, v12 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8)) = v10;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a3 + 4 * v12) = v10;
      }
      ++v7;
      v6 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = v6;
    }
    while ( v7 != (unsigned __int64 *)v8 );
  }
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4 * v6);
}

