__int64 __fastcall sub_EB2110(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char a9,
        __int64 a10,
        __int64 a11,
        void *src,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        unsigned __int8 a19,
        __int64 a20,
        char a21,
        char a22,
        __int64 a23,
        __int64 a24)
{
  _QWORD *v24; // r10
  const void *v26; // r11
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  size_t v29; // rbp
  unsigned __int64 v30; // rcx
  char *v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  void *v44; // rax
  const void *v45; // rsi
  void *v46; // rax
  const void *v47; // rsi
  const void *v48; // [rsp+10h] [rbp-48h]

  v24 = a2;
  a1[2] = a4;
  a1[1] = a11;
  *a1 = a3;
  v26 = src;
  a1[5] = a7;
  a1[3] = a5;
  a1[4] = a6;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  v27 = a2[294];
  a2[304] += 112LL;
  v28 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= v28 + 112 && v27 )
  {
    a2[294] = v28 + 112;
  }
  else
  {
    v28 = sub_962430((__int64)(a2 + 294), 112, 112, 3, a5, a6);
    v26 = src;
    v24 = a2;
  }
  v29 = 8 * a13;
  *(_QWORD *)(v28 + 32) = 0;
  *(_OWORD *)v28 = 0;
  v30 = (8 * a13) >> 3;
  *(_OWORD *)(v28 + 16) = 0;
  *(_QWORD *)(v28 + 48) = 0;
  *(_QWORD *)(v28 + 64) = 0;
  *(_QWORD *)(v28 + 72) = 0;
  *(_DWORD *)(v28 + 80) = 0;
  *(_QWORD *)(v28 + 88) = 0;
  *(_QWORD *)(v28 + 96) = 0;
  *(_DWORD *)(v28 + 104) = 0;
  a1[9] = v28;
  if ( v30 )
  {
    v31 = (char *)a1[7];
    if ( v30 > (__int64)((a1[8] & 0xFFFFFFFFFFFFFFF8LL) - (_QWORD)v31) >> 3 )
    {
      v48 = v26;
      sub_EB2040((__int64)(a1 + 6), v24, ((__int64)&v31[-a1[6]] >> 3) + v30, v30, a5, a6);
      v31 = (char *)a1[7];
      v26 = v48;
      if ( !v29 )
        goto LABEL_8;
    }
    else if ( !v29 )
    {
LABEL_8:
      v28 = a1[9];
      a1[7] = &v31[v29];
      goto LABEL_9;
    }
    memmove(v31, v26, v29);
    v31 = (char *)a1[7];
    goto LABEL_8;
  }
LABEL_9:
  *(_QWORD *)(v28 + 48) = a18 | *(_QWORD *)(v28 + 48) & 7LL;
  *(_QWORD *)(a1[9] + 48LL) = *(_QWORD *)(a1[9] + 48LL) & 0xFFFFFFFFFFFFFFFBLL | (4LL * a19);
  *(_QWORD *)a1[9] = a14;
  *(_QWORD *)(a1[9] + 8LL) = a15;
  *(_QWORD *)(a1[9] + 16LL) = a16;
  *(_QWORD *)(a1[9] + 24LL) = a17;
  v32 = a1[9];
  if ( a23 != v32 + 64 )
  {
    operator delete();
    v37 = *(unsigned int *)(a23 + 16);
    *(_DWORD *)(v32 + 80) = v37;
    if ( (_DWORD)v37 )
    {
      v46 = (void *)sub_220C370(16 * v37, 8, v33, v34, v35, v36);
      *(_QWORD *)(v32 + 64) = v46;
      v47 = *(const void **)a23;
      *(_DWORD *)(v32 + 72) = *(_DWORD *)(a23 + 8);
      *(_DWORD *)(v32 + 76) = *(_DWORD *)(a23 + 12);
      memcpy(v46, v47, 16LL * *(unsigned int *)(v32 + 80));
    }
    else
    {
      *(_QWORD *)(v32 + 64) = 0;
      *(_QWORD *)(v32 + 72) = 0;
    }
    v32 = a1[9];
  }
  if ( a24 != v32 + 88 )
  {
    operator delete();
    v42 = *(unsigned int *)(a24 + 16);
    *(_DWORD *)(v32 + 104) = v42;
    if ( (_DWORD)v42 )
    {
      v44 = (void *)sub_220C370(24 * v42, 8, v38, v39, v40, v41);
      *(_QWORD *)(v32 + 88) = v44;
      *(_DWORD *)(v32 + 96) = *(_DWORD *)(a24 + 8);
      v45 = *(const void **)a24;
      *(_DWORD *)(v32 + 100) = *(_DWORD *)(a24 + 12);
      memcpy(v44, v45, 24LL * *(unsigned int *)(v32 + 104));
    }
    else
    {
      *(_QWORD *)(v32 + 88) = 0;
      *(_QWORD *)(v32 + 96) = 0;
    }
    v32 = a1[9];
  }
  *(_BYTE *)(v32 + 40) = *(_BYTE *)(v32 + 40) & 0xFE | a8 & 1;
  *(_QWORD *)(a1[9] + 32LL) = a10;
  *(_BYTE *)(a1[9] + 40LL) = (2 * (a9 & 1)) | *(_BYTE *)(a1[9] + 40LL) & 0xFD;
  *(_QWORD *)(a1[9] + 56LL) = a20;
  *(_BYTE *)(a1[9] + 40LL) = (4 * (a21 & 1)) | *(_BYTE *)(a1[9] + 40LL) & 0xFB;
  *(_BYTE *)(a1[9] + 40LL) = (8 * (a22 & 1)) | *(_BYTE *)(a1[9] + 40LL) & 0xF7;
  return 8 * (a22 & 1u);
}

