void __fastcall sub_E2D0F0(_QWORD **a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // rdi
  void *v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r15
  void *v12; // r14
  __int64 v13; // rsi
  __int64 *v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v19; // rdi

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (_QWORD *)v2[39];
    if ( v3 != v2 + 41 )
      operator delete(v3, v2[41] + 1LL);
    v4 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v2 + 33);
    sub_182CBA0(v4, v2 + 35);
    v5 = v2[32];
    if ( v5 )
    {
      v6 = *(unsigned int *)(v5 - 4);
      if ( (_DWORD)v6 )
      {
        v7 = v5 + 16 * v6;
        do
        {
          v8 = v5;
          v5 += 16;
          sub_15D0DF0(v8);
        }
        while ( v7 != v5 );
        v5 = v2[32];
      }
      sub_186B220((void *)(v5 - 8));
    }
    v9 = v2[31];
    if ( v9 )
    {
      v10 = *(unsigned int *)(v9 - 4);
      if ( (_DWORD)v10 )
      {
        v11 = v9 + 32 * v10;
        do
        {
          v12 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v9);
          v13 = v9 + 16;
          v9 += 32;
          sub_182CBA0(v12, v13);
        }
        while ( v9 != v11 );
        v9 = v2[31];
      }
      sub_186B220((void *)(v9 - 8));
    }
    v14 = (__int64 *)v2[21];
    if ( v14 )
    {
      v15 = &v14[*((unsigned int *)v14 - 1)];
      if ( v14 >= v15 )
        goto LABEL_24;
      do
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = v2[20];
            if ( (*(_DWORD *)(v16 + 8))-- == 1 )
              break;
          }
          if ( ++v14 >= v15 )
            goto LABEL_23;
        }
        sub_15D7BC0(v17, v16);
        ++v14;
      }
      while ( v14 < v15 );
LABEL_23:
      v14 = (__int64 *)v2[21];
      if ( v14 )
LABEL_24:
        sub_186B220(v14 - 1);
    }
    v19 = v2[19];
    if ( v19 )
      sub_186B220((void *)(v19 - 8));
    sub_186B220(v2);
  }
  *a1 = nullptr;
}

