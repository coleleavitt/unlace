__int64 __fastcall sub_7D3A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdi

  v9 = a2;
  v10 = *(unsigned int *)(a1 + 8);
  if ( *(unsigned int *)(a1 + 12) < (unsigned __int64)(v10 + 1) )
  {
    sub_25D6060(a1, a1 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v10) = a3;
  v11 = *(unsigned int *)(a1 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v12;
  if ( v11 < v12 + 1 )
  {
    sub_25D6060(a1, a1 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v12) = HIDWORD(a3);
  v13 = a2 + 24 * a3;
  ++*(_DWORD *)(a1 + 8);
  if ( a2 != v13 )
  {
    do
    {
      v14 = v9;
      v9 += 24;
      sub_AFDA60(v14, a1, a5);
    }
    while ( v13 != v9 );
  }
  return sub_7D1F00(a4, a1, a5);
}

