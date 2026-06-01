/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062AA8
// Address: 0x0000000100062AA8

//----- (0000000100062AA8) ----------------------------------------------------
__int64 __fastcall sub_100062AA8(_BYTE *a1, int a2, char *a3, va_list a4)
{
  unsigned int v8; // w8
  __int64 v9; // x21
  void *v10; // x0
  __int64 v11; // x19
  _Unwind_Exception *v13; // x0
  int v14; // w1
  char *v15; // [xsp+8h] [xbp-68h] BYREF
  __int64 v16; // [xsp+10h] [xbp-60h]
  __int64 v17; // [xsp+18h] [xbp-58h]
  void *v18[3]; // [xsp+20h] [xbp-50h] BYREF

  if ( a1[68] == 1 )
  {
    if ( under_debugger != 1 )
    {
      interr(1621);
      if ( v14 )
        sub_10000150C(v13);
      _Unwind_Resume(v13);
    }
    __break(1u);
LABEL_19:
    exit(1);
  }
  if ( a2 >= 1 )
    v8 = 54;
  else
    v8 = 52;
  if ( a2 )
    v9 = v8;
  else
    v9 = 53;
  sub_100063440(v9, (__int64 *)v18);
  v15 = nullptr;
  v16 = 0;
  v17 = 0;
  sub_10000BACC(&v15, a3, a4);
  sub_10004ED18((_QWORD **)v18, (__int64)&v15);
  v10 = (void *)(*(__int64 (__fastcall **)(_BYTE *, __int64, void **))(*(_QWORD *)a1 + 16LL))(a1, v9, v18);
  qfree(v10);
  if ( a2 < 0 )
    goto LABEL_19;
  v11 = v16;
  if ( v15 )
  {
    v16 = 0;
    qfree(v15);
  }
  if ( v18[0] )
  {
    v18[1] = nullptr;
    qfree(v18[0]);
  }
  if ( v11 )
    return v11 - 1;
  else
    return 0;
}
// 100062C04: variable 'v14' is possibly undefined
// 100062C0C: variable 'v13' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
