/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Find_FDE
// Address: 0x00000000000EA7AF

//----- (00000000000EA7AF) ----------------------------------------------------
unsigned int *__fastcall Unwind_Find_FDE(unsigned __int64 a1, _QWORD *a2)
{
  __int64 i; // rbx
  unsigned int *v4; // rbp
  __int64 v5; // rdi
  __int64 *v6; // rdx
  _QWORD *j; // rax
  char v8; // al
  char v9; // r12
  char *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 data; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+10h] [rbp-48h]
  unsigned __int64 v16; // [rsp+18h] [rbp-40h]
  unsigned int *v17; // [rsp+20h] [rbp-38h]
  int v18; // [rsp+28h] [rbp-30h]

  if ( &pthread_create )
    pthread_mutex_lock(&stru_1592C0);
  for ( i = qword_1592E8; ; i = *(_QWORD *)(i + 40) )
  {
    if ( !i )
      goto LABEL_8;
    if ( a1 >= *(_QWORD *)i )
      break;
  }
  v4 = sub_EA02F(i, a1);
  while ( 1 )
  {
    if ( v4 )
    {
      if ( &pthread_create )
      {
LABEL_17:
        pthread_mutex_unlock(&stru_1592C0);
        if ( !v4 )
          goto LABEL_21;
      }
      *a2 = *(_QWORD *)(i + 8);
      a2[1] = *(_QWORD *)(i + 16);
      v8 = (unsigned __int16)*(_DWORD *)(i + 32) >> 3;
      if ( (*(_BYTE *)(i + 32) & 4) != 0 )
        v8 = sub_E9979((__int64)v4);
      v9 = v8;
      v10 = (char *)sub_E959E(v8, i);
      sub_E961A(v9, v10, (char *)v4 + 8, &data);
      v11 = data;
LABEL_24:
      a2[2] = v11;
      return v4;
    }
LABEL_8:
    i = qword_1592F0;
    if ( !qword_1592F0 )
      break;
    v5 = qword_1592F0;
    qword_1592F0 = *(_QWORD *)(qword_1592F0 + 40);
    v4 = sub_EA02F(v5, a1);
    v6 = &qword_1592E8;
    for ( j = (_QWORD *)qword_1592E8; j && *j >= *(_QWORD *)i; j = (_QWORD *)j[5] )
      v6 = j + 5;
    *(_QWORD *)(i + 40) = j;
    *v6 = i;
  }
  v4 = nullptr;
  if ( &pthread_create )
    goto LABEL_17;
LABEL_21:
  data = a1;
  v4 = nullptr;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = nullptr;
  v18 = 1;
  if ( dl_iterate_phdr((int (*)(struct dl_phdr_info *, size_t, void *))callback, &data) >= 0 )
  {
    v4 = v17;
    if ( v17 )
    {
      *a2 = v14;
      a2[1] = v15;
      v11 = v16;
      goto LABEL_24;
    }
  }
  return v4;
}
// 1592E8: using guessed type __int64 qword_1592E8;
// 1592F0: using guessed type __int64 qword_1592F0;
