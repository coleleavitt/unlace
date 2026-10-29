void __fastcall sub_83B120(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r14
  void *v5; // rbp
  __int64 v6; // rsi
  char *v7; // rdi
  int v8; // edx
  __int64 v9; // rsi
  char *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rdx

  v2 = *a1;
  if ( *a1 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 40 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2 + 8);
        v6 = v2 + 24;
        v2 += 40;
        sub_182CBA0(v5, v6);
      }
      while ( v2 != v4 );
      v2 = *a1;
    }
    *(_DWORD *)(v2 - 4) = 0;
  }
  if ( *((_DWORD *)a1 + 5) || *((_DWORD *)a1 + 6) )
  {
    v7 = (char *)a1[1];
    v8 = 0;
    v9 = *((unsigned int *)a1 + 4);
    v10 = &v7[12 * v9];
    v11 = a1[1];
    if ( v7 == v10 )
      goto LABEL_25;
    do
    {
      while ( *(_DWORD *)(v11 + 4) )
      {
        *(_DWORD *)(v11 + 4) = 0;
        v11 += 12;
        if ( v10 == (char *)v11 )
          goto LABEL_14;
      }
      v11 += 12;
      ++v8;
    }
    while ( v10 != (char *)v11 );
LABEL_14:
    if ( (unsigned int)v9 <= 0x10 || 3 * (int)v9 >= (unsigned int)(4 * v8) )
      goto LABEL_25;
    if ( v7 )
    {
      sub_186B220(v7);
      v12 = *((_DWORD *)a1 + 4);
      a1[1] = 0;
      v13 = v12 >> 1;
      *((_DWORD *)a1 + 4) = v13;
      v14 = sub_186B270(12LL * v13);
      if ( !v13 )
      {
LABEL_24:
        a1[1] = v14;
LABEL_25:
        *(__int64 *)((char *)a1 + 20) = 0;
        return;
      }
      if ( v13 == 1 )
      {
        v16 = (_QWORD *)v14;
LABEL_23:
        *v16 = 0;
        goto LABEL_24;
      }
    }
    else
    {
      a1[1] = 0;
      v13 = (unsigned int)v9 >> 1;
      *((_DWORD *)a1 + 4) = (unsigned int)v9 >> 1;
      v14 = sub_186B270(12LL * ((unsigned int)v9 >> 1));
    }
    v15 = (_QWORD *)v14;
    do
    {
      *v15 = 0;
      v15 += 3;
      *(_QWORD *)((char *)v15 - 12) = 0;
    }
    while ( v15 != (_QWORD *)(v14 + 24LL * (v13 >> 1)) );
    if ( (v13 & 1) == 0 )
      goto LABEL_24;
    v16 = (_QWORD *)(v14 + 12LL * (v13 & 0x7FFFFFFE));
    goto LABEL_23;
  }
}

