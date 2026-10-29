/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4300
// Address: 0x00000000000B4300

//----- (00000000000B4300) ----------------------------------------------------
char *__fastcall sub_B4300(char **a1)
{
  char *v2; // rax
  unsigned __int64 v3; // rbx
  char *v4; // r15
  char *v5; // r12
  char *v6; // rbx
  __int64 v7; // r13
  char *v8; // rbx
  __int64 v9; // rbp
  void *v10; // rdi
  char *result; // rax

  v2 = a1[1];
  v3 = (unsigned __int64)a1[2];
  if ( v3 >= (unsigned __int64)(v2 + 1) )
  {
    v4 = *a1;
  }
  else
  {
    v4 = (char *)qvector_reserve((__int64)a1, nullptr, (unsigned __int64)(v2 + 1), 0x30u);
    v5 = a1[2];
    a1[2] = (char *)v3;
    v6 = *a1;
    v7 = (__int64)(a1[1] - 1);
    if ( v7 >= 0 )
    {
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
        v9 += 48;
        --v7;
      }
      while ( v7 >= 0 );
      v6 = *a1;
    }
    qfree(v6);
    *a1 = v4;
    a1[2] = v5;
    v2 = a1[1];
  }
  result = &v4[48 * (_QWORD)v2];
  *(_OWORD *)(result + 8) = 0;
  *((_QWORD *)result + 3) = 0;
  ++a1[1];
  return result;
}
