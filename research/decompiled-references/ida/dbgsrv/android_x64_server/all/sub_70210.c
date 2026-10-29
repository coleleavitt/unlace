/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70210
// Address: 0x0000000000070210

//----- (0000000000070210) ----------------------------------------------------
void __fastcall sub_70210(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  char *v4; // r15
  char *v5; // r12
  char *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rbp
  void *v9; // rdi

  v2 = (unsigned __int64)a1[2];
  if ( v2 < a2 )
  {
    v4 = (char *)qvector_reserve((__int64)a1, nullptr, a2, 0x20u);
    v5 = a1[2];
    a1[2] = (char *)v2;
    v6 = *a1;
    v7 = (__int64)(a1[1] - 1);
    if ( v7 >= 0 )
    {
      v8 = 0;
      do
      {
        *(_DWORD *)&v4[v8] = *(_DWORD *)&v6[v8];
        *(_QWORD *)&v4[v8 + 8] = *(_QWORD *)&v6[v8 + 8];
        *(_QWORD *)&v6[v8 + 8] = 0;
        *(_QWORD *)&v4[v8 + 16] = *(_QWORD *)&v6[v8 + 16];
        *(_QWORD *)&v6[v8 + 16] = 0;
        *(_QWORD *)&v4[v8 + 24] = *(_QWORD *)&v6[v8 + 24];
        *(_QWORD *)&v6[v8 + 24] = 0;
        v9 = *(void **)&v6[v8 + 8];
        if ( v9 )
        {
          *(_QWORD *)&v6[v8 + 16] = 0;
          qfree(v9);
          *(_QWORD *)&v6[v8 + 8] = 0;
          *(_QWORD *)&v6[v8 + 24] = 0;
        }
        v8 += 32;
        --v7;
      }
      while ( v7 >= 0 );
      v6 = *a1;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
  }
}
