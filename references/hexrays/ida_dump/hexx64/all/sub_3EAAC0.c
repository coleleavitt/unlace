__int64 __fastcall sub_3EAAC0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  __int64 v12; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v14; // [rsp+28h] [rbp-B0h]
  _BYTE v15[88]; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v14 = 0;
  v13 = 0;
  v12 = 0;
  v4 = qstpncpy(v15, a3, 80);
  v5 = parse_decl(&v12, &v13, 0, v15, 1);
  if ( !(_BYTE)v5 )
    goto LABEL_8;
  if ( *(_DWORD *)a1 != 56 )
  {
    if ( !under_debugger )
      sub_383060(0xC8D7u, (__int64)&v13, 0.0);
LABEL_17:
    BUG();
  }
  sub_11D4A0(a1 + 32, a2);
  qstrncpy(v4 - 1, " __fastcall f();", &v15[-v4 + 81]);
  if ( !(unsigned __int8)parse_decl(&v12, &v13, 0, v15, 1) )
  {
    if ( !under_debugger )
      sub_383060(0xC70Au, (__int64)&v13, 0.0);
    goto LABEL_17;
  }
  v6 = *(_QWORD *)(a1 + 72);
  v5 = sub_335200(v6, &v12);
  if ( !(_BYTE)v5 )
  {
    if ( !under_debugger )
      sub_383060(0xC707u, (__int64)&v12, 0.0);
    goto LABEL_17;
  }
  v7 = *(_DWORD *)(v6 + 280);
  v8 = v7 | 0x20;
  v9 = v7 | 0x30;
  if ( a4 )
    v8 = v9;
  *(_DWORD *)(v6 + 280) = v8;
LABEL_8:
  clear_tinfo_t(&v12);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v5;
}
