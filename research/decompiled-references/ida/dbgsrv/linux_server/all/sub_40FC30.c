/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FC30
// Address: 0x000000000040FC30

//----- (000000000040FC30) ----------------------------------------------------
__int64 __fastcall sub_40FC30(int *a1, __int64 a2)
{
  __int64 v4; // rax
  size_t v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  int *v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  size_t v14; // r13
  int v15; // eax
  __int64 v16; // rdi
  void *v18; // rax
  void *v19; // rax
  const void *v20; // rsi

  v4 = operator new(0x40u);
  v5 = *((_QWORD *)a1 + 6);
  v6 = v4;
  v7 = *((_QWORD *)a1 + 4);
  *(_QWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 32) = v7;
  *(_OWORD *)(v6 + 48) = 0;
  if ( v5 )
  {
    v19 = sub_4814F0(v5);
    *(_QWORD *)(v6 + 40) = v19;
    v20 = *((const void **)a1 + 5);
    *(_QWORD *)(v6 + 56) = v5;
    memcpy(v19, v20, v5);
    *(_QWORD *)(v6 + 48) = v5;
  }
  v8 = *a1;
  v9 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)v6 = v8;
  *(_QWORD *)(v6 + 8) = a2;
  if ( v9 )
    *(_QWORD *)(v6 + 24) = sub_40FC30(v9, v6);
  v10 = *((int **)a1 + 2);
  if ( v10 )
  {
    v11 = v6;
    do
    {
      v12 = v11;
      v11 = operator new(0x40u);
      v13 = *((_QWORD *)v10 + 4);
      *(_QWORD *)(v11 + 40) = 0;
      *(_QWORD *)(v11 + 32) = v13;
      *(_OWORD *)(v11 + 48) = 0;
      v14 = *((_QWORD *)v10 + 6);
      if ( v14 )
      {
        v18 = sub_4814F0(*((_QWORD *)v10 + 6));
        *(_QWORD *)(v11 + 40) = v18;
        *(_QWORD *)(v11 + 56) = v14;
        memcpy(v18, *((const void **)v10 + 5), v14);
        *(_QWORD *)(v11 + 48) = v14;
      }
      v15 = *v10;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *(_DWORD *)v11 = v15;
      *(_QWORD *)(v12 + 16) = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v16 = *((_QWORD *)v10 + 3);
      if ( v16 )
        *(_QWORD *)(v11 + 24) = sub_40FC30(v16, v11);
      v10 = *((int **)v10 + 2);
    }
    while ( v10 );
  }
  return v6;
}
