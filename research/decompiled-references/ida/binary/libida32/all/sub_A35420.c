__int64 __fastcall sub_A35420(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 result; // rax

  if ( !a2 )
  {
    sub_F39EB0(0);
    BUG();
  }
  v4 = sub_F39EB0(a2 - 24);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = v4;
  v7 = *((unsigned int *)a3 + 2);
  if ( v7 + 1 > (unsigned __int64)*((unsigned int *)a3 + 3) )
  {
    sub_22134E0(a3, a3 + 2, v7 + 1, 4);
    v7 = *((unsigned int *)a3 + 2);
  }
  *(_DWORD *)(*a3 + 4 * v7) = v5;
  v8 = HIDWORD(v5);
  v9 = (unsigned int)(*((_DWORD *)a3 + 2) + 1);
  v10 = *((unsigned int *)a3 + 3);
  *((_DWORD *)a3 + 2) = v9;
  if ( v9 + 1 > v10 )
  {
    sub_22134E0(a3, a3 + 2, v9 + 1, 4);
    v9 = *((unsigned int *)a3 + 2);
  }
  *(_DWORD *)(*a3 + 4 * v9) = v8;
  v11 = (unsigned int)(*((_DWORD *)a3 + 2) + 1);
  v12 = *((unsigned int *)a3 + 3);
  *((_DWORD *)a3 + 2) = v11;
  if ( v11 + 1 > v12 )
  {
    sub_22134E0(a3, a3 + 2, v11 + 1, 4);
    v11 = *((unsigned int *)a3 + 2);
  }
  *(_DWORD *)(*a3 + 4 * v11) = v6;
  v13 = HIDWORD(v6);
  v14 = (unsigned int)(*((_DWORD *)a3 + 2) + 1);
  v15 = *((unsigned int *)a3 + 3);
  *((_DWORD *)a3 + 2) = v14;
  if ( v14 + 1 > v15 )
  {
    sub_22134E0(a3, a3 + 2, v14 + 1, 4);
    v14 = *((unsigned int *)a3 + 2);
  }
  result = *a3;
  *(_DWORD *)(*a3 + 4 * v14) = v13;
  ++*((_DWORD *)a3 + 2);
  return result;
}

