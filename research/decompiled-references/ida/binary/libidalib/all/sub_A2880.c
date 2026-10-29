unsigned __int64 __fastcall sub_A2880(unsigned int *a1)
{
  unsigned int *v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // edx
  char v4; // r12
  char v5; // al
  unsigned int v6; // eax
  char v8; // dl
  signed int v9; // edx
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  size_t v17; // rax
  const char *v18; // r11
  size_t v19; // r10
  __int64 v20; // rax
  void *v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r12
  int v26; // ebx
  char v27; // r14
  char v28; // r13
  _QWORD *v29; // r12
  __int64 v30; // rsi
  unsigned __int64 v31; // r9
  __int64 i; // rax
  unsigned __int64 v33; // r10
  __int64 v34; // rdx
  char v35; // r11
  bool v36; // dl
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  void *v46; // rdi
  void *v47; // rdx
  __int64 v48; // rsi
  unsigned __int64 v49; // r15
  __int64 j; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r14
  __int64 v54; // r13
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r14
  __int64 v58; // r13
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  size_t v62; // [rsp+0h] [rbp-E0h]
  const char *v63; // [rsp+8h] [rbp-D8h]
  int v64; // [rsp+14h] [rbp-CCh]
  unsigned __int64 v65; // [rsp+18h] [rbp-C8h]
  unsigned __int64 v66; // [rsp+18h] [rbp-C8h]
  const char *src; // [rsp+20h] [rbp-C0h]
  void *srcb; // [rsp+20h] [rbp-C0h]
  _BYTE *srcd; // [rsp+20h] [rbp-C0h]
  void *srcc; // [rsp+20h] [rbp-C0h]
  __int64 v72; // [rsp+28h] [rbp-B8h]
  _BYTE v73[24]; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+58h] [rbp-88h]
  __int128 v75; // [rsp+60h] [rbp-80h]
  __int64 v76; // [rsp+70h] [rbp-70h]
  __int128 v77; // [rsp+78h] [rbp-68h]
  __int64 v78; // [rsp+88h] [rbp-58h]
  __int128 v79; // [rsp+90h] [rbp-50h]
  int v80; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-38h]

  v81 = __readfsqword(0x28u);
  v1 = a1;
  v72 = sub_C6150(a1[4]);
  if ( !v72 )
    return v81 - __readfsqword(0x28u);
  v2 = a1[5];
  if ( v2 == 2 )
  {
    v3 = a1[6];
    v4 = *(_BYTE *)(v72 + 153);
    if ( (v4 & 2) != 0 )
      goto LABEL_17;
    if ( !v3 )
      goto LABEL_41;
    *(_QWORD *)(v72 + 160) = -1;
    v2 = a1[5];
  }
  v3 = a1[6];
  if ( v2 != 8 )
    goto LABEL_4;
  v4 = *(_BYTE *)(v72 + 153);
  if ( (v4 & 8) != 0 )
  {
LABEL_17:
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_6;
LABEL_19:
      v8 = v4 & 1;
      *(_BYTE *)(v72 + 153) = v4 & 1;
      v2 = v1[5];
LABEL_20:
      v5 = v8 | v2;
      goto LABEL_7;
    }
    goto LABEL_41;
  }
  if ( v3 )
  {
    *(_QWORD *)(v72 + 168) = -1;
    v3 = a1[6];
    v2 = a1[5];
LABEL_4:
    if ( v3 )
      goto LABEL_5;
  }
