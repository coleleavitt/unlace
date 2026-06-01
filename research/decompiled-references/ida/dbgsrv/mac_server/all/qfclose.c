/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfclose
// Address: 0x000000010007C710

//----- (000000010007C710) ----------------------------------------------------
__int64 __fastcall qfclose(FILE *a1)
{
  unsigned int v1; // ebx

  if ( !a1 )
  {
    set_qerrno();
    *__error() = 9;
    v1 = -1;
    goto LABEL_5;
  }
  v1 = fclose(a1);
  if ( v1 )
  {
LABEL_5:
    set_qerrno();
    return v1;
  }
  return 0;
}
