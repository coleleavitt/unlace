__int64 __fastcall sub_A5BBA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int v9; // r14d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  if ( !a2 )
    BUG();
  v5 = *(unsigned int *)(a5 + 8);
  v6 = *(_QWORD *)(a2 - 8);
  v9 = v6;
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_2237220(a5, a5 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(a5 + 8);
  }
  v10 = HIDWORD(v6);
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v5) = v9;
  v11 = *(unsigned int *)(a5 + 12);
  v12 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  *(_DWORD *)(a5 + 8) = v12;
  if ( v12 + 1 > v11 )
  {
    sub_2237220(a5, a5 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v12) = v10;
  ++*(_DWORD *)(a5 + 8);
  sub_A4FF00((unsigned int *)(a2 + 8), a5);
  return sub_2222ED0(a5, a3);
}
