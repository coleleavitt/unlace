__int64 __fastcall sub_69F430(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // r12d
  unsigned __int64 v9; // rcx
  int v10; // ebp

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *a1;
  if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(v2 + 1) )
  {
    sub_25D6060(a2, a2 + 16, v2 + 1, 4);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v2) = v3;
  v4 = HIDWORD(v3);
  v5 = *(unsigned int *)(a2 + 12);
  v6 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = v6;
  if ( v5 < v6 + 1 )
  {
    sub_25D6060(a2, a2 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v6) = v4;
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  if ( (*a1 & 3) - 2 > 1 )
  {
    v8 = *((_DWORD *)a1 + 2);
    if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(result + 1) )
    {
      sub_25D6060(a2, a2 + 16, result + 1, 4);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v8;
    v9 = *(unsigned int *)(a2 + 12);
    result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = result;
    v10 = *((_DWORD *)a1 + 3);
    if ( v9 < result + 1 )
    {
      sub_25D6060(a2, a2 + 16, result + 1, 4);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v10;
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}

