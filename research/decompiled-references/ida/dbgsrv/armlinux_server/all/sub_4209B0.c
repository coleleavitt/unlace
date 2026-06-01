/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4209B0
// Address: 0x00000000004209B0

//----- (00000000004209B0) ----------------------------------------------------
bool __fastcall sub_4209B0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        long double a9,
        long double a10,
        long double a11,
        long double a12,
        long double a13,
        long double a14,
        long double a15,
        long double a16,
        char a17)
{
  _QWORD v19[9]; // [xsp+20h] [xbp-500h] BYREF
  char v20[1024]; // [xsp+68h] [xbp-4B8h] BYREF
  long double v21; // [xsp+470h] [xbp-B0h]
  long double v22; // [xsp+480h] [xbp-A0h]
  long double v23; // [xsp+490h] [xbp-90h]
  long double v24; // [xsp+4A0h] [xbp-80h]
  long double v25; // [xsp+4B0h] [xbp-70h]
  long double v26; // [xsp+4C0h] [xbp-60h]
  long double v27; // [xsp+4D0h] [xbp-50h]
  long double v28; // [xsp+4E0h] [xbp-40h]
  _QWORD v29[6]; // [xsp+4F0h] [xbp-30h] BYREF

  v29[0] = a3;
  v29[1] = a4;
  v29[2] = a5;
  v29[3] = a6;
  v29[4] = a7;
  v29[5] = a8;
  v19[5] = &a17;
  v19[6] = &a17;
  v19[8] = 0xFFFFFF80FFFFFFD0LL;
  v19[7] = v29;
  v21 = a9;
  v22 = a10;
  v23 = a11;
  v24 = a12;
  v25 = a13;
  v26 = a14;
  v27 = a15;
  v28 = a16;
  v19[0] = &a17;
  v19[1] = &a17;
  v19[2] = v29;
  v19[3] = 0xFFFFFF80FFFFFFD0LL;
  sub_4205E0(a1, v20, 0x400u, (unsigned int)a2, (__int64)v19);
  sub_41A920("%s");
  return a2 <= 18;
}
