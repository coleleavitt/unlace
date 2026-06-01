__int64 __fastcall sub_CA78F0(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rbp
  __int64 result; // rax
  void *v4; // r12

  v1 = **(_QWORD **)(a1 + 16);
  v2 = (_QWORD *)sub_186B270(0x480u);
  result = sub_CA2DB0(v2, v1, a1 + 24);
  v4 = *(void **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v2;
  if ( v4 )
  {
    sub_CA7340((__int64)v4);
    return sub_186B220(v4);
  }
  return result;
}

