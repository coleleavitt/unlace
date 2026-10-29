__int64 __fastcall sub_600560(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rbx
  __m128i *v9; // rbp
  int v10; // r12d
  __int32 v11; // eax
  __int32 v12; // edx
  unsigned int v13; // edx
  __int64 v15; // rax
  int v16; // edx
  _WORD *v17; // rdx
  int v18; // edx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  _BYTE *v27; // rax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // r15
  _DWORD *v39; // rax
  int v40; // edx
  __m128i v41; // [rsp+0h] [rbp-58h]
  __m128i v42; // [rsp+0h] [rbp-58h]
  __m128i v43; // [rsp+0h] [rbp-58h]
  __m128i v44; // [rsp+0h] [rbp-58h]
  __m128i v45; // [rsp+0h] [rbp-58h]
  __m128i v46; // [rsp+0h] [rbp-58h]
  __m128i v47; // [rsp+0h] [rbp-58h]

  v8 = a1;
  v9 = *(__m128i **)(a1 + 16);
  v10 = a7;
  if ( (_DWORD)a7 == 502 )
  {
    if ( *(_BYTE *)(a1 + 4) )
      return 2;
    goto LABEL_16;
  }
  if ( (unsigned int)(a7 - 600) <= 4 || (unsigned int)(a7 - 1) <= 0x26 )
  {
    v41 = _mm_loadu_si128((const __m128i *)&a7);
    v15 = sub_63A250(a1, a2, a3, a4, a5, a6, v41.m128i_i32[0], v41.m128i_i64[1]);
    if ( v15 )
    {
      v16 = *(_BYTE *)(v15 + 28) & 0x7F;
      if ( (_BYTE)v16 == 16 )
      {
        if ( (*(_BYTE *)(v15 + 29) & 2) == 0 )
          goto LABEL_16;
        return 0;
      }
    }
    v43 = _mm_loadu_si128((const __m128i *)&a7);
    v19 = sub_63A250(a1, a2, v16, a4, a5, a6, v43.m128i_i32[0], v43.m128i_i64[1]);
    v21 = v19;
    if ( !v19 || (*(_BYTE *)(v19 + 28) & 0x7F) != 0x12 )
    {
      v46 = _mm_loadu_si128((const __m128i *)&a7);
      v27 = (_BYTE *)sub_63A250(a1, a2, v20, a4, a5, a6, v46.m128i_i32[0], v46.m128i_i64[1]);
      LODWORD(a1) = (_DWORD)v27;
      if ( v27 && (v27[28] & 0x7Fu) - 32 <= 0x11 )
      {
        v32 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v27 + 16LL))(v27);
        if ( v32 != *(_DWORD *)(v8 + 8) )
        {
          *(_DWORD *)(v8 + 8) = v32;
          v11 = v9->m128i_i32[0];
          goto LABEL_7;
        }
      }
      else
      {
        v47 = _mm_loadu_si128((const __m128i *)&a7);
        v33 = sub_63A250((_DWORD)v27, a2, v28, v29, v30, v31, v47.m128i_i32[0], v47.m128i_i64[1]);
        if ( !v33 || (*(_BYTE *)(v33 + 28) & 0x7F) != 0xC )
          goto LABEL_16;
        if ( !*(_BYTE *)(v8 + 5) )
        {
          *(_BYTE *)(v8 + 5) = 1;
          v11 = v9->m128i_i32[0];
          goto LABEL_7;
        }
      }
      return 0;
    }
    v11 = v9->m128i_i32[0];
    if ( v9->m128i_i32[0] != 11 && v11 != 42 )
    {
LABEL_7:
      v13 = v11 - 100;
      if ( (unsigned int)(v11 - 100) > 0x38 )
        goto LABEL_8;
LABEL_17:
      v42 = _mm_loadu_si128(v9);
      v17 = (_WORD *)sub_63A260(
                       a1,
                       a2,
                       v13,
                       a4,
                       a5,
                       a6,
                       v42.m128i_i32[0],
                       v42.m128i_i32[2],
                       _mm_loadu_si128(v9 + 1).m128i_i64[0]);
      v11 = v9->m128i_i32[0];
      if ( (*v17 & 0x1FF) == 0x73 && v10 == 43 )
      {
        v18 = 1;
        if ( v11 != 103 )
          v18 = v9->m128i_i32[1];
        v9->m128i_i32[1] = v18;
        return 2;
      }
LABEL_8:
      if ( v11 != 40 )
      {
        *v9 = _mm_loadu_si128((const __m128i *)&a7);
        v9[1] = _mm_loadu_si128((const __m128i *)&a8);
        return 2;
      }
      return 0;
    }
    v44 = _mm_loadu_si128(v9);
    v22 = sub_63A250(a1, a2, v20, a4, a5, a6, v44.m128i_i32[0], v44.m128i_i64[1]);
    v23 = v22;
    if ( !v22 || (*(_BYTE *)(v22 + 28) & 0x7F) != 0x12 || v21 == v22 )
    {
LABEL_16:
      v11 = v9->m128i_i32[0];
      v13 = v9->m128i_i32[0] - 100;
      if ( v13 > 0x38 )
        goto LABEL_8;
      goto LABEL_17;
    }
    v24 = *(_QWORD *)(v22 + 120);
    a4 = v24;
    if ( v24 )
      goto LABEL_30;
    v34 = *(_QWORD *)(v23 + 96);
    v35 = *(_QWORD *)(v34 + 88);
    v36 = v35 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v35 & 1) != 0 )
    {
      if ( v36 )
        goto LABEL_55;
    }
    else if ( v36 <= 3 )
    {
      if ( v36 )
        goto LABEL_62;
    }
    else if ( (v35 & 2) != 0 )
    {
      v37 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
      v38 = v37[2275];
      if ( !v38 )
      {
        *(_QWORD *)(v34 + 88) = v34 & 0xFFFFFFFFFFFFFFFALL | 1;
        if ( (v34 & 0xFFFFFFFFFFFFFFFALL) == 0 )
        {
LABEL_57:
          v24 = *(_QWORD *)(v23 + 120);
LABEL_30:
          if ( v24 > 7 && v23 == *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL) )
            goto LABEL_16;
          goto LABEL_32;
        }
        goto LABEL_61;
      }
      a2 = v37[274];
      v37[284] += 24LL;
      v36 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      a4 = v36 + 24;
      if ( v37[275] >= v36 + 24 && a2 )
      {
        v37[274] = a4;
      }
      else
      {
        LODWORD(a1) = (_DWORD)v37 + 2192;
        LODWORD(a2) = 24;
        v36 = sub_5F8390((__int64)(v37 + 274), 24, 3);
      }
      *(_QWORD *)v36 = v38;
      *(_DWORD *)(v36 + 8) = 0;
      v35 = v36 | 5;
      *(_QWORD *)(v36 + 16) = v34;
      *(_QWORD *)(v34 + 88) = v36 | 5;
      LOBYTE(v36) = v36 & 0xFA | 4;
