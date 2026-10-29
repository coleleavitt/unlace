/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4821A0
// Address: 0x00000000004821A0

//----- (00000000004821A0) ----------------------------------------------------
_BYTE *__fastcall sub_4821A0(_BYTE *a1, char *a2, __int64 a3)
{
  _BYTE *v3; // rdx
  _BYTE *result; // rax
  _BYTE *v5; // rcx
  char v6; // r8

  if ( a3 < 0 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(1225);
LABEL_13:
    BUG();
  }
  v3 = &a1[a3];
  result = a1;
  if ( a1 >= v3 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(520);
    goto LABEL_13;
  }
  v5 = a1;
  if ( a1 == v3 - 1 )
  {
LABEL_8:
    *(v3 - 1) = 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = *a2++;
      *v5 = v6;
      if ( !v6 )
        break;
      if ( ++v5 == v3 - 1 )
        goto LABEL_8;
    }
  }
  return result;
}
// 4C94E1: using guessed type char byte_4C94E1;
