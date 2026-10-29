__int64 __fastcall sub_768BA0(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // r12
  __int64 v6; // rdx
  char v7; // al
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // edx
  __int64 *v14; // rax
  void *v15; // rdi
  char *v16; // rcx
  bool v17; // si
  char *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rcx
  char v21; // al
  __int64 v22; // r13
  char v23; // dl
  __int64 v24; // r14
  _DWORD *v25; // r12
  unsigned int v26; // ebp
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rax
  int v30; // edx
  __int64 *v31; // rax
  __int64 v32; // rsi
  __int64 *v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rdx
  char v36; // al
  unsigned int v37; // eax
  int v38; // eax
  __int64 *v39; // rsi
  __int64 v40; // rax
  bool v41; // zf
  __int64 *v42; // r14
  unsigned int v43; // edx
  unsigned int v44; // ebx
  __int64 v45; // rbp
  __int64 v47; // rbx
  _QWORD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 *v52; // rcx
  __int64 v53; // rbx
  void (__fastcall ***v54)(void *); // rbp
  __int64 i; // rax
  __int64 v56; // [rsp+0h] [rbp-128h]
  __int64 v57; // [rsp+8h] [rbp-120h]
  int v58; // [rsp+10h] [rbp-118h]
  __int64 *v59; // [rsp+10h] [rbp-118h]
  char v60; // [rsp+1Fh] [rbp-109h]
  __int64 *v62; // [rsp+38h] [rbp-F0h]
  __int64 *v63; // [rsp+38h] [rbp-F0h]
  __int64 *v64; // [rsp+38h] [rbp-F0h]
  __int64 v65; // [rsp+38h] [rbp-F0h]
  char v66[8]; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v68; // [rsp+58h] [rbp-D0h]
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+68h] [rbp-C0h]
  _BYTE v71[184]; // [rsp+70h] [rbp-B8h] BYREF

  v5 = *a2;
  v6 = (*a2)[9];
  ptr = v71;
  v70 = 0x1000000000LL;
  if ( !v6 )
    goto LABEL_25;
  v7 = *(_BYTE *)(v6 + 3) >> 6;
  if ( !v7 )
  {
    do
    {
      v6 = *(_QWORD *)(v6 + 16);
      v7 = *(_BYTE *)(v6 + 3) >> 6;
    }
    while ( !v7 );
    if ( v7 != 1 )
      goto LABEL_4;
LABEL_90:
    v8 = (unsigned int)(*(_DWORD *)(v6 + 4) + 1);
    goto LABEL_6;
  }
  if ( v7 == 1 )
    goto LABEL_90;
LABEL_4:
  if ( v7 == 2 )
    v8 = (unsigned int)(*(_DWORD *)(v6 + 4) - 1);
  else
    v8 = *(unsigned int *)(v6 + 4);
LABEL_6:
  LODWORD(v67) = *(_DWORD *)(*(_QWORD *)(a1 + 144) + 8LL);
  if ( !(_DWORD)v8 )
    goto LABEL_25;
  v9 = 0;
  while ( 2 )
  {
    v11 = *v5;
    if ( (*((_BYTE *)v5 + 123) & 0x20) != 0 )
    {
      v10 = *(_QWORD *)(v11 + 864);
      goto LABEL_9;
    }
    v12 = v5[9];
    v13 = 17;
    while ( 1 )
    {
      if ( *(char *)(v12 + 3) < 0 )
      {
        if ( *(_BYTE *)(v12 + 3) >> 6 != 2 )
        {
          v14 = (__int64 *)(*(_QWORD *)(v12 + 16) + 8 * v9);
          goto LABEL_15;
        }
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v12 + 4) == (_DWORD)v9 )
        break;
LABEL_17:
      v12 = *(_QWORD *)(v12 + 16);
      if ( !--v13 )
      {
        sub_233F80((__int64 *)(v11 + 616), (_DWORD *)v5 + 18);
        v14 = (__int64 *)(*(_QWORD *)(v5[9] + 16) + 8 * v9);
        goto LABEL_15;
      }
    }
    v14 = (__int64 *)(v12 + 8);
LABEL_15:
    v10 = *v14;
LABEL_9:
    sub_7605E0((int *)&v67, (__int64)&ptr, v10);
    if ( ++v9 != v8 )
      continue;
    break;
  }
  v15 = ptr;
  v16 = (char *)ptr + 8 * (unsigned int)v70;
  v17 = ptr == v71 || ptr == nullptr;
  if ( ptr != v16 )
  {
    v18 = (char *)ptr;
    do
    {
      v19 = *(_QWORD *)v18;
      v18 += 8;
      *(_BYTE *)(v19 + 6) &= ~1u;
    }
    while ( v16 != v18 );
  }
  LODWORD(v70) = 0;
  if ( !v17 )
    sub_186B220(v15);
  v5 = *a2;
