/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43BDB0
// Address: 0x000000000043BDB0

//----- (000000000043BDB0) ----------------------------------------------------
__int64 __fastcall sub_43BDB0(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // w20
  char *v3; // x0
  void *ptr; // [xsp+20h] [xbp-1020h] BYREF
  __int64 v6; // [xsp+28h] [xbp-1018h]
  __int64 v7; // [xsp+30h] [xbp-1010h]
  char v8[4096]; // [xsp+38h] [xbp-1008h] BYREF

  v2 = a2;
  v3 = sub_452250(v8, 4096, a1);
  if ( v3 )
  {
    ptr = nullptr;
    v6 = 0;
    v7 = 0;
    if ( (unsigned __int8)sub_43A6A8((__int64)v3, (__int64)&ptr, 3u)
      && (v2 = (unsigned __int8)sub_450368(nullptr, "main", nullptr, 0, (__int64)&ptr, 0)) != 0 )
    {
      if ( ptr )
      {
        v6 = 0;
        j__free(ptr);
      }
    }
    else
    {
      sub_41A920("%s");
      if ( ptr )
      {
        v6 = 0;
        j__free(ptr);
      }
      return 0;
    }
  }
  else if ( v2 )
  {
    v2 = 0;
    sub_41A920("Could not locate system script file %s");
  }
  return v2;
}
