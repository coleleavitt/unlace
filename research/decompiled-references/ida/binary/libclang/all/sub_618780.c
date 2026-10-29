__int64 __fastcall sub_618780(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // r14
  unsigned int v11; // r12d
  int v12; // r15d
  _DWORD *v13; // rdx
  _DWORD *v14; // rax
  bool v15; // al
  _DWORD *v16; // rsi
  unsigned __int64 v17; // rdx
  char *v18; // rdx
  _BYTE *v19; // rdi
  unsigned int v20; // r15d
  __int8 v22; // al
  unsigned __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // r14
  unsigned __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // r10
  __int64 v29; // rax
  _DWORD *v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  __int64 *v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  __int64 v36; // rax
  _QWORD *v37; // r9
  unsigned __int64 v38; // rax
  __int8 v39; // dl
  __int64 v40; // r12
  char *v41; // r13
  __int64 v42; // r14
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r9
  char v48; // al
  void **v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rdi
  _QWORD *v58; // r12
  unsigned __int64 v59; // rsi
  __int64 v60; // r9
  unsigned __int64 v61; // rdx
  __int64 *v62; // rdi
  __int64 v63; // rdx
  _DWORD *v64; // rax
  _DWORD *v65; // rcx
  __int64 *v66; // rdi
  __int64 v67; // rsi
  _DWORD *v68; // rdx
  _DWORD *v69; // rsi
  __int64 *v70; // rdi
  __int64 v71; // rsi
  _DWORD *v72; // rax
  _DWORD *v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned int v78; // eax
  __int64 *v79; // rdi
  __int64 v80; // rdx
  _DWORD *v81; // rax
  _DWORD *v82; // rdx
  __int64 v83; // rax
  __int64 i; // [rsp+20h] [rbp-158h]
  unsigned __int64 v85; // [rsp+30h] [rbp-148h]
  _QWORD *v87; // [rsp+40h] [rbp-138h]
  int v88; // [rsp+48h] [rbp-130h]
  _QWORD *v89; // [rsp+48h] [rbp-130h]
  _QWORD *v90; // [rsp+68h] [rbp-110h] BYREF
  __m128i v91; // [rsp+70h] [rbp-108h] BYREF
  __m128i v92; // [rsp+80h] [rbp-F8h] BYREF
  __m128i v93; // [rsp+90h] [rbp-E8h] BYREF
  __m128i v94; // [rsp+A0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v96; // [rsp+B8h] [rbp-C0h]
  _BYTE v97[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v4 = (int)a2;
  if ( !*a1 )
    BUG();
  v5 = *(_QWORD *)(*a1 + 8LL);
  v6 = *(_QWORD *)((char *)a1 + 84);
  ptr = v97;
  v96 = 0x1000000000LL;
  v7 = *(_QWORD *)(v5 + 32);
  v85 = v6;
  sub_FEDB40(v5, a2, a3, a4, &ptr);
  for ( i = v5; ; sub_FEDB40(i, (unsigned int)v4, v17, 0, &ptr) )
  {
    if ( (_DWORD)v96 )
    {
      v18 = (char *)ptr;
      if ( (*(_BYTE *)(*(_QWORD *)ptr + 29LL) & 0x10) == 0 )
        break;
    }
    v91.m128i_i8[0] = 0;
    if ( (unsigned int)(v4 + 1) <= 1 )
      goto LABEL_25;
    if ( (int)v4 >= 0 )
    {
      v8 = *(_QWORD *)(v7 + 184) + 24 * v4;
      goto LABEL_5;
    }
    v23 = (unsigned int)(-2 - v4);
    v24 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v4) >> 6));
    if ( _bittest64(&v24, v23) )
    {
      v25 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v23 >> 5));
      if ( *v25 )
      {
        v8 = *v25 + 24 * (v23 & 0x1F);
        goto LABEL_5;
      }
      v62 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v63 = *v62;
      v62[10] += 768;
      v64 = (_DWORD *)((v63 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v62[1] >= (unsigned __int64)(v64 + 192) && v63 )
      {
        *v62 = (__int64)(v64 + 192);
        v39 = 0;
      }
      else
      {
        v64 = (_DWORD *)sub_5F8390((__int64)v62, 768, 3);
        v39 = v91.m128i_i8[0];
      }
      *v25 = v64;
      v65 = v64 + 192;
      do
      {
        *v64 = 0;
        v64 += 6;
        *((_OWORD *)v64 - 1) = 0;
      }
      while ( v65 != v64 );
      v8 = *v25 + 24 * (v23 & 0x1F);
    }
    else
    {
      v8 = sub_CA9380(v7, (unsigned int)v23, &v91);
      v39 = v91.m128i_i8[0];
    }
    if ( v39 )
      goto LABEL_25;
