/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B060
// Address: 0x000000014000B060

//----- (000000014000B060) ----------------------------------------------------
void __fastcall sub_14000B060(void **a1)
{
  char *v2; // rbp
  __int64 v3; // rdi
  char *v4; // rbx
  void *v5; // rcx

  if ( *a1 )
  {
    v2 = (char *)a1[1];
    if ( v2 )
    {
      v3 = 0;
      do
      {
        v4 = (char *)*a1;
        if ( *(int *)((char *)*a1 + v3) >= -1 )
        {
          v5 = *(void **)&v4[v3 + 8];
          if ( v5 )
          {
            *(_QWORD *)&v4[v3 + 16] = 0;
            j_free(v5);
            *(_QWORD *)&v4[v3 + 8] = 0;
            *(_QWORD *)&v4[v3 + 24] = 0;
          }
          *(_DWORD *)&v4[v3] = -2;
        }
        v3 += 32;
        --v2;
      }
      while ( v2 );
    }
    a1[1] = nullptr;
    j_free(*a1);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
