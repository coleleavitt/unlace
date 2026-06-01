void __fastcall sub_10DA910(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  _BYTE *v3; // rsi
  void *v4[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_BYTE **)a2;
  v4[0] = v5;
  sub_10D8CD0(v4, v3, (__int64)&v3[v2]);
  sub_22B9ED0(a1, v4);
  if ( v4[0] != v5 )
    operator delete(v4[0]);
}
