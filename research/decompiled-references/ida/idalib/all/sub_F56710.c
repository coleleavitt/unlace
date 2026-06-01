__int64 __fastcall sub_F56710(__int64 a1)
{
  _WORD *v1; // rsi
  _DWORD *v2; // rdi
  __int64 result; // rax
  unsigned int v4; // [rsp+0h] [rbp-1Ch]
  void *v5; // [rsp+4h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+Ch] [rbp-10h]
  char v7; // [rsp+10h] [rbp-Ch]

  v1 = *(_WORD **)(a1 + 40);
  if ( (*v1 & 0x1FF) != 0x3D )
    return 0;
  sub_BF7A50((__int64)&v5, (__int64)v1);
  if ( v7 )
  {
    v2 = v5;
    result = (unsigned int)((_DWORD)v5 + 1);
    if ( v6 <= 0x40 )
      return result;
    goto LABEL_7;
  }
  v2 = v5;
  if ( v6 > 0x40 )
  {
LABEL_7:
    v4 = *v2 + 1;
    operator delete[](v2);
    return v4;
  }
  result = 1;
  if ( v6 )
    return (unsigned int)((__int64)((_QWORD)v5 << (64 - (unsigned __int8)v6)) >> (64 - (unsigned __int8)v6)) + 1;
  return result;
}
