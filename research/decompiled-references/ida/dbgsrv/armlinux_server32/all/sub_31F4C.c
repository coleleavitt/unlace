/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31F4C
// Address: 0x00031F4C

//----- (00031F4C) --------------------------------------------------------
int __fastcall sub_31F4C(__int64 a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r4
  __int64 *v8; // r8
  int v9; // r11
  bool v10; // zf
  bool v11; // zf
  __int64 v12; // r6
  bool v13; // nf
  unsigned int v14; // r2
  bool v15; // zf
  __int64 v16; // r4

  v5 = a4;
  v8 = (__int64 *)HIDWORD(a1);
  v9 = a1;
  v10 = HIDWORD(a4) == -1;
  if ( HIDWORD(a4) == -1 )
    v10 = (_DWORD)a4 == -1;
  if ( v10 )
  {
    LODWORD(a1) = sub_74D98(a1, 0, 1);
    v5 = a1;
  }
  v11 = HIDWORD(a5) == -1;
  if ( HIDWORD(a5) == -1 )
    v11 = (_DWORD)a5 == -1;
  if ( v11 )
  {
    a1 = sub_74D78(v9);
    a5 = a1;
  }
  v12 = a5 - v5;
  v13 = v5 < 0;
  if ( v5 >= 0 )
    v13 = v12 < 0;
  if ( v13 )
  {
    v16 = 0;
LABEL_19:
    *v8 = v16;
    LODWORD(a1) = sub_23570(
                    1,
                    (int)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                    a3,
                    (int)". Do you want to continue with the new value?");
    if ( (_DWORD)a1 != 1 )
      sub_2A028(0);
    return a1;
  }
  v14 = *(_DWORD *)v8;
  v15 = a2 == 0;
  if ( a2 )
    v15 = v14 == 0;
  if ( !v15 && (LODWORD(a1) = a2 * v14, !is_mul_ok(a2, v14)) || v12 < v14 * a2 )
  {
    v16 = v12 / a2;
    goto LABEL_19;
  }
  return a1;
}
// 32010: variable 'a1' is possibly undefined
