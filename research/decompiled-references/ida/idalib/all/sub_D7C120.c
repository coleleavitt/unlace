__int64 __fastcall sub_D7C120(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  int v4; // edx
  unsigned __int64 v5; // rax
  unsigned int v6; // [rsp+Ch] [rbp-1Ch]
  void *v7; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-10h]

  v1 = *(void **)a1;
  result = *(unsigned int *)(a1 + 8);
  v3 = (unsigned __int64)(result + 63) >> 6;
  if ( v3 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    if ( (unsigned int)result <= 0x40 )
    {
      v7 = v1;
      goto LABEL_4;
    }
    sub_2205470(&v7, v1, 0);
  }
  else
  {
    sub_2205610(&v7, (unsigned int)result, v3, v1);
  }
  result = v8;
  if ( v8 <= 0x40 )
  {
LABEL_4:
    v4 = result - 64;
    if ( v7 )
    {
      _BitScanReverse64(&v5, (unsigned __int64)v7);
      return v4 + ((unsigned int)v5 ^ 0x3F);
    }
    return result;
  }
  result = sub_2206780(&v7);
  if ( v7 )
  {
    v6 = result;
    operator delete[](v7);
    return v6;
  }
  return result;
}
