void __fastcall sub_77F750(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r12
  char v5; // al
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r13
  char v10; // al
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 *v15; // rdx
  char *v16; // r14
  char *v17; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned int *v21; // rsi
  void *v22; // rdi
  size_t v23; // rbp
  const void *v24; // rsi
  unsigned int *v25; // rbp
  __int64 v26; // rax
  _WORD *v27; // rdx
  __int64 v28; // rbx
  int v29; // eax
  char v30; // cl
  unsigned __int64 v31; // rax
  const char *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  void *v38; // rdx
  __int64 v39; // rbp
  unsigned int v40; // eax
  const void *v41; // rax
  _BYTE *v42; // rdi
  size_t v43; // rdx
  size_t v44; // r12
  unsigned __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  _QWORD *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 i; // rcx
  __int64 j; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r14
  __int64 v57; // rdi
  unsigned __int8 v58; // dl
  _BYTE *v59; // rax
  _BYTE *v60; // rax
  __int64 v61; // rax
  unsigned int v62; // eax
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // r12
  __int64 v67; // r15
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // [rsp+8h] [rbp-100h]
  __int64 v71; // [rsp+18h] [rbp-F0h]
  char *v72; // [rsp+38h] [rbp-D0h]
  __int64 v73; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v74[32]; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v75; // [rsp+70h] [rbp-98h]
  char *v76; // [rsp+80h] [rbp-88h] BYREF
  __int64 v77; // [rsp+88h] [rbp-80h]
  _BYTE v78[120]; // [rsp+90h] [rbp-78h] BYREF

  v4 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v4 = *(_QWORD *)v4;
  v5 = *(_BYTE *)(a1 + 28) & 0x7F;
  switch ( v5 )
  {
    case 16:
      v6 = sub_7B7710(a1);
      if ( v6 )
        v4 = v6 + 48;
      break;
    case 73:
      if ( *(_QWORD *)(a1 + 104) )
      {
        v46 = ((__int64 (*)(void))sub_7B7710)();
        if ( v46 )
          v4 = v46 + 48;
      }
      break;
    case 48:
      v47 = sub_7B81E0(a1);
      if ( v47 )
        v4 = v47 + 48;
      break;
  }
  v7 = *(_BYTE *)(v4 + 8) & 0x7F;
  if ( (unsigned __int8)v7 > 0x10u )
  {
    if ( (((_BYTE)v7 + 96) & 0x7Fu) <= 5 )
      return;
  }
  else
  {
    v8 = 65922;
    if ( _bittest64(&v8, v7) )
      return;
  }
  v9 = *(_QWORD *)(a1 + 40);
  v76 = v78;
  v77 = 0x800000000LL;
  do
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(a3 + 1) & 0x10) == 0
        || (*(_BYTE *)(v4 + 8) & 0x7F) != 0x16
        || (v36 = *(_QWORD *)(v4 - 8), (v36 & 7) == 0) && v36 > 7 )
      {
        if ( !(unsigned __int8)sub_79B880(v4) || v9 <= 7 && !(_DWORD)v9 )
          goto LABEL_124;
        v10 = *(_BYTE *)(a3 + 1) & 0x60;
        if ( v10 != 64 )
        {
          if ( v10 != 32 || (*(_BYTE *)(v4 + 9) & 0x20) == 0 )
            goto LABEL_124;
          v48 = sub_7A0650(v4, v9);
          v49 = *(_QWORD *)(sub_79A2E0(v4) + 16);
          v50 = (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v49 & 4) != 0 )
            v50 = (_QWORD *)*v50;
          v51 = sub_79BE30(v50);
          v52 = sub_7A0650(v51, v9);
          for ( i = 0; v48; v48 = *(_QWORD *)(v56 + 8) )
          {
            ++i;
            if ( (v48 & 4) == 0 )
              break;
            v56 = v48 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v56 )
              break;
          }
          for ( j = 0; v52; v52 = *(_QWORD *)(v55 + 8) )
          {
            ++j;
            if ( (v52 & 4) == 0 )
              break;
            v55 = v52 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v55 )
              break;
          }
          if ( i != j )
          {
LABEL_124:
            if ( (*(_BYTE *)(v4 + 8) & 0x7Fu) - 16 <= 0x3E )
            {
              v11 = sub_79A2E0(v4);
              if ( v11 )
              {
                v12 = (unsigned int)v77;
                v13 = (unsigned int)v77 + 1LL;
                if ( HIDWORD(v77) < v13 )
                {
                  sub_25D6060(&v76, v78, v13, 8);
                  v12 = (unsigned int)v77;
                }
                *(_QWORD *)&v76[8 * v12] = v4;
                v9 = *(_QWORD *)(v11 + 40);
                LODWORD(v77) = v77 + 1;
              }
            }
          }
        }
      }
      v14 = *(_QWORD *)(sub_79A2E0(v4) + 16);
      v15 = (unsigned __int64 *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      v4 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 4) == 0 )
        break;
      v4 = *v15;
      if ( !*v15 )
        goto LABEL_25;
    }
  }
  while ( v15 );
