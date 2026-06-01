__int64 __fastcall sub_F9730(__int64 a1)
{
  _DWORD *v1; // rbx
  _DWORD *v2; // rax
  int v3; // eax
  bool v4; // zf
  const char *v5; // rax
  __int64 v6; // r14
  unsigned int entry; // r13d
  __int64 v8; // rdi
  int v10; // [rsp+0h] [rbp-ECh] BYREF
  __int64 (__fastcall **v11)(); // [rsp+4h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+Ch] [rbp-E0h]
  __int128 v13; // [rsp+14h] [rbp-D8h]
  __int64 v14; // [rsp+24h] [rbp-C8h]
  __int64 v15; // [rsp+2Ch] [rbp-C0h]
  int v16; // [rsp+34h] [rbp-B8h]
  const char *v17; // [rsp+3Ch] [rbp-B0h]
  _UNKNOWN **v18; // [rsp+44h] [rbp-A8h]
  int v19; // [rsp+4Ch] [rbp-A0h]
  _BYTE v20[72]; // [rsp+54h] [rbp-98h] BYREF
  _DWORD v21[2]; // [rsp+B4h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+BCh] [rbp-30h]

  v22 = __readfsqword(0x28u);
  v15 = a1;
  v16 = 3;
  v1 = v21;
  v14 = 0;
  v17 = nullptr;
  v19 = -1;
  v12 = 0x20003FF000004LL;
  v11 = (__int64 (__fastcall **)())&stru_235898;
  v18 = &off_230190;
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
  v11 = off_230018;
  v3 = *(_DWORD *)(get_eah() + 8);
  v19 = 135;
  v4 = v3 == 4;
  v21[1] = v3;
  v5 = " ";
  if ( v4 )
    v5 = (const char *)&unk_1D47B8;
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
  v10 = qword_251700;
  v6 = sub_198260(&v11, &v10);
  if ( v6 >= 0 && v6 < (unsigned __int64)get_entry_qty() )
  {
    get_entry_ordinal();
    entry = get_entry();
  }
  else
  {
    entry = -1;
  }
  v11 = (__int64 (__fastcall **)())&stru_235898;
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

