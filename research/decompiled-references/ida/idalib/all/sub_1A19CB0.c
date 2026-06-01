void __fastcall sub_1A19CB0(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _BYTE *a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9)
{
  unsigned int v10; // r12d
  unsigned __int64 v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int16 v22; // ax
  __int64 *v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rcx
  const __m128i *v26; // rdx
  __int64 v27; // rax
  __m128 v28; // xmm0
  __int64 v29; // r14
  __int64 v30; // rax
  unsigned int *v31; // rax
  unsigned int v32; // eax
  __int64 v33; // r15
  unsigned __int8 v34; // al
  unsigned __int8 v35; // cl
  __int64 *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 *v39; // rcx
  __int64 **v40; // rax
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 *v43; // rax
  unsigned __int64 v44; // rax
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int64 v47; // rax
  _DWORD *v48; // rcx
  _QWORD *v49; // rsi
  unsigned int v51; // [rsp+8h] [rbp-120h]
  unsigned int v52; // [rsp+8h] [rbp-120h]
  unsigned __int64 v53; // [rsp+8h] [rbp-120h]
  int v54; // [rsp+8h] [rbp-120h]
  __int64 v55; // [rsp+8h] [rbp-120h]
  int v56; // [rsp+14h] [rbp-114h]
  __int64 v57; // [rsp+18h] [rbp-110h] BYREF
  __int64 v58; // [rsp+20h] [rbp-108h] BYREF
  __int64 v59; // [rsp+28h] [rbp-100h] BYREF
  int v60; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v61; // [rsp+38h] [rbp-F0h]
  __int64 v62; // [rsp+40h] [rbp-E8h]
  int v63; // [rsp+48h] [rbp-E0h]
  __int64 v64; // [rsp+50h] [rbp-D8h]
  __int16 v65; // [rsp+58h] [rbp-D0h]
  _BYTE v66[200]; // [rsp+60h] [rbp-C8h] BYREF

  v10 = a2;
  v11 = a5;
  v57 = a3;
  v12 = sub_BFB220(a5);
  v14 = *(_QWORD *)(v11 + 16);
  v15 = *(_QWORD *)(v11 + 24);
  v60 = 6;
  v16 = v12;
  v17 = v57;
  v61 = a4;
  v63 = 0;
  v18 = *(_QWORD *)(v57 + 48);
  v19 = (v15 - v14) >> 3;
  v64 = v57;
  v62 = v18;
  v20 = 0;
  v65 = 0;
  if ( (unsigned int)a2 < (unsigned int)v19 )
  {
    v20 = (unsigned int)a2;
    v21 = *(_QWORD *)(v14 + 8LL * (unsigned int)a2);
    if ( v21 )
    {
      v22 = *(_WORD *)v21 & 0x1FF;
      if ( v22 == 53 )
      {
        sub_1A1A320((_DWORD)a1, (unsigned int)&v60, v21, (_DWORD)a6, v11, a2, a9);
      }
      else if ( v22 == 67 )
      {
        sub_1A1A320((_DWORD)a1, (unsigned int)&v60, *(_QWORD *)(v21 + 24), (_DWORD)a6, v11, a2, 1);
      }
      return;
    }
  }
  v23 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v23 + 16) == 48 )
  {
    v51 = v16;
    sub_F60F10(*v23, a2, (__int64)v23, v20, v13, v16);
    v17 = v57;
    v16 = v51;
  }
  if ( a9 )
  {
    v33 = *(_QWORD *)(v17 + 48);
    v29 = sub_EEE9A0(16, *(_QWORD **)(*a1 + 248), 8u);
    *(_WORD *)v29 = *(_WORD *)v29 & 0xFE00 | 0x2D;
    if ( unk_2CD7484 )
      sub_EE9B50(45);
    *(_WORD *)(v29 + 1) &= 0xF801u;
    *(_QWORD *)(v29 + 8) = v33;
    v34 = sub_B63070(v29);
    *(_BYTE *)(v29 + 1) = (v34 << 6) | *(_BYTE *)(v29 + 1) & 0x3F;
    *(_BYTE *)(v29 + 2) = *(_BYTE *)(v29 + 2) & 0xF8 | (v34 >> 2) & 7;
    if ( (unsigned int)a2 >= (unsigned int)v19 )
    {
      sub_C0B210(v11, *(_QWORD **)(*a1 + 248), a2, (_DWORD *)v29);
      return;
    }
    *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * (unsigned int)a2) = v29;
