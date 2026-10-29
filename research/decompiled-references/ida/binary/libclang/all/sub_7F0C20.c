__int64 __fastcall sub_7F0C20(__int64 *a1, __int64 a2, __int64 *a3)
{
  int v3; // eax
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v6; // ecx
  __int64 v7; // [rsp+8h] [rbp-10h] BYREF

  v3 = a2 & 7;
  if ( v3 == 7 )
  {
    v4 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_DWORD *)v4 )
    {
      return 1;
    }
    else
    {
      sub_B03930(&v7, *(_QWORD *)(v4 + 16));
      return sub_7EE690(a1, v7);
    }
  }
  else
  {
    v6 = v3 - 3;
    result = 1;
    if ( v6 <= 2 && a3 )
      return sub_7EEDC0((__int64)a1, *a3, (__int64)(a3 + 1));
  }
  return result;
}

