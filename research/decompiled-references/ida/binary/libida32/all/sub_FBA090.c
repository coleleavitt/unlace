__int64 __fastcall sub_FBA090(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  int v8; // r15d
  __int64 v9; // rax
  unsigned __int64 *v10; // r14
  __int64 v11; // r12
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rcx
  __int64 v15; // rax

  if ( !a2 )
    BUG();
  v7 = *(unsigned int *)(a5 + 8);
  v8 = *(_DWORD *)(a2 - 8);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_22134E0(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v8 - 3;
  v9 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v9;
  if ( v8 != 3 )
  {
    v10 = (unsigned __int64 *)(a2 + 8);
    v11 = a2 + 8LL * (unsigned int)(v8 - 4) + 16;
    do
    {
      v12 = *v10;
      if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
      {
        sub_22134E0(a5, a5 + 16, v9 + 1, 4);
        v9 = *(unsigned int *)(a5 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v9) = v12;
      v13 = HIDWORD(v12);
      v14 = *(unsigned int *)(a5 + 12);
      v15 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
      *(_DWORD *)(a5 + 8) = v15;
      if ( v15 + 1 > v14 )
      {
        sub_22134E0(a5, a5 + 16, v15 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a5 + 4LL * *(unsigned int *)(a5 + 8)) = v13;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a5 + 4 * v15) = v13;
      }
      ++v10;
      v9 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
      *(_DWORD *)(a5 + 8) = v9;
    }
    while ( v10 != (unsigned __int64 *)v11 );
  }
  return sub_21FF190(a5, a3);
}

