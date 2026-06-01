__int64 __fastcall sub_C3FB70(unsigned __int64 a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 v6; // [rsp+Fh] [rbp-59h]
  unsigned int v7; // [rsp+10h] [rbp-58h] BYREF
  char v8; // [rsp+14h] [rbp-54h]

  v8 &= ~1u;
  v7 = 0;
  result = sub_C39A10((__int64)&v7, a3, a1, a4, a5);
  if ( (_BYTE)result )
    result = sub_C0FF30((__int64)&v7, a2);
  if ( v7 > 1 )
  {
    v6 = result;
    sub_A4F8E0((int *)&v7);
    return v6;
  }
  return result;
}
