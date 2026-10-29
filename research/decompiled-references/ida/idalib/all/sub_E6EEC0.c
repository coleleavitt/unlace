__int64 __fastcall sub_E6EEC0(
        __int64 a1,
        char a2,
        char a3,
        const void *a4,
        size_t a5,
        __int64 a6,
        void *a7,
        size_t a8,
        char a9,
        void *src,
        size_t n)
{
  _BYTE *v15; // rcx
  _BYTE *v16; // rdx
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  _BYTE *v19; // rdi
  unsigned __int64 v20; // rax
  _BYTE *v21; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  _BYTE *v25; // rdi
  __int64 v26; // r13
  _BYTE *v27; // rax

  v15 = *(_BYTE **)(a1 + 24);
  v16 = *(_BYTE **)(a1 + 32);
  if ( a2 )
  {
    if ( v15 == v16 )
    {
      sub_227BF10(a1, &byte_22F0C2F, 1);
      v16 = *(_BYTE **)(a1 + 32);
    }
    else
    {
      *v16 = 1;
      v16 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 1LL);
      *(_QWORD *)(a1 + 32) = v16;
    }
    v15 = *(_BYTE **)(a1 + 24);
  }
  if ( v16 >= v15 )
  {
    sub_227BA10(a1, a3 == 0 ? 43 : 45);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v16 + 1;
    *v16 = a3 == 0 ? 43 : 45;
  }
  v17 = *(_BYTE **)(a1 + 32);
  if ( (unsigned __int64)v17 >= *(_QWORD *)(a1 + 24) )
  {
    sub_227BA10(a1, 91);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = v17 + 1;
    *v17 = 91;
  }
  v18 = *(_BYTE **)(a1 + 24);
  v19 = *(_BYTE **)(a1 + 32);
  if ( *(_QWORD *)(a1 + 24) - (_QWORD)v19 < a5 )
  {
    sub_227BF10(a1, a4, a5);
    v18 = *(_BYTE **)(a1 + 24);
    v19 = *(_BYTE **)(a1 + 32);
LABEL_8:
    if ( !a9 )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( !a5 )
    goto LABEL_8;
  memcpy(v19, a4, a5);
  v18 = *(_BYTE **)(a1 + 24);
  v19 = (_BYTE *)(a5 + *(_QWORD *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = v19;
  if ( !a9 )
  {
LABEL_9:
    if ( v19 == v18 )
      goto LABEL_10;
    goto LABEL_25;
  }
LABEL_17:
  if ( v19 == v18 )
  {
    v24 = sub_227BF10(a1, "(", 1);
    v25 = *(_BYTE **)(v24 + 32);
    v26 = v24;
  }
  else
  {
    *v19 = 40;
    v26 = a1;
    v25 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 1LL);
    *(_QWORD *)(a1 + 32) = v25;
  }
  v27 = *(_BYTE **)(v26 + 24);
  if ( v27 - v25 < a8 )
  {
    v26 = sub_227BF10(v26, a7, a8);
    v25 = *(_BYTE **)(v26 + 32);
    if ( v25 == *(_BYTE **)(v26 + 24) )
    {
LABEL_23:
      sub_227BF10(v26, ")", 1);
      goto LABEL_24;
    }
  }
  else
  {
    if ( a8 )
    {
      memcpy(v25, a7, a8);
      v27 = *(_BYTE **)(v26 + 24);
      v25 = (_BYTE *)(a8 + *(_QWORD *)(v26 + 32));
      *(_QWORD *)(v26 + 32) = v25;
    }
    if ( v25 == v27 )
      goto LABEL_23;
  }
  *v25 = 41;
  ++*(_QWORD *)(v26 + 32);
LABEL_24:
  v19 = *(_BYTE **)(a1 + 32);
  if ( v19 == *(_BYTE **)(a1 + 24) )
  {
LABEL_10:
    sub_227BF10(a1, " ", 1);
    v20 = *(_QWORD *)(a1 + 24);
    v21 = *(_BYTE **)(a1 + 32);
    if ( n <= v20 - (unsigned __int64)v21 )
      goto LABEL_11;
LABEL_26:
    sub_227BF10(a1, src, n);
    v21 = *(_BYTE **)(a1 + 32);
    v20 = *(_QWORD *)(a1 + 24);
    goto LABEL_12;
  }
LABEL_25:
  *v19 = 32;
  v21 = (_BYTE *)(*(_QWORD *)(a1 + 32) + 1LL);
  v20 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v21;
  if ( n > v20 - (unsigned __int64)v21 )
    goto LABEL_26;
LABEL_11:
  if ( n )
  {
    memcpy(v21, src, n);
    v23 = *(_QWORD *)(a1 + 24);
    v21 = (_BYTE *)(n + *(_QWORD *)(a1 + 32));
    *(_QWORD *)(a1 + 32) = v21;
    if ( (unsigned __int64)v21 < v23 )
      goto LABEL_13;
    return sub_227BA10(a1, 93);
  }
LABEL_12:
  if ( (unsigned __int64)v21 < v20 )
  {
LABEL_13:
    *(_QWORD *)(a1 + 32) = v21 + 1;
    *v21 = 93;
    return (__int64)(v21 + 1);
  }
  return sub_227BA10(a1, 93);
}
