void sub_445AE0()
{
  _QWORD *v0; // rbx
  void *v1; // rax
  void *v2; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rdi
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // edx
  char *v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 (__fastcall *v11)(int, int, int, int, int, int, int, __int64, __int64, __int64); // [rsp+8h] [rbp-40h]
  __int64 (__fastcall *v12)(int, int, int, int, int, int, int, __int64, __int64, __int64); // [rsp+10h] [rbp-38h]
  __int64 (__fastcall *v13)(); // [rsp+18h] [rbp-30h]
  _QWORD *v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]

  if ( !dword_65A530 )
  {
    sub_4AE1A0(&qword_65A598);
    sub_457B90(qword_65A540, 0);
    sub_4AE230(&qword_65A598);
    v13 = nullptr;
    v15 = 1;
    v11 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64, __int64, __int64))&sub_445E00;
    v12 = (__int64 (__fastcall *)(int, int, int, int, int, int, int, __int64, __int64, __int64))&sub_445E00;
    v10 = "identity";
    v14 = nullptr;
    qword_65A5A0 = sub_4444E0(&v10);
    qword_66BA40 = sub_445140(0, v10);
    qword_65A5A8 = sub_445140(0, v10);
    v13 = nullptr;
    v15 = 1;
    v10 = "utf-8";
    v11 = sub_446000;
    v14 = nullptr;
    v12 = sub_445FC0;
    sub_4444E0(&v10);
    v13 = nullptr;
    v15 = 2;
    v10 = "unicode";
    v11 = sub_446040;
    v14 = nullptr;
    v12 = sub_446130;
    sub_4444E0(&v10);
    v0 = (_QWORD *)sub_40FB00(280);
    memset(v0, 0, 0x118u);
    *(_DWORD *)v0 = 63;
    v1 = (void *)sub_40FB00(2560);
    v0[33] = v1;
    memset(v1, 0, 0xA00u);
    v2 = (void *)sub_40FB00(2560);
    v0[34] = v2;
    memset(v2, 0, 0xA00u);
    v3 = (__int64 *)v0[33];
    v4 = (__int64 *)v0[34];
    v5 = 1;
    *v3 = (__int64)(v3 + 256);
    *v4 = (__int64)(v4 + 256);
    do
    {
      v6 = (unsigned __int16)v5++;
      v3[v6] = (__int64)qword_65A5C0;
      v4[v6] = (__int64)qword_65A5C0;
    }
    while ( (unsigned __int16)v5 <= 0xFFu );
    v7 = *v3;
    v8 = *v4;
    v9 = 0;
    do
    {
      *(_WORD *)(v7 + 2LL * (unsigned __int16)v9) = v9;
      *(_WORD *)(v8 + 2LL * (unsigned __int16)v9) = v9;
      ++v9;
    }
    while ( (unsigned __int16)v9 <= 0xFFu );
    v14 = v0;
    v15 = 1;
    v10 = "iso8859-1";
    v11 = sub_446530;
    v12 = sub_446620;
    v13 = sub_446750;
    sub_4444E0(&v10);
    dword_65A530 = 1;
  }
}