LABEL_55:
      if ( (v36 & 4) != 0 )
      {
        v39 = (_DWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v39 )
        {
          a1 = *(_QWORD *)v39;
          v40 = *(_DWORD *)(*(_QWORD *)v39 + 12LL);
          if ( v39[2] != v40 )
          {
            v39[2] = v40;
            LODWORD(a2) = v34;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 144LL))(a1, v34);
          }
        }
        goto LABEL_57;
      }
LABEL_61:
      a4 = *(_QWORD *)(v23 + 120);
LABEL_62:
      v24 = a4;
      goto LABEL_30;
    }
LABEL_32:
    LODWORD(a1) = v21;
    if ( v21 != sub_6003F0(v21) )
      return 0;
    goto LABEL_16;
  }
  v11 = v9->m128i_i32[0];
  if ( (unsigned int)(a7 - 100) > 0x38 )
    goto LABEL_7;
  v12 = v11 - 1;
  if ( (unsigned int)(v11 - 1) > 0x26 )
  {
    v12 = v11 - 600;
    if ( (unsigned int)(v11 - 600) > 4 )
      goto LABEL_7;
  }
  v45 = _mm_loadu_si128(v9);
  v25 = sub_63A250(a1, a2, v12, a4, a5, a6, v45.m128i_i32[0], v45.m128i_i64[1]);
  if ( !v25 )
    goto LABEL_16;
  v26 = *(_DWORD *)(v25 + 24);
  if ( !v26 || !*(_DWORD *)a1 || v26 != *(_DWORD *)a1 )
    goto LABEL_16;
  return 0;
}

