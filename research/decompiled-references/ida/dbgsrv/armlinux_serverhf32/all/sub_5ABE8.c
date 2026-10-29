/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5ABE8
// Address: 0x0005ABE8

//----- (0005ABE8) --------------------------------------------------------
int __fastcall sub_5ABE8(int a1, unsigned int *a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r4
  bool v9; // zf
  __int64 v10; // r6
  bool v11; // zf
  __int64 v12; // r8
  bool v13; // nf
  int result; // r0
  unsigned int v15; // r2
  bool v16; // zf
  unsigned int v17; // r3
  int v18; // r1

  v6 = a5;
  v9 = HIDWORD(a5) == -1;
  v10 = a6;
  if ( HIDWORD(a5) == -1 )
    v9 = (_DWORD)a5 == -1;
  if ( v9 )
  {
    LODWORD(v6) = sub_74C30(a1, 0, 1);
    HIDWORD(v6) = v18;
  }
  v11 = HIDWORD(a6) == -1;
  if ( HIDWORD(a6) == -1 )
    v11 = (_DWORD)a6 == -1;
  if ( v11 )
    v10 = sub_74C10(a1);
  v12 = v10 - v6;
  v13 = v6 < 0;
  if ( v6 >= 0 )
    v13 = v12 < 0;
  if ( v13 )
  {
    v17 = 0;
LABEL_20:
    result = 0;
    *a2 = v17;
    return result;
  }
  result = 1;
  v15 = *a2;
  v16 = a3 == 0;
  if ( a3 )
    v16 = v15 == 0;
  if ( !v16 && !is_mul_ok(a3, v15) || v12 < a3 * v15 )
  {
    v17 = v12 / a3;
    goto LABEL_20;
  }
  return result;
}
// 5AC86: variable 'v18' is possibly undefined
