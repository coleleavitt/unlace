__int64 __fastcall sub_617B10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // r13
  int v7; // r15d
  __int64 v8; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  __m128i *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // al
  unsigned int v17; // ecx
  __int32 v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  unsigned __int64 v26; // rax
  int v27; // r14d
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r12
  __m128i *v33; // rdi
  __int64 v34; // rbp
  int v35; // eax
  const __m128i *v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rax
  unsigned int v39; // ebp
  __int64 v40; // r12
  const __m128i *v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  _QWORD *v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rsi
  _DWORD *v50; // rax
  int v51; // edx
  int v52; // edx
  __int64 v53; // rax
  __int64 v54; // rax
  __m128i si128; // [rsp+0h] [rbp-B8h]
  __m128i v56; // [rsp+0h] [rbp-B8h]
  __int64 v57; // [rsp+20h] [rbp-98h]
  __int64 v58; // [rsp+20h] [rbp-98h]
  __int64 v59; // [rsp+20h] [rbp-98h]
  __int64 v60; // [rsp+28h] [rbp-90h]
  __int64 v61; // [rsp+28h] [rbp-90h]
  __m128i v62; // [rsp+30h] [rbp-88h] BYREF
  __m128i v63; // [rsp+40h] [rbp-78h] BYREF
  __m128i v64; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v65[24]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v66; // [rsp+78h] [rbp-40h]

  v8 = a2;
  v10 = *(_QWORD *)((char *)a1 + 84);
  v11 = *a1;
  v12 = &v63;
  sub_639160(&v63, a2, v11, v10, 1, a6);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x30 && (*(_BYTE *)(a2 + 88) & 8) != 0 )
    goto LABEL_3;
  v19 = v63.m128i_i32[0];
  if ( v63.m128i_i32[0] == 11 )
  {
    v30 = *(_QWORD *)(a2 + 120);
    a2 = v30;
    if ( v30 )
    {
LABEL_25:
      if ( v30 > 7 && v8 == *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL) )
        goto LABEL_7;
LABEL_27:
      a2 = v8;
      v12 = &v63;
      sub_639C80(&v63, v8, *(unsigned int *)(v8 + 24), *a1);
      v19 = v63.m128i_i32[0];
      goto LABEL_7;
    }
    v13 = *(_QWORD *)(v8 + 96);
    v42 = *(_QWORD *)(v13 + 88);
    v43 = v42 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v42 & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_27;
    }
    else
    {
      if ( v43 <= 3 )
      {
        if ( !v43 )
          goto LABEL_27;
        goto LABEL_63;
      }
      if ( (v42 & 2) == 0 )
        goto LABEL_27;
      v44 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
      v14 = v44[2275];
      if ( !v14 )
      {
        *(_QWORD *)(v13 + 88) = v13 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v13 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_85:
          v30 = *(_QWORD *)(v8 + 120);
          goto LABEL_25;
        }
        goto LABEL_62;
      }
      v12 = (__m128i *)v44[274];
      v44[284] += 24LL;
      v43 = ((unsigned __int64)v12->m128i_u64 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v44[275] >= v43 + 24 && v12 )
      {
        v44[274] = v43 + 24;
      }
      else
      {
        LODWORD(v12) = (_DWORD)v44 + 2192;
        v60 = v14;
        v58 = v13;
        v53 = sub_5F8390((__int64)(v44 + 274), 24, 3);
        v14 = v60;
        v13 = v58;
        v43 = v53;
      }
      *(_QWORD *)v43 = v14;
      v42 = v43 | 5;
      *(_DWORD *)(v43 + 8) = 0;
      *(_QWORD *)(v43 + 16) = v13;
      *(_QWORD *)(v13 + 88) = v43 | 5;
      LOBYTE(v43) = v43 & 0xFA | 4;
    }
    if ( (v43 & 4) != 0 )
    {
      v45 = (_DWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v45 )
      {
        v12 = *(__m128i **)v45;
        v51 = *(_DWORD *)(*(_QWORD *)v45 + 12LL);
        if ( v45[2] != v51 )
        {
          v45[2] = v51;
          a2 = v13;
          (*(void (__fastcall **)(__m128i *, __int64))(v12->m128i_i64[0] + 144))(v12, v13);
          goto LABEL_85;
        }
      }
    }
