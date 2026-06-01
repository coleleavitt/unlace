/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_428780
// Address: 0x0000000000428780

//----- (0000000000428780) ----------------------------------------------------
void __fastcall sub_428780(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  int v14; // eax

  v8 = a5;
  v10 = *a2;
  if ( a5 == -1 )
    v8 = sub_47F740(a1, 0, 1);
  if ( a6 == -1 )
    a6 = sub_47F710(a1);
  v11 = a6 - v8;
  if ( ((v11 | v8) & 0x8000000000000000LL) != 0LL )
  {
    v13 = 0;
LABEL_12:
    *a2 = v13;
    sub_424180(
      1,
      (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
      a4,
      v10,
      v13,
      ". Do you want to continue with the new value?");
    if ( v14 != 1 )
      sub_424670(0);
    return;
  }
  v12 = *a2;
  if ( *a2 && a3 && !is_mul_ok(v12, a3) || v11 < a3 * v12 )
  {
    v13 = v11 / a3;
    goto LABEL_12;
  }
}
// 428812: variable 'v14' is possibly undefined
