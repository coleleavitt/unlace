/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005ECC0
// Address: 0x000000010005ECC0

//----- (000000010005ECC0) ----------------------------------------------------
void __fastcall sub_10005ECC0(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  char *v4; // r14
  char *v5; // r12
  char *v6; // r15
  __int64 v7; // r13
  __int64 v8; // r12
  void *v9; // rdi
  void *v10; // rdi
  char *v11; // [rsp+0h] [rbp-30h]

  v2 = (unsigned __int64)a1[2];
  if ( v2 < a2 )
  {
    v4 = (char *)qvector_reserve((__int64)a1, nullptr, a2, 0x48u);
    v5 = a1[2];
    a1[2] = (char *)v2;
    v6 = *a1;
    v7 = (__int64)a1[1];
    if ( v7 - 1 >= 0 )
    {
      v11 = v5;
      v8 = 0;
      do
      {
        *(_QWORD *)&v4[v8] = *(_QWORD *)&v6[v8];
        *(_QWORD *)&v6[v8] = 0;
        *(_QWORD *)&v4[v8 + 8] = *(_QWORD *)&v6[v8 + 8];
        *(_QWORD *)&v6[v8 + 8] = 0;
        *(_QWORD *)&v4[v8 + 16] = *(_QWORD *)&v6[v8 + 16];
        *(_QWORD *)&v6[v8 + 16] = 0;
        *(_QWORD *)&v4[v8 + 24] = *(_QWORD *)&v6[v8 + 24];
        *(_QWORD *)&v6[v8 + 24] = 0;
        *(_QWORD *)&v4[v8 + 32] = *(_QWORD *)&v6[v8 + 32];
        *(_QWORD *)&v6[v8 + 32] = 0;
        *(_QWORD *)&v4[v8 + 40] = *(_QWORD *)&v6[v8 + 40];
        *(_QWORD *)&v6[v8 + 40] = 0;
        *(_QWORD *)&v4[v8 + 64] = *(_QWORD *)&v6[v8 + 64];
        *(_OWORD *)&v4[v8 + 48] = *(_OWORD *)&v6[v8 + 48];
        v9 = *(void **)&v6[v8 + 24];
        if ( v9 )
        {
          *(_QWORD *)&v6[v8 + 32] = 0;
          qfree(v9);
          *(_QWORD *)&v6[v8 + 24] = 0;
          *(_QWORD *)&v6[v8 + 40] = 0;
        }
        v10 = *(void **)&v6[v8];
        if ( v10 )
        {
          *(_QWORD *)&v6[v8 + 8] = 0;
          qfree(v10);
          *(_QWORD *)&v6[v8] = 0;
          *(_QWORD *)&v6[v8 + 16] = 0;
        }
        --v7;
        v8 += 72;
      }
      while ( v7 > 0 );
      v6 = *a1;
      v5 = v11;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
  }
}
