__int64 __fastcall sub_2205760(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebp
  __int64 result; // rax
  unsigned int v5; // edx
  __int64 v6; // r13
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rcx

  v2 = *(unsigned int *)(a2 + 8);
  v3 = *((_DWORD *)a1 + 2);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, a2 + 16, v2 + 1, 4);
    v2 = *(unsigned int *)(a2 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a2 + 4 * v2) = v3;
  result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  *(_DWORD *)(a2 + 8) = result;
  v5 = *((_DWORD *)a1 + 2);
  if ( v5 <= 0x40 )
  {
    v12 = *a1;
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_2237220(a2, a2 + 16, result + 1, 4);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v12;
    v13 = HIDWORD(v12);
    v14 = *(unsigned int *)(a2 + 12);
    result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = result;
    if ( result + 1 > v14 )
    {
      sub_2237220(a2, a2 + 16, result + 1, 4);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v13;
    ++*(_DWORD *)(a2 + 8);
  }
  else
  {
    v6 = 0;
    v7 = ((unsigned __int64)v5 + 63) >> 6;
    do
    {
      v8 = *(_QWORD *)(*a1 + 8 * v6);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
      {
        sub_2237220(a2, a2 + 16, result + 1, 4);
        result = *(unsigned int *)(a2 + 8);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v8;
      v9 = HIDWORD(v8);
      v10 = *(unsigned int *)(a2 + 12);
      v11 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = v11;
      if ( v11 + 1 > v10 )
      {
        sub_2237220(a2, a2 + 16, v11 + 1, 4);
        *(_DWORD *)(*(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) = v9;
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v11) = v9;
      }
      ++v6;
      result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      *(_DWORD *)(a2 + 8) = result;
    }
    while ( (unsigned int)v7 > (unsigned int)v6 );
  }
  return result;
}
