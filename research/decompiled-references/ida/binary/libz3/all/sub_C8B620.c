void __fastcall sub_C8B620(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // r13
  void *v5; // r12
  __int64 v6; // rsi
  __int64 *v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v12; // rdi

  v2 = a1[9];
  *a1 = &off_1C74810;
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 32 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2);
        v6 = v2 + 16;
        v2 += 32;
        sub_182CBA0(v5, v6);
      }
      while ( v2 != v4 );
      v2 = a1[9];
    }
    sub_186B220((void *)(v2 - 8));
  }
  v7 = (__int64 *)a1[8];
  if ( v7 )
  {
    v8 = &v7[*((unsigned int *)v7 - 1)];
    if ( v7 >= v8 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = a1[7];
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            break;
        }
        if ( ++v7 >= v8 )
          goto LABEL_14;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( v7 < v8 );
LABEL_14:
    v7 = (__int64 *)a1[8];
    if ( v7 )
LABEL_15:
      sub_186B220(v7 - 1);
  }
  v12 = (void *)a1[4];
  if ( v12 )
    sub_186B220(v12);
  operator delete(a1, 0x50u);
}