LABEL_25:
  v16 = v76;
  v17 = &v76[8 * (unsigned int)v77];
  if ( v76 != v17 )
  {
    v70 = a3;
    while ( 1 )
    {
      v28 = *((_QWORD *)v17 - 1);
      v29 = *(_BYTE *)(v28 + 8) & 0x7F;
      v30 = *(_BYTE *)(v28 + 8) & 0x7F;
      if ( (unsigned int)(v29 - 58) <= 1 )
      {
        v19 = *(_QWORD *)(v28 - 24);
        if ( (v19 & 7) == 0 )
        {
          v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v20 )
          {
            v21 = *(unsigned int **)(v20 + 16);
            v22 = *(void **)(a2 + 32);
            v23 = *v21;
            v24 = v21 + 4;
            if ( *(_QWORD *)(a2 + 24) - (_QWORD)v22 >= v23 )
            {
              if ( v23 )
              {
                memcpy(v22, v24, v23);
                *(_QWORD *)(a2 + 32) += v23;
              }
            }
            else
            {
              sub_26240F0(a2, v24, v23);
            }
          }
        }
        v25 = *(unsigned int **)(v28 + 104);
        v26 = sub_7D65F0(v28 - 64);
        sub_B22390(a2, v25 + 2, *v25, v70, *(_QWORD *)(v26 + 56));
        v27 = *(_WORD **)(a2 + 32);
        goto LABEL_32;
      }
      if ( v30 == 22 )
      {
        v31 = *(_QWORD *)(v28 - 8);
        if ( (v31 & 7) != 0 || v31 <= 7 )
        {
          v32 = "(anonymous namespace)";
          v33 = *(_QWORD *)(a2 + 32);
          if ( (*(_BYTE *)(v70 + 4) & 0x10) != 0 )
            v32 = "`anonymous namespace'";
          if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v33) > 0x14 )
          {
            v34 = *(_QWORD *)(v32 + 13);
            *(__m128i *)v33 = _mm_loadu_si128((const __m128i *)v32);
            *(_QWORD *)(v33 + 13) = v34;
            v27 = (_WORD *)(*(_QWORD *)(a2 + 32) + 21LL);
            v35 = *(_QWORD *)(a2 + 24);
            *(_QWORD *)(a2 + 32) = v27;
            if ( (unsigned __int64)(v35 - (_QWORD)v27) <= 1 )
              goto LABEL_43;
            goto LABEL_33;
          }
          sub_26240F0(a2, v32, 21);
          v27 = *(_WORD **)(a2 + 32);
        }
        else
        {
          sub_77A870(v28 - 48, a2);
          v27 = *(_WORD **)(a2 + 32);
        }
      }
      else
      {
        if ( (unsigned int)(v29 - 56) > 3 )
        {
          if ( (unsigned int)(v29 - 32) <= 5 )
          {
            if ( (*(_BYTE *)(v28 + 10) & 0x20) == 0 )
              goto LABEL_103;
            v57 = *(_QWORD *)(*(_QWORD *)(v28 - 24) & 0xFFFFFFFFFFFFFFF0LL);
            v71 = v57;
            v58 = *(_BYTE *)(v57 + 16);
            if ( (unsigned int)v58 - 25 > 1 )
            {
              v71 = sub_B0D320(v57);
              v58 = *(_BYTE *)(v71 + 16);
            }
            if ( v58 != 26 )
LABEL_103:
              v71 = 0;
            sub_77A870(v28 - 72, a2);
            v59 = *(_BYTE **)(a2 + 32);
            if ( (unsigned __int64)v59 >= *(_QWORD *)(a2 + 24) )
            {
              sub_26239D0(a2, 40);
            }
            else
            {
              *(_QWORD *)(a2 + 32) = v59 + 1;
              *v59 = 40;
            }
            if ( !v71 )
              goto LABEL_100;
            v62 = sub_77F620(v28 - 72);
            v63 = v62;
            if ( v62 )
            {
              v64 = **(_QWORD **)(v28 + 48);
              v75 = 257;
              v73 = *(_QWORD *)(v64 + 48);
              sub_B2AEC0(&v73, a2, v70, v74, 0);
              if ( (_DWORD)v63 != 1 )
              {
                v65 = 8 * v63;
                v66 = 8;
                v72 = v17;
                v67 = v65;
                do
                {
                  sub_5FF0F0(a2, ", ");
                  v68 = *(_QWORD *)(*(_QWORD *)(v28 + 48) + v66);
                  v66 += 8;
                  v75 = 257;
                  v73 = *(_QWORD *)(v68 + 48);
                  sub_B2AEC0(&v73, a2, v70, v74, 0);
                }
                while ( v67 != v66 );
                v17 = v72;
              }
              if ( (*(_BYTE *)(v71 + 23) & 0x10) != 0 )
              {
                sub_5FF0F0(a2, ", ");
                goto LABEL_116;
              }
            }
            else if ( (*(_BYTE *)(v71 + 23) & 0x10) != 0 )
            {
LABEL_116:
              sub_5FF0F0(a2, "...");
            }
LABEL_100:
            v60 = *(_BYTE **)(a2 + 32);
            if ( (unsigned __int64)v60 >= *(_QWORD *)(a2 + 24) )
            {
              sub_26239D0(a2, 41);
            }
            else
            {
              *(_QWORD *)(a2 + 32) = v60 + 1;
              *v60 = 41;
            }
            v27 = *(_WORD **)(a2 + 32);
            goto LABEL_32;
          }
          if ( v30 != 60 )
          {
            v69 = sub_79A2E0(*((_QWORD *)v17 - 1));
            sub_77A870(v69, a2);
            v27 = *(_WORD **)(a2 + 32);
            goto LABEL_32;
          }
          if ( *(char *)(v28 + 12) >= 0 )
            goto LABEL_34;
        }
        else
        {
          v37 = *(_QWORD *)(v28 - 24);
          if ( (v37 & 7) != 0 || v37 <= 7 )
          {
            v38 = *(void **)(a2 + 32);
            if ( *(_QWORD *)(a2 + 24) - (_QWORD)v38 <= 0xAu )
            {
              v39 = sub_26240F0(a2, "(anonymous ", 11);
            }
            else
            {
              v39 = a2;
              qmemcpy(v38, "(anonymous ", 11);
              *(_QWORD *)(a2 + 32) += 11LL;
            }
            v40 = sub_B08AA0(*(_BYTE *)(v28 + 9) >> 5);
            v41 = (const void *)sub_B08AC0(v40);
            v42 = *(_BYTE **)(v39 + 32);
            v44 = v43;
            v45 = *(_QWORD *)(v39 + 24);
            if ( v45 - (unsigned __int64)v42 < v44 )
            {
              v61 = sub_26240F0(v39, v41, v44);
              v42 = *(_BYTE **)(v61 + 32);
              v45 = *(_QWORD *)(v61 + 24);
              v39 = v61;
            }
            else if ( v44 )
            {
              memcpy(v42, v41, v44);
              v45 = *(_QWORD *)(v39 + 24);
              v42 = (_BYTE *)(v44 + *(_QWORD *)(v39 + 32));
              *(_QWORD *)(v39 + 32) = v42;
            }
            if ( (unsigned __int64)v42 >= v45 )
            {
              sub_26239D0(v39, 41);
            }
            else
            {
              *(_QWORD *)(v39 + 32) = v42 + 1;
              *v42 = 41;
            }
            v27 = *(_WORD **)(a2 + 32);
            goto LABEL_32;
          }
        }
        sub_77A870(v28 - 64, a2);
        v27 = *(_WORD **)(a2 + 32);
      }
LABEL_32:
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v27 <= 1u )
      {
LABEL_43:
        v17 -= 8;
        sub_26240F0(a2, "::", 2);
        if ( v16 == v17 )
        {
LABEL_44:
          v17 = v76;
          break;
        }
      }
      else
      {
LABEL_33:
        *v27 = 14906;
        *(_QWORD *)(a2 + 32) += 2LL;
LABEL_34:
        v17 -= 8;
        if ( v16 == v17 )
          goto LABEL_44;
      }
    }
  }
  if ( v17 != v78 )
    free(v17);
}

