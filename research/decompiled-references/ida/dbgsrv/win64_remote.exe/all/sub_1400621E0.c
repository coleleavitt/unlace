/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400621E0
// Address: 0x00000001400621E0

//----- (00000001400621E0) ----------------------------------------------------
_BYTE *__fastcall sub_1400621E0(_BYTE *a1, char *a2, __int64 a3)
{
  _BYTE *v3; // r9
  _BYTE *v4; // r8
  _BYTE *v5; // r8
  char v6; // al

  v3 = a1;
  if ( a3 < 0 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1225);
  }
  v4 = &a1[a3];
  if ( a1 >= v4 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(520);
  }
  v5 = v4 - 1;
  if ( a1 == v5 )
  {
LABEL_6:
    *a1 = 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = *a2++;
      *a1 = v6;
      if ( !v6 )
        break;
      if ( ++a1 == v5 )
        goto LABEL_6;
    }
  }
  return v3;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
