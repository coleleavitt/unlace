/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F6A0
// Address: 0x000000010005F6A0

//----- (000000010005F6A0) ----------------------------------------------------
void __fastcall sub_10005F6A0(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  char *v4; // r14
  char *v5; // r12
  char *v6; // r15
  __int64 v7; // r13
  char *v8; // r15
  __int64 v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  char *v12; // [rsp+0h] [rbp-30h]

  v2 = (unsigned __int64)a1[2];
  if ( v2 < a2 )
  {
    v4 = (char *)qvector_reserve((__int64)a1, nullptr, a2, 0x1B0u);
    v5 = a1[2];
    a1[2] = (char *)v2;
    v6 = *a1;
    v7 = (__int64)a1[1];
    if ( v7 - 1 >= 0 )
    {
      v12 = v5;
      v8 = v6 + 64;
      v9 = 0;
      do
      {
        *(_QWORD *)&v4[v9] = *(_QWORD *)&v8[v9 - 64];
        *(_QWORD *)&v4[v9 + 8] = *(_QWORD *)&v8[v9 - 56];
        *(_QWORD *)&v8[v9 - 56] = 0;
        *(_QWORD *)&v4[v9 + 16] = *(_QWORD *)&v8[v9 - 48];
        *(_QWORD *)&v8[v9 - 48] = 0;
        *(_QWORD *)&v4[v9 + 24] = *(_QWORD *)&v8[v9 - 40];
        *(_QWORD *)&v8[v9 - 40] = 0;
        *(_DWORD *)&v4[v9 + 32] = *(_DWORD *)&v8[v9 - 32];
        *(_QWORD *)&v4[v9 + 40] = *(_QWORD *)&v8[v9 - 24];
        *(_QWORD *)&v8[v9 - 24] = 0;
        *(_QWORD *)&v4[v9 + 48] = *(_QWORD *)&v8[v9 - 16];
        *(_QWORD *)&v8[v9 - 16] = 0;
        *(_QWORD *)&v4[v9 + 56] = *(_QWORD *)&v8[v9 - 8];
        *(_QWORD *)&v8[v9 - 8] = 0;
        memcpy(&v4[v9 + 64], &v8[v9], 0x170u);
        v10 = *(void **)&v8[v9 - 24];
        if ( v10 )
        {
          *(_QWORD *)&v8[v9 - 16] = 0;
          qfree(v10);
          *(_QWORD *)&v8[v9 - 24] = 0;
          *(_QWORD *)&v8[v9 - 8] = 0;
        }
        v11 = *(void **)&v8[v9 - 56];
        if ( v11 )
        {
          *(_QWORD *)&v8[v9 - 48] = 0;
          qfree(v11);
          *(_QWORD *)&v8[v9 - 56] = 0;
          *(_QWORD *)&v8[v9 - 40] = 0;
        }
        --v7;
        v9 += 432;
      }
      while ( v7 > 0 );
      v6 = *a1;
      v5 = v12;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
  }
}
