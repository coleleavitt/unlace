/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004CD30
// Address: 0x000000010004CD30

//----- (000000010004CD30) ----------------------------------------------------
unsigned __int64 __fastcall sub_10004CD30(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  void *v5; // rdi
  void **v6; // r13
  char *v7; // rbx
  __int64 v8; // r15
  char *v9; // r14
  void *v10; // rdi
  unsigned __int64 v13; // [rsp+8h] [rbp-38h]

  v2 = a1;
  v3 = a1[1];
  if ( v3 > a2 )
  {
    v4 = a2;
    v13 = a1[1];
    do
    {
      v5 = *(void **)(*v2 + 56 * v4);
      if ( v5 )
      {
        v6 = (void **)(56 * v4 + *v2);
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
          v2 = a1;
          v3 = v13;
        }
        v6[1] = nullptr;
        qfree(v5);
        *v6 = nullptr;
        v6[2] = nullptr;
      }
      ++v4;
    }
    while ( v4 != v3 );
  }
  v2[1] = a2;
  return a2;
}
