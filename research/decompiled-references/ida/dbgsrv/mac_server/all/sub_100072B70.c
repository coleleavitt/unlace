/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100072B70
// Address: 0x0000000100072B70

//----- (0000000100072B70) ----------------------------------------------------
void __fastcall sub_100072B70(char **a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r15
  char *v4; // r14
  char *v5; // r12
  char *v6; // r15
  __int64 v7; // r13
  char *v8; // r15
  __int64 v9; // r12
  void *v10; // rdi
  char *v11; // [rsp+0h] [rbp-30h]

  v2 = (unsigned __int64)a1[2];
  if ( v2 < a2 )
  {
    v4 = (char *)qvector_reserve((__int64)a1, nullptr, a2, 0x30u);
    v5 = a1[2];
    a1[2] = (char *)v2;
    v6 = *a1;
    v7 = (__int64)a1[1];
    if ( v7 - 1 >= 0 )
    {
      v11 = v5;
      v8 = v6 + 32;
      v9 = 0;
      do
      {
        *(_DWORD *)&v4[v9] = *(_DWORD *)&v8[v9 - 32];
        *(_QWORD *)&v4[v9 + 8] = *(_QWORD *)&v8[v9 - 24];
        *(_QWORD *)&v8[v9 - 24] = 0;
        *(_QWORD *)&v4[v9 + 16] = *(_QWORD *)&v8[v9 - 16];
        *(_QWORD *)&v8[v9 - 16] = 0;
        *(_QWORD *)&v4[v9 + 24] = *(_QWORD *)&v8[v9 - 8];
        *(_QWORD *)&v8[v9 - 8] = 0;
        *(_DWORD *)&v4[v9 + 40] = *(_DWORD *)&v8[v9 + 8];
        *(_QWORD *)&v4[v9 + 32] = *(_QWORD *)&v8[v9];
        v10 = *(void **)&v8[v9 - 24];
        if ( v10 )
        {
          *(_QWORD *)&v8[v9 - 16] = 0;
          qfree(v10);
          *(_QWORD *)&v8[v9 - 24] = 0;
          *(_QWORD *)&v8[v9 - 8] = 0;
        }
        --v7;
        v9 += 48;
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
