/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465288
// Address: 0x0000000000465288

//----- (0000000000465288) ----------------------------------------------------
__int64 __fastcall sub_465288(const char *a1)
{
  void **v1; // x0
  void **v2; // x21
  bool v3; // w0
  unsigned int v4; // w20
  __int64 (__fastcall **v6)(); // [xsp+28h] [xbp-268h] BYREF
  void *ptr; // [xsp+30h] [xbp-260h]
  __int64 v8; // [xsp+38h] [xbp-258h]
  __int64 v9; // [xsp+40h] [xbp-250h]

  v1 = (void **)sub_48BF60(a1, 0);
  if ( v1 )
  {
    v2 = v1;
    v6 = off_51ACC0;
    ptr = nullptr;
    v8 = 0;
    v9 = 0;
    v3 = sub_4637F0((__int64)&v6, (__int64)v1, 0, 1u);
    v6 = off_51ACC0;
    if ( v3 )
      v4 = 11;
    else
      v4 = -1;
    if ( ptr )
    {
      v8 = 0;
      j__free(ptr);
    }
    sub_48C0F8(v2);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v4;
}
// 51ACC0: using guessed type __int64 (__fastcall *off_51ACC0[3])();
