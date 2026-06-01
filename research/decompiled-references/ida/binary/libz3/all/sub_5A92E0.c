void __fastcall sub_5A92E0(void *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  void (__fastcall ***v14)(_QWORD); // rbx

  v2 = *((__int64 **)a1 + 15);
  *(_QWORD *)a1 = &off_1C522D0;
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
          v5 = *((_QWORD *)a1 + 14);
          v6 = (*(_DWORD *)(v4 + 8))-- == 1;
          if ( v6 )
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
    v2 = *((__int64 **)a1 + 15);
    if ( v2 )
LABEL_9:
      sub_186B220(v2 - 1);
  }
  sub_568110(*((void (****)(void))a1 + 13));
  v7 = *((_QWORD *)a1 + 12);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  sub_4CFE00(*((void (****)(void))a1 + 11));
  v8 = *((_QWORD *)a1 + 10);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *((_QWORD *)a1 + 9);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *((_QWORD *)a1 + 8);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *((_QWORD *)a1 + 7);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *((_QWORD *)a1 + 5);
  if ( v12 )
  {
    v13 = *((_QWORD *)a1 + 6);
    v6 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v6 )
      sub_15D7BC0(v13, v12);
  }
  sub_4CF1F0(*((void (****)(void))a1 + 4));
  v14 = *((void (__fastcall ****)(_QWORD))a1 + 3);
  if ( v14 )
  {
    (**v14)(*((_QWORD *)a1 + 3));
    sub_186B220(v14);
  }
  operator delete(a1, 0x80u);
}

