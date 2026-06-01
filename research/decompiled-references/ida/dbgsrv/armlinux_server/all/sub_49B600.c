/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B600
// Address: 0x000000000049B600

//----- (000000000049B600) ----------------------------------------------------
__int64 __fastcall sub_49B600(__int64 a1, char *s, _QWORD *a3)
{
  size_t v6; // x0
  const char *v7; // x0
  __int64 v8; // x7
  __int64 v9; // x4
  __int64 v10; // x5
  unsigned __int8 v12[16]; // [xsp+0h] [xbp+0h] BYREF
  _QWORD v13[9]; // [xsp+30h] [xbp+30h] BYREF

  if ( a1 )
  {
    v6 = strlen(s);
    v7 = sub_49AEC8(s, v12, v6 + 100);
    v8 = a3[1];
    v9 = a3[2];
    v10 = a3[3];
    v13[0] = *a3;
    v13[1] = v8;
    v13[2] = v9;
    v13[3] = v10;
    v13[5] = v13[0];
    v13[6] = v8;
    v13[7] = v9;
    v13[8] = v10;
    return __vfprintf_chk(a1, 1, v7, v13);
  }
  else
  {
    sub_4869C8(1);
    *__errno_location() = 9;
    sub_4869C8(1);
    return 0xFFFFFFFFLL;
  }
}
// 406140: using guessed type __int64 __fastcall __vfprintf_chk(_QWORD, _QWORD, _QWORD, _QWORD);
