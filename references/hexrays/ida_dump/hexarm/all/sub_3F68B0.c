__int64 __fastcall sub_3F68B0(__int64 a1, int a2, int a3, int a4)
{
  __int64 v4; // r12
  __int64 v5; // rcx
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // dl
  __int64 v9; // [rsp-10h] [rbp-28h]

  v4 = a4;
  v5 = a3;
  v6 = 7;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) != 8 )
    v6 = 2;
  sub_3F56D0(a1, 3u, v6, v5, 0x3BEA45E214ADDC55LL, v4, 0);
  v7 = 2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
    v7 = 7;
  sub_3F56D0(a1, 0xCu, v7, a2, v4, a2, 0);
  return v9;
}
