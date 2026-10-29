/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D704
// Address: 0x0008D704

//----- (0008D704) --------------------------------------------------------
_BYTE *__fastcall sub_8D704(_DWORD *a1, _BYTE *src, int a3)
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
  if ( src )
    v3 = 0;
  if ( v3 )
    sub_83A18("basic_string::_M_construct null not valid");
  v4 = a3 - (_DWORD)src;
  v11 = a3 - (_DWORD)src;
  if ( (unsigned int)(a3 - (_DWORD)src) > 0xF )
  {
    result = sub_8BC90((int)a1, &v11, 0, 0);
    v10 = v11;
    *a1 = result;
    a1[2] = v10;
    goto LABEL_12;
  }
  v7 = (_BYTE *)*a1;
  result = (_BYTE *)*a1;
  if ( v4 == 1 )
  {
    *v7 = *src;
    v7 = (_BYTE *)*a1;
    goto LABEL_9;
  }
  if ( v4 )
  {
LABEL_12:
    result = memcpy(result, src, v4);
    v7 = (_BYTE *)*a1;
  }
LABEL_9:
  v9 = v11;
  a1[1] = v11;
  v7[v9] = 0;
  return result;
}
