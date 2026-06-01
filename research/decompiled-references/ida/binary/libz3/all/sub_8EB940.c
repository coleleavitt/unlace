__int64 __fastcall sub_8EB940(__int64 a1)
{
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rdi
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  sub_AE9920((unsigned int)v6);
  result = v6[0];
  v6[0] = *(_QWORD *)(a1 + 9008);
  v2 = v6[0];
  *(_QWORD *)(a1 + 9008) = result;
  if ( v2 )
  {
    v4 = v6[1];
    if ( (*(_DWORD *)(v2 + 8))-- == 1 )
    {
      sub_15D7BC0(v4, v2);
      return *(_QWORD *)(a1 + 9008);
    }
  }
  return result;
}

