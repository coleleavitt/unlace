__int64 __fastcall sub_D9B680(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  _BYTE v9[48]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v10[3]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  unsigned int v13; // [rsp+58h] [rbp-30h]

  sub_DFDA20(a1, 48);
  sub_DFF520(v9);
  sub_DFDA50(a1, 48);
  sub_DFCD50(v10, a2, a3);
  if ( v11 )
  {
    v6 = v10[0];
    v4 = v12;
LABEL_9:
    v7 = v4 + v6 + 40;
    goto LABEL_10;
  }
  v4 = v12;
  v5 = *(_QWORD *)(v12 + 32);
  if ( *(_DWORD *)(v5 + 24) != v13 && v13 )
    v5 = *(_QWORD *)(v12 + v13 + 32);
  v6 = v10[0];
  if ( !*(_BYTE *)(v5 + 60) )
    goto LABEL_9;
  v7 = v12 + v10[0] + 72;
  if ( v10[0] != v13 )
    goto LABEL_9;
LABEL_10:
  sub_DFF5C0(v7, v9);
  sub_DFF560(v10);
  sub_DFF560(v9);
  return 1;
}

