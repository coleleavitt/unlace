__int64 __fastcall sub_8571E0(unsigned __int64 a1, _BYTE *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int8 v5; // [rsp+Fh] [rbp-59h]
  unsigned int v6; // [rsp+10h] [rbp-58h] BYREF
  char v7; // [rsp+14h] [rbp-54h]

  v7 &= ~1u;
  v6 = 0;
  result = sub_856400((__int64)&v6, a3, a1);
  if ( (_BYTE)result )
    result = sub_81FDC0((__int64)&v6, a2, v4);
  if ( v6 > 1 )
  {
    v5 = result;
    sub_69F740((__int64)&v6);
    return v5;
  }
  return result;
}