LABEL_25:
  sub_EE4940(v66, "bv1-blaster", v5);
  v20 = *a2;
  *(_DWORD *)(a1 + 664) = 0;
  v21 = *((_BYTE *)v20 + 123);
  v22 = v20[9];
  v60 = v21 & 8;
  v56 = *(_QWORD *)(a1 + 8);
  if ( v22 )
  {
    v23 = *(_BYTE *)(v22 + 3) >> 6;
    if ( v23 )
    {
      if ( v23 != 1 )
        goto LABEL_28;
LABEL_93:
      v58 = *(_DWORD *)(v22 + 4) + 1;
    }
    else
    {
      do
      {
        v22 = *(_QWORD *)(v22 + 16);
        v23 = *(_BYTE *)(v22 + 3) >> 6;
      }
      while ( !v23 );
      if ( v23 == 1 )
        goto LABEL_93;
LABEL_28:
      if ( v23 == 2 )
        v58 = *(_DWORD *)(v22 + 4) - 1;
      else
        v58 = *(_DWORD *)(v22 + 4);
    }
    v57 = *(_QWORD *)(a1 + 8);
    if ( v58 )
    {
      v24 = 0;
      v25 = nullptr;
      v22 = 0;
      v26 = 0;
      while ( 1 )
      {
        if ( (v21 & 0x20) != 0 )
          goto LABEL_75;
        v29 = v20[9];
        v30 = 17;
        while ( 1 )
        {
          if ( *(char *)(v29 + 3) < 0 )
          {
            if ( *(_BYTE *)(v29 + 3) >> 6 != 2 )
            {
              v31 = (__int64 *)(v24 + *(_QWORD *)(v29 + 16));
              goto LABEL_41;
            }
            goto LABEL_48;
          }
          if ( v26 == *(_DWORD *)(v29 + 4) )
            break;
LABEL_48:
          v29 = *(_QWORD *)(v29 + 16);
          if ( !--v30 )
          {
            v63 = v20;
            sub_233F80((__int64 *)(*v20 + 616), (_DWORD *)v20 + 18);
            v31 = (__int64 *)(v24 + *(_QWORD *)(v63[9] + 16));
            goto LABEL_41;
          }
        }
        v31 = (__int64 *)(v29 + 8);
LABEL_41:
        v32 = *v31;
        v67 = v22;
        v68 = v56;
        ptr = v25;
        v70 = v57;
        sub_768A00(a1, v32, &v67, (__int64 *)&ptr);
        v22 = v67;
        v25 = ptr;
        v57 = v70;
        v56 = v68;
        *(_DWORD *)(a1 + 664) += *(_DWORD *)(a1 + 152);
        if ( !v60 )
          goto LABEL_42;
        v34 = (*a2)[11];
        if ( !v34 )
          goto LABEL_61;
        v35 = (*a2)[11];
        v36 = *(_BYTE *)(v34 + 3) >> 6;
        if ( v36 )
        {
          if ( v36 != 1 )
            goto LABEL_53;
LABEL_69:
          if ( v26 >= *(_DWORD *)(v35 + 4) + 1 )
            goto LABEL_70;
        }
        else
        {
          do
          {
            v35 = *(_QWORD *)(v35 + 16);
            v36 = *(_BYTE *)(v35 + 3) >> 6;
          }
          while ( !v36 );
          if ( v36 == 1 )
            goto LABEL_69;
LABEL_53:
          if ( v36 == 2 )
            v37 = *(_DWORD *)(v35 + 4) - 1;
          else
            v37 = *(_DWORD *)(v35 + 4);
          if ( v26 >= v37 )
          {
LABEL_70:
            v34 = 0;
            goto LABEL_61;
          }
        }
        v38 = 17;
        while ( 2 )
        {
          if ( *(char *)(v34 + 3) < 0 )
          {
            if ( *(_BYTE *)(v34 + 3) >> 6 != 2 )
            {
              v39 = (__int64 *)(v24 + *(_QWORD *)(v34 + 16));
              goto LABEL_60;
            }
LABEL_72:
            v34 = *(_QWORD *)(v34 + 16);
            if ( !--v38 )
            {
              v64 = *a2;
              sub_233F80((__int64 *)(**a2 + 616), (_DWORD *)*a2 + 22);
              v39 = (__int64 *)(v24 + *(_QWORD *)(v64[11] + 16));
              goto LABEL_60;
            }
            continue;
          }
          break;
        }
        if ( v26 != *(_DWORD *)(v34 + 4) )
          goto LABEL_72;
        v39 = (__int64 *)(v34 + 8);
LABEL_60:
        v34 = *v39;
LABEL_61:
        v40 = sub_15DE0E0(*(_QWORD *)(a1 + 8), v34, v25);
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        if ( v25 )
        {
          v41 = v25[2]-- == 1;
          if ( v41 )
          {
            v65 = v40;
            sub_15D7BC0(v57, v25);
            v40 = v65;
          }
        }
        v25 = (_DWORD *)v40;
LABEL_42:
        v33 = *a2;
        if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
        {
          v27 = v33[13];
          v28 = 17;
          do
          {
            if ( *(char *)(v27 + 3) >= 0 )
            {
              if ( v26 == *(_DWORD *)(v27 + 4) )
                goto LABEL_35;
            }
            else if ( *(_BYTE *)(v27 + 3) >> 6 != 2 )
            {
              goto LABEL_35;
            }
            v27 = *(_QWORD *)(v27 + 16);
            --v28;
          }
          while ( v28 );
          v62 = *a2;
          sub_236900((_QWORD *)(*v33 + 672), v33 + 13);
          LODWORD(v33) = (_DWORD)v62;
        }
LABEL_35:
        sub_EDBFA0((int)v33);
        v20 = *a2;
        ++v26;
        v24 += 8;
        v21 = *((_BYTE *)*a2 + 123);
        if ( v26 == v58 )
          goto LABEL_75;
      }
    }
    v25 = nullptr;
    v22 = 0;
  }
  else
  {
    v57 = *(_QWORD *)(a1 + 8);
    v25 = nullptr;
  }
