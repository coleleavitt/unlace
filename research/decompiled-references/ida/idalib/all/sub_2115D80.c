__int64 __fastcall sub_2115D80(
        __int64 a1,
        const void *a2,
        size_t a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        char a7,
        char a8,
        unsigned int a9,
        unsigned __int8 a10,
        const void *a11,
        size_t n)
{
  _DWORD *v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  _WORD *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  _BYTE *v26; // rdx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rdx
  _WORD *v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  void *v35; // rdi
  __int64 v36; // rbx
  _BYTE *v37; // rbp
  __int64 v38; // rdi
  __int64 v39; // rax
  _BYTE *v40; // rdx
  unsigned __int64 v41; // rdx
  unsigned __int8 v42; // [rsp+10h] [rbp-48h]
  unsigned __int8 v43; // [rsp+10h] [rbp-48h]
  size_t v44; // [rsp+10h] [rbp-48h]
  unsigned __int8 v45; // [rsp+10h] [rbp-48h]
  unsigned __int8 v46; // [rsp+1Fh] [rbp-39h]

  v16 = *(_DWORD **)(a1 + 32);
  v17 = *(_QWORD *)(a1 + 24) - (_QWORD)v16;
  if ( v17 < a3 )
  {
    v45 = a5;
    v18 = sub_227BF10(a1, a2, a3);
    a5 = v45;
    v16 = *(_DWORD **)(v18 + 32);
    v17 = *(_QWORD *)(v18 + 24) - (_QWORD)v16;
  }
  else
  {
    v18 = a1;
    if ( a3 )
    {
      v46 = a5;
      v44 = a3;
      memcpy(v16, a2, a3);
      v18 = a1;
      a5 = v46;
      v16 = (_DWORD *)(v44 + *(_QWORD *)(a1 + 32));
      v33 = *(_QWORD *)(a1 + 24) - (_QWORD)v16;
      *(_QWORD *)(a1 + 32) = v16;
      if ( v33 <= 6 )
        goto LABEL_4;
      goto LABEL_37;
    }
  }
  if ( v17 <= 6 )
  {
LABEL_4:
    v42 = a5;
    sub_227BF10(v18, " CATTR ", 7);
    a5 = v42;
    goto LABEL_5;
  }
LABEL_37:
  *v16 = 1413563168;
  *((_WORD *)v16 + 2) = 21076;
  *((_BYTE *)v16 + 6) = 32;
  *(_QWORD *)(v18 + 32) += 7LL;
LABEL_5:
  v19 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v19) > 5 )
  {
    *(_DWORD *)v19 = 1195985985;
    v21 = a1;
    *(_WORD *)(v19 + 4) = 10318;
    *(_QWORD *)(a1 + 32) += 6LL;
  }
  else
  {
    v43 = a5;
    v20 = sub_227BF10(a1, "ALIGN(", 6);
    a5 = v43;
    v21 = v20;
  }
  v22 = sub_227B910(v21, a5);
  v23 = *(_WORD **)(v22 + 32);
  if ( *(_QWORD *)(v22 + 24) - (_QWORD)v23 > 1u )
  {
    *v23 = 11305;
    v24 = *(_QWORD *)(v22 + 32) + 2LL;
    v41 = *(_QWORD *)(v22 + 24) - v24;
    *(_QWORD *)(v22 + 32) = v24;
    if ( v41 <= 4 )
      goto LABEL_9;
  }
  else
  {
    v22 = sub_227BF10(v22, "),", 2);
    v24 = *(_QWORD *)(v22 + 32);
    if ( (unsigned __int64)(*(_QWORD *)(v22 + 24) - v24) <= 4 )
    {
LABEL_9:
      v22 = sub_227BF10(v22, "FILL(", 5);
      goto LABEL_10;
    }
  }
  *(_DWORD *)v24 = 1280067910;
  *(_BYTE *)(v24 + 4) = 40;
  *(_QWORD *)(v22 + 32) += 5LL;
