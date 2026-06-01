void __fastcall sub_5FADC0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi

  *a1 = &off_1C52768;
  v2 = (void *)a1[12];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[9];
  if ( v3 )
    sub_186B220(v3);
  v4 = (__int64 *)a1[8];
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
          v7 = a1[7];
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
    v4 = (__int64 *)a1[8];
    if ( v4 )
LABEL_13:
      sub_186B220(v4 - 1);
  }
  operator delete(a1, 0x78u);
}

