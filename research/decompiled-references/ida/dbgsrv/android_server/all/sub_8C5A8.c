/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C5A8
// Address: 0x000000000008C5A8

//----- (000000000008C5A8) ----------------------------------------------------
__int64 __fastcall sub_8C5A8(__int64 a1)
{
  unsigned int v2; // w2
  __int64 result; // x0
  const char *v4; // x19
  const char *v5; // x1
  void *ptr; // [xsp+0h] [xbp-40h] BYREF
  __int64 v7; // [xsp+8h] [xbp-38h]
  __int64 v8; // [xsp+10h] [xbp-30h]
  __int64 v9; // [xsp+18h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_DWORD *)(a1 + 24);
  result = 0;
  if ( v2 <= 0x12 && ((1 << v2) & 0x40C00) != 0 )
  {
    v4 = *(const char **)a1;
    if ( sub_8C510(a1 + 28, *(const char **)a1, v2) )
    {
      return 1;
    }
    else
    {
      ptr = nullptr;
      v7 = 0;
      v8 = 0;
      sub_8BA38(a1, (__int64)&ptr);
      if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
      {
        if ( v7 )
          v5 = (const char *)ptr;
        else
          v5 = &byte_F154B;
        sub_39FA0((__int64)"Couldn't find UUID/debug ID \"%s\" for file: %s\n", v5, v4);
      }
      if ( ptr )
      {
        v7 = 0;
        qfree(ptr);
        ptr = nullptr;
        v8 = 0;
      }
      return 0;
    }
  }
  return result;
}
// F154B: using guessed type char byte_F154B;
// 166CB0: using guessed type __int64 qword_166CB0;
