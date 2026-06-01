__int64 __fastcall sub_3DFE50(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  __int64 v11; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+20h] [rbp-B8h]
  __int128 v13; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v14; // [rsp+98h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v13 = 0;
  v12 = 0;
  v11 = 0;
  qstpncpy();
  v4 = parse_decl();
  if ( !(_BYTE)v4 )
    goto LABEL_8;
  if ( *(_DWORD *)a1 != 56 )
  {
    if ( !under_debugger )
      sub_37EA20(51415);
LABEL_17:
    BUG();
  }
  sub_11B060(a1 + 32);
  qstrncpy();
  if ( !(unsigned __int8)parse_decl() )
  {
    if ( !under_debugger )
      sub_37EA20(50954);
    goto LABEL_17;
  }
  v5 = *(_QWORD *)(a1 + 72);
  v4 = sub_331D80(v5, &v11);
  if ( !(_BYTE)v4 )
  {
    if ( !under_debugger )
      sub_37EA20(50951);
    goto LABEL_17;
  }
  v6 = *(_DWORD *)(v5 + 280);
  v7 = v6 | 0x20;
  v8 = v6 | 0x30;
  if ( a4 )
    v7 = v8;
  *(_DWORD *)(v5 + 280) = v7;
LABEL_8:
  clear_tinfo_t();
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  return v4;
}
