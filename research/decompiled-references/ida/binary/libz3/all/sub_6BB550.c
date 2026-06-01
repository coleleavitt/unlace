__int64 *__fastcall sub_6BB550(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void (__fastcall ***v12)(_QWORD); // rbp
  _QWORD *v13; // rbp
  __int64 v14; // rax
  _QWORD *v15; // r12
  void *v16; // rdi
  char *v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  char *v20; // r12
  __int64 v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  __int64 v24; // rdi

  *(_QWORD *)a1 = &off_1C52F58;
  sub_6BAEC0(a1);
  v2 = *(_QWORD *)(a1 + 1296);
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  sub_2334C0((__int64 *)(a1 + 1280));
  v3 = *(_QWORD *)(a1 + 1272);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(void **)(a1 + 1248);
  if ( v4 )
    sub_186B220(v4);
  v5 = *(void **)(a1 + 1216);
  *(_QWORD *)(a1 + 1168) = &off_1C62200;
  if ( v5 )
    sub_186B220(v5);
  v6 = *(void **)(a1 + 1192);
  if ( v6 )
    sub_186B220(v6);
  v7 = *(_QWORD *)(a1 + 1160);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  sub_39A7A0(a1 + 928);
  v8 = *(_QWORD *)(a1 + 920);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 912);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  sub_2334C0((__int64 *)(a1 + 896));
  sub_2334C0((__int64 *)(a1 + 880));
  v10 = *(void **)(a1 + 856);
  if ( v10 )
    sub_186B220(v10);
  v11 = *(void **)(a1 + 832);
  if ( v11 )
    sub_186B220(v11);
  v12 = *(void (__fastcall ****)(_QWORD))(a1 + 824);
  if ( v12 )
  {
    (**v12)(*(_QWORD *)(a1 + 824));
    sub_186B220(v12);
  }
  sub_14B63F0(a1 + 808);
  sub_2B4F40((__int64 *)(a1 + 744));
  v13 = *(_QWORD **)(a1 + 736);
  if ( v13 )
  {
    v14 = *((unsigned int *)v13 - 1);
    if ( (_DWORD)v14 )
    {
      v15 = &v13[v14];
      do
      {
        while ( *v13 )
        {
          v16 = (void *)(*v13++ - 8LL);
          sub_186B220(v16);
          if ( v15 == v13 )
          {
            v13 = *(_QWORD **)(a1 + 736);
            goto LABEL_29;
          }
        }
        ++v13;
      }
      while ( v15 != v13 );
      v13 = *(_QWORD **)(a1 + 736);
    }
LABEL_29:
    sub_186B220(v13 - 1);
  }
  sub_6B1000(a1 + 496);
  v17 = *(char **)(a1 + 472);
  if ( v17 )
  {
    v18 = *(unsigned int *)(a1 + 480);
    if ( (_DWORD)v18 )
    {
      v19 = *(_QWORD *)(a1 + 472);
      v20 = &v17[16 * v18];
      do
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(v19 + 8);
          if ( !v21 )
            break;
          v19 += 16;
          sub_186B220((void *)(v21 - 8));
          if ( v20 == (char *)v19 )
            goto LABEL_35;
        }
        v19 += 16;
      }
      while ( v20 != (char *)v19 );
    }
LABEL_35:
    sub_186B220(v17);
  }
  v22 = *(void **)(a1 + 448);
  if ( v22 )
    sub_186B220(v22);
  v23 = *(void **)(a1 + 424);
  if ( v23 )
    sub_186B220(v23);
  sub_6A99C0(*(_QWORD *)(a1 + 408), *(_QWORD *)(a1 + 416));
  sub_6A99C0(*(_QWORD *)(a1 + 392), *(_QWORD *)(a1 + 400));
  sub_2B4F40((__int64 *)(a1 + 376));
  sub_2B4F40((__int64 *)(a1 + 360));
  v24 = *(_QWORD *)(a1 + 352);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  sub_39A7A0(a1 + 128);
  sub_2334C0((__int64 *)(a1 + 112));
  sub_8E4B60(a1 + 80);
  sub_14B63F0(a1 + 64);
  return sub_6AA340((_QWORD *)a1);
}

