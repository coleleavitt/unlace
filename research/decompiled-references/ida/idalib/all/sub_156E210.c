__int64 __fastcall sub_156E210(__int64 a1)
{
  __int16 v2; // ax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+Eh] [rbp-Ah] BYREF

  v2 = *(_WORD *)(a1 + 26);
  v3 = *(_QWORD *)(a1 + 16);
  LOWORD(v9) = v2;
  sub_1566E40(v3, &v9, 1, 2);
  return sub_14808E0(a1, &v9, v4, v5, v6, v7);
}
