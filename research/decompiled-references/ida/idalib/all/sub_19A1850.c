__int64 __fastcall sub_19A1850(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  char v12; // dl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  unsigned __int8 v19; // al
  char *v20; // rax
  char *v21; // r12
  __int64 v22; // rax
  unsigned __int16 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 *v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // rax
  __int64 v38; // rbp
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r12
  unsigned int v50; // eax
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  unsigned __int8 *v61; // rsi
  _QWORD *v62; // rax
  unsigned __int8 *v63; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v64; // [rsp+8h] [rbp-40h]

  v8 = (__int64)a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 107LL) & 4) != 0
    && (unsigned __int8)sub_F6AE00(*(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL), (__int64)a2, a3, a4, a5) )
  {
    v11 = *a2;
    LOWORD(v11) = v11 & 0x1FF;
    if ( (unsigned __int16)v11 <= 0x58u )
    {
      if ( (_WORD)v11 == 10 )
      {
LABEL_5:
        v12 = 55;
        *(_WORD *)(a1 + 4512) = 257;
        return sub_C0A3E0(*(_QWORD **)(a1 + 248), *((_QWORD *)a2 + 1), v12, (__int64)a2, 0, 0, 0);
      }
      v31 = (unsigned int)(v11 + 433);
      LOWORD(v31) = (v11 + 433) & 0x1FF;
      if ( (unsigned __int16)v31 <= 9u )
      {
        if ( (**((_WORD **)a2 + 2) & 0x1FF) != 0x75 )
          goto LABEL_25;
      }
      else
      {
        switch ( (_WORD)v11 )
        {
          case '!':
            if ( (*((_BYTE *)a2 + 27) & 1) != 0 )
            {
              v32 = *((_QWORD *)a2 + 2);
LABEL_31:
              if ( v32 )
              {
                if ( (*(_BYTE *)(v32 + 29) & 1) != 0 )
                {
                  v40 = sub_B8C3D0(v32, (__int64)a2, v31, a4, v9, v10);
                  v31 = *v40;
                  a4 = *v40 + 8LL * *((unsigned int *)v40 + 2);
                  if ( *v40 >= a4 )
                  {
                    if ( v31 != a4 )
                    {
                      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 71 )
                        goto LABEL_5;
                      v42 = (__int64 *)(a4 + 8);
                      while ( 1 )
                      {
                        a4 = (unsigned __int64)v42;
                        if ( (__int64 *)v31 == v42 )
                          break;
                        v43 = *v42++;
                        if ( *(_WORD *)(v43 + 36) == 71 )
                          goto LABEL_5;
                      }
                    }
                  }
                  else
                  {
                    v41 = (__int64 *)*v40;
                    while ( 1 )
                    {
                      v31 = *v41;
                      if ( *(_WORD *)(*v41 + 36) == 71 )
                        break;
                      if ( (__int64 *)a4 == ++v41 )
                        goto LABEL_33;
                    }
                    if ( (__int64 *)a4 != v41 )
                      goto LABEL_5;
                  }
                }
LABEL_33:
                if ( (unsigned int)sub_BA8080(v32, (__int64)a2, v31, a4, v9, v10) == 14 )
                  return v8;
              }
            }
LABEL_25:
            if ( !sub_F68080(*(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              v12 = 56;
              *(_WORD *)(a1 + 4512) = 257;
              return sub_C0A3E0(*(_QWORD **)(a1 + 248), *((_QWORD *)a2 + 1), v12, (__int64)a2, 0, 0, 0);
            }
            return v8;
          case '\'':
            v32 = *((_QWORD *)a2 + 3);
            goto LABEL_31;
          case '*':
            v10 = *((unsigned int *)a2 + 4);
            if ( (_DWORD)v10 )
              goto LABEL_64;
            break;
          case '&':
            if ( (*((_DWORD *)a2 + 4) & 0x7FFFFFFF) != 0 )
            {
LABEL_64:
              v32 = *((_QWORD *)a2 + 4);
              goto LABEL_31;
            }
            break;
          default:
            goto LABEL_25;
        }
        if ( !sub_19A17F0((int *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 368LL)) )
          goto LABEL_64;
      }
      return v8;
    }
    if ( (unsigned __int16)v11 > 0x5Du )
      goto LABEL_25;
    v23 = (unsigned __int16 *)sub_BFB9F0(*((_QWORD *)a2 + 4));
    v24 = *(_QWORD *)(a1 + 248);
    v25 = *((_QWORD *)v23 + 1);
    if ( v25 == *(_QWORD *)(v24 + 19088) )
    {
      v24 = *v23;
      LOWORD(v24) = v24 & 0x1FF;
      if ( (unsigned __int16)v24 <= 0x75u )
      {
        if ( (_WORD)v24 == 46 )
          v25 = *(_QWORD *)(*((_QWORD *)v23 + 3) + 48LL);
      }
      else if ( (unsigned __int16)v24 <= 0x77u )
      {
        v25 = *(_QWORD *)(*((_QWORD *)v23 + 3) + 8LL);
      }
    }
    v26 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
    v27 = *v26;
    v28 = v26;
    if ( *(_BYTE *)(*v26 + 16) == 42 )
      goto LABEL_21;
    v27 = sub_199F9E0(*v26, (__int64)a2, (__int64)v26, v24);
    if ( v27 )
      goto LABEL_21;
    v27 = *v28;
    v29 = *(unsigned __int8 *)(*v28 + 16);
    if ( (_BYTE)v29 == 11 )
      goto LABEL_21;
    v24 = *(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) == 11 )
    {
      v27 = sub_F63050(v27, a2, v29, v24);
      if ( v27 )
        goto LABEL_21;
      v27 = *v28;
      v29 = *(unsigned __int8 *)(*v28 + 16);
    }
    if ( (_BYTE)v29 != 33 )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v24 + 16) != 33 )
        goto LABEL_22;
      v27 = sub_F63050(v27, a2, v29, v24);
      if ( !v27 )
      {
        v27 = *v28;
        LODWORD(v29) = *(unsigned __int8 *)(*v28 + 16);
LABEL_22:
        v30 = (unsigned int)(v29 - 25);
        if ( (unsigned int)v30 > 1 )
          v27 = sub_F63050(v27, a2, v30, v24);
        if ( (*(_BYTE *)(v27 + 21) & 2) != 0 )
          goto LABEL_5;
        goto LABEL_25;
      }
    }
