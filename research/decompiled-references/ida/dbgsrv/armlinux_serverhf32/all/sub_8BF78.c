/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BF78
// Address: 0x0008BF78

//----- (0008BF78) --------------------------------------------------------
void *__fastcall sub_8BF78(int *a1, int a2, int a3)
{
  int v4; // r3
  int v6; // r6
  void *result; // r0
  bool v8; // zf
  size_t v9; // r2
  int v10; // r3
  int v11; // r6
  int v12; // r3

  v4 = a1[1];
  v6 = *a1;
  result = (void *)(v4 - a2);
  v8 = v4 - a2 == a3;
  if ( v4 - a2 != a3 )
    v8 = a3 == 0;
  v9 = (size_t)result - a3;
  if ( v8 )
    goto LABEL_6;
  result = (void *)(v6 + a2);
  if ( v9 != 1 )
  {
    result = memmove(result, (const void *)(v6 + a2 + a3), v9);
    v4 = a1[1];
    v6 = *a1;
LABEL_6:
    v10 = v4 - a3;
    a1[1] = v10;
    *(_BYTE *)(v6 + v10) = 0;
    return result;
  }
  *(_BYTE *)(v6 + a2) = *(_BYTE *)(v6 + a2 + a3);
  v11 = *a1;
  v12 = a1[1] - a3;
  a1[1] = v12;
  *(_BYTE *)(v11 + v12) = 0;
  return result;
}
