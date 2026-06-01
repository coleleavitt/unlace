__int64 __fastcall sub_251920(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rbp
  void (__fastcall ***v6)(_QWORD); // r13
  __int64 v7; // rax
  void *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rdi
  __int64 v12; // rax
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rax
  void *v16; // rdi
  __int64 v17; // rsi
  __int64 *v18; // rbx
  __int64 *v19; // rbp
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  void *v27; // rdi
  void *v28; // rdi
  __int64 *v29; // rbx
  __int64 *v30; // rbp
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  void *v34; // rdi
  void *v35; // rdi
  void (__fastcall ***v36)(_QWORD); // rbx
  void *v37; // rbx
  void *v38; // rdi
  void *v39; // rdi
  void *v40; // rdi

  v2 = *(void **)(a1 + 1616);
  if ( v2 )
    sub_DC0360(v2);
  v3 = *(_QWORD *)(a1 + 1400);
  if ( v3 && !_InterlockedSub((volatile signed __int32 *)(v3 + 8), 1u) )
    sub_24F730(*(_QWORD *)(v3 + 16), (void (__fastcall ***)(void *, unsigned __int64, __int64, __int64))v3);
  *(_QWORD *)(a1 + 1400) = 0;
  sub_251050(a1);
  v4 = *(_QWORD *)(a1 + 1408);
  v5 = v4 + 24LL * *(unsigned int *)(a1 + 1416);
  if ( v4 != v5 )
  {
    while ( *(_DWORD *)(v4 + 4) != 2 )
    {
      v4 += 24;
      if ( v5 == v4 )
        goto LABEL_16;
    }
    while ( v5 != v4 )
    {
      v6 = *(void (__fastcall ****)(_QWORD))(v4 + 16);
      if ( v6 )
      {
        (**v6)(*(_QWORD *)(v4 + 16));
        sub_186B220(v6);
      }
      v7 = v4 + 24;
      if ( v5 == v4 + 24 )
        break;
      while ( 1 )
      {
        v4 = v7;
        if ( *(_DWORD *)(v7 + 4) == 2 )
          break;
        v7 += 24;
        if ( v5 == v7 )
          goto LABEL_16;
      }
    }
  }
LABEL_16:
  if ( *(_QWORD *)(a1 + 216) )
    *(_QWORD *)(a1 + 232) = 0;
  v8 = *(void **)(a1 + 3000);
  if ( v8 )
  {
    sub_16FCBC0(*(_QWORD *)(a1 + 3000));
    sub_186B220(v8);
  }
  sub_184C8D0((void *)(a1 + 2272));
  sub_177F420(a1 + 2264);
  sub_182EDF0(a1 + 1664);
  v9 = *(_QWORD *)(a1 + 1656);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 1648);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = *(void **)(a1 + 1584);
  if ( v11 != (void *)(a1 + 1600) && v11 )
    sub_186B220(v11);
  v12 = *(_QWORD *)(a1 + 1576);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *(void **)(a1 + 1536);
  if ( v13 != (void *)(a1 + 1552) )
    operator delete(v13, *(_QWORD *)(a1 + 1552) + 1LL);
  v14 = *(void **)(a1 + 1488);
  if ( v14 != (void *)(a1 + 1504) )
    operator delete(v14, *(_QWORD *)(a1 + 1504) + 1LL);
  v15 = *(_QWORD *)(a1 + 1432);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(void **)(a1 + 1408);
  if ( v16 )
    sub_186B220(v16);
  v17 = *(_QWORD *)(a1 + 1400);
  if ( v17 && !_InterlockedSub((volatile signed __int32 *)(v17 + 8), 1u) )
    sub_24F730(*(_QWORD *)(v17 + 16), (void (__fastcall ***)(void *, unsigned __int64, __int64, __int64))v17);
  v18 = *(__int64 **)(a1 + 1392);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          v21 = *(_QWORD *)(a1 + 1384);
          v22 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_47;
      }
      sub_15D7BC0(v21, v20);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_47:
    v18 = *(__int64 **)(a1 + 1392);
    if ( v18 )
LABEL_48:
      sub_186B220(v18 - 1);
  }
  v23 = *(_QWORD *)(a1 + 1376);
  if ( v23 )
    sub_186B220((void *)(v23 - 8));
  v24 = *(_QWORD *)(a1 + 1368);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(_QWORD *)(a1 + 1360);
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = *(_QWORD *)(a1 + 1352);
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v27 = *(void **)(a1 + 728);
  if ( v27 != (void *)(a1 + 744) )
    operator delete(v27, *(_QWORD *)(a1 + 744) + 1LL);
  v28 = *(void **)(a1 + 696);
  if ( v28 != (void *)(a1 + 712) )
    operator delete(v28, *(_QWORD *)(a1 + 712) + 1LL);
  v29 = *(__int64 **)(a1 + 528);
  if ( v29 )
  {
    v30 = &v29[*((unsigned int *)v29 - 1)];
    if ( v29 >= v30 )
      goto LABEL_69;
    do
    {
      while ( 1 )
      {
        v31 = *v29;
        if ( *v29 )
        {
          v32 = *(_QWORD *)(a1 + 520);
          v22 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v22 )
            break;
        }
        if ( ++v29 >= v30 )
          goto LABEL_68;
      }
      sub_15D7BC0(v32, v31);
      ++v29;
    }
    while ( v29 < v30 );
LABEL_68:
    v29 = *(__int64 **)(a1 + 528);
    if ( v29 )
LABEL_69:
      sub_186B220(v29 - 1);
  }
  v33 = *(_QWORD *)(a1 + 512);
  if ( v33 )
    sub_186B220((void *)(v33 - 8));
  v34 = *(void **)(a1 + 352);
  if ( v34 )
    sub_186B220(v34);
  v35 = *(void **)(a1 + 344);
  if ( v35 )
    sub_186B220(v35);
  v36 = *(void (__fastcall ****)(_QWORD))(a1 + 240);
  if ( v36 )
  {
    (**v36)(*(_QWORD *)(a1 + 240));
    sub_186B220(v36);
  }
  v37 = *(void **)(a1 + 232);
  if ( v37 )
  {
    sub_15D95C0(*(_QWORD *)(a1 + 232));
    sub_186B220(v37);
  }
  v38 = *(void **)(a1 + 184);
  if ( v38 != (void *)(a1 + 200) )
    operator delete(v38, *(_QWORD *)(a1 + 200) + 1LL);
  v39 = *(void **)(a1 + 136);
  if ( v39 != (void *)(a1 + 152) )
    operator delete(v39, *(_QWORD *)(a1 + 152) + 1LL);
  v40 = *(void **)(a1 + 104);
  if ( v40 != (void *)(a1 + 120) )
    operator delete(v40, *(_QWORD *)(a1 + 120) + 1LL);
  return sub_DEC3C0(a1);
}

