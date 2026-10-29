/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfseek
// Address: 0x000000010007C6C0

//----- (000000010007C6C0) ----------------------------------------------------
__int64 __fastcall qfseek(FILE *a1, off_t a2, int a3)
{
  unsigned int v3; // ebx

  if ( !a1 )
  {
    set_qerrno();
    *__error() = 9;
    v3 = -1;
    goto LABEL_5;
  }
  v3 = fseeko(a1, a2, a3);
  if ( v3 )
  {
LABEL_5:
    set_qerrno();
    return v3;
  }
  return 0;
}
