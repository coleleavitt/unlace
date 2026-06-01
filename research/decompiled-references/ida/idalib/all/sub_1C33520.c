void __fastcall sub_1C33520(__int64 a1, unsigned int a2, char a3)
{
  int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  int v7; // [rsp+8h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 12) )
    sub_2206D90(&v6, a1, a2);
  else
    sub_2206DE0(&v6, a1, a2);
  v4 = v7;
  v5 = v6;
  if ( *(_DWORD *)(a1 + 8) > 0x40u && *(_QWORD *)a1 )
    operator delete[](*(void **)a1);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 8) = v4;
  *(_BYTE *)(a1 + 12) = a3 ^ 1;
}
