void __fastcall sub_B210E0(_QWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  void *v10; // rbp
  __int64 v11; // rsi

  v2 = (_QWORD *)a1[4];
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 >= v3 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = a1[3];
          if ( (*(_DWORD *)(v4 + 8))-- == 1 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_8;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_8:
    v2 = (_QWORD *)a1[4];
    if ( v2 )
LABEL_9:
      *((_DWORD *)v2 - 1) = 0;
  }
  v7 = a1[5];
  if ( v7 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( (_DWORD)v8 )
    {
      v9 = v7 + 32 * v8;
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7);
        v11 = v7 + 16;
        v7 += 32;
        sub_182CBA0(v10, v11);
      }
      while ( v7 != v9 );
      v7 = a1[5];
    }
    *(_DWORD *)(v7 - 4) = 0;
  }
}

