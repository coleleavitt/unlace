void __fastcall sub_E0E020(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v9; // rdi
  void *v10; // rdi
  void *v11; // rdi

  *a1 = &off_1C758F0;
  v2 = (void *)a1[45];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[44];
  if ( v3 )
    sub_186B220(v3);
  v4 = (__int64 *)a1[35];
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 >= v5 )
      goto LABEL_13;
    do
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = a1[34];
          if ( (*(_DWORD *)(v6 + 8))-- == 1 )
            break;
        }
        if ( ++v4 >= v5 )
          goto LABEL_12;
      }
      sub_15D7BC0(v7, v6);
      ++v4;
    }
    while ( v4 < v5 );
LABEL_12:
    v4 = (__int64 *)a1[35];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  v9 = a1[33];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (void *)a1[4];
  *a1 = qword_1C7A350;
  if ( v10 )
    sub_186B220(v10);
  v11 = (void *)a1[1];
  if ( v11 )
    sub_186B220(v11);
  operator delete(a1, 0x178u);
}

