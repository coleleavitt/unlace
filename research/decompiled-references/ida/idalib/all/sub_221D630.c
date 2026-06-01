void __fastcall sub_221D630(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  void *v8; // rdi
  unsigned __int64 v9; // rbx
  const void *v10; // rsi
  __int64 v11; // rbp
  int *v12; // rax
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r14
  _BYTE *v17; // rsi
  __int64 v18; // rdx
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // r14d
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE *v30; // rdx
  char *v31; // rdi
  size_t v32; // rdx
  int i; // edi
  __int64 v34; // [rsp+8h] [rbp-120h]
  __int64 v35; // [rsp+10h] [rbp-118h]
  unsigned int v36; // [rsp+10h] [rbp-118h]
  unsigned int v37; // [rsp+10h] [rbp-118h]
  __int64 v38; // [rsp+28h] [rbp-100h]
  __int64 v39; // [rsp+28h] [rbp-100h]
  void *v40; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+38h] [rbp-F0h]
  _BYTE v42[16]; // [rsp+40h] [rbp-E8h] BYREF
  void *v43; // [rsp+50h] [rbp-D8h]
  __int64 v44; // [rsp+58h] [rbp-D0h]
  _OWORD v45[12]; // [rsp+60h] [rbp-C8h] BYREF

  v4 = sub_227D600(a1);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = v4;
  if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v5) > 2 )
  {
    *(_BYTE *)(v5 + 2) = 45;
    *(_WORD *)v5 = 8224;
    v8 = (void *)(*(_QWORD *)(v4 + 32) + 3LL);
    *(_QWORD *)(v4 + 32) = v8;
  }
  else
  {
    v7 = sub_227BF10(v4, "  -", 3);
    v8 = *(void **)(v7 + 32);
    v6 = v7;
  }
  v9 = a1[3];
  v10 = (const void *)a1[2];
  if ( v9 > *(_QWORD *)(v6 + 24) - (_QWORD)v8 )
  {
    sub_227BF10(v6, v10, a1[3]);
    v9 = a1[3];
  }
  else if ( v9 )
  {
    memcpy(v8, v10, a1[3]);
    *(_QWORD *)(v6 + 32) += v9;
    v9 = a1[3];
  }
  sub_2210B20(a1[4], a1[5], a2, v9 + 6);
  if ( !(_BYTE)byte_2D0A7C0 && __cxa_guard_acquire(&byte_2D0A7C0) )
    sub_221A7A0((const char *)&byte_2D0A7C0);
  v34 = *((_QWORD *)&xmmword_2D0A828 + 1);
  v11 = xmmword_2D0A828;
  if ( (_QWORD)xmmword_2D0A828 != *((_QWORD *)&xmmword_2D0A828 + 1) )
  {
    while ( 1 )
    {
      v12 = (int *)sub_221BB50((__int64)&unk_2D0A7F8, v11);
      if ( v12 == &dword_2D0A800 )
      {
        v14 = 0x1FFFFFFFE0LL;
        v13 = 0;
      }
      else
      {
        v13 = v12[16];
        v14 = 32LL * (unsigned int)(v13 - 1);
      }
      if ( dword_2D0A7F0 )
      {
        LODWORD(v15) = (dword_2D0A7F0 - 1) & (37 * v13);
        v16 = qword_2D0A7E0 + ((unsigned __int64)(unsigned int)v15 << 7);
        if ( v13 == *(_DWORD *)v16 )
          goto LABEL_12;
        if ( *(_DWORD *)v16 != -1 )
          break;
      }
LABEL_32:
      memset(&v45[1], 0, 0x78u);
      DWORD1(v45[5]) = 3;
      *((_QWORD *)&v45[2] + 1) = (char *)&v45[3] + 8;
      *((_QWORD *)&v45[4] + 1) = (char *)&v45[5] + 8;
LABEL_13:
      v40 = v42;
      sub_221A5D0(
        &v40,
        *(_BYTE **)(xmmword_2D0A828 + v14),
        *(_QWORD *)(xmmword_2D0A828 + v14) + *(_QWORD *)(xmmword_2D0A828 + v14 + 8));
      v43 = v45;
      if ( *((_OWORD **)&v45[2] + 1) == (_OWORD *)((char *)&v45[3] + 8) )
      {
        v45[0] = _mm_loadu_si128((const __m128i *)((char *)&v45[3] + 8));
      }
      else
      {
        v43 = *((void **)&v45[2] + 1);
        *(_QWORD *)&v45[0] = *((_QWORD *)&v45[3] + 1);
      }
      v20 = *(_QWORD *)&v45[3];
      v21 = *((_QWORD *)&v45[4] + 1);
      *(_QWORD *)&v45[3] = 0;
      *((_QWORD *)&v45[2] + 1) = (char *)&v45[3] + 8;
      v44 = v20;
      BYTE8(v45[3]) = 0;
      if ( *((_OWORD **)&v45[4] + 1) != (_OWORD *)((char *)&v45[5] + 8) )
      {
        free(*((void **)&v45[4] + 1));
        v21 = *((_QWORD *)&v45[2] + 1);
        if ( *((_OWORD **)&v45[2] + 1) != (_OWORD *)((char *)&v45[3] + 8) )
          operator delete(*((void **)&v45[2] + 1));
      }
      v22 = a2 - v41 - 8;
      v23 = sub_227D600(v21);
      v24 = *(_QWORD *)(v23 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v23 + 24) - v24) > 4 )
      {
        *(_DWORD *)v24 = 538976288;
        *(_BYTE *)(v24 + 4) = 61;
        *(_QWORD *)(v23 + 32) += 5LL;
      }
      else
      {
        v23 = sub_227BF10(v23, "    =", 5);
      }
      v25 = v23;
      sub_227BF10(v23, v40, v41);
      v26 = sub_227D600(v25);
      v27 = sub_227D090(v26, v22);
      v28 = *(_QWORD *)(v27 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v27 + 24) - v28) > 4 )
      {
        *(_DWORD *)v28 = 538979616;
        *(_BYTE *)(v28 + 4) = 32;
        *(_QWORD *)(v27 + 32) += 5LL;
      }
      else
      {
        v27 = sub_227BF10(v27, " -   ", 5);
      }
      v29 = sub_227BF10(v27, v43, v44);
      v30 = *(_BYTE **)(v29 + 32);
      if ( (unsigned __int64)v30 >= *(_QWORD *)(v29 + 24) )
      {
        sub_227BA10(v29, 10);
      }
      else
      {
        *(_QWORD *)(v29 + 32) = v30 + 1;
        *v30 = 10;
      }
      if ( v43 != v45 )
        operator delete(v43);
      if ( v40 == v42 )
      {
        v11 += 32;
        if ( v34 == v11 )
          return;
      }
      else
      {
        operator delete(v40);
        v11 += 32;
        if ( v34 == v11 )
          return;
      }
    }
    for ( i = 1; ; ++i )
    {
      v15 = (dword_2D0A7F0 - 1) & (unsigned int)(v15 + i);
      v16 = qword_2D0A7E0 + (v15 << 7);
      if ( v13 == *(_DWORD *)v16 )
        break;
      if ( *(_DWORD *)v16 == -1 )
        goto LABEL_32;
    }
