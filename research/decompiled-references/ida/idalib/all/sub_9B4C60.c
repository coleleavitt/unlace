__int64 __fastcall sub_9B4C60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _BYTE v7[9]; // [rsp+3h] [rbp-15h] BYREF
  unsigned int v8; // [rsp+Ch] [rbp-Ch]

  LOBYTE(v8) = 0;
  v7[0] = 0;
  v4 = sub_13DD220(a2, v8, a3, a4, v7);
  if ( v7[0] )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = v5;
    *(_BYTE *)(a1 + 16) = 1;
    return a1;
  }
}