LABEL_62:
    a2 = *(_QWORD *)(v8 + 120);
LABEL_63:
    v30 = a2;
    goto LABEL_25;
  }
  if ( v63.m128i_i32[0] != 13 )
    goto LABEL_7;
  v29 = *(_QWORD *)(a2 + 104);
  a2 = v29;
  if ( !v29 )
  {
    v13 = *(_QWORD *)(v8 + 96);
    v46 = *(_QWORD *)(v13 + 88);
    v47 = v46 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v46 & 1) != 0 )
    {
      if ( v47 )
        goto LABEL_72;
    }
    else if ( v47 <= 3 )
    {
      if ( v47 )
        goto LABEL_75;
    }
    else if ( (v46 & 2) != 0 )
    {
      v48 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
      v14 = v48[2275];
      if ( !v14 )
      {
        *(_QWORD *)(v13 + 88) = v13 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v13 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_87:
          v29 = *(_QWORD *)(v8 + 104);
          goto LABEL_21;
        }
        goto LABEL_74;
      }
      v49 = v48[274];
      v48[284] += 24LL;
      v47 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      v12 = (__m128i *)(v47 + 24);
      if ( v48[275] >= v47 + 24 && v49 )
      {
        v48[274] = v12;
      }
      else
      {
        LODWORD(v12) = (_DWORD)v48 + 2192;
        v61 = v14;
        v59 = v13;
        v54 = sub_5F8390((__int64)(v48 + 274), 24, 3);
        v14 = v61;
        v13 = v59;
        v47 = v54;
      }
      *(_QWORD *)v47 = v14;
      v46 = v47 | 5;
      *(_DWORD *)(v47 + 8) = 0;
      *(_QWORD *)(v47 + 16) = v13;
      *(_QWORD *)(v13 + 88) = v47 | 5;
      LOBYTE(v47) = v47 & 0xFA | 4;
LABEL_72:
      if ( (v47 & 4) != 0 )
      {
        v50 = (_DWORD *)(v46 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v50 )
        {
          v12 = *(__m128i **)v50;
          v52 = *(_DWORD *)(*(_QWORD *)v50 + 12LL);
          if ( v50[2] != v52 )
          {
            v50[2] = v52;
            a2 = v13;
            (*(void (__fastcall **)(__m128i *, __int64))(v12->m128i_i64[0] + 144))(v12, v13);
            goto LABEL_87;
          }
        }
      }
LABEL_74:
      a2 = *(_QWORD *)(v8 + 104);
LABEL_75:
      v29 = a2;
      goto LABEL_21;
    }
LABEL_23:
    a2 = v8;
    v12 = &v63;
    sub_639C30(&v63, v8, *(unsigned int *)(v8 + 24), *a1);
    v19 = v63.m128i_i32[0];
    goto LABEL_7;
  }
LABEL_21:
  if ( v29 <= 7 || v8 != *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL) )
    goto LABEL_23;