LABEL_5:
    if ( *(char *)(v8 + 3) < 0 )
      v9 = *(_DWORD *)(v8 + 12);
    else
      v9 = *(_DWORD *)(v8 + 8);
    if ( !v9 )
    {
LABEL_25:
      v19 = ptr;
      v20 = 0;
      goto LABEL_26;
    }
    v10 = *(int *)(v7 + 408);
    v11 = v9 & 0x7FFFFFFF;
    v12 = v10 + 1;
    if ( (unsigned int)(v10 + 1) <= 1 )
    {
      v13 = *(_DWORD **)(v7 + 184);
      if ( v11 < (*v13 & 0x7FFFFFFFu) )
        goto LABEL_35;
      goto LABEL_11;
    }
    if ( (int)v10 >= 0 )
    {
      v13 = *(_DWORD **)(v7 + 184);
      if ( v11 < (v13[6 * v10] & 0x7FFFFFFFu) )
        goto LABEL_35;
LABEL_11:
      if ( v12 != *(_DWORD *)(v7 + 192) )
      {
        v14 = &v13[6 * v12];
LABEL_13:
        v15 = v11 < (*v14 & 0x7FFFFFFFu);
        goto LABEL_14;
      }
      goto LABEL_36;
    }
    v26 = (unsigned int)(-2 - v10);
    v27 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v10) >> 6));
    if ( _bittest64(&v27, v26) )
    {
      v28 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v26 >> 5));
      v29 = *v28;
      if ( !*v28 )
      {
        v70 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v71 = *v70;
        v70[10] += 768;
        v72 = (_DWORD *)((v71 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v70[1] >= (unsigned __int64)(v72 + 192) && v71 )
        {
          *v70 = (__int64)(v72 + 192);
        }
        else
        {
          v89 = v28;
          v72 = (_DWORD *)sub_5F8390((__int64)v70, 768, 3);
          v28 = v89;
          LOBYTE(v26) = -2 - v10;
        }
        *v28 = v72;
        v73 = v72 + 192;
        do
        {
          *v72 = 0;
          v72 += 6;
          *((_OWORD *)v72 - 1) = 0;
        }
        while ( v73 != v72 );
        v29 = *v28;
      }
      v30 = (_DWORD *)(v29 + 24 * (v26 & 0x1F));
    }
    else
    {
      v30 = (_DWORD *)sub_CA9380(v7, (unsigned int)v26, 0);
    }
    if ( v11 < (*v30 & 0x7FFFFFFFu) )
      goto LABEL_35;
    if ( (_DWORD)v10 == -2 )
    {
LABEL_15:
      v4 = *(int *)(v7 + 408);
      goto LABEL_16;
    }
    if ( v12 != *(_DWORD *)(v7 + 192) )
    {
      v31 = (unsigned int)(-2 - v12);
      v32 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v12) >> 6));
      if ( _bittest64(&v32, v31) )
      {
        v33 = (__int64 *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v31 >> 5));
        v34 = *v33;
        if ( !*v33 )
        {
          v79 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
          v80 = *v79;
          v79[10] += 768;
          v81 = (_DWORD *)((v80 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v79[1] >= (unsigned __int64)(v81 + 192) && v80 )
            *v79 = (__int64)(v81 + 192);
          else
            v81 = (_DWORD *)sub_5F8390((__int64)v79, 768, 3);
          *v33 = (__int64)v81;
          v82 = v81 + 192;
          do
          {
            *v81 = 0;
            v81 += 6;
            *((_OWORD *)v81 - 1) = 0;
          }
          while ( v81 != v82 );
          v34 = *v33;
        }
        v14 = (_DWORD *)(v34 + 24 * (v31 & 0x1F));
      }
      else
      {
        v14 = (_DWORD *)sub_CA9380(v7, (unsigned int)v31, 0);
      }
      goto LABEL_13;
    }
