char __fastcall sub_D66030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v12; // rcx
  void *v13; // rax
  unsigned int v14; // r10d
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // edx
  __int64 v19; // rdx
  void *v20; // rax
  unsigned int v21; // r8d
  unsigned int v22; // eax
  _BYTE *v23; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // al
  unsigned __int8 v29; // al
  __int64 v30; // rax
  char v31; // al
  char v32; // dl
  int v33; // eax
  const void *v34; // rsi
  int v35; // eax
  size_t v36; // rdx
  unsigned __int64 *v37; // rax
  __int64 *v38; // rcx
  __int64 *v39; // rax
  __int64 v40; // rax
  char v41; // al
  char v42; // dl
  __int64 v43; // rax
  char v44; // al
  char v45; // dl
  __int64 *v46; // rax
  bool v47; // zf
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v52; // [rsp+Ch] [rbp-4Ch]
  unsigned int v53; // [rsp+Ch] [rbp-4Ch]
  unsigned int v54; // [rsp+Ch] [rbp-4Ch]
  unsigned int v55; // [rsp+Ch] [rbp-4Ch]
  __int64 v56; // [rsp+10h] [rbp-48h]
  __int64 v57; // [rsp+10h] [rbp-48h]
  __int64 *v58; // [rsp+18h] [rbp-40h]
  __int64 *v59; // [rsp+18h] [rbp-40h]

  *(_DWORD *)(a1 + 28) = a4;
  v12 = 0x800000000LL;
  *(_QWORD *)(a1 + 80) = a1 + 96;
  *(_QWORD *)(a1 + 88) = 0x200000000LL;
  v13 = (void *)(a1 + 400);
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 392) = 0x800000000LL;
  v14 = *(_DWORD *)(a5 + 8);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 384) = a1 + 400;
  if ( v14 )
  {
    v15 = a1 + 384;
    if ( a5 != v15 )
    {
      v34 = (const void *)(a5 + 16);
      if ( *(_QWORD *)a5 == a5 + 16 )
      {
        v36 = 4LL * v14;
        if ( v14 <= 8uLL
          || (v59 = a6,
              v57 = a5,
              v54 = v14,
              sub_22134E0(v15, v13, v14, 4),
              a5 = v57,
              v14 = v54,
              v13 = *(void **)(a1 + 384),
              a6 = v59,
              v34 = *(const void **)v57,
              (v36 = 4LL * *(unsigned int *)(v57 + 8)) != 0) )
        {
          v58 = a6;
          v56 = a5;
          v53 = v14;
          memcpy(v13, v34, v36);
          a6 = v58;
          a5 = v56;
          v14 = v53;
        }
        *(_DWORD *)(a1 + 392) = v14;
        *(_DWORD *)(a5 + 8) = 0;
      }
      else
      {
        v35 = *(_DWORD *)(a5 + 12);
        *(_QWORD *)(a1 + 384) = *(_QWORD *)a5;
        *(_DWORD *)(a1 + 392) = v14;
        *(_DWORD *)(a1 + 396) = v35;
        *(_QWORD *)a5 = v34;
        *(_QWORD *)(a5 + 8) = 0;
      }
    }
  }
  *(_QWORD *)(a1 + 432) = 0;
  v16 = *a6;
  v17 = 0x800000000LL;
  *(_QWORD *)(a1 + 440) = 0;
  *(_DWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 432) = v16;
  LODWORD(v16) = *((_DWORD *)a6 + 2);
  *a6 = 0;
  *(_DWORD *)(a1 + 440) = v16;
  v18 = *((_DWORD *)a6 + 3);
  *((_DWORD *)a6 + 2) = 0;
  LODWORD(v16) = *(_DWORD *)(a1 + 444);
  *(_DWORD *)(a1 + 444) = v18;
  v19 = *((unsigned int *)a6 + 4);
  *((_DWORD *)a6 + 3) = v16;
  LODWORD(v16) = *(_DWORD *)(a1 + 448);
  *(_DWORD *)(a1 + 448) = v19;
  *((_DWORD *)a6 + 4) = v16;
  v20 = (void *)(a1 + 472);
  *(_QWORD *)(a1 + 464) = 0x800000000LL;
  v21 = *(_DWORD *)(a7 + 8);
  *(_QWORD *)(a1 + 456) = a1 + 472;
  if ( a7 != a1 + 456 && v21 )
  {
    v19 = *(_QWORD *)a7;
    v17 = a7 + 16;
    if ( *(_QWORD *)a7 == a7 + 16 )
    {
      v19 = 4LL * v21;
      if ( v21 <= 8uLL
        || (v55 = v21,
            sub_22134E0(a1 + 456, a1 + 472, v21, 4),
            v17 = *(_QWORD *)a7,
            v20 = *(void **)(a1 + 456),
            v21 = v55,
            (v19 = 4LL * *(unsigned int *)(a7 + 8)) != 0) )
      {
        v52 = v21;
        memcpy(v20, (const void *)v17, v19);
        v21 = v52;
      }
      *(_DWORD *)(a1 + 464) = v21;
      *(_DWORD *)(a7 + 8) = 0;
    }
    else
    {
      v33 = *(_DWORD *)(a7 + 12);
      *(_QWORD *)(a1 + 456) = v19;
      *(_DWORD *)(a1 + 464) = v21;
      *(_DWORD *)(a1 + 468) = v33;
      *(_QWORD *)a7 = v17;
      *(_QWORD *)(a7 + 8) = 0;
    }
  }
  LOBYTE(v22) = (8 * (a9 & 1)) & 0xCC | (4 * (a8 & 1)) & 0xCC | *(_BYTE *)(a1 + 504) & 0xC0;
  *(_BYTE *)(a1 + 504) = v22;
  if ( (a3 & 4) != 0 || (v23 = (_BYTE *)(a3 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr )
  {
    *(_WORD *)(a1 + 504) &= 0xFC3Fu;
    return v22;
  }
  *(_BYTE *)(a1 + 504) = ((sub_B50B60((__int64)v23, v17, v19, v12) & 1) << 6) | *(_BYTE *)(a1 + 504) & 0xBF;
  v24 = sub_B59AB0((__int64)v23) & 1 | *(_BYTE *)(a1 + 505) & 0xFE;
  v28 = 1;
  *(_BYTE *)(a1 + 505) = v24;
  if ( (v23[84] & 3) == 0 )
  {
    if ( (v23[29] & 1) == 0 )
    {
      v28 = 0;
      goto LABEL_8;
    }
    v37 = sub_B68690((__int64)v23, v17, v24, v25, v26, v27);
    v38 = (__int64 *)*v37;
    v24 = *v37 + 8LL * *((unsigned int *)v37 + 2);
    if ( *v37 < v24 )
    {
      v46 = (__int64 *)*v37;
      while ( 1 )
      {
        v17 = *v46;
        v38 = v46;
        if ( *(_WORD *)(*v46 + 36) == 247 )
          break;
        if ( (__int64 *)v24 == ++v46 )
          goto LABEL_33;
      }
    }
    else
    {
      if ( v38 == (__int64 *)v24 )
      {
LABEL_33:
        LOBYTE(v24) = *(_BYTE *)(a1 + 505);
        v28 = 0;
        goto LABEL_8;
      }
      if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 247 )
      {
        v39 = (__int64 *)(v24 + 8);
        do
        {
          v24 = (unsigned __int64)v39;
          if ( v38 == v39 )
            goto LABEL_33;
          v17 = *v39++;
        }
        while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 247 );
      }
    }
    v47 = v38 == (__int64 *)v24;
    LOBYTE(v24) = *(_BYTE *)(a1 + 505);
    v28 = !v47;
  }
