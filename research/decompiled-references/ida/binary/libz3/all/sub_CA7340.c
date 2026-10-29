__int64 __fastcall sub_CA7340(__int64 a1)
{
  __int64 v2; // r13
  _QWORD *v3; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  bool v7; // zf
  _QWORD *v8; // rax
  __int64 v9; // rsi
  void *v10; // rdi
  _QWORD *v11; // rdx
  int v12; // ecx
  unsigned int v13; // ebp
  size_t v14; // rbx
  _OWORD *v15; // rdx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned int *v26; // rsi
  void *v27; // rdi
  void *v28; // rdi
  void *v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r15
  void *v37; // r14
  __int64 v38; // rsi
  __int64 *v39; // rdi
  __int64 *v40; // rcx
  __int64 *i; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  size_t v48; // rsi

  sub_CA7120(*(_QWORD *)a1, *(_QWORD *)a1, a1 + 504);
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD **)(a1 + 528);
  v4 = &v3[2 * *(unsigned int *)(a1 + 536)];
  v5 = v3;
  if ( v3 == v4 )
  {
    if ( *(_DWORD *)(a1 + 540) )
      goto LABEL_29;
  }
  else
  {
    while ( *v5 <= 1u )
    {
      v5 += 2;
      if ( v4 == v5 )
        goto LABEL_79;
    }
    if ( v4 == v5 )
    {
LABEL_79:
      if ( !*(_DWORD *)(a1 + 540) )
        goto LABEL_15;
      v10 = *(void **)(a1 + 528);
      v9 = *(unsigned int *)(a1 + 536);
      v11 = &v3[2 * v9];
      goto LABEL_17;
    }
    do
    {
      v6 = v5[1];
      if ( v6 )
      {
        v7 = (*(_DWORD *)(v6 + 8))-- == 1;
        if ( v7 )
          sub_15D7BC0(v2, v6);
      }
      v8 = v5 + 2;
      if ( v4 == v5 + 2 )
        break;
      while ( 1 )
      {
        v5 = v8;
        if ( *v8 > 1u )
          break;
        v8 += 2;
        if ( v4 == v8 )
          goto LABEL_14;
      }
    }
    while ( v4 != v8 );
LABEL_14:
    if ( *(_DWORD *)(a1 + 540) )
      goto LABEL_16;
  }
LABEL_15:
  if ( *(_DWORD *)(a1 + 544) )
  {
LABEL_16:
    v3 = *(_QWORD **)(a1 + 528);
    v9 = *(unsigned int *)(a1 + 536);
    v10 = v3;
    v11 = &v3[2 * v9];
    if ( v3 == v11 )
    {
LABEL_29:
      *(_QWORD *)(a1 + 540) = 0;
      goto LABEL_30;
    }
LABEL_17:
    v12 = 0;
    do
    {
      while ( *v3 )
      {
        *v3 = 0;
        v3 += 2;
        if ( v3 == v11 )
          goto LABEL_21;
      }
      v3 += 2;
      ++v12;
    }
    while ( v3 != v11 );
LABEL_21:
    if ( (unsigned int)v9 <= 0x10 || 3 * (int)v9 >= (unsigned int)(4 * v12) )
      goto LABEL_29;
    if ( v10 )
    {
      sub_186B220(v10);
      v13 = *(_DWORD *)(a1 + 536);
      *(_QWORD *)(a1 + 528) = 0;
      v13 >>= 1;
      *(_DWORD *)(a1 + 536) = v13;
      v14 = v13;
      v15 = (_OWORD *)sub_186B270(v14 * 16);
      if ( !v13 )
      {
LABEL_28:
        *(_QWORD *)(a1 + 528) = v15;
        goto LABEL_29;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 528) = 0;
      v48 = (unsigned int)v9 >> 1;
      *(_DWORD *)(a1 + 536) = v48;
      v14 = v48;
      v15 = (_OWORD *)sub_186B270(16 * v48);
    }
    v16 = &v15[v14];
    v17 = v15;
    if ( ((v14 * 16) & 0x10) == 0 || (v17 = v15 + 1, *v15 = 0, v15 + 1 != v16) )
    {
      do
      {
        *v17 = 0;
        v17 += 2;
        *(v17 - 1) = 0;
      }
      while ( v17 != v16 );
    }
    goto LABEL_28;
  }
