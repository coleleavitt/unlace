__int64 __fastcall sub_21D0C90(__int64 a1, unsigned __int8 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *(unsigned int *)(a1 + 8);
  v7 = *(unsigned int *)(a1 + 12);
  v11[0] = a1;
  if ( v6 + 1 > v7 )
  {
    sub_2237220(a1, a1 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v6) = a2;
  v8 = *(unsigned int *)(a1 + 12);
  v9 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
  *(_DWORD *)(a1 + 8) = v9;
  if ( v9 + 1 > v8 )
  {
    sub_2237220(a1, a1 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(a1 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a1 + 4 * v9) = 0;
  ++*(_DWORD *)(a1 + 8);
  return sub_21D0B50(v11, a3, a4);
}
