/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E3B0
// Address: 0x000000000040E3B0

//----- (000000000040E3B0) ----------------------------------------------------
void __fastcall sub_40E3B0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  char *v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  char *v8; // rax
  void *v9; // rdi

  *a1 = off_4C2120;
  v2 = (void *)a1[138];
  if ( v2 )
  {
    a1[139] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[135];
  if ( v3 )
  {
    a1[136] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[132];
  if ( v4 )
  {
    a1[133] = 0;
    j__free(v4);
  }
  v5 = (char *)a1[129];
  if ( v5 )
  {
    v6 = a1[130];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = &v5[24 * i];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          j__free(v9);
          v5 = (char *)a1[129];
        }
      }
    }
    a1[130] = 0;
    j__free(v5);
  }
}
// 4C2120: using guessed type __int64 (__fastcall *off_4C2120[2])();
