__int64 __fastcall sub_C39A10(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // r15d
  void *v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rcx
  char v21; // al
  __int16 v22; // ax
  unsigned __int8 **v23; // rax
  __int64 v24; // rdi
  unsigned int v25; // eax
  int *v26; // rdx
  char v27; // dl
  unsigned int v28; // eax
  void **v29; // rsi
  __int64 v30; // rax
  char v31; // dl
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rdi
  unsigned int v36; // eax
  unsigned __int8 **v37; // rax
  int *v38; // [rsp+0h] [rbp-1B8h] BYREF
  void **v39; // [rsp+8h] [rbp-1B0h]
  __int64 v40; // [rsp+28h] [rbp-190h] BYREF
  _QWORD v41[4]; // [rsp+30h] [rbp-188h] BYREF
  _QWORD v42[4]; // [rsp+50h] [rbp-168h] BYREF
  void *v43; // [rsp+70h] [rbp-148h] BYREF
  unsigned int v44; // [rsp+78h] [rbp-140h]
  char v45; // [rsp+7Ch] [rbp-13Ch]
  void *v46; // [rsp+90h] [rbp-128h] BYREF
  unsigned int v47; // [rsp+98h] [rbp-120h]
  char v48; // [rsp+9Ch] [rbp-11Ch]
  __int64 v49; // [rsp+B0h] [rbp-108h] BYREF
  void **v50; // [rsp+B8h] [rbp-100h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-F8h]
  void *v52; // [rsp+C8h] [rbp-F0h] BYREF
  __int64 v53[4]; // [rsp+D0h] [rbp-E8h] BYREF
  __m128 v54; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+100h] [rbp-B8h]
  void *v56; // [rsp+108h] [rbp-B0h]
  unsigned int v57; // [rsp+110h] [rbp-A8h]
  char v58; // [rsp+114h] [rbp-A4h]
  __int64 v59; // [rsp+118h] [rbp-A0h] BYREF
  void *ptr; // [rsp+120h] [rbp-98h]
  __int64 v61; // [rsp+128h] [rbp-90h]
  _QWORD v62[8]; // [rsp+130h] [rbp-88h] BYREF
  char v63; // [rsp+171h] [rbp-47h]

  v7 = *(_QWORD *)(a3 + 8);
  v40 = v7;
  if ( (*(_BYTE *)(a3 + 1) & 6) != 0
    || (v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF0LL),
        v9 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL),
        v10 = (unsigned int)(v9 - 25),
        (unsigned int)v10 <= 1) )
  {
    v54 = 0u;
    v55 = 0;
    LOBYTE(v56) = (unsigned __int8)v56 | 1;
    v59 = 0;
    ptr = v62;
    v61 = 0x800000000LL;
    v63 = 0;
    v49 = a2;
    v50 = (void **)&v54;
    LOBYTE(v51) = 0;
    v11 = sub_C5C820(&v49, a3);
    if ( !(_BYTE)v11 )
      goto LABEL_4;
LABEL_12:
    sub_C0F890((__int64)&v54, a1);
    v12 = ptr;
    if ( ptr == v62 )
      return v11;
    goto LABEL_5;
  }
  if ( (unsigned int)(v9 - 57) <= 1 )
  {
    v38 = (int *)a1;
    v54 = _mm_loadh_ps((const double *)&v38);
    return (unsigned int)sub_C6CD60(&v54, a3);
  }
  if ( sub_C1C400(v8, a2, v10, a4, a5) )
  {
    v38 = (int *)a1;
    v54 = _mm_loadh_ps((const double *)&v38);
    return (unsigned int)sub_C44E70(&v54, a3);
  }
  v14 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (unsigned __int8)v16 > 0x2Cu
    || (v17 = 0x1C0400000800LL, !_bittest64(&v17, v16))
    && ((_BYTE)v16 != 13 || ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) != 0x1E8) )
  {
    v11 = sub_F58100(v14);
    if ( (_BYTE)v11 )
    {
      sub_C11060((__int64)&v46);
      v54.m128_u64[0] = a2;
      v54.m128_u64[1] = (unsigned __int64)&v46;
      v11 = sub_C6ACF0(&v54, a3);
      if ( (_BYTE)v11 )
      {
        sub_995620((__int64)&v49, &v46);
        sub_C18B90((__int64)&v54, &v49);
        sub_A4FD20(a1, (__int64)&v54);
        if ( v54.m128_i32[0] > 1u )
          sub_A4F8E0((int *)&v54);
        sub_9955A0(&v49);
      }
      sub_9955A0(&v46);
      return v11;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(_BYTE *)(v20 + 16);
    switch ( v21 )
    {
      case 14:
        sub_C11C80((__int64)&v54);
        v49 = a2;
        v50 = (void **)&v54;
        v11 = sub_C72E70(&v49, a3);
        if ( (_BYTE)v11 )
        {
          if ( v54.m128_i8[0] )
          {
            v47 = v57;
            if ( v57 > 0x40 )
              sub_2205510(&v46);
            else
              v46 = v56;
            v27 = v58;
            v28 = v55;
            v48 = v58;
            v44 = v55;
            if ( (unsigned int)v55 > 0x40 )
            {
              sub_2205510(&v43);
              v28 = v44;
              v29 = (void **)v43;
              v27 = v48;
            }
            else
            {
              v29 = (void **)v54.m128_u64[1];
              v43 = (void *)v54.m128_u64[1];
            }
            LODWORD(v51) = v28;
            v50 = v29;
            LODWORD(v53[0]) = v47;
            BYTE4(v49) &= ~1u;
            v45 = BYTE4(v55);
            LODWORD(v49) = 5;
            v47 = 0;
            v44 = 0;
            BYTE4(v51) = BYTE4(v55);
            v52 = v46;
            BYTE4(v53[0]) = v27;
            sub_A4FD20(a1, (__int64)&v49);
            if ( (unsigned int)v49 > 1 )
              sub_A4F8E0((int *)&v49);
            if ( v44 > 0x40 && v43 )
              operator delete[](v43);
            if ( v47 > 0x40 && v46 )
              operator delete[](v46);
          }
          else
          {
            v39 = (void **)v42;
            sub_995620((__int64)v42, v62);
            sub_995620((__int64)v41, &v59);
            BYTE4(v49) &= ~1u;
            LODWORD(v49) = 0;
            sub_C11060((__int64)&v50);
            sub_C11060((__int64)v53);
            LODWORD(v49) = 6;
            sub_C16C20((__int64)&v46, v42);
            sub_C16C20((__int64)&v43, v41);
            sub_C177C0((__int64 *)&v50, (__int64 *)&v43);
            sub_C177C0(v53, (__int64 *)&v46);
            sub_9955A0(&v43);
            sub_9955A0(&v46);
            sub_A4FD20(a1, (__int64)&v49);
            if ( (unsigned int)v49 > 1 )
              sub_A4F8E0((int *)&v49);
            sub_9955A0(v41);
            sub_9955A0(v39);
          }
        }
        sub_C17D80((__int64)&v54);
        return v11;
      case 13:
        v22 = (*(_WORD *)(v20 + 18) >> 3) & 0x1FF;
        if ( ((v22 + 56) & 0x1FFu) <= 0x17 )
        {
          v38 = (int *)a1;
          v54 = _mm_loadh_ps((const double *)&v38);
          return (unsigned int)sub_C68630(&v54, a3);
        }
        if ( v22 == 435 )
        {
          if ( (*(_BYTE *)(sub_E32240(a2) + 1) & 0x10) == 0 )
          {
            v37 = (unsigned __int8 **)sub_E33C90(a2, a3, 2458, 0);
            if ( v37 )
              sub_AE9DF0(v37, *(_QWORD *)(a3 + 8), 8u);
          }
          v54.m128_u64[0] = a2;
          return (unsigned int)sub_C846B0(&v54, a3);
        }
LABEL_22:
        if ( (*(_BYTE *)(sub_E32240(a2) + 1) & 0x10) != 0 )
        {
          v23 = (unsigned __int8 **)sub_E33C10(a2, a3, 2458, 0);
          if ( v23 )
            sub_AE9DF0(v23, *(_QWORD *)(a3 + 8), 8u);
        }
        else
        {
          sub_E33C10(a2, a3, 108, 0);
        }
        return v11;
      case 33:
        v49 = 0;
        v54.m128_u64[0] = a2;
        v50 = &v52;
        v51 = 0x400000000LL;
        v54.m128_u64[1] = (unsigned __int64)&v49;
        v11 = sub_C37DE0((__int64 *)&v54, (unsigned __int16 *)a3, v40, v20, v18, v19);
        if ( (_BYTE)v11 )
        {
          v54.m128_i32[0] = 0;
          v54.m128_i8[4] &= ~1u;
          sub_A53BA0((__int64)&v54, v49 & 0xFFFFFFFFFFFFFFF8LL, (v49 >> 2) & 1, (__int64)v50, (unsigned int)v51);
          sub_A4FD20(a1, (__int64)&v54);
          if ( v54.m128_i32[0] > 1u )
            sub_A4F8E0((int *)&v54);
        }
        v12 = v50;
        if ( v50 != &v52 )
          goto LABEL_5;
        return v11;
    }
    if ( (unsigned __int8)(v21 - 2) <= 4u )
    {
      v24 = *(_QWORD *)(a2 + 32);
      LOBYTE(v56) = (unsigned __int8)v56 | 1;
      v54 = 0u;
      v55 = 0;
      v59 = 0;
      ptr = v62;
      v61 = 0x800000000LL;
      v63 = 0;
      v49 = a2;
      v50 = (void **)&v54;
      v51 = sub_C2BF90(v24, a3, v40, 1, (__int64)&v54);
      v38 = (int *)v51;
      v25 = sub_C802B0(&v49, a3);
      v26 = v38;
      v11 = v25;
      if ( !(_BYTE)v25 )
        goto LABEL_35;
      goto LABEL_34;
    }
    if ( v21 == 48 )
    {
      v35 = *(_QWORD *)(a2 + 32);
      LOBYTE(v56) = (unsigned __int8)v56 | 1;
      v54 = 0u;
      v55 = 0;
      v59 = 0;
      ptr = v62;
      v61 = 0x800000000LL;
      v63 = 0;
      v49 = a2;
      v50 = (void **)&v54;
      v51 = sub_C2BF90(v35, a3, v40, 1, (__int64)&v54);
      v38 = (int *)v51;
      v36 = sub_C76C00(&v49, a3);
      v26 = v38;
      v11 = v36;
      if ( (_BYTE)v36 )
LABEL_34:
        sub_A54D20(a1, v26);
    }
    else
    {
      if ( v21 != 7 )
        goto LABEL_22;
      v30 = sub_F64D20(&v40);
      v31 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL);
      if ( (unsigned __int8)(v31 - 2) > 4u && v31 != 48 )
      {
        v54 = (__m128)(unsigned __int64)a2;
        v55 = a1;
        return (unsigned int)sub_C4E190(&v54, a3);
      }
      v32 = *(_QWORD *)(a2 + 32);
      LOBYTE(v56) = (unsigned __int8)v56 | 1;
      v61 = 0x800000000LL;
      v54 = 0u;
      v55 = 0;
      v59 = 0;
      ptr = v62;
      v63 = 0;
      v33 = sub_C2BF90(v32, a3, v30, 1, (__int64)&v54);
      v49 = a2;
      v50 = (void **)&v54;
      v51 = v33;
      v38 = (int *)v33;
      v34 = sub_C4E190(&v49, a3);
      v26 = v38;
      v11 = v34;
      if ( (_BYTE)v34 )
        goto LABEL_34;
    }
LABEL_35:
    v12 = ptr;
    if ( ptr == v62 )
      return v11;
    goto LABEL_5;
  }
  v54 = 0u;
  v55 = 0;
  LOBYTE(v56) = (unsigned __int8)v56 | 1;
  v59 = 0;
  ptr = v62;
  v61 = 0x800000000LL;
  v63 = 0;
  v49 = a2;
  v50 = (void **)&v54;
  LOBYTE(v51) = 0;
  v11 = sub_C48CF0(&v49, a3);
  if ( (_BYTE)v11 )
    goto LABEL_12;
LABEL_4:
  v12 = ptr;
  if ( ptr != v62 )
LABEL_5:
    free(v12);
  return v11;
}
