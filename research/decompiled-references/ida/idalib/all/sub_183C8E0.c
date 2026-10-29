__int64 __fastcall sub_183C8E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-58h]
  int v10; // [rsp+8h] [rbp-50h]
  int v12; // [rsp+28h] [rbp-30h]

  WORD2(v9) = 0;
  v12 = 0;
  LODWORD(v9) = 13;
  v10 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3) >> 32;
  sub_1DBA9B0(a1, a2, v3, v4, v5, v6, v9, v10, a3, 0, 0, v12, 0, 0);
  v7 = sub_1E48630(a1, a2, a3);
  if ( v7 )
    *(_BYTE *)(v7 + 29) |= 2u;
  return sub_1DBAAE0(a1, a2);
}
