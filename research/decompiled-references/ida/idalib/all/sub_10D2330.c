__int64 __fastcall sub_10D2330(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  unsigned __int64 v14; // rcx

  v8 = *(unsigned int *)(a1 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = a2;
  v9 = *(unsigned int *)(a1 + 48);
  v10 = *(unsigned int *)(a1 + 52);
  ++*(_DWORD *)(a1 + 8);
  if ( v9 + 1 > v10 )
  {
    sub_2237220(a1 + 40, a1 + 56, v9 + 1, 8);
    v9 = *(unsigned int *)(a1 + 48);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v9) = a3;
  v11 = *(unsigned int *)(a1 + 88);
  v12 = *(unsigned int *)(a1 + 92);
  ++*(_DWORD *)(a1 + 48);
  if ( v11 + 1 > v12 )
  {
    sub_2237220(a1 + 80, a1 + 96, v11 + 1, 8);
    v11 = *(unsigned int *)(a1 + 88);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * v11) = a4;
  result = *(unsigned int *)(a1 + 128);
  v14 = *(unsigned int *)(a1 + 132);
  ++*(_DWORD *)(a1 + 88);
  if ( result + 1 > v14 )
  {
    sub_2237220(a1 + 120, a1 + 136, result + 1, 4);
    result = *(unsigned int *)(a1 + 128);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * result) = a5;
  ++*(_DWORD *)(a1 + 128);
  return result;
}
