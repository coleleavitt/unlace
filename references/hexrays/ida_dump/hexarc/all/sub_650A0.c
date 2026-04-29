__int64 __fastcall sub_650A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v8; // r12d
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  _BYTE v10[8]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]
  char v12; // [rsp+21h] [rbp-27h]
  char v13; // [rsp+22h] [rbp-26h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 56);
  v14 = __readfsqword(0x28u);
  if ( !(unsigned __int8)xrefblk_t_first_from(v10, *(_QWORD *)(v1 + 24), 1) )
    return 0;
  if ( !v13 )
    return 0;
  if ( v12 != 19 )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = sub_329920(v3, v11);
  v5 = sub_32B2E0(v3 + 8, v4);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL);
  do
  {
    v6 = *(_QWORD *)(v6 + 8);
    if ( !v6 )
      return 0;
  }
  while ( v11 < *(_QWORD *)(v6 + 32) || v11 >= *(_QWORD *)(v6 + 40) );
  if ( (*(_BYTE *)(v6 + 26) & 1) == 0 )
  {
    if ( !under_debugger )
      sub_37B760(52542);
LABEL_17:
    BUG();
  }
  if ( v11 != *(_QWORD *)(v6 + 32) )
  {
    if ( !under_debugger )
      sub_37B760(52543);
    goto LABEL_17;
  }
  v9 = v5;
  **(_DWORD **)(a1 + 56) = 55;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_DWORD *)(v6 + 72);
  sub_1166E0(v7 + 32);
  *(_BYTE *)(v7 + 32) = 7;
  *(_DWORD *)(v7 + 40) = v8;
  sub_1166E0(*(_QWORD *)(a1 + 56) + 48LL);
  sub_1166E0(*(_QWORD *)(a1 + 56) + 64LL);
  return v9;
}
