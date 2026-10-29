__int64 __fastcall sub_C935C0(__int64 **a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // [rsp+0h] [rbp-10h] BYREF

  v1 = **a1;
  result = 1;
  if ( (*(_BYTE *)(v1 + 1) & 6) == 0 )
  {
    v4 = sub_CC2440(a1[1][158], *(_QWORD *)(v1 + 8));
    result = HIDWORD(v4);
    if ( BYTE4(v4) )
    {
      v5 = a1[1];
      v6 = **a1 | 4;
      return sub_D11290(v5, v4, &v6);
    }
  }
  return result;
}

