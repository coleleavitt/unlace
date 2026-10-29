/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004EA00
// Address: 0x000000010004EA00

//----- (000000010004EA00) ----------------------------------------------------
void __fastcall sub_10004EA00(__int64 a1)
{
  void *v2; // r14
  void *v3; // rdi
  void *v4; // r15
  void *v5; // rdi

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v4 = *(void **)v2;
      v5 = *((void **)v2 + 5);
      if ( v5 )
      {
        *((_QWORD *)v2 + 6) = 0;
        qfree(v5);
        *((_QWORD *)v2 + 5) = 0;
        *((_QWORD *)v2 + 7) = 0;
      }
      if ( (*((_BYTE *)v2 + 16) & 1) != 0 )
        operator delete(*((void **)v2 + 4));
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 );
  }
  v3 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v3 )
    operator delete(v3);
}