LABEL_10:
  v25 = sub_227B910(v22, a10);
  v26 = *(_BYTE **)(v25 + 32);
  if ( *(_BYTE **)(v25 + 24) == v26 )
  {
    sub_227BF10(v25, ")", 1);
  }
  else
  {
    *v26 = 41;
    ++*(_QWORD *)(v25 + 32);
  }
  v27 = *(_QWORD *)(a1 + 24);
  v28 = *(_QWORD **)(a1 + 32);
  if ( a6 == 1 )
  {
    if ( v27 - (unsigned __int64)v28 > 7 )
    {
      *v28 = 0x44414F4C4645442CLL;
      v28 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
      *(_QWORD *)(a1 + 32) = v28;
    }
    else
    {
      sub_227BF10(a1, ",DEFLOAD", 8);
      v28 = *(_QWORD **)(a1 + 32);
    }
  }
  else
  {
    if ( a6 != 2 )
    {
      if ( a7 != 1 )
        goto LABEL_15;
LABEL_41:
      if ( v27 - (unsigned __int64)v28 > 0xD )
      {
        qmemcpy(v28, ",NOTEXECUTABLE", 14);
        v28 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 14LL);
        *(_QWORD *)(a1 + 32) = v28;
      }
      else
      {
        sub_227BF10(a1, ",NOTEXECUTABLE", 14);
        v28 = *(_QWORD **)(a1 + 32);
      }
LABEL_43:
      v27 = *(_QWORD *)(a1 + 24);
      if ( !a8 )
        goto LABEL_17;
      goto LABEL_44;
    }
    if ( v27 - (unsigned __int64)v28 > 6 )
    {
      *(_DWORD *)v28 = 1280265772;
      *((_WORD *)v28 + 2) = 16719;
      *((_BYTE *)v28 + 6) = 68;
      v28 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 7LL);
      *(_QWORD *)(a1 + 32) = v28;
    }
    else
    {
      sub_227BF10(a1, ",NOLOAD", 7);
      v28 = *(_QWORD **)(a1 + 32);
    }
  }
  v27 = *(_QWORD *)(a1 + 24);
  if ( a7 == 1 )
    goto LABEL_41;
LABEL_15:
  if ( a7 == 2 )
  {
    if ( v27 - (unsigned __int64)v28 > 0xA )
    {
      qmemcpy(v28, ",EXECUTABLE", 11);
      v28 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 11LL);
      *(_QWORD *)(a1 + 32) = v28;
    }
    else
    {
      sub_227BF10(a1, ",EXECUTABLE", 11);
      v28 = *(_QWORD **)(a1 + 32);
    }
    goto LABEL_43;
  }
  if ( !a8 )
    goto LABEL_17;
LABEL_44:
  if ( v27 - (unsigned __int64)v28 > 8 )
  {
    *((_BYTE *)v28 + 8) = 89;
    *v28 = 0x4C4E4F444145522CLL;
    v28 = (_QWORD *)(*(_QWORD *)(a1 + 32) + 9LL);
    *(_QWORD *)(a1 + 32) = v28;
  }
  else
  {
    sub_227BF10(a1, ",READONLY", 9);
    v28 = *(_QWORD **)(a1 + 32);
  }
  v27 = *(_QWORD *)(a1 + 24);
