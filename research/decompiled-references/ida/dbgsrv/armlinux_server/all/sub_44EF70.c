/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44EF70
// Address: 0x000000000044EF70

//----- (000000000044EF70) ----------------------------------------------------
__int64 __fastcall sub_44EF70(
        __int64 a1,
        __int64 *a2,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // w21
  __int64 v10; // [xsp+28h] [xbp-38h] BYREF
  int v11; // [xsp+30h] [xbp-30h] BYREF
  _QWORD *v12; // [xsp+38h] [xbp-28h]
  int *v13; // [xsp+40h] [xbp-20h]
  int *v14; // [xsp+48h] [xbp-18h]
  __int64 v15; // [xsp+50h] [xbp-10h]

  v12 = nullptr;
  v13 = &v11;
  v14 = &v11;
  v15 = 0;
  v11 = 0;
  v8 = sub_44E3C8(a1, a2, a3, a4, &v10, (__int64)&_stack_chk_guard, a7, a8);
  sub_444B18((__int64)&v10, v12);
  return v8;
}
