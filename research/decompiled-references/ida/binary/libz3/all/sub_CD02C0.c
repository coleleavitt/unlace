void __fastcall sub_CD02C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  void *v8; // rdi

  *a1 = &off_1C59598;
  v2 = a1[8];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (__int64 *)a1[7];
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
          v6 = a1[6];
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
    v3 = (__int64 *)a1[7];
    if ( v3 )
LABEL_11:
      sub_186B220(v3 - 1);
  }
  v8 = (void *)a1[3];
  if ( v8 )
    sub_186B220(v8);
  operator delete(a1, 0x48u);
}

