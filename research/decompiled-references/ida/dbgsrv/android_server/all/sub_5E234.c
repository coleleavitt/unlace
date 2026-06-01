/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5E234
// Address: 0x000000000005E234

//----- (000000000005E234) ----------------------------------------------------
__int64 __fastcall sub_5E234(_QWORD *a1, __int64 a2)
{
  const char *v4; // x0
  const char *v5; // x1

  if ( !a1[2] )
  {
    v4 = &byte_F154B;
    if ( a1[6] )
      goto LABEL_3;
LABEL_5:
    v5 = &byte_F154B;
    goto LABEL_6;
  }
  v4 = (const char *)a1[1];
  if ( !a1[6] )
    goto LABEL_5;
LABEL_3:
  v5 = (const char *)a1[5];
LABEL_6:
  *(_QWORD *)(a2 + 8) = (int)qrename(v4, v5);
  return 0;
}
// F154B: using guessed type char byte_F154B;
