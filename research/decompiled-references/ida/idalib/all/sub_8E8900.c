char *__fastcall sub_8E8900(char *a1, __int64 a2, unsigned int a3)
{
  char *v4; // rax
  __int64 v5; // r14
  char *v6; // rbx
  bool (__fastcall *v7)(__int64, char **, __int64); // r8
  void (__fastcall *v8)(char *); // rax
  char *v10; // rdi
  char *v11; // [rsp+8h] [rbp-D0h] BYREF
  char *v12; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v13; // [rsp+18h] [rbp-C0h]
  __int64 v14; // [rsp+28h] [rbp-B0h]
  __int128 v15; // [rsp+30h] [rbp-A8h]
  __int64 v16; // [rsp+40h] [rbp-98h]
  __int128 v17; // [rsp+48h] [rbp-90h]
  __int64 v18; // [rsp+58h] [rbp-80h]
  __int128 v19; // [rsp+60h] [rbp-78h]
  __int64 v20; // [rsp+70h] [rbp-68h]
  __int128 v21; // [rsp+78h] [rbp-60h]
  __int128 v22; // [rsp+88h] [rbp-50h]
  unsigned __int64 v23; // [rsp+98h] [rbp-40h]

  v11 = a1;
  v23 = __readfsqword(0x28u);
  v4 = (char *)operator new(0x98u);
  v12 = nullptr;
  v4[8] = 103;
  v5 = (__int64)(v4 + 16);
  v6 = v4;
  *(_QWORD *)v4 = &off_2B3F238;
  v22 = 0;
  v14 = 0;
  v16 = 0;
  v18 = 0;
  v20 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  sub_8E39F0((__int64)(v4 + 16), (__int64)&v12);
  sub_8E3880((__int64)&v12);
  if ( v11 )
  {
    v7 = *(bool (__fastcall **)(__int64, char **, __int64))(*(_QWORD *)v6 + 24LL);
    if ( v7 == sub_8E8890 )
    {
      v12 = v11;
      if ( !__CFADD__(a2, v11) && sub_8E8640(v5, &v12, a2) )
        return v6;
    }
    else if ( ((unsigned __int8 (__fastcall *)(char *, char **, __int64, _QWORD))v7)(v6, &v11, a2, a3) )
    {
      return v6;
    }
    if ( v6 )
    {
      v8 = *(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL);
      if ( v8 != sub_8E39C0 )
      {
        v10 = v6;
        v6 = nullptr;
        v8(v10);
        return v6;
      }
      *(_QWORD *)v6 = &off_2B3F238;
      sub_8E3880(v5);
      operator delete(v6, 0x98u);
    }
    return nullptr;
  }
  return v6;
}
