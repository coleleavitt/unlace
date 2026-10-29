/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044BA0
// Address: 0x0000000100044BA0

//----- (0000000100044BA0) ----------------------------------------------------
void __fastcall sub_100044BA0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  void *v5; // rdi
  void **v6; // rbx
  char *v7; // r14
  __int64 v8; // r15
  char *v9; // r12
  void *v10; // rdi

  v1 = a1[1];
  if ( v1 )
  {
    v2 = *a1;
    v3 = v1 - 1;
    a1[1] = v3;
    v4 = 56 * v3;
    v5 = *(void **)(v2 + v4);
    if ( v5 )
    {
      v6 = (void **)(v4 + v2);
      v7 = (char *)v6[1];
      if ( v7 )
      {
        v8 = 0;
        do
        {
          v9 = (char *)*v6;
          v10 = *(void **)((char *)*v6 + v8);
          if ( v10 )
          {
            *(_QWORD *)&v9[v8 + 8] = 0;
            qfree(v10);
            *(_QWORD *)&v9[v8] = 0;
            *(_QWORD *)&v9[v8 + 16] = 0;
          }
          v8 += 24;
          --v7;
        }
        while ( v7 );
        v5 = *v6;
      }
      v6[1] = nullptr;
      qfree(v5);
      *v6 = nullptr;
      v6[2] = nullptr;
    }
  }
}
