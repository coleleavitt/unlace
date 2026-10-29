__int64 __fastcall sub_17488A0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, double a5)
{
  unsigned __int64 v8; // rbx
  unsigned __int16 v9; // ax
  int v10; // r14d
  __int64 *v12; // rdi
  unsigned __int64 v13; // rax
  __m128i si128; // xmm0
  __int64 v15; // rax
  __int64 v16; // rsi
  void *v17; // rax
  __int64 *v18; // r15
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v27; // bl
  char v28; // al
  __int64 v29; // r9
  void *v30; // rax
  _BOOL8 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  int v35; // r14d
  _DWORD *v36; // rcx
  void *v37; // r15
  _DWORD *v38; // r13
  unsigned __int64 v39; // rax
  _DWORD *v40; // r13
  void *v41; // r15
  unsigned __int64 v42; // rax
  void *v43; // rax
  bool v44; // zf
  __int64 v45; // rax
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // rax
  __m128 v48; // [rsp+0h] [rbp-108h] BYREF
  __int64 v49; // [rsp+10h] [rbp-F8h] BYREF
  void *v50; // [rsp+18h] [rbp-F0h] BYREF
  __int128 v51; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v52; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+38h] [rbp-D0h]
  __int64 v54; // [rsp+40h] [rbp-C8h]
  void *ptr; // [rsp+50h] [rbp-B8h] BYREF
  int v56; // [rsp+58h] [rbp-B0h]
  __int64 v57; // [rsp+60h] [rbp-A8h] BYREF

  v8 = sub_BFBAE0(a4);
  v9 = *(_WORD *)v8 & 0x1FF;
  if ( v9 <= 0x75u )
  {
    if ( v9 == 91 )
    {
      if ( *(_DWORD *)(v8 + 16) == 2 )
      {
        v10 = (*(_BYTE *)(v8 + 3) >> 1) & 0x3F;
        if ( (unsigned int)(v10 - 35) <= 1 )
        {
LABEL_4:
          sub_17488A0(&v52, a2, a3);
          if ( (_BYTE)v53 )
          {
            sub_17488A0(&ptr, a2, a3);
            if ( (_BYTE)v56 )
            {
              v30 = ptr;
              ptr = nullptr;
              v31 = v10 != 35;
              v50 = v30;
              v32 = v52;
              v52 = 0;
              v49 = v32;
LABEL_24:
              sub_1745420((unsigned __int64 *)&v51, *(_QWORD **)(a2 + 248), &v49, (__int64 *)&v50, v31, v29);
LABEL_25:
              v33 = v51;
              *(_BYTE *)(a1 + 8) = 1;
              *(_QWORD *)a1 = v33;
              return a1;
            }
          }
          goto LABEL_5;
        }
      }
      goto LABEL_9;
    }
  }
  else
  {
    if ( v9 > 0x77u )
      goto LABEL_9;
    v10 = sub_BFAD70((*(_WORD *)(v8 + 2) >> 3) & 0x3F);
    if ( (unsigned int)(v10 - 35) <= 1 )
      goto LABEL_4;
    v9 = *(_WORD *)v8 & 0x1FF;
  }
  if ( v9 != 75 )
  {
    if ( v9 == 108 && (*(_BYTE *)(*(_QWORD *)(a2 + 232) + 2LL) & 2) != 0 )
    {
      v34 = *(_DWORD *)(v8 + 4);
      if ( v34 == 19 )
      {
        v35 = 0;
        goto LABEL_32;
      }
      v35 = 1;
      if ( v34 == 20 )
      {
LABEL_32:
        v36 = *(_DWORD **)(v8 + 40);
        if ( !v36 || (*v36 & 0x4000) != 0 && !*(_QWORD *)(v8 + 48) )
        {
          sub_17488A0(&ptr, a2, a3);
          if ( (_BYTE)v56 )
          {
            v37 = ptr;
            ptr = nullptr;
            v38 = *(_DWORD **)(v8 + 40);
            if ( !v38 || (*v38 & 0x4000) == 0 )
              v38 = *(_DWORD **)(v8 + 48);
            v39 = sub_1744E40((__int64 *)(*(_QWORD *)(a2 + 248) + 2352LL), 24, 3u);
            *(_DWORD *)v39 = v35;
            *(_QWORD *)(v39 + 8) = v37;
            *(_QWORD *)(v39 + 16) = v38;
            *(_BYTE *)(a1 + 8) = 1;
            *(_QWORD *)a1 = v39 & 0xFFFFFFFFFFFFFFFCLL | 1;
            return a1;
          }
LABEL_5:
          *(_BYTE *)(a1 + 8) = 0;
          return a1;
        }
        sub_17488A0(&v52, a2, a3);
        sub_17488A0(&ptr, a2, a3);
        if ( !(_BYTE)v53 || !(_BYTE)v56 )
          goto LABEL_5;
        v40 = *(_DWORD **)(v8 + 40);
        if ( v40 )
        {
          if ( (*v40 & 0x4000) != 0 )
          {
            v41 = ptr;
            ptr = nullptr;
            if ( (*v40 & 0x4000) == 0 )
              v40 = *(_DWORD **)(v8 + 48);
            v42 = sub_1744E40((__int64 *)(*(_QWORD *)(a2 + 248) + 2352LL), 24, 3u);
            *(_DWORD *)v42 = v35;
            *(_QWORD *)(v42 + 8) = v41;
            *(_QWORD *)(v42 + 16) = v40;
            ptr = (void *)(v42 & 0xFFFFFFFFFFFFFFFCLL | 1);
            if ( !(_BYTE)v56 )
              LOBYTE(v56) = 1;
LABEL_50:
            v43 = ptr;
            v44 = *(_DWORD *)(v8 + 4) == 19;
            ptr = nullptr;
            v31 = !v44;
            v50 = v43;
            v45 = v52;
            v52 = 0;
            v49 = v45;
            goto LABEL_24;
          }
          v46 = v52;
          v52 = 0;
          if ( (*v40 & 0x4000) != 0 )
          {
LABEL_54:
            v47 = sub_1744E40((__int64 *)(*(_QWORD *)(a2 + 248) + 2352LL), 24, 3u);
            *(_DWORD *)v47 = v35;
            *(_QWORD *)(v47 + 8) = v46;
            *(_QWORD *)(v47 + 16) = v40;
            v52 = v47 & 0xFFFFFFFFFFFFFFFCLL | 1;
            if ( !(_BYTE)v53 )
              LOBYTE(v53) = 1;
            goto LABEL_50;
          }
        }
        else
        {
          v46 = v52;
          v52 = 0;
        }
        v40 = *(_DWORD **)(v8 + 48);
        goto LABEL_54;
      }
    }
LABEL_9:
    v48.m128_u64[0] = a3;
    v12 = (__int64 *)(*(_QWORD *)(a2 + 248) + 2352LL);
    v48 = _mm_loadh_ps((const double *)v48.m128_u64);
    v13 = sub_1744E40(v12, 40, 3u);
    si128 = _mm_load_si128((const __m128i *)&v48);
    *(_BYTE *)(v13 + 32) = 0;
    *(__m128i *)v13 = si128;
    *(_QWORD *)a1 = v13 & 0xFFFFFFFFFFFFFFFCLL;
    *(_BYTE *)(a1 + 8) = 1;
    return a1;
  }
  v15 = sub_EEC8C0(v8, a2, a5);
  sub_1DC3800(&v52, a2, *(unsigned int *)(*(_QWORD *)(v8 + 16) + 32LL), a3, v15);
  if ( (_BYTE)v53
    || (v16 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 56LL),
        v17 = *(void **)(v16 + 64),
        v56 = 0,
        ptr = v17,
        (v18 = (__int64 *)sub_1748570(a2, v16, (__int64)&ptr, 1)) == nullptr) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    sub_1DBADA0(&v52);
    return a1;
  }
  sub_1DBADA0(&v52);
  v19 = *(_QWORD **)(a2 + 248);
  v51 = 0;
  sub_17454E0((unsigned __int64 *)&v51, v19, v18, v20, v21, v22);
  BYTE8(v51) = 1;
  v23 = *(_QWORD *)(v8 + 24);
  v24 = *(unsigned int *)(v23 + 36);
  LOBYTE(v54) = 1;
  v52 = v23 + 40;
  v53 = v24;
  v25 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 56LL);
  v26 = *(_QWORD *)(v25 + 16);
  if ( (v26 & 4) != 0 )
    v26 = *(_QWORD *)((v26 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  else
    LODWORD(v26) = v26 & 0xFFFFFFF8;
  sub_1DBA4B0((unsigned int)&ptr, a2, v25, v26, 0, 1);
  v27 = sub_1744E80(
          a2,
          (__int64)&v51,
          *(_QWORD *)(*(_QWORD *)(v8 + 16) + 56LL),
          (__int64)&ptr,
          *(unsigned int **)(*(_QWORD *)(v8 + 16) + 64LL),
          0.0);
  if ( ptr != &v57 )
    free(ptr);
  if ( v27 )
    goto LABEL_5;
  v28 = BYTE8(v51);
  *(_BYTE *)(a1 + 8) = BYTE8(v51);
  if ( v28 )
    goto LABEL_25;
  return a1;
}
