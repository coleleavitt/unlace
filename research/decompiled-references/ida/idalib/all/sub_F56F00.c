__int64 __fastcall sub_F56F00(__int64 a1, _QWORD *a2)
{
  unsigned __int8 v3; // al
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v6; // [rsp+Ch] [rbp-2Ch]
  void *v7; // [rsp+10h] [rbp-28h] BYREF
  int v8; // [rsp+18h] [rbp-20h]

  v3 = *(_BYTE *)(a1 + 19);
  v4 = *(_QWORD *)(a1 + 40);
  if ( (v3 & 2) != 0 )
  {
    v8 = *(_DWORD *)(v4 + 8);
    if ( (unsigned int)v8 > 0x40 )
      sub_2205510(&v7);
    else
      v7 = *(void **)v4;
  }
  else
  {
    v8 = 8 * ((v3 >> 2) & 0x1F);
    if ( v8 > 64 )
      sub_2205470(&v7, v4, 0);
    else
      v7 = (void *)v4;
  }
  result = sub_F56CB0(a2, *(_QWORD *)(a1 + 32), (__int64)&v7);
  if ( (unsigned int)v8 > 0x40 )
  {
    if ( v7 )
    {
      v6 = result;
      operator delete[](v7);
      return v6;
    }
  }
  return result;
}
