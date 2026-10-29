/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38490
// Address: 0x0000000000038490

//----- (0000000000038490) ----------------------------------------------------
void __fastcall sub_38490(char **a1)
{
  char *v1; // r13
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  __int64 i; // rbx
  void *v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = (unsigned __int64)a1[1];
    if ( v3 )
    {
      v4 = 1;
      for ( i = 0; ; i += 24 )
      {
        v6 = *(void **)&v1[i];
        if ( v6 )
        {
          *(_QWORD *)&v1[i + 8] = 0;
          qfree(v6);
          *(_QWORD *)&v1[i] = 0;
          *(_QWORD *)&v1[i + 16] = 0;
        }
        if ( v4 >= v3 )
          break;
        v1 = *a1;
        ++v4;
      }
      v1 = *a1;
    }
    a1[1] = nullptr;
    qfree(v1);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
