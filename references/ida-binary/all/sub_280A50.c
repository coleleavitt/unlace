__int64 __fastcall sub_280A50(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // rax
  double v4; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // zf
  const char *v10; // rax
  __int64 v11; // r14
  __int64 entry; // r13
  __int64 v13; // rdi
  __int64 entry_ordinal; // rax
  __int64 v16; // [rsp+0h] [rbp-F0h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+8h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+10h] [rbp-E0h]
  __int128 v19; // [rsp+18h] [rbp-D8h]
  __int64 v20; // [rsp+28h] [rbp-C8h]
  __int64 v21; // [rsp+30h] [rbp-C0h]
  int v22; // [rsp+38h] [rbp-B8h]
  const char *v23; // [rsp+40h] [rbp-B0h]
  _UNKNOWN **v24; // [rsp+48h] [rbp-A8h]
  int v25; // [rsp+50h] [rbp-A0h]
  _BYTE v26[72]; // [rsp+58h] [rbp-98h] BYREF
  _DWORD v27[2]; // [rsp+B8h] [rbp-38h] BYREF
  unsigned __int64 v28; // [rsp+C0h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v21 = a1;
  v22 = 3;
  v2 = v27;
  v20 = 0;
  v23 = nullptr;
  v25 = -1;
  v18 = 0x20003FF000004LL;
  v17 = (__int64 (__fastcall **)())&stru_86F6A0;
  v24 = &off_860910;
  v3 = v26;
  v19 = -1;
  v4 = 0.0;
  do
  {
    *(_QWORD *)v3 = 0;
    v3 += 6;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v27 != v3 );
  v27[0] = 0;
  v5 = HIDWORD(v18);
  v6 = ((HIDWORD(v18) >> 19) & 0x3F) - 1;
  if ( ((HIDWORD(v18) >> 19) & 0x3F) != 0 )
  {
    if ( BYTE3(v18) != 0xFF )
      goto LABEL_20;
    v5 = HIDWORD(v18) & 0xFE07FFFF;
    BYTE3(v18) = ((HIDWORD(v18) >> 19) & 0x3F) - 1;
    HIDWORD(v18) &= 0xFE07FFFF;
  }
  v17 = exp_chooser_t___vtable;
  v7 = *(_DWORD *)(get_eah(a1, a2, v5) + 24);
  v25 = 135;
  v9 = v7 == 4;
  v27[1] = v7;
  v10 = " ";
  if ( v9 )
    v10 = (const char *)&unk_5E5318;
  v23 = v10;
  if ( (v18 & 0x100000000LL) == 0 )
  {
    if ( under_debugger )
      goto LABEL_22;
    interr(40536, a2, &unk_5E5318, v8, 0.0);
LABEL_20:
    if ( !under_debugger )
      interr(3449, a2, v5, v6, 0.0);
LABEL_22:
    BUG();
  }
  v16 = xmmword_8CC810;
  v11 = sub_4AED50(&v17, &v16, &unk_5E5318, v8);
  if ( v11 >= 0 && v11 < (unsigned __int64)get_entry_qty(0.0) )
  {
    entry_ordinal = get_entry_ordinal(v11);
    entry = get_entry(entry_ordinal);
  }
  else
  {
    entry = -1;
  }
  v17 = (__int64 (__fastcall **)())&stru_86F6A0;
  do
  {
    v13 = *((_QWORD *)v2 - 3);
    v2 -= 6;
    if ( v13 )
    {
      *((_QWORD *)v2 + 1) = 0;
      v4 = qfree(v13, (const char *)&v16, v4);
    }
  }
  while ( v2 != (_DWORD *)v26 );
  return entry;
}
