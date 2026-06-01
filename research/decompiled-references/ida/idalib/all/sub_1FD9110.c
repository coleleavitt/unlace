void __fastcall sub_1FD9110(std::_V2 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  void *v5; // [rsp+10h] [rbp-98h] BYREF
  __int64 v6; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v7[4]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v8; // [rsp+50h] [rbp-58h]
  int v9; // [rsp+78h] [rbp-30h]
  __int64 v10; // [rsp+80h] [rbp-28h]

  v7[0] = a2;
  v7[1] = a3;
  v3 = std::_V2::system_category(a1);
  LOWORD(v8) = 773;
  v7[2] = ".timestamp";
  sub_2253560(&v5, v7);
  sub_227D450((std::_V2 *)v7);
  if ( v5 != &v6 )
    operator delete(v5);
  v4 = v8;
  if ( (unsigned __int64)(v7[3] - v8) > 0xE )
  {
    *(_DWORD *)(v8 + 8) = 1768300656;
    *(_QWORD *)v4 = 0x6D617473656D6954LL;
    *(_WORD *)(v4 + 12) = 25964;
    *(_BYTE *)(v4 + 14) = 10;
    v8 += 15;
  }
  else
  {
    sub_227BF10(v7, "Timestamp file\n", 15);
  }
  sub_227D4F0(v7);
  v9 = 0;
  v10 = v3;
  sub_227B600(v7);
}
