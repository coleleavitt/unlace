__int64 __fastcall sub_A6A3A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // r14
  __int64 v6; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned __int64 v13; // rax

  if ( !a2 )
    BUG();
  v5 = 0;
  v6 = 0;
  if ( (*(_BYTE *)(a2 - 6) & 8) != 0 )
  {
    v6 = sub_F5DAC0(a2 - 24);
    v5 = v6 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v9 = *(unsigned int *)(a5 + 8);
  v10 = *(_QWORD *)(a2 + 8);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a5 + 12) )
  {
    sub_2237220(a5, a5 + 16, v9 + 1, 4);
    v9 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v9) = v10;
  v11 = HIDWORD(v10);
  v12 = (unsigned int)(*(_DWORD *)(a5 + 8) + 1);
  v13 = *(unsigned int *)(a5 + 12);
  *(_DWORD *)(a5 + 8) = v12;
  if ( v12 + 1 > v13 )
  {
    sub_2237220(a5, a5 + 16, v12 + 1, 4);
    v12 = *(unsigned int *)(a5 + 8);
  }
  *(_DWORD *)(*(_QWORD *)a5 + 4 * v12) = v11;
  ++*(_DWORD *)(a5 + 8);
  if ( v5 )
  {
    sub_9B7040(a5, v6);
    sub_9B7040(a5, SHIDWORD(v6));
  }
  return sub_2222ED0(a5, a3);
}