LABEL_12:
    v17 = *(_BYTE **)(v16 + 32);
    v35 = v14;
    v18 = *(_QWORD *)(v16 + 40);
    v45[1] = *(_OWORD *)(v16 + 8);
    LOBYTE(v45[2]) = *(_BYTE *)(v16 + 24);
    *((_QWORD *)&v45[2] + 1) = (char *)&v45[3] + 8;
    sub_221A5D0((_QWORD *)&v45[2] + 1, v17, (__int64)&v17[v18]);
    v19 = *(_DWORD *)(v16 + 72);
    *((_QWORD *)&v45[4] + 1) = (char *)&v45[5] + 8;
    v14 = v35;
    *(_QWORD *)&v45[5] = 0x300000000LL;
    if ( v19 && (_OWORD *)((char *)&v45[4] + 8) != (_OWORD *)(v16 + 64) )
    {
      v31 = (char *)&v45[5] + 8;
      v32 = 16LL * v19;
      if ( v19 <= 3uLL
        || (v39 = v35,
            v37 = v19,
            sub_2237220((char *)&v45[4] + 8, (char *)&v45[5] + 8, v19, 16),
            v19 = v37,
            v31 = *((char **)&v45[4] + 1),
            v14 = v39,
            (v32 = 16LL * *(unsigned int *)(v16 + 72)) != 0) )
      {
        v38 = v14;
        v36 = v19;
        memcpy(v31, *(const void **)(v16 + 64), v32);
        v14 = v38;
        LODWORD(v45[5]) = v36;
      }
      else
      {
        LODWORD(v45[5]) = v37;
      }
    }
    goto LABEL_13;
  }
}
