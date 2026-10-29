/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482ED0
// Address: 0x0000000000482ED0

//----- (0000000000482ED0) ----------------------------------------------------
void __fastcall sub_482ED0(__int64 a1)
{
  unsigned int v2; // w0
  void *v4; // x0
  void *v7; // x0

  v2 = *(_DWORD *)(a1 + 20) & 0xFFFFFFF;
  if ( v2 == 8 )
    goto LABEL_16;
  if ( v2 > 8 )
  {
    if ( v2 <= 0xA )
      goto LABEL_7;
    if ( v2 != 11 )
      goto LABEL_6;
LABEL_16:
    if ( v2 != 1 && v2 != 11 && v2 != 8 )
    {
      if ( !under_debugger )
        sub_492270(3295);
      while ( 1 )
      {
        __break(0x3E8u);
LABEL_28:
        if ( !under_debugger )
          sub_492270(3297);
      }
    }
    v4 = *(void **)(a1 + 24);
    if ( v4 )
      goto LABEL_13;
    goto LABEL_6;
  }
  if ( v2 != 3 )
  {
    if ( v2 == 7 )
    {
      v7 = *(void **)(a1 + 40);
      if ( v7 )
      {
        *(_QWORD *)(a1 + 48) = 0;
        j__free(v7);
      }
      goto LABEL_6;
    }
    if ( v2 != 1 )
      goto LABEL_6;
    goto LABEL_16;
  }
LABEL_7:
  if ( v2 - 9 > 1 && v2 != 3 )
    goto LABEL_28;
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
LABEL_13:
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v4);
  }
LABEL_6:
  *(_DWORD *)(a1 + 20) = 0;
}
// 52451C: using guessed type char under_debugger;
