__int64 __fastcall sub_E53BC0(__int64 a1)
{
  void (__fastcall ***v2)(void *); // rbp
  bool v3; // zf
  __int64 v4; // rsi
  __int64 v5; // rdi
  void (__fastcall ***v6)(void *); // rbp
  __int64 v7; // rdi
  _QWORD *v8; // rbp
  void *v9; // rdi
  void *v10; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 *v12; // rbp
  unsigned __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned __int64 *v18; // rbp
  unsigned __int64 *v19; // r12
  __int64 v20; // rdi
  unsigned __int64 *v21; // rbp
  unsigned __int64 *v22; // r12
  __int64 v23; // rdi
  void (__fastcall ***v24)(void *, unsigned __int64); // rbp
  unsigned __int64 *v25; // rbp
  unsigned __int64 *v26; // r12
  __int64 v27; // rdi
  _QWORD *v28; // rbp
  _QWORD *v29; // r13
  void (__fastcall ***v30)(_QWORD, unsigned __int64); // r12
  __int64 v31; // rdi
  __int64 v32; // rdi
  unsigned __int64 *v33; // rbp
  unsigned __int64 *v34; // r12
  __int64 v35; // rdi
  void *v36; // rdi
  void *v37; // rdi
  __int64 *v38; // rbp
  __int64 v39; // rax
  __int64 *v40; // r12
  __int64 *v41; // rdi
  void (__fastcall ***v42)(void *, unsigned __int64); // rbp
  void (__fastcall ***v43)(void *, unsigned __int64); // rbp
  __int64 result; // rax
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 *v47; // rbp
  __int64 *v48; // r12
  __int64 v49; // rsi
  __int64 v50; // rdi

  v2 = *(void (__fastcall ****)(void *))(a1 + 648);
  *(_QWORD *)a1 = &off_1C76D30;
  *(_QWORD *)(a1 + 72) = off_1C76F18;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  v4 = *(_QWORD *)(a1 + 632);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 640);
    v3 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v3 )
      sub_15D7BC0(v5, v4);
  }
  v6 = *(void (__fastcall ****)(void *))(a1 + 624);
  if ( v6 )
  {
    v3 = (*((_DWORD *)v6 + 4))-- == 1;
    if ( v3 )
    {
      (**v6)(v6);
      sub_186B220(v6);
    }
  }
  v7 = *(_QWORD *)(a1 + 616);
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = *(_QWORD **)(a1 + 576);
  while ( v8 )
  {
    v9 = v8;
    v8 = (_QWORD *)*v8;
    operator delete(v9, 0x18u);
  }
  memset(*(void **)(a1 + 560), 0, 8LL * *(_QWORD *)(a1 + 568));
  v10 = *(void **)(a1 + 560);
  *(_QWORD *)(a1 + 584) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  v11 = *(_QWORD *)(a1 + 568);
  if ( v10 != (void *)(a1 + 608) )
  {
    v11 *= 8LL;
    operator delete(v10, v11);
  }
  v12 = *(unsigned __int64 **)(a1 + 552);
  if ( v12 )
  {
    v13 = &v12[*((unsigned int *)v12 - 1)];
    if ( v12 >= v13 )
      goto LABEL_24;
    do
    {
      while ( 1 )
      {
        v11 = *v12;
        if ( *v12 )
        {
          v14 = *(_QWORD *)(a1 + 544);
          v3 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v12 >= v13 )
          goto LABEL_23;
      }
      sub_15D7BC0(v14, v11);
      ++v12;
    }
    while ( v12 < v13 );
LABEL_23:
    v12 = *(unsigned __int64 **)(a1 + 552);
    if ( v12 )
LABEL_24:
      sub_186B220(v12 - 1);
  }
  v15 = *(_QWORD *)(a1 + 536);
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = *(_QWORD *)(a1 + 528);
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = *(_QWORD *)(a1 + 520);
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  v18 = *(unsigned __int64 **)(a1 + 512);
  if ( v18 )
  {
    v19 = &v18[*((unsigned int *)v18 - 1)];
    if ( v18 >= v19 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v11 = *v18;
        if ( *v18 )
        {
          v20 = *(_QWORD *)(a1 + 504);
          v3 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v18 >= v19 )
          goto LABEL_38;
      }
      sub_15D7BC0(v20, v11);
      ++v18;
    }
    while ( v18 < v19 );
LABEL_38:
    v18 = *(unsigned __int64 **)(a1 + 512);
    if ( v18 )
