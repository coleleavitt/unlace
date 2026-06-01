unsigned __int64 __fastcall sub_A4D4F0(__int64 a1, unsigned __int64 a2, int a3)
{
  _BYTE *v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]
  void *v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+18h] [rbp-20h]

  v4 = *(_BYTE **)(a1 + 2320);
  if ( (v4[1] & 8) != 0 || (v5 = a2, (char)v4[12] < 0) )
  {
    v5 = a2 | 1;
    if ( (v4[47] & 0x20) == 0 )
      goto LABEL_4;
  }
  else if ( (v4[47] & 0x20) == 0 )
  {
    goto LABEL_4;
  }
  v5 = sub_A4D130(a1, v5, 3);
LABEL_4:
  v8 = (void *)(unsigned int)(a3 + 1);
  v9 = 32;
  result = sub_A4D230(a1, v5, (__int64)&v8, nullptr, 0, 0);
  if ( v9 > 0x40 )
  {
    if ( v8 )
    {
      v7 = result;
      operator delete[](v8);
      return v7;
    }
  }
  return result;
}

