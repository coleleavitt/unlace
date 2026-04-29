unsigned __int64 __fastcall sub_33B1C0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v3; // r13
  int v4; // ecx
  int v5; // edx
  bool v6; // cf
  const char *v7; // rax
  const char *v8; // r12
  const char *v9; // rcx
  int v12; // [rsp+1Ch] [rbp-B4h]
  const char *v13; // [rsp+20h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+28h] [rbp-A8h]
  char v15[88]; // [rsp+40h] [rbp-90h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp-38h]

  v16 = __readfsqword(0x28u);
  if ( !qstrftime(v15, 80, "%d %b %Y") )
    qstrncpy(v15, "?", 80);
  v3 = "Support";
  if ( *(_DWORD *)(a1 + 76) )
    v3 = "License";
  v4 = *(unsigned __int8 *)(a1 + 85);
  v5 = *(unsigned __int8 *)(a1 + 84);
  v6 = *(_WORD *)(a1 + 62) < 2u;
  v7 = (const char *)&unk_4060D9;
  v13 = nullptr;
  if ( v6 )
    v7 = (const char *)&unk_405793;
  v14 = 0;
  v8 = v7;
  v12 = *(unsigned __int16 *)(a1 + 62);
  sub_67E30(
    (__int64 *)&v13,
    (__int64)"%02X-%02X%02X-%02X%02X-%02X",
    v5,
    v4,
    *(unsigned __int8 *)(a1 + 86),
    *(unsigned __int8 *)(a1 + 87),
    *(unsigned __int8 *)(a1 + 88),
    *(unsigned __int8 *)(a1 + 89));
  v9 = s1;
  if ( (_QWORD)v14 )
    v9 = v13;
  qsnprintf(
    a2,
    a3,
    "Copyright (c) 2007-2026 Hex-Rays <support@hex-rays.com>\nLicensed to: %s %s (%d user%s)\n%s expires at: %s",
    v9,
    (const char *)(a1 + 90),
    v12,
    v8,
    v3,
    v15);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v16 - __readfsqword(0x28u);
}
