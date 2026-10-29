void __fastcall sub_E66770(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  _QWORD *v16; // rbp
  _QWORD *v17; // r13
  void *v18; // r12
  __int64 v19; // rdi
  __int64 v20; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_14B63F0(v1 + 2344);
    v2 = *(_QWORD *)(v1 + 2320);
    *(_QWORD *)(v1 + 1792) = &off_1C5D1B8;
    if ( v2 )
      sub_186B220((void *)(v2 - 8));
    sub_E65BA0(*(_QWORD *)(v1 + 2304), *(_QWORD *)(v1 + 2312));
    sub_E65BA0(*(_QWORD *)(v1 + 2288), *(_QWORD *)(v1 + 2296));
    sub_E65BC0(*(_QWORD *)(v1 + 2272), *(_QWORD *)(v1 + 2280));
    *(_QWORD *)(v1 + 2120) = &qword_1C637E8;
    sub_15841B0(v1 + 2120);
    *(_QWORD *)(v1 + 1960) = &qword_1C637E8;
    sub_15841B0(v1 + 1960);
    v3 = *(_QWORD *)(v1 + 1952);
    if ( v3 )
      sub_186B220((void *)(v3 - 8));
    sub_15841B0(v1 + 1792);
    v4 = *(void **)(v1 + 1784);
    if ( v4 )
      sub_186B220(v4);
    v5 = *(_QWORD *)(v1 + 1760);
    if ( v5 )
      sub_186B220((void *)(v5 - 8));
    sub_E6A820(v1 + 896);
    sub_18572D0((void *)(v1 + 888));
    sub_14B63F0(v1 + 872);
    v6 = *(__int64 **)(v1 + 728);
    v7 = &v6[*(unsigned int *)(v1 + 736)];
    if ( v6 < v7 )
    {
      do
      {
        while ( 1 )
        {
          v8 = *v6;
          if ( *v6 )
          {
            v9 = *(_QWORD *)(v1 + 720);
            if ( (*(_DWORD *)(v8 + 8))-- == 1 )
              break;
          }
          if ( ++v6 >= v7 )
            goto LABEL_16;
        }
        sub_15D7BC0(v9, v8);
        ++v6;
      }
      while ( v6 < v7 );
LABEL_16:
      v6 = *(__int64 **)(v1 + 728);
    }
    if ( v6 && v6 != (__int64 *)(v1 + 744) )
      sub_186B220(v6);
    v11 = *(_QWORD *)(v1 + 712);
    if ( v11 )
      sub_186B220((void *)(v11 - 8));
    v12 = *(_QWORD *)(v1 + 704);
    if ( v12 )
      sub_186B220((void *)(v12 - 8));
    v13 = *(_QWORD *)(v1 + 696);
    if ( v13 )
      sub_186B220((void *)(v13 - 8));
    v14 = *(_QWORD *)(v1 + 688);
    if ( v14 )
      sub_186B220((void *)(v14 - 8));
    v15 = *(_QWORD *)(v1 + 680);
    if ( v15 )
      sub_186B220((void *)(v15 - 8));
    v16 = *(_QWORD **)(v1 + 672);
    if ( v16 )
    {
      v17 = &v16[*((unsigned int *)v16 - 1)];
      if ( v16 == v17 )
      {
        v20 = *(_QWORD *)(v1 + 664);
        if ( v20 )
          *(_DWORD *)(v20 - 4) = 0;
      }
      else
      {
        do
        {
          v18 = (void *)*v16;
          if ( *v16 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 8LL))(*v16);
            sub_186B220(v18);
          }
          ++v16;
        }
        while ( v17 != v16 );
        v19 = *(_QWORD *)(v1 + 664);
        v16 = *(_QWORD **)(v1 + 672);
        if ( v19 )
          *(_DWORD *)(v19 - 4) = 0;
        if ( !v16 )
          goto LABEL_39;
      }
      *((_DWORD *)v16 - 1) = 0;
      sub_186B220(v16 - 1);
      v19 = *(_QWORD *)(v1 + 664);
    }
    else
    {
      v19 = *(_QWORD *)(v1 + 664);
      if ( !v19 )
      {
LABEL_41:
        sub_2334C0((__int64 *)(v1 + 648));
        sub_2334C0((__int64 *)(v1 + 632));
        *(_QWORD *)(v1 + 88) = &off_1C4CA80;
        sub_267D20((_QWORD *)(v1 + 88));
        sub_186B220((void *)v1);
        return;
      }
      *(_DWORD *)(v19 - 4) = 0;
    }
LABEL_39:
    if ( v19 )
      sub_186B220((void *)(v19 - 8));
    goto LABEL_41;
  }
}

