unsigned __int64 __fastcall sub_3C22F0(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  bool v7; // zf
  int v8; // eax
  __int64 (__fastcall **v9)(_QWORD, __int128 *, __int64); // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  _DWORD v14[3]; // [rsp+0h] [rbp-68h] BYREF
  char v15; // [rsp+Ch] [rbp-5Ch]
  __int64 (__fastcall **v16[11])(_QWORD, __int128 *, __int64); // [rsp+10h] [rbp-58h] BYREF

  v16[5] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))__readfsqword(0x28u);
  v5 = sub_505D70(a1 + 203, a2);
  if ( !v5 )
    return a2;
  v6 = *(_QWORD *)(v5 + 8);
  if ( (a3 & 1) != 0 )
  {
    v13 = sub_41BA40(a1, a2);
    if ( v6 > v13 )
      v6 = v13;
  }
  v7 = a1[97] == 0;
  v15 = 0;
  v8 = -1;
  v14[2] = 0;
  v14[1] = a3;
  if ( v7 )
    v8 = (sub_3BE900(a1, a2, 1) >> 8) & 1;
  v14[0] = v8;
  v9 = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3B7CE0;
  if ( (a3 & 0xE) != 0 )
    v9 = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_3B7DE0;
  v10 = a2 + 1;
  if ( a2 != -1 )
  {
    v16[1] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))a1;
    v16[0] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))&off_2B26118;
    v16[2] = v9;
    v16[3] = (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))v14;
    if ( v10 < v6 )
    {
      v12 = sub_3B81B0(a1, v10, v6, 0, v16);
      if ( v6 > v12 )
        v6 = v12;
      if ( v15 )
        return a2;
    }
  }
  return v6;
}