LABEL_36:
    v15 = v11 < *(_DWORD *)(v7 + 248);
LABEL_14:
    if ( v15 )
      goto LABEL_15;
LABEL_35:
    v4 = (int)sub_CA9700(v7, v11);
LABEL_16:
    v93.m128i_i8[0] = 0;
    if ( (unsigned int)(v4 + 1) <= 1 )
      goto LABEL_32;
    if ( (int)v4 < 0 )
    {
      v35 = (unsigned int)(-2 - v4);
      v36 = *(_QWORD *)(*(_QWORD *)(v7 + 256) + 8LL * ((unsigned int)(-2 - v4) >> 6));
      if ( _bittest64(&v36, v35) )
      {
        v37 = (_QWORD *)(*(_QWORD *)(v7 + 208) + 8 * ((unsigned __int64)(int)v35 >> 5));
        if ( *v37 )
        {
          v16 = (_DWORD *)(*v37 + 24LL * ((-2 - (_BYTE)v4) & 0x1F));
          if ( v9 >= 0 )
          {
LABEL_20:
            v17 = v11 - (*v16 & 0x7FFFFFFF);
            continue;
          }
          goto LABEL_52;
        }
        v66 = (__int64 *)(*(_QWORD *)(v7 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v67 = *v66;
        v66[10] += 768;
        v68 = (_DWORD *)((v67 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v66[1] >= (unsigned __int64)(v68 + 192) && v67 )
        {
          *v66 = (__int64)(v68 + 192);
          v22 = 0;
        }
        else
        {
          v87 = v37;
          v83 = sub_5F8390((__int64)v66, 768, 3);
          v37 = v87;
          v68 = (_DWORD *)v83;
          v22 = v93.m128i_i8[0];
        }
        *v37 = v68;
        v69 = v68 + 192;
        do
        {
          *v68 = 0;
          v68 += 6;
          *((_OWORD *)v68 - 1) = 0;
        }
        while ( v69 != v68 );
        v16 = (_DWORD *)(*v37 + 24LL * ((-2 - (_BYTE)v4) & 0x1F));
      }
      else
      {
        v16 = (_DWORD *)sub_CA9380(v7, (unsigned int)v35, &v93);
        v22 = v93.m128i_i8[0];
      }
      if ( v22 || !v16 )
      {
LABEL_32:
        v17 = 0;
        v4 = 0;
        continue;
      }
    }
    else
    {
      v16 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 24LL * (int)v4);
    }
    if ( v9 >= 0 )
      goto LABEL_20;
LABEL_52:
    v38 = sub_CAAC60(v7, v16);
    v4 = (int)v38;
    v17 = HIDWORD(v38);
  }
  v40 = 0;
  v20 = 0;
  v90 = ptr;
  v41 = (char *)ptr + 8 * (unsigned int)v96;
  while ( 1 )
  {
    v42 = *(_QWORD *)v18;
    v43 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v18 + 16LL))(*(_QWORD *)v18);
    if ( (_DWORD)v43 )
    {
      if ( HIDWORD(v43) )
      {
        if ( v40 )
        {
          v44 = *(_QWORD *)(v42 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v42 + 16) & 4) != 0 )
            v44 = *(_QWORD *)(v44 + 8);
LABEL_63:
          if ( v44 )
          {
            while ( v44 != v40 )
            {
              v45 = *(_QWORD *)(sub_79A2E0(v44) + 16);
              v44 = v45 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v45 & 4) == 0 )
                goto LABEL_63;
              v44 = *(_QWORD *)((v45 & 0xFFFFFFFFFFFFFFF8LL) + 8);
              if ( !v44 )
                goto LABEL_67;
            }
            goto LABEL_79;
          }
        }