LABEL_21:
    v27 = *(_QWORD *)(*(_QWORD *)(v27 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    LODWORD(v29) = *(unsigned __int8 *)(v27 + 16);
    goto LABEL_22;
  }
  if ( (unsigned int)sub_F65A30(*((_QWORD *)a2 + 1), (__int64)a2, a3, a4) == 4 )
  {
    v22 = *(_QWORD *)(a1 + 232);
    v14 = 257;
    *(_WORD *)(a1 + 4512) = 257;
    if ( (*(_BYTE *)(v22 + 1) & 8) == 0 )
      return v8;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 )
  {
    return v8;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( v19 <= 6u )
  {
    while ( v19 >= 4u || v19 == 2 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *(_BYTE *)(v18 + 16);
      if ( v19 > 6u )
        goto LABEL_13;
    }
    return v8;
  }
LABEL_13:
  if ( v19 != 48 )
    return v8;
  v20 = (char *)sub_F60F10(v18, (__int64)a2, v14, v15, v16, v17);
  v21 = v20;
  if ( v20[28] < 0 || (unsigned __int8)sub_B8E180((unsigned __int64)(v20 + 64)) )
    return v8;
  if ( !*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 48) )
  {
    v37 = sub_C96230(*(_QWORD **)(a1 + 248), 0, v33, v34, v35, v36);
    v8 = sub_C94CE0(*(_QWORD *)(a1 + 248), (__int64)v37, (__int64)a2);
    v38 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
    v39 = *(unsigned int *)(v38 + 216);
    if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(v38 + 220) )
    {
      sub_2237220(v38 + 208, v38 + 224, v39 + 1, 8);
      v39 = *(unsigned int *)(v38 + 216);
    }
    *(_QWORD *)(*(_QWORD *)(v38 + 208) + 8 * v39) = v8;
    ++*(_DWORD *)(v38 + 216);
    return v8;
  }
  v44 = (__int64)v21;
  v49 = sub_1A69EF0(a1, v21);
  if ( !v49 )
  {
LABEL_85:
    v62 = sub_C96230(*(_QWORD **)(a1 + 248), v49, v45, v46, v47, v48);
    return sub_C94CE0(*(_QWORD *)(a1 + 248), (__int64)v62, v8);
  }
  v50 = sub_C00A40(v8, v44, v45, v46, v47);
  sub_1910D40(a1, v50, v49, 1, v51, v52, a6, a7);
  sub_168B9B0((__int64)&v63, a1 + 8, 2950);
  v53 = *(_QWORD *)(v8 + 8);
  sub_AE9DF0(&v63, v53, 8u);
  v57 = sub_C00A40(v8, v53, v54, v55, v56);
  sub_16602B0((_QWORD *)a1, v57, v49, (__int64)&v63, 0);
  v61 = v63;
  if ( v63 && v64 )
    sub_1580C40(v64, (unsigned __int64)v63);
  LODWORD(v63) = sub_C00A40(v8, (__int64)v61, v58, v59, v60);
  if ( !(unsigned __int8)sub_18F5260(a1, v49, (int *)&v63, 1u, 0, 0, (__m128i)a6, *(double *)a7.m128_u64, 0, 0, 0) )
  {
    if ( *(char *)(v49 + 82) < 0 )
      return v8;
    *(_WORD *)(a1 + 4512) = 257;
    goto LABEL_85;
  }
  return 1;
}
