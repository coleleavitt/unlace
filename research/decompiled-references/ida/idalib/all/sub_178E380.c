void __fastcall sub_178E380(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // xmm0
  unsigned __int8 v7; // al
  __int64 v8; // r8
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 *v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  int v15; // eax
  int v16; // edx
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 **v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 **v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // rsi
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rax

  a1[1] = 3;
  a1[2] = 0;
  v6 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *a1 = a2;
  *(__m128i *)(a1 + 1) = v6;
  if ( !a4 )
    return;
  v7 = *(_BYTE *)(a4 + 28) & 0x7F;
  v8 = v7;
  if ( (unsigned int)v7 - 40 > 6 )
    return;
  v10 = a4;
  v11 = *(unsigned __int8 *)(a4 + 96);
  v12 = a1;
  LOBYTE(a1) = *(_BYTE *)(a4 + 96) & 7;
  v13 = (unsigned __int8)a1;
  if ( (_BYTE)a1 )
  {
    if ( (unsigned __int8)a1 != 5 )
      goto LABEL_5;
    if ( v7 != 40 && v7 != 46 )
      goto LABEL_52;
    a1 = (_QWORD *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    v13 = *(_QWORD *)(a4 + 16) & 4LL;
    if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
      a1 = (_QWORD *)a1[1];
    if ( !a1 )
    {
LABEL_52:
      if ( v7 != 43 )
        goto LABEL_21;
      return;
    }
    v20 = sub_B8EAA0((__int64)a1);
    v11 = *(unsigned __int8 *)(v10 + 96);
    a4 = *(_BYTE *)(v20 + 8) & 0x7F;
    LOBYTE(a1) = *(_BYTE *)(v10 + 96) & 7;
    if ( (unsigned __int8)a4 > 0x12u )
    {
      a4 = ((_BYTE)a4 + 94) & 0x7F;
      if ( (unsigned __int8)a4 <= 5u )
        goto LABEL_5;
    }
    else if ( ((1LL << a4) & 0x40182) != 0 )
    {
      goto LABEL_5;
    }
    if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x2B )
    {
LABEL_45:
      LODWORD(a1) = (unsigned __int8)a1;
      goto LABEL_15;
    }
LABEL_5:
    if ( (unsigned __int8)a1 > 3u )
      return;
    goto LABEL_45;
  }
  v13 = *(_QWORD *)&byte_8[*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v13 & 8) != 0 )
  {
    a4 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    v13 = (*(_DWORD *)((char *)&qword_18 + (v13 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v13 & 7)) >> 9;
    if ( (_DWORD)v13 == 3 )
      goto LABEL_20;
  }
  if ( ((v7 + 85) & 0x7D) == 0 )
  {
    v11 = ((unsigned __int8)v11 >> 3) & 3;
    if ( (_DWORD)v11 && (_BYTE)v11 != 2 )
      goto LABEL_21;
    return;
  }
  v14 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
    v14 = *(_QWORD *)(v14 + 8);
  v15 = *(_BYTE *)(sub_B8EAA0(v14) + 8) & 0x7F;
  if ( v15 == 24 || !v15 )
    goto LABEL_13;
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x2B )
    goto LABEL_50;
  v21 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  v13 = *(_QWORD *)(v10 + 16) & 4LL;
  if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
    v21 = *(_QWORD *)v21;
  if ( ((*(_BYTE *)(v21 + 8) + 70) & 0x7Fu) > 3 )
  {
LABEL_50:
    v11 = *(unsigned __int8 *)(v10 + 96);
    if ( (v11 & 0x18) == 0 )
      return;
  }
  else
  {
LABEL_13:
    v11 = *(unsigned __int8 *)(v10 + 96);
  }
  LODWORD(a1) = v11 & 7;
LABEL_15:
  if ( (_DWORD)a1 == 2 )
    goto LABEL_24;
  if ( (_DWORD)a1 )
    goto LABEL_21;
LABEL_20:
  v11 = ((unsigned __int8)v11 >> 3) & 3;
  if ( (_BYTE)v11 != 2 )
    goto LABEL_21;
