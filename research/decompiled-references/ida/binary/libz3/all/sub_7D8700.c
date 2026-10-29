void __fastcall sub_7D8700(_QWORD *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  void *v7; // rdi
  void *v8; // rdi

  v2 = (__int64 *)a1[9];
  *a1 = &off_1C54950;
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
          v5 = a1[8];
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
    v2 = (__int64 *)a1[9];
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  v7 = (void *)a1[5];
  if ( v7 )
    sub_186B220(v7);
  v8 = (void *)a1[2];
  if ( v8 )
    sub_186B220(v8);
  operator delete(a1, 0x50u);
}

