__int64 __fastcall sub_B2EA10(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  void *v5; // r12
  __int64 v6; // r13
  int v7; // eax
  int v8; // eax
  void *v9; // rdi
  int v10; // eax
  void *v11; // r15
  int v12; // eax
  int v13; // eax
  void *v14; // r15
  int v15; // eax
  int v16; // eax
  char v17; // al
  unsigned int *v18; // r13
  unsigned int *v19; // r14
  __int64 v20; // rax
  __m128i v21; // xmm1
  void *v22; // r13
  void *v23; // rbx
  int v25; // ecx
  void *v26; // r12
  int v27; // eax
  int v28; // eax
  void *v29; // rdi
  int v30; // eax
  void *v31; // r15
  int v32; // eax
  int v33; // eax
  void *v34; // r13
  int v35; // eax
  int v36; // eax
  char v37; // al
  unsigned int *v38; // r14
  unsigned int *v39; // r13
  __int64 v40; // rax
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  void *v43; // r13
  void *v44; // rbx
  int v45; // edi
  void *v46; // [rsp+8h] [rbp-D0h]
  void *v47; // [rsp+8h] [rbp-D0h]
  int v48; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v49; // [rsp+18h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+20h] [rbp-B8h]
  __int64 v51; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+30h] [rbp-A8h]
  int v53; // [rsp+40h] [rbp-98h] BYREF
  __int64 v54; // [rsp+48h] [rbp-90h] BYREF
  __int64 v55; // [rsp+50h] [rbp-88h]
  __int64 v56; // [rsp+58h] [rbp-80h] BYREF
  __int64 v57; // [rsp+60h] [rbp-78h]
  __int64 v58; // [rsp+70h] [rbp-68h]
  __int64 v59; // [rsp+78h] [rbp-60h] BYREF
  __int64 v60; // [rsp+80h] [rbp-58h]
  __int64 v61; // [rsp+88h] [rbp-50h] BYREF
  __int64 v62; // [rsp+90h] [rbp-48h]

  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 )
  {
    if ( v2 != 1 || (v45 = *(_DWORD *)(a1 + 16), v45 >= 0) && (v45 || *(_BYTE *)(a1 + 88)) )
    {
      v4 = *(_DWORD *)(a1 + 48);
      v49 = 0;
      v50 = 0;
      v48 = v4;
      v5 = qword_1C7F2C0;
      v51 = 1;
      v52 = 0;
      if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
      {
        v6 = a1 + 72;
        sub_182C690(qword_1C7F2C0, &v49, a1 + 56);
        if ( (*(_BYTE *)(a1 + 76) & 1) == 0 )
          goto LABEL_8;
      }
      else
      {
        v6 = a1 + 72;
        LODWORD(v49) = *(_DWORD *)(a1 + 56);
        if ( (*(_BYTE *)(a1 + 76) & 1) == 0 )
        {
LABEL_8:
          v7 = *(_DWORD *)(a1 + 72);
          BYTE4(v51) &= ~1u;
          LODWORD(v51) = v7;
LABEL_9:
          sub_B28190((__int64)&v48);
          v8 = *(_DWORD *)(a1 + 8);
          v9 = qword_1C7F2C0;
          v54 = 0;
          v55 = 0;
          v56 = 1;
          v57 = 0;
          if ( v8 == 1 && !*(_DWORD *)(a1 + 16) )
          {
            v58 = 2;
            v59 = 0;
            v60 = 0;
            v61 = 1;
            v62 = 0;
            v53 = 2;
            BYTE4(v56) &= ~1u;
            LODWORD(v56) = 1;
            v46 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v59);
            sub_182CBA0(v46, &v61);
            goto LABEL_14;
          }
          v53 = v8;
          if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v54, a1 + 16);
            if ( (*(_BYTE *)(a1 + 36) & 1) == 0 )
              goto LABEL_12;
          }
          else
          {
            LODWORD(v54) = *(_DWORD *)(a1 + 16);
            if ( (*(_BYTE *)(a1 + 36) & 1) == 0 )
            {
LABEL_12:
              v10 = *(_DWORD *)(a1 + 32);
              BYTE4(v56) &= ~1u;
              LODWORD(v56) = v10;
LABEL_13:
              sub_B28190((__int64)&v53);
LABEL_14:
              v11 = qword_1C7F2C0;
              *(_DWORD *)(a1 + 8) = v48;
              if ( (v49 & 0x100000000LL) != 0 )
              {
                sub_182C690(v11, a1 + 16, &v49);
              }
              else
              {
                v12 = v49;
                *(_BYTE *)(a1 + 20) &= ~1u;
                *(_DWORD *)(a1 + 16) = v12;
              }
              if ( (v51 & 0x100000000LL) != 0 )
              {
                sub_182C690(v11, a1 + 32, &v51);
              }
              else
              {
                v13 = v51;
                *(_BYTE *)(a1 + 36) &= ~1u;
                *(_DWORD *)(a1 + 32) = v13;
              }
              v14 = qword_1C7F2C0;
              *(_DWORD *)(a1 + 48) = v53;
              if ( (v54 & 0x100000000LL) != 0 )
              {
                sub_182C690(v14, a1 + 56, &v54);
              }
              else
              {
                v15 = v54;
                *(_BYTE *)(a1 + 60) &= ~1u;
                *(_DWORD *)(a1 + 56) = v15;
              }
              if ( (v56 & 0x100000000LL) != 0 )
              {
                sub_182C690(v14, v6, &v56);
              }
              else
              {
                v16 = v56;
                *(_BYTE *)(a1 + 76) &= ~1u;
                *(_DWORD *)(a1 + 72) = v16;
              }
              v17 = *(_BYTE *)(a1 + 88);
              v18 = *(unsigned int **)(a1 + 96);
              v19 = *(unsigned int **)(a1 + 104);
              *(_BYTE *)(a1 + 88) = *(_BYTE *)(a1 + 89);
              *(_BYTE *)(a1 + 89) = v17;
              if ( v18 )
              {
                if ( v19 == v18 || !v19 )
                {
                  v20 = (__int64)v18;
                }
                else
                {
                  v20 = sub_180C100(*(_QWORD *)(*(_QWORD *)a1 + 56LL), 24);
                  *v18 = (*v18 + 1) & 0x3FFFFFFF | *v18 & 0xC0000000;
                  *v19 = (*v19 + 1) & 0x3FFFFFFF | *v19 & 0xC0000000;
                  *(_QWORD *)v20 = 0;
                  *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(
                                            (__m128i)(unsigned __int64)v18,
                                            (__m128i)(unsigned __int64)v19);
                }
              }
              else
              {
                v20 = (__int64)v19;
              }
              v21 = (__m128i)(unsigned __int64)v18;
              v22 = qword_1C7F2C0;
              *(__m128i *)(a1 + 96) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, v21);
              sub_182CBA0(v22, &v54);
              sub_182CBA0(v22, &v56);
              v23 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v49);
              sub_182CBA0(v23, &v51);
              return a1;
            }
          }
          sub_182C690(v9, &v56, a1 + 32);
          goto LABEL_13;
        }
      }
      sub_182C690(v5, &v51, v6);
      goto LABEL_9;
    }
  }
  v3 = *(_DWORD *)(a1 + 48);
  if ( v3 )
  {
    if ( v3 != 1 || (v25 = *(_DWORD *)(a1 + 56), v25 >= 0) && (v25 || !*(_BYTE *)(a1 + 89)) )
    {
      sub_1872CE0("");
      sub_1873130(114, 562);
    }
  }
  v48 = v2;
  v49 = 0;
  v50 = 0;
  v26 = qword_1C7F2C0;
  v51 = 1;
  v52 = 0;
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v49, a1 + 16);
  else
    LODWORD(v49) = *(_DWORD *)(a1 + 16);
  if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
  {
    sub_182C690(v26, &v51, a1 + 32);
  }
  else
  {
    v27 = *(_DWORD *)(a1 + 32);
    BYTE4(v51) &= ~1u;
    LODWORD(v51) = v27;
  }
  sub_B28190((__int64)&v48);
  v28 = *(_DWORD *)(a1 + 48);
  v29 = qword_1C7F2C0;
  v54 = 0;
  v55 = 0;
  v56 = 1;
  v57 = 0;
  if ( v28 != 1 || *(_DWORD *)(a1 + 56) )
  {
    v53 = v28;
    if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v54, a1 + 56);
    else
      LODWORD(v54) = *(_DWORD *)(a1 + 56);
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 )
    {
      sub_182C690(v29, &v56, a1 + 72);
    }
    else
    {
      v30 = *(_DWORD *)(a1 + 72);
      BYTE4(v56) &= ~1u;
      LODWORD(v56) = v30;
    }
    sub_B28190((__int64)&v53);
  }
  else
  {
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 1;
    v62 = 0;
    v53 = 0;
    BYTE4(v56) &= ~1u;
    LODWORD(v56) = 1;
    v47 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v59);
    sub_182CBA0(v47, &v61);
  }
  v31 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 8) = v53;
  if ( (v54 & 0x100000000LL) != 0 )
  {
    sub_182C690(v31, a1 + 16, &v54);
  }
  else
  {
    v32 = v54;
    *(_BYTE *)(a1 + 20) &= ~1u;
    *(_DWORD *)(a1 + 16) = v32;
  }
  if ( (v56 & 0x100000000LL) != 0 )
  {
    sub_182C690(v31, a1 + 32, &v56);
  }
  else
  {
    v33 = v56;
    *(_BYTE *)(a1 + 36) &= ~1u;
    *(_DWORD *)(a1 + 32) = v33;
  }
  v34 = qword_1C7F2C0;
  *(_DWORD *)(a1 + 48) = v48;
  if ( (v49 & 0x100000000LL) != 0 )
  {
    sub_182C690(v34, a1 + 56, &v49);
  }
  else
  {
    v35 = v49;
    *(_BYTE *)(a1 + 60) &= ~1u;
    *(_DWORD *)(a1 + 56) = v35;
  }
  if ( (v51 & 0x100000000LL) != 0 )
  {
    sub_182C690(v34, a1 + 72, &v51);
  }
  else
  {
    v36 = v51;
    *(_BYTE *)(a1 + 76) &= ~1u;
    *(_DWORD *)(a1 + 72) = v36;
  }
  v37 = *(_BYTE *)(a1 + 88);
  v38 = *(unsigned int **)(a1 + 96);
  v39 = *(unsigned int **)(a1 + 104);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a1 + 89);
  *(_BYTE *)(a1 + 89) = v37;
  if ( v38 )
  {
    if ( v38 != v39 && v39 )
    {
      v40 = sub_180C100(*(_QWORD *)(*(_QWORD *)a1 + 56LL), 24);
      v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v38, (__m128i)(unsigned __int64)v39);
      *v38 = (*v38 + 1) & 0x3FFFFFFF | *v38 & 0xC0000000;
      v38 = (unsigned int *)v40;
      *v39 = (*v39 + 1) & 0x3FFFFFFF | *v39 & 0xC0000000;
      *(_QWORD *)v40 = 0;
      *(__m128i *)(v40 + 8) = v41;
    }
  }
  else
  {
    v38 = v39;
  }
  v42 = (__m128i)(unsigned __int64)v39;
  v43 = qword_1C7F2C0;
  *(__m128i *)(a1 + 96) = _mm_unpacklo_epi64(v42, (__m128i)(unsigned __int64)v38);
  sub_182CBA0(v43, &v54);
  sub_182CBA0(v43, &v56);
  v44 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v49);
  sub_182CBA0(v44, &v51);
  return a1;
}