LABEL_75:
  if ( (v21 & 4) != 0 )
  {
    v59 = v20;
    v50 = sub_777D00(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 144) + 32LL, *(_QWORD *)(a1 + 144) + 56LL);
    v51 = sub_1336AB0(v59[1], v50);
    v52 = v59;
    v53 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    v54 = (void (__fastcall ***)(void *))v59[1];
    if ( v54 )
    {
      v41 = (*((_DWORD *)v54 + 2))-- == 1;
      if ( v41 )
      {
        (**v54)(v54);
        sub_186B220(v54);
        v52 = v59;
      }
    }
    v52[1] = v53;
    v20 = *a2;
  }
  *((_DWORD *)v20 + 30) = (*((_DWORD *)v20 + 30) + 1) & 0x3FFFFFF | v20[15] & 0xFC000000;
  v42 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v42 + 8);
  v43 = *(_DWORD *)(a3 + 8);
  v44 = *(_DWORD *)(a3 + 12);
  if ( v43 >= v44 )
  {
    v47 = 2 * v44;
    v45 = sub_186B270(8 * v47);
    v43 = *(_DWORD *)(a3 + 8);
    v48 = *(_QWORD **)a3;
    if ( v43 )
    {
      if ( v43 - 1 <= 2 || (_QWORD *)v45 == v48 + 1 )
      {
        for ( i = 0; i != v43; ++i )
          *(_QWORD *)(v45 + i * 8) = v48[i];
      }
      else
      {
        v49 = 0;
        do
        {
          *(__m128i *)(v45 + v49 * 8) = _mm_loadu_si128((const __m128i *)&v48[v49]);
          v49 += 2;
        }
        while ( v49 != 2LL * (v43 >> 1) );
        if ( (v43 & 1) != 0 )
          *(_QWORD *)(v45 + 8LL * (v43 & 0xFFFFFFFE)) = v48[v43 & 0xFFFFFFFE];
      }
    }
    if ( v48 != (_QWORD *)(a3 + 16) && v48 )
    {
      sub_186B220(v48);
      v43 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v45;
    *(_DWORD *)(a3 + 12) = v47;
  }
  else
  {
    v45 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v45 + 8LL * v43) = v42;
  *(_DWORD *)(a3 + 8) = v43 + 1;
  if ( v25 )
  {
    v41 = v25[2]-- == 1;
    if ( v41 )
      sub_15D7BC0(v57, v25);
  }
  if ( v22 )
  {
    v41 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v56, v22);
  }
  return sub_EE4A00(v66);
}