LABEL_67:
        v40 = 0;
        if ( (unsigned __int8)sub_79B790(v42) )
          v40 = sub_79AC10(v42);
        if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 56 > 4 || (*(_BYTE *)(v42 + 74) & 8) != 0 )
        {
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
          if ( HIDWORD(v46) == (_DWORD)v85 )
            break;
          v88 = v46;
          v48 = sub_CB1620(v7, HIDWORD(v46));
          LODWORD(v46) = v88;
          if ( !v48 )
            break;
        }
      }
    }
LABEL_79:
    v18 = (char *)(v90 + 1);
    v90 = v18;
    if ( v18 == v41 )
      goto LABEL_80;
  }
  if ( HIDWORD(v85) == (_DWORD)v46 || !(unsigned __int8)sub_CB1620(v7, HIDWORD(v85)) )
  {
    if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 17 <= 4 )
    {
      a1[15] = v41;
      v49 = (void **)&v90;
    }
    else
    {
      v49 = nullptr;
    }
    a1[14] = v49;
    sub_639160(&v91, v42, *a1, v85, 1, v47);
    v20 = sub_617930((__int64)a1, 1, v50, v51, v52, v53, (__int128)_mm_load_si128(&v91), (__int128)_mm_load_si128(&v92));
    if ( (_BYTE)v20 )
      goto LABEL_93;
    v20 = 1;
    goto LABEL_79;
  }
LABEL_80:
  v19 = ptr;
  if ( (_BYTE)v20 )
  {
    v20 = 0;
  }
  else
  {
    if ( v90 == ptr )
      v54 = *(_QWORD *)ptr;
    else
      v54 = *(v90 - 1);
    v55 = *(_QWORD *)(v54 + 16);
    v56 = v55 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v55 & 4) != 0 )
      v56 = *(_QWORD *)(v56 + 8);
    if ( v56 )
    {
      v57 = v56;
      while ( (*(_BYTE *)(v57 + 8) & 0x7F) != 0 )
      {
        v58 = (_QWORD *)sub_79A2E0(v57);
        v59 = (*(__int64 (__fastcall **)(_QWORD *))(*v58 + 16LL))(v58);
        if ( !(_DWORD)v59 || !HIDWORD(v59) )
          break;
        if ( !(unsigned int)sub_5F7DA0(v7, v59, v85) )
        {
          sub_639160(&v93, v58, *a1, v85, 1, v60);
          v78 = sub_617930(
                  (__int64)a1,
                  1,
                  v74,
                  v75,
                  v76,
                  v77,
                  (__int128)_mm_load_si128(&v93),
                  (__int128)_mm_load_si128(&v94));
          if ( (_BYTE)v78 )
          {
            v19 = ptr;
            v20 = v78;
            goto LABEL_26;
          }
        }
        v61 = v58[2] & 0xFFFFFFFFFFFFFFF8LL;
        v57 = v61;
        if ( (v58[2] & 4) != 0 )
        {
          v57 = *(_QWORD *)(v61 + 8);
          if ( !v57 )
            break;
        }
        else if ( !v61 )
        {
          break;
        }
      }
LABEL_93:
      v19 = ptr;
    }
  }
LABEL_26:
  if ( v19 != v97 )
    free(v19);
  return v20;
}

