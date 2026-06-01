void __fastcall sub_249C40(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 *v6; // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  void *v10; // rdi
  void *v11; // rdi

  v2 = a1 + 120;
  *((_QWORD *)v2 - 15) = qword_1C63778;
  sub_180C0E0(v2);
  v3 = *((_QWORD *)a1 + 14);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *((_QWORD *)a1 + 13);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = *((__int64 **)a1 + 12);
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *((_QWORD *)a1 + 11);
          if ( (*(_DWORD *)(v7 + 8))-- == 1 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_12;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_12:
    v5 = *((__int64 **)a1 + 12);
    if ( v5 )
LABEL_13:
      sub_186B220(v5 - 1);
  }
  v10 = *((void **)a1 + 10);
  *((_QWORD *)a1 + 4) = &off_1C62200;
  if ( v10 )
    sub_186B220(v10);
  v11 = *((void **)a1 + 7);
  if ( v11 )
    sub_186B220(v11);
  operator delete(a1, 0xA0u);
}

