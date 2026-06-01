__int64 __fastcall sub_A376A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  int v8; // ebp
  int v9; // r13d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax

  if ( !a2 )
    BUG();
  v7 = *(unsigned int *)(a5 + 8);
  v8 = (*(_DWORD *)(a2 + 8) >> 1) & 0xFFFFFF;
  v9 = *(_BYTE *)(a2 + 8) & 1;
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_22134E0(a5, a5 + 16, v7 + 1, 4);
    v7 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v7) = v9;
  v10 = *(unsigned int *)(a5 + 12);
  v11 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    sub_22134E0(a5, a5 + 16, v11 + 1, 4);
    v11 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v11) = v8;
  ++*(_DWORD *)(a5 + 8);
  return sub_21FF190(a5, a3);
}

