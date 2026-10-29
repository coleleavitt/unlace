/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CD50
// Address: 0x000000000009CD50

//----- (000000000009CD50) ----------------------------------------------------
void __fastcall sub_9CD50(char **a1)
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
      for ( i = 16; ; i += 120 )
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
