__int64 __fastcall sub_42ECB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 i; // rbx
  __int64 v3; // rsi
  _BYTE v5[4]; // [rsp+Ch] [rbp-3Ch] BYREF
  _BYTE v6[56]; // [rsp+10h] [rbp-38h] BYREF

  v1 = sub_40FB00(88);
  sub_457B90(v1, 0);
  for ( i = sub_457E20(a1, v6);
        i;
        *(_QWORD *)((*(__int64 (__fastcall **)(__int64, __int64, _BYTE *))(v1 + 72))(v1, v3, v5) + 24) = *(_QWORD *)(i + 24) )
  {
    v3 = i + 32;
    if ( *(_DWORD *)(a1 + 60) == 1 || *(_DWORD *)(a1 + 60) == -1 )
      v3 = *(_QWORD *)(i + 32);
  }
  return v1;
}

