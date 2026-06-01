void __fastcall sub_E66B10(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  __int64 v6; // rdi
  __int64 *v7; // rbp
  __int64 *v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  _QWORD *v17; // rbp
  _QWORD *v18; // r14
  void *v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rax

  v2 = a1[5];
  *a1 = &off_1C5D1F8;
  if ( v2 )
  {
    sub_14B63F0(v2 + 2344);
    v3 = *(_QWORD *)(v2 + 2320);
    *(_QWORD *)(v2 + 1792) = &off_1C5D1B8;
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    sub_E65BA0(*(_QWORD *)(v2 + 2304), *(_QWORD *)(v2 + 2312));
    sub_E65BA0(*(_QWORD *)(v2 + 2288), *(_QWORD *)(v2 + 2296));
    sub_E65BC0(*(_QWORD *)(v2 + 2272), *(_QWORD *)(v2 + 2280));
    *(_QWORD *)(v2 + 2120) = &qword_1C637E8;
    sub_15841B0(v2 + 2120);
    *(_QWORD *)(v2 + 1960) = &qword_1C637E8;
    sub_15841B0(v2 + 1960);
    v4 = *(_QWORD *)(v2 + 1952);
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    sub_15841B0(v2 + 1792);
    v5 = *(void **)(v2 + 1784);
    if ( v5 )
      sub_186B220(v5);
    v6 = *(_QWORD *)(v2 + 1760);
    if ( v6 )
      sub_186B220((void *)(v6 - 8));
    sub_E6A820(v2 + 896);
    sub_18572D0((void *)(v2 + 888));
    sub_14B63F0(v2 + 872);
    v7 = *(__int64 **)(v2 + 728);
    v8 = &v7[*(unsigned int *)(v2 + 736)];
    if ( v7 < v8 )
    {
      do
      {
        while ( 1 )
        {
          v9 = *v7;
          if ( *v7 )
          {
            v10 = *(_QWORD *)(v2 + 720);
            if ( (*(_DWORD *)(v9 + 8))-- == 1 )
              break;
          }
          if ( ++v7 >= v8 )
            goto LABEL_16;
        }
        sub_15D7BC0(v10, v9);
        ++v7;
      }
      while ( v7 < v8 );
LABEL_16:
      v7 = *(__int64 **)(v2 + 728);
    }
    if ( v7 && v7 != (__int64 *)(v2 + 744) )
      sub_186B220(v7);
    v12 = *(_QWORD *)(v2 + 712);
    if ( v12 )
      sub_186B220((void *)(v12 - 8));
    v13 = *(_QWORD *)(v2 + 704);
    if ( v13 )
      sub_186B220((void *)(v13 - 8));
    v14 = *(_QWORD *)(v2 + 696);
    if ( v14 )
      sub_186B220((void *)(v14 - 8));
    v15 = *(_QWORD *)(v2 + 688);
    if ( v15 )
      sub_186B220((void *)(v15 - 8));
    v16 = *(_QWORD *)(v2 + 680);
    if ( v16 )
      sub_186B220((void *)(v16 - 8));
    v17 = *(_QWORD **)(v2 + 672);
    if ( v17 )
    {
      v18 = &v17[*((unsigned int *)v17 - 1)];
      if ( v17 == v18 )
      {
        v21 = *(_QWORD *)(v2 + 664);
        if ( v21 )
          *(_DWORD *)(v21 - 4) = 0;
      }
      else
      {
        do
        {
          v19 = (void *)*v17;
          if ( *v17 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(*v17);
            sub_186B220(v19);
          }
          ++v17;
        }
        while ( v18 != v17 );
        v20 = *(_QWORD *)(v2 + 664);
        v17 = *(_QWORD **)(v2 + 672);
        if ( v20 )
          *(_DWORD *)(v20 - 4) = 0;
        if ( !v17 )
          goto LABEL_39;
      }
      *((_DWORD *)v17 - 1) = 0;
      sub_186B220(v17 - 1);
      v20 = *(_QWORD *)(v2 + 664);
    }
    else
    {
      v20 = *(_QWORD *)(v2 + 664);
      if ( !v20 )
      {
LABEL_41:
        sub_2334C0((__int64 *)(v2 + 648));
        sub_2334C0((__int64 *)(v2 + 632));
        *(_QWORD *)(v2 + 88) = &off_1C4CA80;
        sub_267D20((_QWORD *)(v2 + 88));
        sub_186B220((void *)v2);
        goto LABEL_42;
      }
      *(_DWORD *)(v20 - 4) = 0;
    }
LABEL_39:
    if ( v20 )
      sub_186B220((void *)(v20 - 8));
    goto LABEL_41;
  }
LABEL_42:
  sub_18572D0(a1 + 4);
}

