char *__fastcall sub_7C6C60(__int64 a1, __int64 a2, unsigned int a3)
{
  char *v4; // rbx
  bool (__fastcall *v5)(__int64, char **, __int64); // r8
  void (__fastcall *v6)(char *); // rax
  char *v8; // rdi
  __int64 v9; // [rsp+8h] [rbp-288h] BYREF
  int v10[2]; // [rsp+10h] [rbp-280h] BYREF
  __int128 v11; // [rsp+18h] [rbp-278h]
  int v12[2]; // [rsp+30h] [rbp-260h] BYREF
  __int128 v13; // [rsp+38h] [rbp-258h]
  int v14[2]; // [rsp+50h] [rbp-240h] BYREF
  __int128 v15; // [rsp+58h] [rbp-238h]
  int v16[2]; // [rsp+70h] [rbp-220h] BYREF
  __int128 v17; // [rsp+78h] [rbp-218h]
  __int64 v18; // [rsp+90h] [rbp-200h] BYREF
  __int128 v19; // [rsp+98h] [rbp-1F8h]
  __int64 v20; // [rsp+B0h] [rbp-1E0h] BYREF
  __int128 v21; // [rsp+B8h] [rbp-1D8h]
  __int64 v22; // [rsp+D0h] [rbp-1C0h] BYREF
  __int128 v23; // [rsp+D8h] [rbp-1B8h]
  __int64 v24; // [rsp+F0h] [rbp-1A0h] BYREF
  __int128 v25; // [rsp+F8h] [rbp-198h]
  __int64 v26; // [rsp+110h] [rbp-180h] BYREF
  __int128 v27; // [rsp+118h] [rbp-178h]
  __int64 v28; // [rsp+130h] [rbp-160h] BYREF
  __int128 v29; // [rsp+138h] [rbp-158h]
  int v30[2]; // [rsp+150h] [rbp-140h] BYREF
  unsigned __int64 v31; // [rsp+258h] [rbp-38h]

  v9 = a1;
  v31 = __readfsqword(0x28u);
  v4 = (char *)operator new(0x110u);
  v28 = 0;
  v26 = 0;
  v24 = 0;
  v22 = 0;
  v20 = 0;
  v18 = 0;
  *(_QWORD *)v16 = 0;
  *(_QWORD *)v14 = 0;
  *(_QWORD *)v12 = 0;
  *(_QWORD *)v10 = 0;
  v29 = 0;
  v27 = 0;
  v25 = 0;
  v23 = 0;
  v21 = 0;
  v19 = 0;
  v17 = 0;
  v15 = 0;
  v13 = 0;
  v11 = 0;
  sub_7C6460(
    (__int64)v30,
    0,
    (char *)v10,
    (__int64)v12,
    (__int64)v14,
    v16,
    &v18,
    &v20,
    &v22,
    &v24,
    &v26,
    (__int64)&v28,
    0);
  v4[8] = 37;
  *(_QWORD *)v4 = &off_2B11B90;
  sub_7C6860((__int64)(v4 + 16), v30);
  sub_7B1530(v30);
  if ( v9 )
  {
    v5 = *(bool (__fastcall **)(__int64, char **, __int64))(*(_QWORD *)v4 + 24LL);
    if ( v5 == sub_7C45B0 )
    {
      *(_QWORD *)v30 = v9;
      if ( !__CFADD__(a2, v9) && sub_7C3C60((__int64)(v4 + 16), (char **)v30, a2) )
        return v4;
    }
    else if ( ((unsigned __int8 (__fastcall *)(char *, __int64 *, __int64, _QWORD))v5)(v4, &v9, a2, a3) )
    {
      return v4;
    }
    if ( v4 )
    {
      v6 = *(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL);
      if ( v6 != sub_7BFCF0 )
      {
        v8 = v4;
        v4 = nullptr;
        v6(v8);
        return v4;
      }
      *(_QWORD *)v4 = &off_2B11B90;
      sub_7B1530((_QWORD *)v4 + 2);
      operator delete(v4, 0x110u);
    }
    return nullptr;
  }
  return v4;
}

