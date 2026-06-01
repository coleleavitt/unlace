__int64 __fastcall sub_A2B7F0(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // ebp
  unsigned __int64 v10; // rcx
  int v11; // ebp

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *a1;
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_22134E0(a2, a2 + 16, v2 + 1, 4);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v2) = v3;
  v4 = HIDWORD(v3);
  v5 = *(unsigned int *)(a2 + 12);
  v6 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v6;
  if ( v6 + 1 > v5 )
  {
    sub_22134E0(a2, a2 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v6) = v4;
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  v8 = *a1 & 3;
  if ( v8 != 3 && v8 != 2 )
  {
    v9 = *((_DWORD *)a1 + 2);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_22134E0(a2, a2 + 16, result + 1, 4);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v9;
    v10 = *(unsigned int *)(a2 + 12);
    result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = result;
    v11 = *((_DWORD *)a1 + 3);
    if ( result + 1 > v10 )
    {
      sub_22134E0(a2, a2 + 16, result + 1, 4);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v11;
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}

