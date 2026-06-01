/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48C0F8
// Address: 0x000000000048C0F8

//----- (000000000048C0F8) ----------------------------------------------------
void __fastcall sub_48C0F8(void **a1)
{
  int v2; // w1
  FILE *v3; // x0

  if ( a1 )
  {
    v2 = *(_DWORD *)a1;
    v3 = (FILE *)a1[1];
    if ( v2 <= 1 )
    {
      sub_4906A0(v3);
      j_j__free_0(a1);
    }
    else
    {
      if ( v3 )
        (*(void (__fastcall **)(FILE *))(*(_QWORD *)&v3->_flags + 16LL))(v3);
      j__free(a1[5]);
      j__free(a1[4]);
      j_j__free_0(a1);
    }
  }
}