LABEL_8:
  *(_BYTE *)(a1 + 505) = (2 * v28) | v24 & 0xFD;
  v29 = v23[28] & 0x7F;
  if ( v29 == 38 )
  {
    v30 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v23 + 32LL))(v23);
    v31 = (*(_QWORD *)(v30 + 80) & 0x40000LL) != 0
       || ((*(_QWORD *)(v30 + 80) >> 16) & 8) != 0
       || (unsigned int)sub_B747A0(v30) != 0;
    *(_DWORD *)(a1 + 8) = 1;
    v32 = v31 << 7;
    LOBYTE(v22) = (v31 << 7) | *(_BYTE *)(a1 + 504) & 0x7F;
    *(_BYTE *)(a1 + 504) = v32 | *(_BYTE *)(a1 + 504) & 0x7F;
  }
  else if ( v29 == 36 )
  {
    v40 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v23 + 32LL))(v23);
    v41 = (*(_QWORD *)(v40 + 80) & 0x40000LL) != 0
       || ((*(_QWORD *)(v40 + 80) >> 16) & 8) != 0
       || (unsigned int)sub_B747A0(v40) != 0;
    *(_DWORD *)(a1 + 8) = 2;
    v42 = v41 << 7;
    LOBYTE(v22) = (v41 << 7) | *(_BYTE *)(a1 + 504) & 0x7F;
    *(_BYTE *)(a1 + 504) = v42 | *(_BYTE *)(a1 + 504) & 0x7F;
  }
  else
  {
    v22 = v29 - 35;
    if ( v22 > 3 )
    {
      *(_BYTE *)(a1 + 504) &= ~0x80u;
    }
    else
    {
      v43 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v23 + 32LL))(v23);
      v44 = (*(_QWORD *)(v43 + 80) & 0x40000LL) != 0
         || ((*(_QWORD *)(v43 + 80) >> 16) & 8) != 0
         || (unsigned int)sub_B747A0(v43) != 0;
      v45 = v44 << 7;
      LOBYTE(v22) = (v44 << 7) | *(_BYTE *)(a1 + 504) & 0x7F;
      *(_BYTE *)(a1 + 504) = v45 | *(_BYTE *)(a1 + 504) & 0x7F;
      if ( a10 )
      {
        *(_DWORD *)(a1 + 8) = 3;
      }
      else if ( (v23[80] & 0x7Fu) - 35 <= 3
             && ((v48 = *(_QWORD *)(sub_B68470((__int64)(v23 + 72)) + 16), (v48 & 4) != 0)
               ? (v49 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL))
               : (v49 = v48 & 0xFFFFFFFFFFFFFFF8LL),
                 v49
              && v49 != 64
              && (v50 = *(_QWORD *)(v49 + 64)) != 0
              && (*(_BYTE *)(v50 + 10) & 0x20) != 0
              && (v22 = sub_B53B50((__int64)v23), v22 == 42)) )
      {
        *(_DWORD *)(a1 + 8) = 4;
      }
      else
      {
        LOBYTE(v22) = sub_B744F0(v23, v17);
        if ( (_BYTE)v22 || (LOBYTE(v22) = sub_B74620(v23, v17), (_BYTE)v22) )
          *(_DWORD *)(a1 + 8) = 5;
      }
    }
  }
  return v22;
}

