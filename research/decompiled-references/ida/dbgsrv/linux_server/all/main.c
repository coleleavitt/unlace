/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: main
// Address: 0x000000000040B610

//----- (000000000040B610) ----------------------------------------------------
__int64 __fastcall main(
        int a1,
        char **a2,
        char **a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rbx
  void *v13; // r14
  void *ptr; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-A0h]
  char *v16; // [rsp+20h] [rbp-88h] BYREF
  __int128 v17; // [rsp+28h] [rbp-80h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int128 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+50h] [rbp-58h]
  __int128 v21; // [rsp+58h] [rbp-50h]
  __int64 (*v22)(const char *, ...); // [rsp+68h] [rbp-40h]
  char v23; // [rsp+70h] [rbp-38h]
  unsigned __int64 v24; // [rsp+78h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  sub_43A0F0(a4, a5, a6, a7, a8, a9, a10, a11);
  if ( (unsigned __int8)sub_4160F0() )
  {
    ptr = nullptr;
    v15 = 0;
    if ( (unsigned __int8)sub_4837D0("IDA_DBGSRV_PASSWD", (__int64)&ptr) )
    {
      v12 = v15;
      if ( (unsigned __int64)v15 > 1 )
      {
        v13 = ptr;
        if ( qword_4C82E0 < (unsigned __int64)v15 )
          dest = sub_481540((__int64)&dest, dest, v15, 1u);
        qword_4C82D8 = v12;
        memmove(dest, v13, v12 - 1);
        *((char *)dest + v12 - 1) = 0;
      }
      else
      {
        qword_4C82D8 = 0;
      }
    }
    sub_4724D0("IDA Linux 64-bit remote debug server(ST) v%d.%d.%d. Hex-Rays (c) 2004-2026\n", 9, 3, 31);
    v23 = 1;
    v17 = 0;
    v16 = nullptr;
    byte_4C82E8 = byte_4C8240[0];
    v18 = 0;
    v20 = 0;
    v22 = sub_4724D0;
    v19 = 0;
    v21 = 0;
    sub_45A9D0((__int64)qword_4C8260, &v16, 1);
    sub_477FB0((__int64)&v16, a1, (const void **)a2, (__int64)qword_4C8260);
    sub_46E4F0((__int64)qword_4C8260);
    sub_46E890((__int64)qword_4C8260);
    sub_45A980((__int64)&v16);
    if ( ptr )
    {
      *(_QWORD *)&v15 = 0;
      j__free(ptr);
    }
    return 0;
  }
  else
  {
    sub_4724D0("Could not initialize subsystem!");
    return 0xFFFFFFFFLL;
  }
}
// 4C8260: using guessed type __int64 qword_4C8260[11];
// 4C82D8: using guessed type __int64 qword_4C82D8;
// 4C82E0: using guessed type __int64 qword_4C82E0;
// 4C82E8: using guessed type char byte_4C82E8;
