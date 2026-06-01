__int64 __fastcall sub_E69AE0(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // r13
  void *v14; // rbp
  __int64 v15; // rdi
  __int64 v17; // rax

  sub_18572D0((void *)(a1 + 880));
  sub_14B63F0(a1 + 864);
  v2 = *(__int64 **)(a1 + 720);
  v3 = &v2[*(unsigned int *)(a1 + 728)];
  if ( v2 < v3 )
  {
    do
    {
      while ( 1 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          v5 = *(_QWORD *)(a1 + 712);
          if ( (*(_DWORD *)(v4 + 8))-- == 1 )
            break;
        }
        if ( ++v2 >= v3 )
          goto LABEL_7;
      }
      sub_15D7BC0(v5, v4);
      ++v2;
    }
    while ( v2 < v3 );
LABEL_7:
    v2 = *(__int64 **)(a1 + 720);
  }
  if ( v2 && v2 != (__int64 *)(a1 + 736) )
    sub_186B220(v2);
  v7 = *(_QWORD *)(a1 + 704);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD *)(a1 + 696);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 688);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 680);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(_QWORD *)(a1 + 672);
  if ( v11 )
    sub_186B220((void *)(v11 - 8));
  v12 = *(_QWORD **)(a1 + 664);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 == v13 )
    {
      v17 = *(_QWORD *)(a1 + 656);
      if ( v17 )
        *(_DWORD *)(v17 - 4) = 0;
    }
    else
    {
      do
      {
        v14 = (void *)*v12;
        if ( *v12 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*v12);
          sub_186B220(v14);
        }
        ++v12;
      }
      while ( v13 != v12 );
      v15 = *(_QWORD *)(a1 + 656);
      v12 = *(_QWORD **)(a1 + 664);
      if ( v15 )
        *(_DWORD *)(v15 - 4) = 0;
      if ( !v12 )
        goto LABEL_30;
    }
    *((_DWORD *)v12 - 1) = 0;
    sub_186B220(v12 - 1);
    v15 = *(_QWORD *)(a1 + 656);
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 656);
    if ( !v15 )
      goto LABEL_32;
    *(_DWORD *)(v15 - 4) = 0;
  }
LABEL_30:
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
LABEL_32:
  sub_2334C0((__int64 *)(a1 + 640));
  sub_2334C0((__int64 *)(a1 + 624));
  *(_QWORD *)(a1 + 80) = &off_1C4CA80;
  return sub_267D20((_QWORD *)(a1 + 80));
}

