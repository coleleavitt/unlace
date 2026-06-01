__int64 *__fastcall sub_655E40(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 *v17; // rbp
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rdi
  void *v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rdi
  void *v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 v30; // rdi
  __int64 v31; // rdi
  void *v32; // rdi
  __int64 *v33; // rdi
  __int64 *v34; // rcx
  __int64 *result; // rax
  __int64 v36; // rdx
  void *v37; // rdi

  v2 = *(void **)(a1 + 1040);
  if ( v2 )
    sub_186B220(v2);
  v3 = *(void **)(a1 + 1000);
  if ( v3 )
    sub_186B220(v3);
  v4 = *(void **)(a1 + 992);
  if ( v4 )
    sub_186B220(v4);
  v5 = *(_QWORD *)(a1 + 944);
  *(_QWORD *)(a1 + 416) = &off_1C529E0;
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *(_QWORD *)(a1 + 928);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 936);
    v8 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v7, v6);
  }
  v9 = *(_QWORD *)(a1 + 912);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 920);
    v8 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v10, v9);
  }
  v11 = *(_QWORD *)(a1 + 896);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 904);
    v8 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v12, v11);
  }
  *(_QWORD *)(a1 + 744) = &qword_1C637E8;
  sub_15841B0(a1 + 744);
  *(_QWORD *)(a1 + 584) = &qword_1C637E8;
  sub_15841B0(a1 + 584);
  v13 = *(_QWORD *)(a1 + 576);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  sub_15841B0(a1 + 416);
  sub_E66770(a1 + 400);
  sub_657840(a1 + 392);
  v14 = *(_QWORD *)(a1 + 384);
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  sub_2334C0((__int64 *)(a1 + 368));
  v15 = *(_QWORD *)(a1 + 352);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 360);
    v8 = (*(_DWORD *)(v15 + 8))-- == 1;
    if ( v8 )
      sub_15D7BC0(v16, v15);
  }
  v17 = *(__int64 **)(a1 + 344);
  if ( v17 )
  {
    v18 = &v17[*((unsigned int *)v17 - 1)];
    if ( v17 >= v18 )
      goto LABEL_33;
    do
    {
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 )
        {
          v20 = *(_QWORD *)(a1 + 336);
          v8 = (*(_DWORD *)(v19 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v17 >= v18 )
          goto LABEL_32;
      }
      sub_15D7BC0(v20, v19);
      ++v17;
    }
    while ( v17 < v18 );
LABEL_32:
    v17 = *(__int64 **)(a1 + 344);
    if ( v17 )
LABEL_33:
      sub_186B220(v17 - 1);
  }
  v21 = *(_QWORD *)(a1 + 328);
  if ( v21 )
    sub_186B220((void *)(v21 - 8));
  v22 = *(_QWORD *)(a1 + 320);
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  v23 = *(void **)(a1 + 296);
  if ( v23 )
    sub_186B220(v23);
  v24 = *(_QWORD *)(a1 + 288);
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v25 = *(_QWORD *)(a1 + 272);
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = *(void **)(a1 + 248);
  if ( v26 )
    sub_186B220(v26);
  v27 = *(_QWORD *)(a1 + 240);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  v28 = *(_QWORD *)(a1 + 232);
  if ( v28 )
    sub_186B220((void *)(v28 - 8));
  v29 = *(_QWORD *)(a1 + 224);
  if ( v29 )
    sub_186B220((void *)(v29 - 8));
  v30 = *(_QWORD *)(a1 + 216);
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = *(_QWORD *)(a1 + 208);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(void **)(a1 + 184);
  if ( v32 )
    sub_186B220(v32);
  v33 = *(__int64 **)(a1 + 40);
  v34 = &v33[*(unsigned int *)(a1 + 48)];
  for ( result = v33; result != v34; *(_BYTE *)(v36 + 6) &= ~1u )
    v36 = *result++;
  *(_DWORD *)(a1 + 48) = 0;
  if ( v33 )
  {
    result = (__int64 *)(a1 + 56);
    if ( v33 != (__int64 *)(a1 + 56) )
      result = (__int64 *)sub_186B220(v33);
  }
  v37 = *(void **)(a1 + 16);
  if ( v37 )
    return (__int64 *)sub_186B220(v37);
  return result;
}

