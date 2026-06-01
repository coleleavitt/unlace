/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: main
// Address: 0x0000000000406AD0

//----- (0000000000406AD0) ----------------------------------------------------
__int64 __fastcall main(int a1, const char **a2, char **a3)
{
  __int64 v6; // x21
  __int64 v7; // x24
  void *v8; // x25
  void *ptr; // [xsp+48h] [xbp-78h] BYREF
  unsigned __int64 v10; // [xsp+50h] [xbp-70h]
  __int64 v11; // [xsp+58h] [xbp-68h]
  _QWORD v12[10]; // [xsp+60h] [xbp-60h] BYREF
  char v13; // [xsp+B0h] [xbp-10h]

  sub_43EFE8();
  if ( (unsigned __int8)sub_40CAF8() )
  {
    ptr = nullptr;
    v10 = 0;
    v11 = 0;
    if ( (unsigned __int8)sub_4950A8("IDA_DBGSRV_PASSWD", (__int64)&ptr) )
    {
      v6 = v10;
      if ( v10 && (v7 = v10 - 1, v10 != 1) )
      {
        v8 = ptr;
        if ( v10 > qword_522358 )
          qword_522348 = (__int64)sub_491288((__int64)&qword_522348, (void *)qword_522348, v10, 1u);
        qword_522350 = v6;
        memmove((void *)qword_522348, v8, v6 - 1);
        *(_BYTE *)(qword_522348 + v7) = 0;
      }
      else
      {
        qword_522350 = 0;
      }
    }
    sub_47B4D0("IDA ARM Linux 64-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    memset(v12, 0, 72);
    byte_522360 = byte_5222B0;
    v12[9] = sub_47B4D0;
    v13 = 1;
    sub_461CD0((__int64)&qword_5222D8, (char *)v12, 1);
    sub_481D80((__int64)v12, a1, a2, (__int64)&qword_5222D8);
    sub_475F10((__int64)&qword_5222D8);
    sub_476A30((__int64)&qword_5222D8);
    sub_461C88((__int64)v12);
    if ( ptr )
    {
      v10 = 0;
      j__free(ptr);
    }
    return 0;
  }
  else
  {
    sub_47B4D0("Could not initialize subsystem!");
    return 0xFFFFFFFFLL;
  }
}
// 5222B0: using guessed type char byte_5222B0;
// 5222D8: using guessed type __int64 qword_5222D8;
// 522348: using guessed type __int64 qword_522348;
// 522350: using guessed type __int64 qword_522350;
// 522358: using guessed type __int64 qword_522358;
// 522360: using guessed type char byte_522360;
