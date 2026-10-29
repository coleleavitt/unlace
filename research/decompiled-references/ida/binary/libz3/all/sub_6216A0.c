void __fastcall sub_6216A0(_QWORD *a1)
{
  void *v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi

  *a1 = &off_1C68978;
  v2 = (void *)a1[9];
  if ( v2 )
    sub_186B220(v2);
  v3 = (__int64 *)a1[6];
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = *v3;
        if ( *v3 )
        {
          v6 = a1[5];
          if ( (*(_DWORD *)(v5 + 8))-- == 1 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      sub_15D7BC0(v6, v5);
      ++v3;
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = (__int64 *)a1[6];
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  operator delete(a1, 0x60u);
}

