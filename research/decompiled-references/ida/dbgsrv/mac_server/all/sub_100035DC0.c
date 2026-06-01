/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100035DC0
// Address: 0x0000000100035DC0

//----- (0000000100035DC0) ----------------------------------------------------
void __fastcall sub_100035DC0(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  char *v4; // r14
  char *v5; // r12
  char *v6; // r15
  __int64 v7; // r13
  __int64 v8; // r12
  void *v9; // rdi
  char *v10; // [rsp+0h] [rbp-30h]

  v2 = (unsigned __int64)a1[2];
  if ( v2 < a2 )
  {
    v4 = (char *)qvector_reserve((__int64)a1, nullptr, a2, 0x20u);
    v5 = a1[2];
    a1[2] = (char *)v2;
    v6 = *a1;
    v7 = (__int64)a1[1];
    if ( v7 - 1 >= 0 )
    {
      v10 = v5;
      v8 = 0;
      do
      {
        *(_QWORD *)&v4[v8] = *(_QWORD *)&v6[v8];
        *(_QWORD *)&v6[v8] = 0;
        *(_QWORD *)&v4[v8 + 8] = *(_QWORD *)&v6[v8 + 8];
        *(_QWORD *)&v6[v8 + 8] = 0;
        *(_QWORD *)&v4[v8 + 16] = *(_QWORD *)&v6[v8 + 16];
        *(_QWORD *)&v6[v8 + 16] = 0;
        *(_DWORD *)&v4[v8 + 24] = *(_DWORD *)&v6[v8 + 24];
        v9 = *(void **)&v6[v8];
        if ( v9 )
        {
          *(_QWORD *)&v6[v8 + 8] = 0;
          qfree(v9);
          *(_QWORD *)&v6[v8] = 0;
          *(_QWORD *)&v6[v8 + 16] = 0;
        }
        --v7;
        v8 += 32;
      }
      while ( v7 > 0 );
      v6 = *a1;
      v5 = v10;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
  }
}
