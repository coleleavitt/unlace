/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415770
// Address: 0x00415770

//----- (00415770) --------------------------------------------------------
signed int __thiscall sub_415770(void *this, int a2, _DWORD *a3)
{
  signed int v4; // edx
  int v5; // ecx
  _DWORD v7[2]; // [esp+18h] [ebp-14h] BYREF
  __int64 v8; // [esp+20h] [ebp-Ch]

  v7[0] = a2;
  v8 = 0;
  if ( dword_4B69F8 && (v4 = dword_4B69F8(16, v7, 16, v7, 16, 0), v4 >= 0)
    || (v4 = sub_414390((int)this, (__m128i)0LL, (int)v7, 0), v4 >= 0) )
  {
    v5 = HIDWORD(v8);
    *a3 = v8;
    a3[1] = v5;
  }
  return v4;
}
// 4B69F8: using guessed type int (__stdcall *dword_4B69F8)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