LABEL_41:
  if ( !(_QWORD)xmmword_252598 )
  {
    v4 = *(_BYTE *)(v72 + 153);
    goto LABEL_6;
  }
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = ~(_BYTE)v2;
  do
  {
    v29 = (_QWORD *)(qword_252590 + (v25 << 8));
    v30 = v29[16];
    if ( v30 )
    {
      v31 = 0;
      for ( i = 0; i != v30; ++i )
      {
        while ( 1 )
        {
          v34 = v29[15];
          v35 = *(_BYTE *)(v34 + 16 * i + 8) & v28;
          if ( !v35 )
            break;
          v33 = v31;
          ++i;
          ++v31;
          *(_BYTE *)(v34 + 16 * v33 + 8) = v35;
          if ( v30 == i )
            goto LABEL_48;
        }
        v36 = v30 - 1 == i;
        v27 |= v36;
      }
LABEL_48:
      v37 = v29[16];
      if ( v37 != v31 )
      {
        *(_QWORD *)v73 = -1;
        *(_WORD *)&v73[8] = 0;
        if ( v31 < v37 )
          goto LABEL_56;
        v38 = v29[15];
        v39 = v29[17];
        if ( (unsigned __int64)v73 >= v38 && (unsigned __int64)v73 < v38 + 16 * v39 )
        {
          if ( v39 < v31 )
          {
            v66 = v31;
            v61 = qvector_reserve();
            v31 = v66;
            v29[15] = v61;
            v37 = v29[16];
          }
          if ( v37 < v31 )
          {
            do
            {
              v40 = v37++;
              v41 = v29[15] + 16 * v40;
              *(_QWORD *)v41 = -1;
              *(_WORD *)(v41 + 8) = 0;
            }
            while ( v31 != v37 );
          }
LABEL_56:
          v29[16] = v31;
          goto LABEL_57;
        }
        if ( v39 < v31 )
        {
          v65 = v31;
          v45 = qvector_reserve();
          v31 = v65;
          v29[15] = v45;
          v37 = v29[16];
        }
        if ( v37 >= v31 )
          goto LABEL_56;
        do
        {
          v42 = v37++;
          *(__m128i *)(v29[15] + 16 * v42) = _mm_load_si128((const __m128i *)v73);
        }
        while ( v31 != v37 );
        v29[16] = v31;
      }
    }
LABEL_57:
    if ( v27 )
    {
      v43 = v29[18];
      if ( v43 )
        sub_C83A0(v43, v29);
      v44 = v29[16];
      v29[18] = 0;
      if ( v44 )
        sub_A2700((__int64)v29, *(_QWORD *)(v29[15] + 16 * v44 - 16));
    }
    v25 = ++v26;
  }
  while ( v26 < (unsigned __int64)xmmword_252598 );
  v1 = a1;
  v3 = a1[6];
  v2 = a1[5];
