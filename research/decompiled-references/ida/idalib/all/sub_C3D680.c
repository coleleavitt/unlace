__int64 __fastcall sub_C3D680(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-69h]
  __int16 v9; // [rsp+10h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-60h]
  unsigned int v11; // [rsp+20h] [rbp-58h] BYREF
  char v12; // [rsp+24h] [rbp-54h]

  v12 &= ~1u;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  result = sub_C3D370(a1, (__int64)&v9, a2, 1, a5, a6);
  if ( (_BYTE)result && a3 <= 1 )
  {
    if ( (_BYTE)v9 )
    {
      result = 0;
    }
    else if ( a3 != 1 )
    {
      result = HIBYTE(v9) ^ 1u;
    }
  }
  if ( v11 > 1 )
  {
    v8 = result;
    sub_A4F8E0((int *)&v11);
    return v8;
  }
  return result;
}
