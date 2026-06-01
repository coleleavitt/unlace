/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464BD8
// Address: 0x0000000000464BD8

//----- (0000000000464BD8) ----------------------------------------------------
__int64 __fastcall sub_464BD8(__int64 a1)
{
  void **v2; // x21
  __int64 v3; // x20
  bool v5; // w0
  __int64 (__fastcall **v6)(); // [xsp+38h] [xbp-268h] BYREF
  void *ptr; // [xsp+40h] [xbp-260h]
  __int64 v8; // [xsp+48h] [xbp-258h]
  __int64 v9; // [xsp+50h] [xbp-250h]
  __int64 v10; // [xsp+280h] [xbp-20h]

  if ( !*(_QWORD *)(a1 + 8) )
  {
    v2 = (void **)sub_48BF60((const char *)&qword_4B2D48, 0);
    if ( v2 )
      goto LABEL_3;
    return 0;
  }
  v2 = (void **)sub_48BF60(*(const char **)a1, 0);
  if ( !v2 )
    return 0;
LABEL_3:
  if ( *(_DWORD *)(a1 + 24) == 11 )
  {
    v6 = off_51ACC0;
    ptr = nullptr;
    v8 = 0;
    v9 = 0;
    v5 = sub_4637F0((__int64)&v6, (__int64)v2, 1u, 1u);
    v3 = v10;
    v6 = off_51ACC0;
    if ( !v5 )
      v3 = 0;
    if ( ptr )
    {
      v8 = 0;
      j__free(ptr);
    }
  }
  else
  {
    v3 = 0;
  }
  sub_48C0F8(v2);
  return v3;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 51ACC0: using guessed type __int64 (__fastcall *off_51ACC0[3])();
