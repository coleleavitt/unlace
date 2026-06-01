__int64 __fastcall sub_F9920(__int64 a1)
{
  _DWORD *v1; // rbx
  _DWORD *v2; // rax
  int v3; // eax
  bool v4; // zf
  const char *v5; // rax
  __int64 v6; // r14
  __int64 entry; // r13
  __int64 v8; // rdi
  __int64 v10; // [rsp+0h] [rbp-F0h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+8h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-E0h]
  __int128 v13; // [rsp+18h] [rbp-D8h]
  __int64 v14; // [rsp+28h] [rbp-C8h]
  __int64 v15; // [rsp+30h] [rbp-C0h]
  int v16; // [rsp+38h] [rbp-B8h]
  const char *v17; // [rsp+40h] [rbp-B0h]
  _UNKNOWN **v18; // [rsp+48h] [rbp-A8h]
  int v19; // [rsp+50h] [rbp-A0h]
  _BYTE v20[72]; // [rsp+58h] [rbp-98h] BYREF
  _DWORD v21[2]; // [rsp+B8h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+C0h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v15 = a1;
  v16 = 3;
  v1 = v21;
  v14 = 0;
  v17 = nullptr;
  v19 = -1;
  v12 = 0x20003FF000004LL;
  v11 = (__int64 (__fastcall **)())&stru_236898;
  v18 = &off_2311D0;
  v2 = v20;
  v13 = -1;
  do
  {
    *(_QWORD *)v2 = 0;
    v2 += 6;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v21 != v2 );
  v21[0] = 0;
  if ( ((HIDWORD(v12) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v12) != 0xFF )
      goto LABEL_20;
    BYTE3(v12) = ((HIDWORD(v12) >> 19) & 0x3F) - 1;
    HIDWORD(v12) &= 0xFE07FFFF;
  }
  v11 = off_231058;
  v3 = *(_DWORD *)(get_eah() + 24);
  v19 = 135;
  v4 = v3 == 4;
  v21[1] = v3;
  v5 = " ";
  if ( v4 )
    v5 = (const char *)&unk_1D57B8;
  v17 = v5;
  if ( (v12 & 0x100000000LL) == 0 )
  {
    if ( under_debugger )
      goto LABEL_22;
    interr();
LABEL_20:
    if ( !under_debugger )
      interr();
LABEL_22:
    BUG();
  }
  v10 = xmmword_2528A0;
  v6 = sub_198E60(&v11, &v10);
  if ( v6 >= 0 && v6 < (unsigned __int64)get_entry_qty() )
  {
    get_entry_ordinal();
    entry = get_entry();
  }
  else
  {
    entry = -1;
  }
  v11 = (__int64 (__fastcall **)())&stru_236898;
  do
  {
    v8 = *((_QWORD *)v1 - 3);
    v1 -= 6;
    if ( v8 )
    {
      *((_QWORD *)v1 + 1) = 0;
      qfree();
    }
  }
  while ( v1 != (_DWORD *)v20 );
  return entry;
}

