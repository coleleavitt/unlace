/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4569A0
// Address: 0x00000000004569A0

//----- (00000000004569A0) ----------------------------------------------------
__int64 __fastcall sub_4569A0(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v3; // r13
  _QWORD *v4; // rbx
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  _QWORD *v10; // rbx
  void *v11; // rdi
  void *v12; // rdi
  bool v13; // zf
  void *v14; // rdi
  __int64 v15; // rbx
  void *v16; // rdi
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *); // rax
  __int64 v19; // rdi
  void *v20; // rdi
  char *v21; // rdx
  __int64 v22; // r12
  __int64 i; // rbx
  char *v24; // rax
  void *v25; // rdi
  void *v26; // rdi
  char *v27; // rdx
  __int64 v28; // r12
  __int64 j; // rbx
  char *v30; // rax
  void *v31; // rdi

  v1 = 0;
  v3 = a1[58];
  a1[74] = 0;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)(a1[57] + 80 * v1);
      v5 = (void *)v4[5];
      if ( v5 )
      {
        v4[6] = 0;
        j__free(v5);
      }
      v6 = (void *)v4[2];
      if ( v6 )
      {
        v4[3] = 0;
        j__free(v6);
      }
      ++v1;
    }
    while ( v3 != v1 );
  }
  v7 = a1[7];
  v8 = 0;
  v9 = 0;
  a1[58] = 0;
  if ( v7 )
  {
    do
    {
      v10 = (_QWORD *)(v8 + a1[6]);
      v11 = (void *)v10[4];
      if ( v11 )
      {
        v10[5] = 0;
        j__free(v11);
      }
      v12 = (void *)v10[1];
      if ( v12 )
      {
        v10[2] = 0;
        j__free(v12);
      }
      ++v9;
      v8 += 56;
    }
    while ( v7 != v9 );
  }
  v13 = a1[10] == 0;
  a1[7] = 0;
  if ( !v13 )
    sub_454000(a1);
  v14 = (void *)a1[54];
  if ( v14 )
  {
    a1[55] = 0;
    j__free(v14);
    a1[54] = 0;
    a1[56] = 0;
  }
  sub_454190((void *)a1[50]);
  v15 = a1[78];
  a1[50] = 0;
  a1[51] = (__int64)(a1 + 49);
  a1[52] = (__int64)(a1 + 49);
  a1[53] = 0;
  while ( v15 )
  {
    sub_454FF0(*(_QWORD **)(v15 + 24));
    v16 = (void *)v15;
    v15 = *(_QWORD *)(v15 + 16);
    operator delete(v16, 0x50u);
  }
  a1[78] = 0;
  a1[79] = (__int64)(a1 + 77);
  a1[80] = (__int64)(a1 + 77);
  v17 = *a1;
  a1[81] = 0;
  *((_DWORD *)a1 + 164) = 0;
  *((_BYTE *)a1 + 861) = 0;
  v18 = *(__int64 (__fastcall **)(__int64 *))(v17 + 600);
  if ( v18 != sub_40C270 )
    return v18(a1);
  v19 = a1[83];
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    v20 = (void *)a1[84];
    if ( v20 )
    {
      a1[85] = 0;
      j__free(v20);
      a1[84] = 0;
      a1[86] = 0;
    }
    v21 = (char *)a1[87];
    if ( v21 )
    {
      v22 = a1[88];
      if ( v22 )
      {
        for ( i = 0; i != v22; ++i )
        {
          v24 = &v21[24 * i];
          v25 = *(void **)v24;
          if ( *(_QWORD *)v24 )
          {
            *((_QWORD *)v24 + 1) = 0;
            j__free(v25);
            v21 = (char *)a1[87];
          }
        }
      }
      a1[88] = 0;
      j__free(v21);
      a1[87] = 0;
      a1[89] = 0;
    }
    v26 = (void *)a1[90];
    if ( v26 )
    {
      a1[91] = 0;
      j__free(v26);
      a1[90] = 0;
      a1[92] = 0;
    }
    v27 = (char *)a1[93];
    if ( v27 )
    {
      v28 = a1[94];
      if ( v28 )
      {
        for ( j = 0; j != v28; ++j )
        {
          v30 = &v27[24 * j];
          v31 = *(void **)v30;
          if ( *(_QWORD *)v30 )
          {
            *((_QWORD *)v30 + 1) = 0;
            j__free(v31);
            v27 = (char *)a1[93];
          }
        }
      }
      a1[94] = 0;
      j__free(v27);
      a1[93] = 0;
      a1[95] = 0;
    }
  }
  a1[83] = 0;
  return nullsub_9(0);
}
// 45A740: using guessed type __int64 __fastcall nullsub_9(_QWORD);
