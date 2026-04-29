__int64 __fastcall sub_1994E0(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r12
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // edx
  __int64 v9; // rax
  char v10[16]; // [rsp+0h] [rbp-50h] BYREF
  _QWORD v11[8]; // [rsp+10h] [rbp-40h] BYREF

  v11[3] = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 16) || !*(_QWORD *)(a1 + 8) || (v1 = *(_QWORD *)(a1 + 24)) == 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(51648);
LABEL_20:
    BUG();
  }
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 8) + 8LL) + 8LL);
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 && *(_BYTE *)v3 == 2 )
  {
    v9 = sub_325150(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL), *(unsigned int *)(v3 + 4), 1);
    v1 = *(_QWORD *)(a1 + 24);
    v2 += v9;
  }
  sub_11EE80((__int64)v10, (unsigned __int8 *)v1);
  v4 = *(_QWORD *)(a1 + 8) == 0;
  v11[1] = 0;
  v11[0] = 0xFFFFFFFF00000000LL;
  if ( v4 || !*(_QWORD *)(a1 + 24) )
  {
    if ( !under_debugger )
      sub_37CFE0(51647);
    goto LABEL_20;
  }
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 && *(_BYTE *)v5 == 2 && sub_325150(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL), *(unsigned int *)(v5 + 4), 1) )
    sub_1205C0((__int64)v11, *(unsigned __int8 **)(a1 + 32));
  sub_117E50((char *)(*(_QWORD *)(a1 + 16) + 32LL), v10);
  sub_117E50((char *)(*(_QWORD *)(a1 + 16) + 48LL), (char *)v11);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 12;
  if ( !*(_BYTE *)(v6 + 48) )
    v7 = 4;
  *(_DWORD *)v6 = v7;
  sub_1570B0(*(_QWORD *)(a1 + 16), *(_QWORD *)a1, 0, 0, 0, 0, 0);
  sub_1181E0((__int64)v11);
  sub_1181E0((__int64)v10);
  return v2;
}