LABEL_30:
  sub_1584740(a1 + 584);
  v18 = *(_QWORD *)(a1 + 744);
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  v19 = *(_QWORD *)(a1 + 1112);
  if ( v19 )
    *(_DWORD *)(v19 - 4) = 0;
  sub_1584740(a1 + 752);
  sub_1584740(a1 + 912);
  sub_F73E80(a1 + 8);
  v20 = *(_QWORD **)(a1 + 560);
  if ( v20 )
  {
    v21 = &v20[*((unsigned int *)v20 - 1)];
    if ( v20 >= v21 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = *(_QWORD *)(a1 + 552);
          v7 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v7 )
            break;
        }
        if ( ++v20 >= v21 )
          goto LABEL_41;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( v20 < v21 );
LABEL_41:
    v20 = *(_QWORD **)(a1 + 560);
    if ( v20 )
LABEL_42:
      *((_DWORD *)v20 - 1) = 0;
  }
  v24 = *(_QWORD *)(a1 + 1136);
  *(_QWORD *)(a1 + 584) = &off_1C591A0;
  if ( v24 )
  {
    v25 = *(_QWORD *)(a1 + 1144);
    v7 = (*(_DWORD *)(v24 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v25, v24);
  }
  sub_C9F5F0((_QWORD *)(a1 + 584));
  v26 = *(unsigned int **)(a1 + 568);
  if ( v26 )
    sub_234C20((__int64 *)(*(_QWORD *)(a1 + 576) + 648LL), v26);
  sub_2334C0((__int64 *)(a1 + 552));
  v27 = *(void **)(a1 + 528);
  if ( v27 )
    sub_186B220(v27);
  v28 = *(void **)(a1 + 504);
  if ( v28 )
    sub_186B220(v28);
  sub_37DDC0((_QWORD *)(a1 + 464));
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 432);
  sub_182CBA0(v29, a1 + 448);
  v30 = *(_QWORD *)(a1 + 424);
  if ( v30 )
  {
    v31 = *(unsigned int *)(v30 - 4);
    if ( (_DWORD)v31 )
    {
      v32 = v30 + 16 * v31;
      do
      {
        v33 = v30;
        v30 += 16;
        sub_15D0DF0(v33);
      }
      while ( v30 != v32 );
      v30 = *(_QWORD *)(a1 + 424);
    }
    sub_186B220((void *)(v30 - 8));
  }
  v34 = *(_QWORD *)(a1 + 416);
  if ( v34 )
  {
    v35 = *(unsigned int *)(v34 - 4);
    if ( (_DWORD)v35 )
    {
      v36 = v34 + 32 * v35;
      do
      {
        v37 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v34);
        v38 = v34 + 16;
        v34 += 32;
        sub_182CBA0(v37, v38);
      }
      while ( v36 != v34 );
      v34 = *(_QWORD *)(a1 + 416);
    }
    sub_186B220((void *)(v34 - 8));
  }
  sub_1474080(a1 + 352);
  v39 = *(__int64 **)(a1 + 208);
  v40 = &v39[*(unsigned int *)(a1 + 216)];
  for ( i = v39; i != v40; *(_BYTE *)(v42 + 6) &= ~1u )
    v42 = *i++;
  *(_DWORD *)(a1 + 216) = 0;
  if ( v39 != (__int64 *)(a1 + 224) && v39 )
    sub_186B220(v39);
  v43 = *(_QWORD *)(a1 + 200);
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  v44 = *(_QWORD *)(a1 + 192);
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = *(_QWORD *)(a1 + 184);
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  v46 = *(_QWORD *)(a1 + 176);
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  return sub_F74720(a1 + 8);
}

