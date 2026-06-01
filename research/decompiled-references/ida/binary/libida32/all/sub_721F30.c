unsigned __int16 *__fastcall sub_721F30(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // eax
  _WORD *v5; // r13
  __int64 v6; // rbp
  _DWORD *v7; // r12
  __int64 v8; // r15
  __int64 v9; // rdx
  unsigned __int16 *v10; // rbp
  __int64 v11; // rdi
  unsigned __int16 *v12; // rbx
  unsigned __int16 v14; // ax
  int v15; // r10d
  unsigned __int16 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE *v19; // r14
  unsigned __int16 v20; // r9
  int v21; // eax
  unsigned __int16 v22; // bx
  int v23; // r9d
  int v24; // [rsp+0h] [rbp-48h]
  unsigned __int16 v25; // [rsp+0h] [rbp-48h]
  int v26; // [rsp+0h] [rbp-48h]
  int v27; // [rsp+4h] [rbp-44h]

  v4 = a3;
  v5 = (_WORD *)a2;
  v6 = 6 * a3;
  v7 = *(_DWORD **)a1;
  v8 = *(_QWORD *)a1 + 6LL;
  v9 = *(unsigned int *)(*(_QWORD *)a1 - 8LL);
  v10 = (unsigned __int16 *)(v8 + v6);
  if ( (_BYTE)a4 )
  {
    v11 = v10[2];
    if ( (unsigned int)v11 >= (unsigned int)v9
      || (v12 = (unsigned __int16 *)((char *)v7 + v11),
          (unsigned int)v9 < (unsigned int)v11
                           + *(unsigned __int16 *)((char *)v7 + v11 + *(unsigned __int16 *)((char *)v7 + v11) + 2)
                           + *(unsigned __int16 *)((char *)v7 + v11)
                           + 4) )
    {
      v12 = nullptr;
    }
    else if ( !*(_WORD *)((char *)v7 + v11) )
    {
      return nullptr;
    }
    if ( *v7 )
      return v12;
    a2 = v4;
    a1 = (unsigned __int64)v7;
    v24 = a4;
    v14 = sub_721D90((__int64)v7, v4);
    a4 = v24;
    v16 = v14;
  }
  else
  {
    v17 = v10[2];
    if ( (unsigned int)v17 >= (unsigned int)v9 )
      goto LABEL_13;
    v12 = (unsigned __int16 *)((char *)v7 + v17);
    v18 = *(unsigned __int16 *)((char *)v7 + v17);
    a2 = (__int64)v12 + v18 + 2;
    v15 = *v12;
    if ( (int)v12 + (int)v18 + 3 - (int)v7 >= (unsigned int)v9 )
      goto LABEL_13;
    a2 = *(unsigned __int16 *)a2;
    if ( (unsigned int)v12 + (_DWORD)a2 + (unsigned __int16)v15 + 4 - 1 - (unsigned int)v7 >= (unsigned int)v9
      || !(_WORD)v15 )
    {
      goto LABEL_13;
    }
    if ( *v7 )
      return v12;
    v16 = *v10;
  }
  if ( !v16 )
    return v12;
  v9 = v16;
  if ( v16 + (unsigned int)*(unsigned __int16 *)((char *)v12 + (unsigned __int16)v15 + 2) + v15 + 4 > 0x60D )
  {
LABEL_12:
    if ( (_BYTE)a4 )
      return nullptr;
LABEL_13:
    sub_722BF0(a1, a2, v9);
  }
  a2 = (__int64)v12;
  v19 = (char *)v5 + v16 + 2;
  v27 = a4;
  a1 = (unsigned __int64)v19;
  v25 = v16;
  sub_71D170(v19, v12, 0);
  v20 = v25;
  a4 = v27;
  *v5 = v25 + *v12;
  while ( 1 )
  {
    do
    {
      if ( v10 == (unsigned __int16 *)v8 )
        goto LABEL_12;
      v9 = *(v10 - 3);
      v10 -= 3;
      v21 = v20 - (_DWORD)v9;
      v22 = v9;
    }
    while ( v21 <= 0 );
    a2 = v10[2];
    a1 = (unsigned int)*(v7 - 2);
    v9 = a2;
    if ( (unsigned int)a2 >= (unsigned int)a1 )
      goto LABEL_13;
    v9 = (__int64)v7 + a2;
    v23 = *(unsigned __int16 *)((char *)v7 + a2);
    a2 += (__int64)v7 + v23 + 2;
    if ( (int)a2 + 1 - (int)v7 >= (unsigned int)a1 )
      goto LABEL_13;
    a2 = v9 + v23 + 2 + *(unsigned __int16 *)a2 + 2 - 1 - (_QWORD)v7;
    if ( (unsigned int)a2 >= (unsigned int)a1 )
      goto LABEL_13;
    if ( v21 > v23 )
      goto LABEL_12;
    a1 = v9 + 2;
    a2 = v21;
    if ( v21 < v23 && *(_BYTE *)(v9 + v21 + 2) >= *v19 )
      goto LABEL_12;
    a2 = v9 + 2;
    v26 = a4;
    v19 = (char *)v5 + v22 + 2;
    a1 = (unsigned __int64)v19;
    memcpy(v19, (const void *)(v9 + 2), v21);
    if ( !v22 )
      return v5;
    a4 = v26;
    v20 = v22;
  }
}