LABEL_31:
    v32 = *(_DWORD *)v29;
    goto LABEL_32;
  }
  if ( !*((_BYTE *)a1 + 9) && (*(_BYTE *)(v17 + 29) & 1) != 0 )
  {
    v54 = v16;
    v36 = sub_B8C3D0(v17, a2, (__int64)v23, v20, v13, v16);
    LODWORD(v16) = v54;
    v38 = *v36;
    v39 = (__int64 *)(*v36 + 8LL * *((unsigned int *)v36 + 2));
    if ( *v36 < (unsigned __int64)v39 )
    {
      v43 = (__int64 *)*v36;
      while ( 1 )
      {
        v38 = *v43;
        if ( *(_WORD *)(*v43 + 36) == 212 )
          break;
        if ( v39 == ++v43 )
          goto LABEL_39;
      }
      if ( v39 == v43 )
        goto LABEL_39;
    }
    else
    {
      if ( (__int64 *)v38 == v39 )
      {
LABEL_39:
        v17 = v57;
        goto LABEL_11;
      }
      if ( *(_WORD *)(*v39 + 36) != 212 )
      {
        v40 = (__int64 **)(v39 + 1);
        while ( v40 != (__int64 **)v38 )
        {
          v39 = *v40++;
          if ( *((_WORD *)v39 + 18) == 212 )
            goto LABEL_53;
        }
        goto LABEL_39;
      }
    }
LABEL_53:
    v55 = *a1;
    v45 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640);
    if ( v45 != 3 && v45 > 1 )
    {
      v56 = v16;
      v46 = sub_C00A40(v11, *a1, v38, (__int64)v39, v37);
      sub_168B9F0((__int64)v66, (__int64 *)(v55 + 8), v46, 0x1AEDu, 0);
      LODWORD(v59) = 0;
      v47 = sub_1587D10((__int64)v66, (int *)&v59);
      sub_185C9E0(v47, &v57);
      sub_15F7200(v66);
      sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8), *(_DWORD *)(v57 + 24), 0x172Eu, 0);
      sub_185C9E0((__int64)v66, &v57);
      sub_15F7200(v66);
      v17 = v57;
      LODWORD(v16) = v56;
      goto LABEL_11;
    }
    goto LABEL_39;
  }
LABEL_11:
  if ( (*(_BYTE *)(v17 + 68) & 0xC) != 0xC && (*(_BYTE *)(v17 + 68) & 0xC) != 0 )
  {
    v52 = v16;
    if ( *((_BYTE *)a1 + 9) )
      return;
    v24 = *a1;
    sub_18C74E0(*a1, 6, 0, 4);
    *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 37) = 1;
    v25 = *(_QWORD *)(*a1 + 4616);
    v26 = (const __m128i *)(v25 + ((5LL * *(unsigned int *)(*a1 + 4624) - 10) << 7));
    v27 = v25 + 640LL * *(unsigned int *)(*a1 + 4624);
    v28 = (__m128)_mm_loadu_si128(v26 + 38);
    *(__m128 *)(v27 - 32) = v28;
    *(__m128i *)(v27 - 16) = _mm_loadu_si128(v26 + 39);
    *(_BYTE *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 39) = *(_BYTE *)(*(_QWORD *)(*a1 + 4616)
                                                                                                + ((5LL * *(unsigned int *)(*a1 + 4624)
                                                                                                  - 10) << 7)
                                                                                                + 601);
    v53 = sub_190FFF0(*a1, v52, v57);
    sub_190D5E0(v24, v28);
    if ( v53 != 1 )
    {
      v29 = v53 & 0xFFFFFFFFFFFFFFFELL;
      sub_15A1600(*a1, (__int64)&v60, v53 & 0xFFFFFFFFFFFFFFFELL);
      if ( (unsigned int)a2 < (unsigned int)v19 )
      {
        *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * (unsigned int)a2) = v29;
        if ( !v29 )
          return;
        goto LABEL_31;
      }
      v48 = (_DWORD *)(v53 & 0xFFFFFFFFFFFFFFFELL);
      v49 = *(_QWORD **)(*a1 + 248);
LABEL_58:
      sub_C0B210(v11, v49, v10, v48);
      *a6 = 1;
      return;
    }
    goto LABEL_20;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 48)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 <= 1 )
  {
    if ( !*((_BYTE *)a1 + 9) )
    {
      sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8), v16, 0xF9Bu, 0);
      v58 = *(_QWORD *)(v57 + 48);
      v41 = sub_162B6D0((__int64)v66, &v58);
      v42 = *(_QWORD *)(v11 + 48);
      if ( (v42 & 4) != 0 )
      {
        v44 = v42 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v44 )
          v11 = v44;
      }
      v59 = sub_EEC8C0(v11, (__int64)&v58, *(double *)a7.m128_u64);
      sub_1587DB0(v41, &v59);
      sub_15F7200(v66);
      sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8), *(_DWORD *)(v57 + 24), 0x1922u, 0);
      sub_15F7200(v66);
    }
    goto LABEL_20;
  }
  v30 = sub_1A19410(a1, v16, (__int64)&v60, a7, a8);
  if ( v30 == 1 )
  {
LABEL_20:
    *((_BYTE *)a1 + 8) = 1;
    return;
  }
  if ( !*((_BYTE *)a1 + 8) && !*((_BYTE *)a1 + 9) )
  {
    v31 = (unsigned int *)(v30 & 0xFFFFFFFFFFFFFFFELL);
    if ( (unsigned int)a2 < (unsigned int)v19 )
    {
      *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * (unsigned int)a2) = v31;
      if ( !v31 )
        return;
      v32 = *v31;
LABEL_32:
      v35 = ((v32 >> 14) | (*(_DWORD *)v11 >> 14)) & 0x1F;
      *(_BYTE *)(v11 + 1) = (v35 << 6) | *(_BYTE *)(v11 + 1) & 0x3F;
      *(_BYTE *)(v11 + 2) = *(_BYTE *)(v11 + 2) & 0xF8 | (v35 >> 2);
      return;
    }
    if ( (*(_WORD *)v31 & 0x1FF) == 0x36 )
      return;
    v48 = v31;
    v49 = *(_QWORD **)(*a1 + 248);
    goto LABEL_58;
  }
}
