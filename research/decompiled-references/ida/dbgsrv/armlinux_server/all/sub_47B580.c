/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47B580
// Address: 0x000000000047B580

//----- (000000000047B580) ----------------------------------------------------
__int64 __fastcall sub_47B580(
        int a1,
        char *a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        __int64 a20,
        int a21,
        int a22,
        __int64 a23,
        int a24,
        __int64 a25,
        int a26,
        __int64 a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        __int64 a34,
        __int64 a35,
        __int64 a36,
        __int64 a37,
        __int64 a38,
        __int64 a39,
        void *a40,
        __int64 a41,
        __int64 a42,
        void *ptr,
        __int64 a44,
        __int64 a45)
{
  __int64 v45; // x7
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v50; // x7
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x7
  __int64 v54; // x0
  __int64 v55; // x1
  char s1[8]; // [xsp+E0h] [xbp-60h] BYREF
  __int64 v57; // [xsp+E8h] [xbp-58h]
  __int64 v58; // [xsp+F0h] [xbp-50h]
  __int64 v59; // [xsp+F8h] [xbp-48h]

  if ( a1 )
  {
    if ( a1 <= 0 )
    {
      v53 = a3[1];
      v54 = a3[2];
      v55 = a3[3];
      *(_QWORD *)s1 = *a3;
      v57 = v53;
      v58 = v54;
      v59 = v55;
      sub_492310(a2, (__int64 *)s1);
    }
    v50 = a3[1];
    v51 = a3[2];
    v52 = a3[3];
    *(_QWORD *)s1 = *a3;
    v57 = v50;
    v58 = v51;
    v59 = v52;
    callui(24, 2, a2);
    return 0;
  }
  else
  {
    v45 = a3[1];
    v46 = a3[2];
    v47 = a3[3];
    *(_QWORD *)s1 = *a3;
    v57 = v45;
    v58 = v46;
    v59 = v47;
    return (int)callui(23, (int)a2, s1);
  }
}
// 522018: using guessed type __int64 (__fastcall *callui)(int, int, char *s1);
