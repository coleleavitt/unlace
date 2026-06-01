/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5D0A0
// Address: 0x000000000005D0A0

//----- (000000000005D0A0) ----------------------------------------------------
void __fastcall sub_5D0A0(char **a1, __int64 *a2)
{
  char *v2; // r13
  char *v3; // rax
  char **v4; // rdx
  char *v5; // r12
  __int64 v6; // rbp
  __int64 i; // r14
  __int64 v8; // r15
  size_t v9; // rbx
  void *v10; // rax
  __int64 v11; // rax

  *(_OWORD *)a1 = 0;
  a1[2] = nullptr;
  v2 = (char *)a2[1];
  if ( v2 )
  {
    v3 = (char *)qalloc_or_throw(40LL * (_QWORD)v2);
    v4 = a1;
    v5 = v3;
    *a1 = v3;
    a1[2] = v2;
    v6 = 1;
    for ( i = 0; ; i += 40 )
    {
      v8 = *a2;
      *(_OWORD *)&v5[i] = 0;
      *(_QWORD *)&v5[i + 16] = 0;
      v9 = *(_QWORD *)(v8 + i + 8);
      if ( v9 )
      {
        v10 = qalloc_or_throw(*(_QWORD *)(v8 + i + 8));
        *(_QWORD *)&v5[i] = v10;
        *(_QWORD *)&v5[i + 16] = v9;
        memcpy(v10, *(const void **)(v8 + i), v9);
        v4 = a1;
        *(_QWORD *)&v5[i + 8] = v9;
      }
      v11 = *(_QWORD *)(v8 + i + 24);
      *(_QWORD *)&v5[i + 29] = *(_QWORD *)(v8 + i + 29);
      *(_QWORD *)&v5[i + 24] = v11;
      if ( v2 == (char *)v6 )
        break;
      v5 = *v4;
      ++v6;
    }
    v4[1] = v2;
  }
}
