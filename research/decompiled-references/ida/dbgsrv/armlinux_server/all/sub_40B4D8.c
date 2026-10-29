/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40B4D8
// Address: 0x000000000040B4D8

//----- (000000000040B4D8) ----------------------------------------------------
__int64 __fastcall sub_40B4D8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // x4
  const char *v4; // x0
  const char *v6; // x2
  __int64 (__fastcall **v7)(int, int, int, int, int, int, int, int, char); // [xsp+10h] [xbp-30h] BYREF
  int v8; // [xsp+18h] [xbp-28h]
  __int64 v9; // [xsp+20h] [xbp-20h]
  _QWORD *v10; // [xsp+28h] [xbp-18h]
  __int64 v11; // [xsp+30h] [xbp-10h]
  __int64 v12; // [xsp+38h] [xbp-8h]

  v3 = a3[3];
  if ( *a3 == -1 )
  {
    if ( v3 )
      v6 = (const char *)a3[2];
    else
      v6 = (const char *)&qword_4B2D48;
    sub_45CDF8(a1, (__int64)"Can't import symbols from %s: no imagebase\n", v6);
  }
  else
  {
    v7 = &off_519AE0;
    v8 = 49;
    v9 = a1;
    v10 = a3;
    v11 = a2;
    if ( v3 )
      v4 = (const char *)a3[2];
    else
      v4 = (const char *)&qword_4B2D48;
    sub_42E470(v4, (__int64 (***)())&v7, 0);
  }
  return v12 ^ _stack_chk_guard;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 519AE0: using guessed type __int64 (__fastcall *off_519AE0)(int, int, int, int, int, int, int, int, char);
