__int64 __fastcall sub_139DF90(__int64 a1, int a2, __int64 a3, __int64 a4, _BYTE *a5, __int64 a6)
{
  __int64 v6; // r12
  const char *v7; // rsi
  int v8; // r12d
  std::_V2 *v9; // rdi
  int v11; // [rsp+Ch] [rbp-3Ch] BYREF
  std::_V2 *v12[2]; // [rsp+10h] [rbp-38h] BYREF
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v11 = a2;
  if ( a5 )
  {
    v12[0] = (std::_V2 *)v13;
    sub_1396C10(v12, a5, (__int64)&a5[a6]);
    v7 = (const char *)v12[0];
  }
  else
  {
    v7 = v13;
    v13[0] = 0;
    v12[0] = (std::_V2 *)v13;
    v12[1] = nullptr;
  }
  v8 = sub_139DC10(v6, v7, a3, a4, (__int64)a5, a6);
  *sub_A25EE0(a1 + 16, &v11) = v8;
  v9 = v12[0];
  if ( (_BYTE *)v12[0] != v13 )
    operator delete(v12[0]);
  std::_V2::system_category(v9);
  return 0;
}