LABEL_24:
  if ( ((*(_BYTE *)(v10 + 28) + 85) & 0x7D) != 0 )
  {
    v18 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
      v18 = *(_QWORD *)(v18 + 8);
    v19 = *(_BYTE *)(sub_B8EAA0(v18) + 8) & 0x7F;
    if ( v19 == 24 || !v19 )
      goto LABEL_21;
    if ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x2B )
    {
      v13 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v10 + 16) & 4) != 0 )
        v13 = *(_QWORD *)v13;
      if ( ((*(_BYTE *)(v13 + 8) + 70) & 0x7Fu) <= 3 )
      {
LABEL_21:
        if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
        {
LABEL_22:
          v16 = 2;
LABEL_23:
          v17 = *v12;
          *(_DWORD *)(v17 + 56) = v16;
          *(_DWORD *)(v17 + 60) = a3;
          *(_QWORD *)(v17 + 64) = v10;
          return;
        }
        v22 = (__int64 **)sub_B8C3D0(v10, v11, v13, a4, v8, a6);
        v26 = *v22;
        v27 = *((unsigned int *)v22 + 2);
        v28 = (__int64)&v26[v27];
        v29 = (v27 * 8) >> 5;
        if ( v29 )
        {
          v30 = &v26[4 * v29];
          while ( 1 )
          {
            v23 = *v26;
            if ( *(_WORD *)(*v26 + 36) == 160 && (*(_BYTE *)(v23 + 38) & 4) == 0 )
              break;
            v23 = v26[1];
            if ( *(_WORD *)(v23 + 36) == 160 && (*(_BYTE *)(v23 + 38) & 4) == 0 )
            {
              ++v26;
              break;
            }
            v23 = v26[2];
            if ( *(_WORD *)(v23 + 36) == 160 && (*(_BYTE *)(v23 + 38) & 4) == 0 )
            {
              v26 += 2;
              break;
            }
            v23 = v26[3];
            if ( *(_WORD *)(v23 + 36) == 160 && (*(_BYTE *)(v23 + 38) & 4) == 0 )
            {
              v26 += 3;
              break;
            }
            v26 += 4;
            if ( v30 == v26 )
              goto LABEL_61;
          }
LABEL_92:
          if ( (__int64 *)v28 != v26 )
          {
            v28 = 1;
            if ( !sub_178D980(v10, 1, (__int64)v26, v23, v24, v25) )
            {
              v16 = 0;
              goto LABEL_23;
            }
          }
LABEL_64:
          if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
            goto LABEL_22;
          v32 = (__int64 **)sub_B8C3D0(v10, v28, (__int64)v26, v23, v24, v25);
          v36 = *v32;
          v37 = *((unsigned int *)v32 + 2);
          v38 = (__int64)&v36[v37];
          v39 = (v37 * 8) >> 5;
          if ( v39 )
          {
            v40 = &v36[4 * v39];
            while ( 1 )
            {
              v33 = *v36;
              if ( *(_WORD *)(*v36 + 36) == 168 && (*(_BYTE *)(v33 + 38) & 4) == 0 )
                break;
              v33 = v36[1];
              if ( *(_WORD *)(v33 + 36) == 168 && (*(_BYTE *)(v33 + 38) & 4) == 0 )
              {
                ++v36;
                break;
              }
              v33 = v36[2];
              if ( *(_WORD *)(v33 + 36) == 168 && (*(_BYTE *)(v33 + 38) & 4) == 0 )
              {
                v36 += 2;
                break;
              }
              v33 = v36[3];
              if ( *(_WORD *)(v33 + 36) == 168 && (*(_BYTE *)(v33 + 38) & 4) == 0 )
              {
                v36 += 3;
                break;
              }
              v36 += 4;
              if ( v40 == v36 )
                goto LABEL_72;
            }
LABEL_98:
            if ( (__int64 *)v38 != v36 )
            {
              v16 = 0;
              goto LABEL_23;
            }
LABEL_75:
            if ( (*(_BYTE *)(v10 + 29) & 1) == 0 )
              goto LABEL_22;
            v42 = sub_B8C3D0(v10, v38, (__int64)v36, v33, v34, v35);
            v43 = (_QWORD *)*v42;
            v44 = *((unsigned int *)v42 + 2);
            v45 = &v43[v44];
            v46 = (v44 * 8) >> 5;
            if ( v46 )
            {
              v47 = &v43[4 * v46];
              while ( *(_WORD *)(*v43 + 36LL) != 159 || (*(_BYTE *)(*v43 + 38LL) & 4) != 0 )
              {
                v48 = v43[1];
                if ( *(_WORD *)(v48 + 36) == 159 && (*(_BYTE *)(v48 + 38) & 4) == 0 )
                {
                  ++v43;
                  goto LABEL_111;
                }
                v49 = v43[2];
                if ( *(_WORD *)(v49 + 36) == 159 && (*(_BYTE *)(v49 + 38) & 4) == 0 )
                {
                  v43 += 2;
                  goto LABEL_111;
                }
                v50 = v43[3];
                if ( *(_WORD *)(v50 + 36) == 159 && (*(_BYTE *)(v50 + 38) & 4) == 0 )
                {
                  v43 += 3;
                  goto LABEL_111;
                }
                v43 += 4;
                if ( v47 == v43 )
                  goto LABEL_83;
              }
              goto LABEL_111;
            }
LABEL_83:
            v51 = v45 - v43;
            if ( v51 != 2 )
            {
              if ( v51 != 3 )
              {
                if ( v51 != 1 )
                  goto LABEL_22;
LABEL_86:
                if ( *(_WORD *)(*v43 + 36LL) != 159 || (*(_BYTE *)(*v43 + 38LL) & 4) != 0 )
                  goto LABEL_22;
LABEL_111:
                if ( v45 != v43 )
                {
                  v16 = 0;
                  goto LABEL_23;
                }
                goto LABEL_22;
              }
              if ( *(_WORD *)(*v43 + 36LL) == 159 && (*(_BYTE *)(*v43 + 38LL) & 4) == 0 )
                goto LABEL_111;
              ++v43;
            }
            if ( *(_WORD *)(*v43 + 36LL) == 159 && (*(_BYTE *)(*v43 + 38LL) & 4) == 0 )
              goto LABEL_111;
            ++v43;
            goto LABEL_86;
          }
LABEL_72:
          v41 = (v38 - (__int64)v36) >> 3;
          if ( v41 != 2 )
          {
            if ( v41 != 3 )
            {
              if ( v41 != 1 )
                goto LABEL_75;
              goto LABEL_130;
            }
            if ( *(_WORD *)(*v36 + 36) == 168 && (*(_BYTE *)(*v36 + 38) & 4) == 0 )
              goto LABEL_98;
            ++v36;
          }
          if ( *(_WORD *)(*v36 + 36) == 168 && (*(_BYTE *)(*v36 + 38) & 4) == 0 )
            goto LABEL_98;
          ++v36;
LABEL_130:
          if ( *(_WORD *)(*v36 + 36) != 168 || (*(_BYTE *)(*v36 + 38) & 4) != 0 )
            goto LABEL_75;
          goto LABEL_98;
        }
LABEL_61:
        v31 = (v28 - (__int64)v26) >> 3;
        if ( v31 != 2 )
        {
          if ( v31 != 3 )
          {
            if ( v31 != 1 )
              goto LABEL_64;
            goto LABEL_123;
          }
          if ( *(_WORD *)(*v26 + 36) == 160 && (*(_BYTE *)(*v26 + 38) & 4) == 0 )
            goto LABEL_92;
          ++v26;
        }
        if ( *(_WORD *)(*v26 + 36) == 160 && (*(_BYTE *)(*v26 + 38) & 4) == 0 )
          goto LABEL_92;
        ++v26;
LABEL_123:
        if ( *(_WORD *)(*v26 + 36) != 160 || (*(_BYTE *)(*v26 + 38) & 4) != 0 )
          goto LABEL_64;
        goto LABEL_92;
      }
    }
  }
}