LABEL_5:
  v4 = *(_BYTE *)(v72 + 153);
  if ( v3 == 1 )
  {
    v8 = *(_BYTE *)(v72 + 153);
    if ( v2 == 1 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_6:
  v5 = v4 & ~(_BYTE)v2;
LABEL_7:
  *(_BYTE *)(v72 + 153) = v5;
  v6 = v1[5];
  if ( v6 == 2 || v6 == 8 )
  {
    v9 = v1[6];
    if ( !v9 )
    {
      v10 = *(_QWORD *)(v72 + 128);
      if ( v10 )
      {
        v11 = 0;
        while ( (*(_BYTE *)(*(_QWORD *)(v72 + 120) + 16 * v11 + 8) & (unsigned __int8)v1[5]) == 0 )
        {
          v11 = ++v9;
          if ( v9 >= v10 )
            goto LABEL_27;
        }
        goto LABEL_9;
      }
LABEL_27:
      sub_A0E90((__int64)xmmword_251F20);
      v6 = v1[5];
    }
    if ( v6 == 2 && v1[6] == 1 )
    {
      memset(v73, 0, sizeof(v73));
      v74 = 0;
      v76 = 0;
      v78 = 0;
      v80 = 1;
      v75 = 0;
      v77 = 0;
      v79 = 0;
      v12 = *(_QWORD **)(dbg + 40LL);
      v64 = *(_DWORD *)(dbg + 48LL);
      if ( !*v12 )
        goto LABEL_97;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v14 < v15 + 1 )
        {
          v74 = qvector_reserve();
          v15 = v75;
          v13 = v74;
        }
        ++v12;
        v16 = v13 + 24 * v15;
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = 0;
        *(_QWORD *)&v75 = v75 + 1;
        if ( *(v12 - 1) && (src = (const char *)*(v12 - 1), v17 = strlen(src), v18 = src, (v19 = v17) != 0) )
        {
          v46 = *(void **)v16;
          v47 = (void *)(v17 + 1);
          if ( *(_QWORD *)(v16 + 16) < v17 + 1 )
          {
            v62 = v17;
            v63 = src;
            srcc = (void *)(v17 + 1);
            v60 = qvector_reserve();
            *(_QWORD *)v16 = v60;
            v19 = v62;
            v46 = (void *)v60;
            v18 = v63;
            v47 = srcc;
          }
          *(_QWORD *)(v16 + 8) = v47;
          srcd = (_BYTE *)v19;
          memmove(v46, v18, v19);
          srcd[*(_QWORD *)v16] = 0;
        }
        else
        {
          *(_QWORD *)(v16 + 8) = 0;
        }
        v20 = v77;
        v21 = *(void **)v16;
        v22 = v76;
        if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
        {
          srcb = *(void **)v16;
          v76 = qvector_reserve();
          v22 = v76;
          v21 = srcb;
          v20 = v77;
        }
        *(_QWORD *)(v22 + 8 * v20) = v21;
        v23 = v77;
        v24 = v77 + 1;
        *(_QWORD *)&v77 = v77 + 1;
        if ( !*v12 )
          break;
        v14 = *((_QWORD *)&v75 + 1);
        v15 = v75;
        v13 = v74;
      }
      v48 = v76;
      if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v23 + 2) )
      {
LABEL_97:
        v76 = qvector_reserve();
        v24 = v77;
        v48 = v76;
      }
      *(_QWORD *)(v48 + 8 * v24) = 0;
      v49 = 0;
      *(_QWORD *)&v77 = v77 + 1;
      v80 = v64;
      for ( j = dbg; v49 < *(int *)(dbg + 64LL); j = dbg )
      {
        v51 = *(_QWORD *)(j + 56) + 32LL * (int)v49;
        sub_9DD00(
          (__int64 *)v73,
          *(const void **)v51,
          *(_DWORD *)(v51 + 8),
          *(_BYTE *)(v51 + 13),
          *(_BYTE *)(v51 + 12),
          *(_QWORD *)(v51 + 16),
          *(_QWORD *)(v51 + 24));
        ++v49;
      }
      sub_A1DB0();
      v52 = v78;
      if ( v78 )
      {
        v53 = v79;
        if ( (_QWORD)v79 )
        {
          v54 = 0;
          do
          {
            v55 = (_QWORD *)(v52 + 24 * v54);
            if ( *v55 )
            {
              v55[1] = 0;
              qfree();
              v52 = v78;
            }
            ++v54;
          }
          while ( v53 != v54 );
        }
        *(_QWORD *)&v79 = 0;
        qfree();
      }
      if ( v76 )
      {
        *(_QWORD *)&v77 = 0;
        qfree();
      }
      v56 = v74;
      if ( v74 )
      {
        v57 = v75;
        if ( (_QWORD)v75 )
        {
          v58 = 0;
          do
          {
            v59 = (_QWORD *)(v56 + 24 * v58);
            if ( *v59 )
            {
              v59[1] = 0;
              qfree();
              v56 = v74;
            }
            ++v58;
          }
          while ( v57 != v58 );
        }
        *(_QWORD *)&v75 = 0;
        qfree();
      }
      if ( *(_QWORD *)v73 )
      {
        *(_QWORD *)&v73[8] = 0;
        qfree();
      }
    }
  }
LABEL_9:
  if ( *((_BYTE *)v1 + 28) && *(_BYTE *)(v72 + 153) != v4 )
    dword_2526BC |= 3u;
  return v81 - __readfsqword(0x28u);
}

