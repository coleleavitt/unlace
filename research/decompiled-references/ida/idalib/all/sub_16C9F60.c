void __fastcall sub_16C9F60(__int64 a1, unsigned __int64 a2)
{
  unsigned __int16 *v2; // r15
  __int64 v4; // rbx
  _QWORD *i; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r14
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // r14
  _QWORD *v21; // rcx
  _QWORD *v22; // r15
  __int64 v23; // rax
  __int64 v24; // r9
  _QWORD *v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 j; // rax
  __int64 v34; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp+10h] [rbp-68h]
  __int64 v40; // [rsp+10h] [rbp-68h]
  __int64 v41; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v43; // [rsp+28h] [rbp-50h]
  unsigned int v44; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v45[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = (unsigned __int16 *)a2;
  LODWORD(v4) = 1;
  v44 = 2;
  v45[0] = a2;
  ptr = v45;
  for ( i = v45; ; v2 = (unsigned __int16 *)i[(unsigned int)v4 - 1] )
  {
    v4 = (unsigned int)(v4 - 1);
    v43 = v4;
    v10 = sub_BFD550((unsigned __int64)v2);
    v11 = *(_WORD *)v10 & 0x1FF;
    if ( v11 > 0x75u )
    {
      if ( v11 <= 0x77u )
        goto LABEL_3;
    }
    else if ( v11 == 4 )
    {
      goto LABEL_3;
    }
    v6 = *v2;
    LOWORD(v6) = v6 & 0x1FF;
    if ( (_WORD)v6 == 53 )
    {
      v12 = *((_QWORD *)v2 + 2);
      v13 = (*((_QWORD *)v2 + 3) - v12) & 0x7FFFFFFF8LL;
      v14 = v13 >> 3;
      v15 = (v13 >> 3) + (unsigned int)v4;
      if ( v15 > v44 )
      {
        a2 = (unsigned __int64)v45;
        sub_2237220(&ptr, v45, v15, 8);
        v4 = v43;
        v14 = v13 >> 3;
        i = ptr;
        LODWORD(v15) = (v13 >> 3) + v43;
      }
      v16 = v4;
      v17 = (unsigned __int64)&i[v16];
      if ( !v13 )
        goto LABEL_19;
      if ( v17 < v12 + 16 && v12 < (unsigned __int64)&i[v16 + 2] || v14 - 1 <= 3 )
      {
        for ( j = 0; j != v13; j += 8 )
        {
          a2 = *(_QWORD *)(v12 + j);
          *(_QWORD *)(v17 + j) = a2;
        }
        goto LABEL_18;
      }
      v18 = 0;
      do
      {
        *(__m128i *)(v17 + v18) = _mm_loadu_si128((const __m128i *)(v12 + v18));
        v18 += 16;
      }
      while ( 16 * (v14 >> 1) != v18 );
      a2 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v19 = 8 * (v14 & 0xFFFFFFFFFFFFFFFELL);
      v20 = (_QWORD *)(v19 + v12);
      v21 = (_QWORD *)(v19 + v17);
      if ( v14 == (v14 & 0xFFFFFFFFFFFFFFFELL) )
      {
LABEL_18:
        i = ptr;
        goto LABEL_19;
      }
      goto LABEL_17;
    }
    if ( (_WORD)v6 == 39 )
    {
LABEL_3:
      a2 = *(_QWORD *)(a1 + 248);
      sub_C3C190(v10, a2, v6, v7, v8, v9);
      LODWORD(v4) = v43;
      i = ptr;
      goto LABEL_4;
    }
    if ( ((v11 + 423) & 0x1FFu) <= 4 )
    {
      v34 = 8LL * *(unsigned int *)(v10 + 16);
      v20 = (_QWORD *)(v10 + 8 * (((*(_BYTE *)(v10 + 2) & 8) != 0) + 1LL) + 32);
      v35 = v34 >> 3;
      v15 = (v34 >> 3) + (unsigned int)v4;
      if ( v15 > v44 )
      {
        a2 = (unsigned __int64)v45;
        sub_2237220(&ptr, v45, v15, 8);
        v4 = v43;
        v35 = v34 >> 3;
        i = ptr;
        LODWORD(v15) = (v34 >> 3) + v43;
      }
      v21 = &i[v4];
      if ( !v34 )
        goto LABEL_19;
      v36 = 1;
      if ( v34 > 0 )
        v36 = v35;
      if ( v34 > 8 )
      {
        v37 = 0;
        do
        {
          *(__m128i *)&v21[v37] = _mm_loadu_si128((const __m128i *)&v20[v37]);
          v37 += 2;
        }
        while ( v37 != 2 * (v36 >> 1) );
        a2 = 8 * (v36 & 0xFFFFFFFFFFFFFFFELL);
        v20 = (_QWORD *)((char *)v20 + a2);
        v21 = (_QWORD *)((char *)v21 + a2);
        if ( v36 == (v36 & 0xFFFFFFFFFFFFFFFELL) )
          goto LABEL_18;
      }
LABEL_17:
      *v21 = *v20;
      goto LABEL_18;
    }
    if ( v11 == 33 )
    {
      v22 = (_QWORD *)(v10 + 48);
      v23 = 8LL * *(unsigned __int16 *)(v10 + 24);
      v24 = v23 >> 3;
      v15 = (v23 >> 3) + (unsigned int)v4;
      if ( v15 > v44 )
      {
        a2 = (unsigned __int64)v45;
        v41 = (8LL * *(unsigned __int16 *)(v10 + 24)) >> 3;
        v39 = 8LL * *(unsigned __int16 *)(v10 + 24);
        sub_2237220(&ptr, v45, v15, 8);
        v4 = v43;
        v24 = v41;
        i = ptr;
        v23 = v39;
        LODWORD(v15) = v41 + v43;
      }
      v25 = &i[v4];
      if ( v23 )
      {
        v26 = 1;
        if ( v23 > 0 )
          v26 = v24;
        if ( v23 > 8 )
        {
          v27 = 0;
          do
          {
            *(__m128i *)&v25[v27] = _mm_loadu_si128((const __m128i *)(v10 + v27 * 8 + 48));
            v27 += 2;
          }
          while ( 2 * (v26 >> 1) != v27 );
          goto LABEL_34;
        }
        goto LABEL_35;
      }
      goto LABEL_19;
    }
    v28 = (unsigned int)v11 - 113;
    if ( (unsigned int)v28 <= 1 )
      break;
    switch ( v11 )
    {
      case 't':
        v32 = *(_QWORD *)(v10 + 24);
        if ( (unsigned __int64)(unsigned int)v4 + 1 > v44 )
        {
          a2 = (unsigned __int64)v45;
          sub_2237220(&ptr, v45, (unsigned int)v4 + 1LL, 8);
          i = ptr;
          v4 = v43;
        }
        i[v4] = v32;
        i = ptr;
        LODWORD(v4) = ++v43;
        break;
      case '{':
        if ( sub_9ECBA0(v10, a2, v6, v28, v8) )
          a2 = *(_QWORD *)(v10 + 24);
        else
          a2 = *(_QWORD *)(v10 + 16);
LABEL_68:
        sub_16C9F10((__int64)&ptr, a2);
        LODWORD(v4) = v43;
        i = ptr;
        break;
      case 'L':
        a2 = *(_QWORD *)(v10 + 32);
        sub_16C9F10((__int64)&ptr, a2);
        LODWORD(v4) = v43;
        i = ptr;
        break;
      default:
        if ( v11 == 106 && (*(_QWORD *)v10 & 0x100000) != 0 )
        {
          a2 = *(_QWORD *)(v10 + 56);
          if ( a2 )
            goto LABEL_68;
        }
        else if ( (_WORD)v6 == 48 )
        {
          v38 = *((_QWORD *)v2 + 2);
          if ( (v38 & 4) != 0 )
            a2 = *(_QWORD *)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 40);
          else
            a2 = v38 & 0xFFFFFFFFFFFFFFF8LL;
          goto LABEL_68;
        }
        break;
    }
LABEL_4:
    if ( !(_DWORD)v4 )
      goto LABEL_20;
LABEL_5:
    ;
  }
  v22 = (_QWORD *)(v10 + 40);
  if ( v11 == 114 )
    v22 = (_QWORD *)(v10 + 48);
  v29 = 8LL * *(unsigned int *)(v10 + 32);
  v30 = v29 >> 3;
  v15 = (v29 >> 3) + (unsigned int)v4;
  if ( v15 > v44 )
  {
    a2 = (unsigned __int64)v45;
    v40 = v29;
    sub_2237220(&ptr, v45, v15, 8);
    v4 = v43;
    i = ptr;
    v29 = v40;
    LODWORD(v15) = v43 + v30;
  }
  v25 = &i[v4];
  if ( v29 )
  {
    v26 = 1;
    if ( v29 > 0 )
      v26 = v30;
    if ( v29 <= 8 )
      goto LABEL_35;
    v31 = 0;
    do
    {
      *(__m128i *)&v25[v31] = _mm_loadu_si128((const __m128i *)&v22[v31]);
      v31 += 2;
    }
    while ( v31 != 2 * (v26 >> 1) );
LABEL_34:
    a2 = 8 * (v26 & 0xFFFFFFFFFFFFFFFELL);
    v22 = (_QWORD *)((char *)v22 + a2);
    v25 = (_QWORD *)((char *)v25 + a2);
    if ( (v26 & 0xFFFFFFFFFFFFFFFELL) != v26 )
LABEL_35:
      *v25 = *v22;
    goto LABEL_18;
  }
LABEL_19:
  LODWORD(v4) = v15;
  v43 = v15;
  if ( (_DWORD)v15 )
    goto LABEL_5;
LABEL_20:
  if ( i != v45 )
    free(i);
}
