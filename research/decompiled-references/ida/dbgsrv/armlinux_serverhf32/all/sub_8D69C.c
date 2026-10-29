/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D69C
// Address: 0x0008D69C

//----- (0008D69C) --------------------------------------------------------
_BYTE *__fastcall sub_8D69C(_DWORD *a1, _BYTE *src, int a3, int a4)
{
  size_t v4; // r4
  _BYTE *v7; // r3
  _BYTE *result; // r0
  size_t v9; // r2
  size_t v10; // r3
  size_t v11; // [sp+4h] [bp-4h] BYREF

  v4 = a3 - (_DWORD)src;
  v11 = a3 - (_DWORD)src;
  if ( (unsigned int)(a3 - (_DWORD)src) > 0xF )
  {
    result = sub_8BC90((int)a1, &v11, 0, a4);
    v10 = v11;
    *a1 = result;
    a1[2] = v10;
    goto LABEL_7;
  }
  v7 = (_BYTE *)*a1;
  result = (_BYTE *)*a1;
  if ( v4 == 1 )
  {
    *v7 = *src;
    v7 = (_BYTE *)*a1;
    goto LABEL_4;
  }
  if ( v4 )
  {
LABEL_7:
    result = memcpy(result, src, v4);
    v7 = (_BYTE *)*a1;
  }
LABEL_4:
  v9 = v11;
  a1[1] = v11;
  v7[v9] = 0;
  return result;
}
