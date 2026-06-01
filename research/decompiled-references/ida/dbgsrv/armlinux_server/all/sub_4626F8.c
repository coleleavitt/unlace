/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4626F8
// Address: 0x00000000004626F8

//----- (00000000004626F8) ----------------------------------------------------
__int64 __fastcall sub_4626F8(__int64 a1, int *a2, unsigned int a3)
{
  unsigned __int64 v4; // x4
  int v6; // w2
  __off64_t v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  unsigned __int64 *v10; // x1

  v4 = a3;
  if ( a2 )
  {
    v6 = *a2;
    v7 = v4;
    if ( v6 == 3 )
      goto LABEL_10;
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = v8 - 1;
  if ( v8 - 1 < 0 )
    goto LABEL_8;
  v10 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 32 * v8 - 32);
  while ( 1 )
  {
    --v9;
    if ( *v10 <= v4 && v10[1] > v4 )
      break;
    v10 -= 4;
    if ( v9 == -1 )
      goto LABEL_8;
  }
  v7 = v4 - *v10 + v10[2];
  if ( v7 != -1 )
  {
LABEL_10:
    sub_48C428((__int64)a2, v7, 0);
    return 1;
  }
  else
  {
LABEL_8:
    sub_48C428((__int64)a2, v4, 0);
    return 0;
  }
}
