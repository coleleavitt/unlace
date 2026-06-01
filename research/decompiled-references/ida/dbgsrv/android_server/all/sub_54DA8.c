/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54DA8
// Address: 0x0000000000054DA8

//----- (0000000000054DA8) ----------------------------------------------------
__int64 __fastcall sub_54DA8(
        __int64 result,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        const char *a4,
        __int64 a5,
        __int64 a6,
        int8x16x2_t a7)
{
  unsigned __int64 v7; // x20
  __int64 v8; // x23
  __int64 v9; // x24
  __int64 v13; // x25
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // x4

  v7 = *a2;
  v8 = a6;
  v9 = a5;
  v13 = result;
  if ( a5 == -1 )
  {
    result = qlseek(result, 0, 1);
    v9 = result;
    if ( v8 != -1 )
      goto LABEL_3;
  }
  else if ( a6 != -1 )
  {
    goto LABEL_3;
  }
  result = qlsize(v13, (int)a2, a7);
  v8 = result;
LABEL_3:
  v14 = v8 - v9;
  if ( ((v8 - v9) | v9) < 0 )
  {
    v16 = 0;
    goto LABEL_14;
  }
  v15 = *a2;
  if ( !a3 || !v15 )
  {
    if ( v14 >= v15 * a3 )
      return result;
    goto LABEL_13;
  }
  if ( v14 < v15 * a3 || 0xFFFFFFFFFFFFFFFFLL / v15 < a3 )
  {
LABEL_13:
    v16 = v14 / a3;
LABEL_14:
    *a2 = v16;
    result = sub_5C340(
               1,
               (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
               a4,
               v7,
               v16,
               ". Do you want to continue with the new value?");
    if ( (_DWORD)result != 1 )
      sub_5BDE0(0);
  }
  return result;
}
// 54E3C: variable 'a2' is possibly undefined
// 54E3C: variable 'a7' is possibly undefined
