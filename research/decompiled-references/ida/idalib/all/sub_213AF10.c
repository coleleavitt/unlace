__int64 __fastcall sub_213AF10(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rdi
  unsigned int v5; // r15d
  _BOOL8 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64); // r11
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v19; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+30h] [rbp-98h] BYREF
  __int64 v24; // [rsp+40h] [rbp-88h]
  int v25; // [rsp+48h] [rbp-80h]
  __int16 v26; // [rsp+50h] [rbp-78h]
  const char *v27; // [rsp+60h] [rbp-68h] BYREF
  void *v28; // [rsp+68h] [rbp-60h] BYREF
  __int64 v29; // [rsp+78h] [rbp-50h] BYREF
  __int16 v30; // [rsp+80h] [rbp-48h]
  char v31; // [rsp+88h] [rbp-40h]

  v4 = a1[6];
  v20 = 0;
  v21 = sub_2124B50(v4);
  v27 = nullptr;
  if ( sub_2133530((__int64)a1, &v19, (__int64)&v27) )
    return 1;
  v27 = "expected comma";
  v30 = 259;
  if ( (unsigned __int8)sub_2154510(a1, 26, &v27) )
    return 1;
  v30 = 259;
  v27 = "expected relocation name";
  v7 = *(_DWORD *)sub_2153C00(a1) != 2;
  if ( (unsigned __int8)sub_2154470(a1, v7, &v27) )
    return 1;
  v8 = sub_2124B50(a1[6]);
  v9 = a1[6];
  v22 = v8;
  if ( *(_DWORD *)v9 == 2 )
  {
    v10 = *(_QWORD *)(v9 + 8);
    v11 = *(_QWORD *)(v9 + 16);
  }
  else
  {
    v10 = sub_212C8F0(v9);
    v11 = v16;
  }
  sub_2132C70((__int64)a1, (__m128 *)v7);
  if ( *(_DWORD *)a1[6] == 26 )
  {
    sub_2132C70((__int64)a1, (__m128 *)v7);
    v27 = nullptr;
    v18 = a1[23];
    LOBYTE(v17) = sub_2133530((__int64)a1, (unsigned __int64 *)&v20, (__int64)&v27);
    v5 = v17;
    if ( (_BYTE)v17 )
      return v5;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    if ( !(unsigned __int8)sub_210E1F0(v20, (__int64 *)&v23, nullptr) )
    {
      v30 = 259;
      v27 = "expression must be relocatable";
      return (unsigned int)sub_2153E90(a1, v18, &v27, 0, 0);
    }
  }
  v5 = sub_21544B0(a1);
  if ( (_BYTE)v5 )
  {
    return 1;
  }
  else
  {
    v12 = sub_2154A60(a1[1]);
    v13 = a1[3];
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 1208LL);
    if ( v14 != sub_210ECA0 )
    {
      ((void (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64, __int64, __int64))v14)(
        &v27,
        v13,
        v19,
        v10,
        v11,
        v20,
        a2,
        v12);
      if ( v31 )
      {
        v26 = 260;
        *(_QWORD *)&v23 = &v28;
        v15 = &v22;
        if ( !(_BYTE)v27 )
          v15 = &v21;
        v5 = sub_2153E90(a1, *v15, &v23, 0, 0);
        if ( v31 && v28 != &v29 )
          operator delete(v28);
      }
    }
  }
  return v5;
}