LABEL_17:
  if ( !a4 )
    goto LABEL_28;
  if ( (unsigned __int64)v28 >= v27 )
  {
    sub_227BA10(a1, 44);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = (char *)v28 + 1;
    *(_BYTE *)v28 = 44;
  }
  v29 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v29) > 5 )
  {
    *(_DWORD *)v29 = 1146047826;
    *(_WORD *)(v29 + 4) = 10309;
    v30 = (_WORD *)(*(_QWORD *)(a1 + 32) + 6LL);
    *(_QWORD *)(a1 + 32) = v30;
  }
  else
  {
    sub_227BF10(a1, "RMODE(", 6);
    v30 = *(_WORD **)(a1 + 32);
  }
  v31 = *(_QWORD *)(a1 + 24);
  switch ( a4 )
  {
    case 3:
      if ( v31 - (unsigned __int64)v30 > 1 )
      {
        *v30 = 12595;
        v30 = (_WORD *)(*(_QWORD *)(a1 + 32) + 2LL);
        *(_QWORD *)(a1 + 32) = v30;
      }
      else
      {
        sub_227BF10(a1, "31", 2);
        v30 = *(_WORD **)(a1 + 32);
      }
      goto LABEL_75;
    case 4:
      if ( v31 - (unsigned __int64)v30 > 1 )
      {
        *v30 = 13366;
        v30 = (_WORD *)(*(_QWORD *)(a1 + 32) + 2LL);
        *(_QWORD *)(a1 + 32) = v30;
      }
      else
      {
        sub_227BF10(a1, "64", 2);
        v30 = *(_WORD **)(a1 + 32);
      }
      goto LABEL_75;
    case 1:
      if ( v31 - (unsigned __int64)v30 > 1 )
      {
        *v30 = 13362;
        v30 = (_WORD *)(*(_QWORD *)(a1 + 32) + 2LL);
        *(_QWORD *)(a1 + 32) = v30;
      }
      else
      {
        sub_227BF10(a1, "24", 2);
        v30 = *(_WORD **)(a1 + 32);
      }
LABEL_75:
      v31 = *(_QWORD *)(a1 + 24);
      break;
  }
  if ( (unsigned __int64)v30 >= v31 )
  {
    sub_227BA10(a1, 41);
  }
  else
  {
    *(_QWORD *)(a1 + 32) = (char *)v30 + 1;
    *(_BYTE *)v30 = 41;
  }
  v27 = *(_QWORD *)(a1 + 24);
  v28 = *(_QWORD **)(a1 + 32);
LABEL_28:
  if ( a9 )
  {
    if ( v27 - (unsigned __int64)v28 > 9 )
    {
      v38 = a1;
      qmemcpy(v28, ",PRIORITY(", 10);
      *(_QWORD *)(a1 + 32) += 10LL;
    }
    else
    {
      v38 = sub_227BF10(a1, ",PRIORITY(", 10);
    }
    v39 = sub_227B910(v38, a9);
    v40 = *(_BYTE **)(v39 + 32);
    if ( v40 == *(_BYTE **)(v39 + 24) )
    {
      sub_227BF10(v39, ")", 1);
    }
    else
    {
      *v40 = 41;
      ++*(_QWORD *)(v39 + 32);
    }
    v27 = *(_QWORD *)(a1 + 24);
    v28 = *(_QWORD **)(a1 + 32);
  }
  if ( n )
  {
    if ( v27 - (unsigned __int64)v28 > 5 )
    {
      *(_DWORD *)v28 = 1380012076;
      v36 = a1;
      *((_WORD *)v28 + 2) = 10324;
      v35 = (void *)(*(_QWORD *)(a1 + 32) + 6LL);
      *(_QWORD *)(a1 + 32) = v35;
    }
    else
    {
      v34 = sub_227BF10(a1, ",PART(", 6);
      v35 = *(void **)(v34 + 32);
      v36 = v34;
    }
    if ( *(_QWORD *)(v36 + 24) - (_QWORD)v35 < n )
    {
      v36 = sub_227BF10(v36, a11, n);
      v37 = *(_BYTE **)(v36 + 32);
      if ( *(_BYTE **)(v36 + 24) == v37 )
        goto LABEL_53;
    }
    else
    {
      memcpy(v35, a11, n);
      v37 = (_BYTE *)(*(_QWORD *)(v36 + 32) + n);
      *(_QWORD *)(v36 + 32) = v37;
      if ( *(_BYTE **)(v36 + 24) == v37 )
      {
LABEL_53:
        sub_227BF10(v36, ")", 1);
LABEL_54:
        v28 = *(_QWORD **)(a1 + 32);
        v27 = *(_QWORD *)(a1 + 24);
        goto LABEL_30;
      }
    }
    *v37 = 41;
    ++*(_QWORD *)(v36 + 32);
    goto LABEL_54;
  }
LABEL_30:
  if ( (unsigned __int64)v28 >= v27 )
    return sub_227BA10(a1, 10);
  *(_QWORD *)(a1 + 32) = (char *)v28 + 1;
  *(_BYTE *)v28 = 10;
  return (__int64)v28 + 1;
}
