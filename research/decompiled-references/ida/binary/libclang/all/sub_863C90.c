__int64 __fastcall sub_863C90(__int64 (__fastcall ***a1)(), __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+Fh] [rbp-59h]
  __int16 v6; // [rsp+10h] [rbp-58h] BYREF
  __int64 v7; // [rsp+18h] [rbp-50h]
  unsigned int v8; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+24h] [rbp-44h]

  v6 = 0;
  v9 &= ~1u;
  v7 = 0;
  v8 = 0;
  result = sub_863720(a1, (__int64)&v6, a2, 1);
  if ( (_BYTE)result && a3 <= 1 )
  {
    if ( (_BYTE)v6 )
    {
      result = 0;
    }
    else if ( a3 != 1 )
    {
      result = HIBYTE(v6) ^ 1u;
    }
  }
  if ( v8 > 1 )
  {
    v5 = result;
    sub_69F740((__int64)&v8);
    return v5;
  }
  return result;
}