LABEL_7:
  v20 = *((unsigned int *)a1 + 21);
  v63.m128i_i32[0] = v19;
  if ( !(_DWORD)v20 || !*((_DWORD *)a1 + 22) )
    goto LABEL_8;
  v23 = a1[1];
  v24 = _mm_loadu_si128((const __m128i *)&v63.m128i_u64[1]);
  *(_DWORD *)v65 = v19;
  v25 = *(_QWORD *)(v23 + 32);
  *(__m128i *)&v65[8] = v24;
  v57 = v25;
  *(_DWORD *)&v65[4] = v63.m128i_i32[1];
  v66 = v64.m128i_i64[1];
  if ( (unsigned int)(v19 - 1) <= 0x26 || (unsigned int)(v19 - 600) <= 4 )
  {
    si128 = _mm_load_si128((const __m128i *)v65);
    v31 = sub_63A250((_DWORD)v12, a2, v20, v13, v14, v15, si128.m128i_i32[0], si128.m128i_i64[1]);
    v32 = v31;
    if ( !v31 )
      goto LABEL_19;
    LODWORD(v33) = v31;
    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    v27 = v34;
    v35 = *(_BYTE *)(v32 + 28) & 0x7F;
    if ( (unsigned int)(v35 - 32) > 0x11 )
    {
      if ( (*(_BYTE *)(v32 + 28) & 0x7F) != 0x3E )
        goto LABEL_41;
      v41 = (const __m128i *)(*(_QWORD *)(v32 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v32 + 80) & 4) != 0 )
        v41 = (const __m128i *)v41->m128i_i64[0];
      if ( !v41 )
        goto LABEL_41;
      v33 = &v62;
      v62 = _mm_unpacklo_epi64(_mm_loadl_epi64(v41), (__m128i)(unsigned __int64)&v41->m128i_u64[1]);
      v37 = (unsigned int)sub_B1E2D0(&v62);
    }
    else
    {
      v36 = (const __m128i *)(*(_QWORD *)(v32 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      v37 = *(_QWORD *)(v32 + 56) & 4LL;
      if ( (*(_QWORD *)(v32 + 56) & 4) != 0 )
        v36 = (const __m128i *)v36[2].m128i_i64[0];
      if ( !v36 )
        goto LABEL_78;
      v33 = &v62;
      v62 = _mm_unpacklo_epi64(_mm_loadl_epi64(v36), (__m128i)(unsigned __int64)&v36->m128i_u64[1]);
      v37 = (unsigned int)sub_B1E2D0(&v62);
    }
    if ( (_DWORD)v37 )
    {
      if ( !(_DWORD)v34 )
      {
        if ( (*(_BYTE *)(v32 + 28) & 0x7Fu) - 38 <= 6 )
          goto LABEL_39;
LABEL_19:
        v21 = 0;
        goto LABEL_9;
      }
      LODWORD(v33) = v57;
      LODWORD(v36) = sub_CB1620(v57, v37);
      v35 = *(_BYTE *)(v32 + 28) & 0x7F;
      if ( (_BYTE)v36 )
        v27 = v37;
    }
    else
    {
      v35 = *(_BYTE *)(v32 + 28) & 0x7F;
    }
LABEL_78:
    if ( (unsigned int)(v35 - 38) > 6 )
    {
LABEL_41:
      v28 = HIDWORD(v34);
      goto LABEL_17;
    }
LABEL_39:
    v56 = _mm_load_si128((const __m128i *)v65);
    if ( !(unsigned __int8)sub_63A940(
                             (_DWORD)v33,
                             v37,
                             (_DWORD)v36,
                             v13,
                             v14,
                             v15,
                             v56.m128i_i32[0],
                             v56.m128i_i32[2],
                             _mm_load_si128((const __m128i *)&v65[16]).m128i_i64[0]) )
      v27 = *(_DWORD *)(v32 + 24);
    goto LABEL_41;
  }
  v26 = sub_5FD3D0(
          (int)v12,
          a2,
          v20,
          v13,
          v14,
          v15,
          (__int128)_mm_load_si128((const __m128i *)v65),
          (__int128)_mm_load_si128((const __m128i *)&v65[16]));
  v27 = v26;
  v28 = HIDWORD(v26);
LABEL_17:
  if ( !v27 )
    goto LABEL_19;
  if ( !(_DWORD)v28 )
    goto LABEL_19;
  v38 = a1[1];
  v39 = *((_DWORD *)a1 + 22);
  v40 = *(_QWORD *)(v38 + 32);
  if ( *((_DWORD *)a1 + 21) != (_DWORD)v28 )
  {
    if ( (unsigned __int8)sub_CB1620(*(_QWORD *)(v38 + 32), v28) )
      goto LABEL_19;
  }
  if ( v39 == v27 || !(unsigned __int8)sub_CB1620(v40, v39) )
  {
LABEL_8:
    v21 = 1;
    v6 = 1;
    goto LABEL_9;
  }
  v21 = 1;
  v6 = 0;
LABEL_9:
  LOBYTE(v22) = v6;
  HIBYTE(v22) = v21;
  if ( HIBYTE(v22) )
  {
    if ( !v6 )
    {
      v7 = 0;
LABEL_12:
      v16 = 1;
      goto LABEL_4;
    }
    if ( (unsigned __int8)sub_617930(
                            (__int64)a1,
                            1,
                            v21,
                            v13,
                            v14,
                            v15,
                            (__int128)_mm_load_si128(&v63),
                            (__int128)_mm_load_si128(&v64)) )
    {
      v7 = 1;
      goto LABEL_12;
    }
  }
LABEL_3:
  v16 = 0;
LABEL_4:
  v17 = v7;
  BYTE1(v17) = v16;
  return v17;
}

