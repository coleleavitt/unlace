/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002D030
// Address: 0x000000014002D030

//----- (000000014002D030) ----------------------------------------------------
void __fastcall sub_14002D030(__int64 a1)
{
  void **v2; // rsi
  __int64 v3; // rbp
  void *v4; // rbx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void **v8; // rcx
  __int64 v9; // rax
  void *v10; // rcx
  void **v11; // rsi
  void **v12; // rbp
  void **v13; // r15
  void **v14; // rdi
  char *v15; // rcx
  char *v16; // rbx

  v2 = *(void ***)a1;
  v3 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)a1 != v3 )
  {
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = *((void **)v4 + 14);
        if ( v5 )
        {
          *((_QWORD *)v4 + 15) = 0;
          j_free(v5);
          *((_QWORD *)v4 + 14) = 0;
          *((_QWORD *)v4 + 16) = 0;
        }
        if ( *((_QWORD *)v4 + 11) )
        {
          sub_14002E590((_QWORD *)v4 + 11, 0);
          j_free(*((void **)v4 + 11));
          *((_QWORD *)v4 + 11) = 0;
          *((_QWORD *)v4 + 13) = 0;
        }
        sub_1400213B0((__int64)v4 + 64);
        v6 = *((void **)v4 + 4);
        if ( v6 )
        {
          *((_QWORD *)v4 + 5) = 0;
          j_free(v6);
          *((_QWORD *)v4 + 4) = 0;
          *((_QWORD *)v4 + 6) = 0;
        }
        v7 = *(void **)v4;
        if ( *(_QWORD *)v4 )
        {
          *((_QWORD *)v4 + 1) = 0;
          j_free(v7);
          *(_QWORD *)v4 = 0;
          *((_QWORD *)v4 + 2) = 0;
        }
        j_j_free(v4);
      }
      ++v2;
    }
    while ( v2 != (void **)v3 );
  }
  v8 = *(void ***)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j_free(v8);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v9 = *(_QWORD *)(a1 + 48);
  if ( qword_1400C6060 != v9 )
  {
    v10 = off_1400C6068;
    v11 = (void **)((char *)off_1400C6068 + 40 * v9);
    v12 = (void **)((char *)off_1400C6068 + 40 * qword_1400C6060);
    if ( v11 < v12 )
    {
      do
      {
        v13 = v11;
        v14 = v11;
        v11 += 5;
        v15 = (char *)v14[3];
        if ( v15 )
        {
          v16 = v15 - 8;
          `eh vector destructor iterator'(v15, 0x20u, *((_QWORD *)v15 - 1), (void (*)(void *))sub_140020450);
          j_j_j_free(v16);
        }
        j_free(*v13);
        j_free(v14[2]);
        *v13 = nullptr;
        v14[1] = nullptr;
        v14[2] = nullptr;
        v14[3] = nullptr;
        v14[4] = nullptr;
      }
      while ( v11 < v12 );
      v10 = off_1400C6068;
    }
    j_free(v10);
    off_1400C6068 = *(void **)(a1 + 40);
    qword_1400C6060 = *(_QWORD *)(a1 + 48);
  }
  sub_140024D30(a1 + 64);
  sub_14003A6A0(*(void **)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  sub_14003E570(*(void ***)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0;
}
// 1400C6060: using guessed type __int64 qword_1400C6060;
