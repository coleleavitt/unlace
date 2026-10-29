/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BC0C
// Address: 0x0008BC0C

//----- (0008BC0C) --------------------------------------------------------
_BYTE *__fastcall sub_8BC0C(_DWORD *a1, _BYTE *a2, int a3)
{
  int v3; // r3
  size_t v4; // r4
  _BYTE *v7; // r3
  _BYTE *result; // r0
  size_t v9; // r2
  size_t v10; // r3
  size_t v11; // [sp+4h] [bp-4h] BYREF

  v3 = a3;
  if ( a3 )
    v3 = 1;
  if ( a2 )
    v3 = 0;
  if ( v3 )
    sub_83D00("basic_string::_M_construct null not valid");
  v4 = a3 - (_DWORD)a2;
  v11 = a3 - (_DWORD)a2;
  if ( (unsigned int)(a3 - (_DWORD)a2) > 0xF )
  {
    result = sub_8BDDC((int)a1, &v11, 0, 0);
    v10 = v11;
    *a1 = result;
    a1[2] = v10;
LABEL_11:
    result = memcpy(result, a2, v4);
    v7 = (_BYTE *)*a1;
    goto LABEL_9;
  }
  v7 = (_BYTE *)*a1;
  result = (_BYTE *)*a1;
  if ( v4 != 1 )
  {
    if ( !v4 )
      goto LABEL_9;
    goto LABEL_11;
  }
  *v7 = *a2;
  v7 = (_BYTE *)*a1;
LABEL_9:
  v9 = v11;
  a1[1] = v11;
  v7[v9] = 0;
  return result;
}
