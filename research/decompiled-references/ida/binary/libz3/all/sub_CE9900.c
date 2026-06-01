void __fastcall sub_CE9900(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi

  *a1 = &off_1C59990;
  v2 = a1[12];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[11];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[10];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[9];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = a1[8];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[7];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = (__int64 *)a1[6];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_21;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a1[5];
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_20;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_20:
    v8 = (__int64 *)a1[6];
    if ( v8 )
LABEL_21:
      sub_186B220(v8 - 1);
  }
  sub_18572D0(a1 + 3);
  operator delete(a1, 0x68u);
}

