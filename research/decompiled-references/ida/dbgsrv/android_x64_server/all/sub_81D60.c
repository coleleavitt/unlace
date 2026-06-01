/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81D60
// Address: 0x0000000000081D60

//----- (0000000000081D60) ----------------------------------------------------
void __fastcall sub_81D60(__int64 a1)
{
  char *v2; // rbx
  char *v3; // r15
  void *v4; // rdi

  v2 = *(char **)(a1 + 16);
  if ( v2 )
  {
    do
    {
      v3 = *(char **)v2;
      sub_8BE80((char **)v2 + 5);
      if ( (v2[16] & 1) != 0 )
        operator delete(*((void **)v2 + 4));
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  v4 = *(void **)a1;
  *(_QWORD *)a1 = 0;
  if ( v4 )
    operator delete(v4);
}