LABEL_39:
      sub_186B220(v18 - 1);
  }
  v21 = *(unsigned __int64 **)(a1 + 496);
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_48;
    do
    {
      while ( 1 )
      {
        v11 = *v21;
        if ( *v21 )
        {
          v23 = *(_QWORD *)(a1 + 488);
          v3 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_47;
      }
      sub_15D7BC0(v23, v11);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_47:
    v21 = *(unsigned __int64 **)(a1 + 496);
    if ( v21 )
LABEL_48:
      sub_186B220(v21 - 1);
  }
  v24 = *(void (__fastcall ****)(void *, unsigned __int64))(a1 + 464);
  if ( v24 )
  {
    v3 = (*((_DWORD *)v24 + 2))-- == 1;
    if ( v3 )
    {
      (**v24)(v24, v11);
      sub_186B220(v24);
    }
  }
  v25 = *(unsigned __int64 **)(a1 + 456);
  if ( v25 )
  {
    v26 = &v25[*((unsigned int *)v25 - 1)];
    if ( v25 >= v26 )
      goto LABEL_60;
    do
    {
      while ( 1 )
      {
        v11 = *v25;
        if ( *v25 )
        {
          v27 = *(_QWORD *)(a1 + 448);
          v3 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v25 >= v26 )
          goto LABEL_59;
      }
      sub_15D7BC0(v27, v11);
      ++v25;
    }
    while ( v25 < v26 );
LABEL_59:
    v25 = *(unsigned __int64 **)(a1 + 456);
    if ( v25 )
LABEL_60:
      sub_186B220(v25 - 1);
  }
  v28 = *(_QWORD **)(a1 + 432);
  *(_QWORD *)(a1 + 400) = &off_1C4C960;
  if ( v28 )
  {
    v29 = &v28[*((unsigned int *)v28 - 1)];
    if ( v28 == v29 )
      goto LABEL_67;
    do
    {
      v30 = (void (__fastcall ***)(_QWORD, unsigned __int64))*v28;
      if ( *v28 )
      {
        (**v30)(*v28, v11);
        sub_186B220(v30);
      }
      ++v28;
    }
    while ( v29 != v28 );
    v29 = *(_QWORD **)(a1 + 432);
    if ( v29 )
    {
LABEL_67:
      *((_DWORD *)v29 - 1) = 0;
      sub_186B220(v29 - 1);
    }
  }
  *(_QWORD *)(a1 + 120) = &off_1C5CE80;
  sub_E53360((_QWORD *)(a1 + 288));
  *(_QWORD *)(a1 + 120) = qword_1C63778;
  sub_180C0E0(a1 + 240);
  v31 = *(_QWORD *)(a1 + 232);
  if ( v31 )
    sub_186B220((void *)(v31 - 8));
  v32 = *(_QWORD *)(a1 + 224);
  if ( v32 )
    sub_186B220((void *)(v32 - 8));
  v33 = *(unsigned __int64 **)(a1 + 216);
  if ( v33 )
  {
    v34 = &v33[*((unsigned int *)v33 - 1)];
    if ( v33 >= v34 )
      goto LABEL_80;
    do
    {
      while ( 1 )
      {
        v11 = *v33;
        if ( *v33 )
        {
          v35 = *(_QWORD *)(a1 + 208);
          v3 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v33 >= v34 )
          goto LABEL_79;
      }
      sub_15D7BC0(v35, v11);
      ++v33;
    }
    while ( v33 < v34 );
LABEL_79:
    v33 = *(unsigned __int64 **)(a1 + 216);
    if ( v33 )
LABEL_80:
      sub_186B220(v33 - 1);
  }
  v36 = *(void **)(a1 + 200);
  *(_QWORD *)(a1 + 152) = &off_1C62200;
  if ( v36 )
    sub_186B220(v36);
  v37 = *(void **)(a1 + 176);
  if ( v37 )
    sub_186B220(v37);
  v38 = *(__int64 **)(a1 + 112);
  if ( v38 )
  {
    v39 = *((unsigned int *)v38 - 1);
    if ( (_DWORD)v39 )
    {
      v40 = &v38[4 * v39];
      do
      {
        v41 = v38;
        v38 += 4;
        sub_234F80(v41);
      }
      while ( v38 != v40 );
      v38 = *(__int64 **)(a1 + 112);
    }
    sub_186B220(v38 - 1);
  }
  v42 = *(void (__fastcall ****)(void *, unsigned __int64))(a1 + 104);
  if ( v42 )
  {
    v3 = (*((_DWORD *)v42 + 12))-- == 1;
    if ( v3 )
    {
      (**v42)(v42, v11);
      sub_186B220(v42);
    }
  }
  *(_QWORD *)(a1 + 72) = qword_1C77178;
  *(_QWORD *)a1 = qword_1C76FE8;
  sub_18572D0((void *)(a1 + 80));
  v43 = *(void (__fastcall ****)(void *, unsigned __int64))(a1 + 56);
  result = (__int64)qword_1C63FB0;
  *(_QWORD *)a1 = qword_1C63FB0;
  if ( v43 )
  {
    v3 = (*((_DWORD *)v43 + 2))-- == 1;
    if ( v3 )
    {
      (**v43)(v43, v11);
      result = sub_186B220(v43);
    }
  }
  v45 = *(_QWORD *)(a1 + 32);
  if ( v45 )
  {
    v46 = *(_QWORD *)(a1 + 40);
    v3 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v3 )
      result = sub_15D7BC0(v46, v45);
  }
  v47 = *(__int64 **)(a1 + 24);
  if ( v47 )
  {
    result = *((unsigned int *)v47 - 1);
    v48 = &v47[result];
    if ( v47 >= v48 )
      return sub_186B220(v47 - 1);
    do
    {
      while ( 1 )
      {
        v49 = *v47;
        if ( *v47 )
        {
          v50 = *(_QWORD *)(a1 + 16);
          v3 = (*(_DWORD *)(v49 + 8))-- == 1;
          if ( v3 )
            break;
        }
        if ( ++v47 >= v48 )
          goto LABEL_107;
      }
      result = sub_15D7BC0(v50, v49);
      ++v47;
    }
    while ( v47 < v48 );
LABEL_107:
    v47 = *(__int64 **)(a1 + 24);
    if ( v47 )
      return sub_186B220(v47 - 1);
  }
  return result;
}

