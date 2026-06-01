/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B128
// Address: 0x000000000046B128

//----- (000000000046B128) ----------------------------------------------------
__int64 __fastcall sub_46B128(__int64 a1)
{
  unsigned int v2; // w2
  unsigned int v3; // w21
  const char *v5; // x22
  __int64 *v6; // x1
  void *ptr; // [xsp+30h] [xbp-20h] BYREF
  __int64 v8; // [xsp+38h] [xbp-18h]
  __int64 v9; // [xsp+40h] [xbp-10h]

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 >= 0xA && (v2 <= 0xB || v2 == 18) )
  {
    v5 = *(const char **)a1;
    v3 = (unsigned __int8)sub_4697A0(a1 + 28, *(const char **)a1, v2);
    if ( !v3 )
    {
      ptr = nullptr;
      v8 = 0;
      v9 = 0;
      sub_46B060(a1, (__int64)&ptr);
      if ( qword_522368 && *(_BYTE *)(qword_522368 + 184) )
      {
        v6 = &qword_4B2D48;
        if ( v8 )
          v6 = (__int64 *)ptr;
        sub_40A690((int)"Couldn't find UUID/debug ID \"%s\" for file: %s\n", v6, v5);
      }
      if ( ptr )
      {
        v8 = 0;
        j__free(ptr);
      }
    }
  }
  else
  {
    return 0;
  }
  return v3;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522368: using guessed type __int64 qword_522368;
