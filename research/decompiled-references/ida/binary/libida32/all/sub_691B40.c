__int64 __fastcall sub_691B40(int a1, const char *a2, char **a3, char a4, int a5, int a6)
{
  int v6; // ebx
  _DWORD *v7; // rbp
  char *v10; // rax
  unsigned __int8 v11; // dl
  char *v12; // rcx
  int v13; // esi
  int v15; // edx
  int v16; // edx
  int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 *v20; // r13
  unsigned __int64 v21; // r14
  __int64 v22; // r14
  int v23; // r12d
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // edx
  char *v28; // rcx
  __int16 v29; // ax
  char v30; // al
  int v31; // edx
  signed int v32; // edx
  __int16 v33; // ax
  unsigned __int8 v34; // dl
  signed int v35; // eax
  char *v36; // rsi
  __int16 v37; // dx
  __int16 v38; // dx
  char v39; // al
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // edx
  char *v47; // rdi
  unsigned int v48; // ebx
  _QWORD *v49; // rax
  char *v50; // rdi
  __int64 v51; // rbp
  __int64 v52; // rbx
  __int64 v53; // rax
  unsigned __int64 v54; // r12
  __int64 *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rsi
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r14
  _DWORD *v61; // r12
  _DWORD *v62; // r12
  unsigned __int8 v63; // dl
  int v64; // eax
  int v65; // eax
  __int64 v66; // rax
  int v67; // eax
  __int64 v68; // [rsp+0h] [rbp-B8h]
  __int64 *v69; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v70; // [rsp+8h] [rbp-B0h]
  int v71; // [rsp+10h] [rbp-A8h]
  signed int v72; // [rsp+14h] [rbp-A4h]
  int v73; // [rsp+14h] [rbp-A4h]
  __int64 v74; // [rsp+18h] [rbp-A0h]
  char **v75; // [rsp+20h] [rbp-98h]
  __int64 v76; // [rsp+28h] [rbp-90h]
  int v77; // [rsp+30h] [rbp-88h]
  char *v78; // [rsp+38h] [rbp-80h] BYREF
  __int64 v79; // [rsp+40h] [rbp-78h] BYREF
  __int64 v80; // [rsp+48h] [rbp-70h]
  int v81; // [rsp+50h] [rbp-68h]
  int v82; // [rsp+58h] [rbp-60h]
  __int64 v83; // [rsp+60h] [rbp-58h] BYREF
  __int64 v84; // [rsp+68h] [rbp-50h]
  __int64 v85; // [rsp+70h] [rbp-48h]
  unsigned __int64 v86; // [rsp+78h] [rbp-40h]

  v86 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v6 = a1;
  v7 = a2;
  if ( a2 )
    cleanup_argloc(a2);
  v10 = *a3;
  if ( !*a3 )
    return 0;
  v11 = *v10;
  if ( !*v10 )
    return 0;
  v12 = v10 + 1;
  v78 = v10 + 1;
  if ( v11 == 0xFF )
  {
    v16 = v10[1];
    if ( !v10[1] )
      return 0;
    if ( v16 >= 0 )
    {
      v12 = v10 + 2;
      v17 = v16 - 1;
      v78 = v12;
      if ( (((_BYTE)v16 - 1) & 0x20) == 0 )
      {
        if ( v16 != 65 )
        {
          if ( (v17 & 0x40) != 0 )
          {
            HIDWORD(v74) = 64;
            v72 = v17 & 0xFFFFFFBF;
            if ( a2 )
              goto LABEL_23;
LABEL_50:
            v20 = nullptr;
            LODWORD(v74) = 0xFFFF;
            v69 = &v83;
            goto LABEL_26;
          }
          v39 = 0;
LABEL_70:
          switch ( v16 )
          {
            case 1:
              if ( a4 || !(unsigned __int8)sub_691610(&v78, (int *)&v83, v39) )
                return 0;
              if ( v7 )
              {
                v44 = v83;
                *v7 = 1;
                v7[2] = v44;
              }
              goto LABEL_63;
            case 2:
              goto LABEL_63;
            case 3:
            case 4:
              v40 = *v78;
              if ( !*v78 )
                return 0;
              if ( v40 < 0 )
              {
                v64 = (unsigned __int8)v78[1];
                if ( !(_BYTE)v64 )
                  return 0;
                v41 = (*v78 & 0x7F | (v64 << 7)) - 1;
                v42 = v78[2];
                if ( !v78[2] )
                  return 0;
                if ( v42 < 0 )
                {
                  v67 = (unsigned __int8)v78[3];
                  if ( !(_BYTE)v67 )
                    return 0;
                  v12 = v78 + 4;
                  v42 = v78[2] & 0x7F | (v67 << 7);
                }
                else
                {
                  v12 = v78 + 3;
                }
              }
              else
              {
                v41 = v40 - 1;
                v42 = v78[1];
                if ( !v78[1] )
                  return 0;
                if ( v42 < 0 )
                {
                  v65 = (unsigned __int8)v78[2];
                  if ( !(_BYTE)v65 )
                    return 0;
                  v12 = v78 + 3;
                  v42 = v78[1] & 0x7F | (v65 << 7);
                }
                else
                {
                  v12 = v78 + 2;
                }
              }
              if ( v7 )
              {
                v43 = v41 | ((v42 - 1) << 16);
                if ( v16 == 3 )
                  *v7 = 3;
                else
                  *v7 = 4;
                v7[2] = v43;
              }
              break;
            case 5:
              v46 = *v78;
              if ( !*v78 )
                return 0;
              v47 = v78 + 1;
              v48 = v46 - 1;
              if ( v46 >= 0 )
                goto LABEL_89;
              v63 = v78[1];
              if ( !v63 )
                return 0;
              v47 = v78 + 2;
              v48 = (*v78 & 0x7F | (v63 << 7)) - 1;
LABEL_89:
              v78 = v47;
              if ( !(unsigned __int8)sub_691610(&v78, (int *)&v83, v39) )
                return 0;
              if ( v7 )
              {
                v49 = (_QWORD *)operator new(8u);
                *v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v83), _mm_cvtsi32_si128(v48)).m128i_u64[0];
                if ( v49 )
                {
                  *v7 = 5;
                  *((_QWORD *)v7 + 1) = v49;
                }
              }
              goto LABEL_63;
            case 6:
              if ( !(unsigned __int8)sub_691610(&v78, (int *)&v83, v39) )
                return 0;
              if ( v7 )
              {
                v45 = v83;
                *v7 = 6;
                v7[2] = v45;
              }
              goto LABEL_63;
            default:
              return 0;
          }
        }
LABEL_11:
        *a3 = v12;
        return 1;
      }
      v32 = v17 & 0xFFFFFFDF;
      if ( (v17 & 0xFFFFFFDF) == 0x40 )
        goto LABEL_11;
      if ( (v17 & 0x40) != 0 )
      {
        HIDWORD(v74) = 64;
        v72 = v17 & 0xFFFFFF9F;
        if ( a2 )
          goto LABEL_23;
        goto LABEL_50;
      }
LABEL_97:
      v16 = v32 + 1;
      v39 = 1;
      goto LABEL_70;
    }
    v34 = v10[2];
    if ( !v34 )
      return 0;
    v12 = v10 + 3;
    a2 = (const char *)(v10[1] & 0x7F);
    v78 = v10 + 3;
    v35 = ((unsigned int)a2 | (v34 << 7)) - 1;
    if ( ((((unsigned __int8)a2 | (unsigned __int8)(v34 << 7)) - 1) & 0x20) != 0 )
    {
      v32 = v35 & 0xFFFFFFDF;
      if ( (v35 & 0xFFFFFFDF) == 0x40 )
        goto LABEL_11;
      if ( (v35 & 0x40) != 0 )
      {
        if ( v32 <= 127 )
        {
          HIDWORD(v74) = 64;
          v72 = v35 & 0xFFFFFF9F;
LABEL_61:
          if ( v7 )
            goto LABEL_23;
          if ( v72 )
            goto LABEL_50;
LABEL_63:
          v12 = v78;
          goto LABEL_11;
        }
        v35 &= ~0x20u;
LABEL_59:
        if ( (v35 & 0x80u) == 0 )
          return 0;
        LOBYTE(v35) = v35 & 0x7F;
        HIDWORD(v74) = 128;
        v72 = v35;
        goto LABEL_61;
      }
      if ( (v35 & 0x80u) == 0 )
        goto LABEL_97;
    }
    else
    {
      if ( (v35 & 0x40) != 0 )
      {
        if ( ((unsigned int)a2 | (v34 << 7)) == 0x80 )
        {
          if ( !v7 )
          {
            v20 = nullptr;
            v74 = 0x400000FFFFLL;
            v69 = &v83;
            goto LABEL_26;
          }
          HIDWORD(v74) = 64;
          v72 = 63;
LABEL_23:
          v18 = qalloc_or_throw(24, a2);
          v19 = v72;
          *(_QWORD *)v18 = 0;
          v20 = (__int64 *)v18;
          *(_OWORD *)(v18 + 8) = 0;
          v80 = 0;
          v81 = 0xFFFF;
          v21 = *(_QWORD *)(v18 + 8);
          v79 = 0;
          LODWORD(v74) = 0xFFFF;
          if ( v72 < v21 )
          {
            v54 = v72;
            v55 = (__int64 *)v18;
            do
            {
              v56 = 3 * v54++;
              cleanup_argloc(*v55 + 8 * v56);
            }
            while ( v54 < v21 );
            v20 = v55;
            v6 = a1;
            v20[1] = v72;
            v69 = &v83;
LABEL_114:
            cleanup_argloc(&v79);
            goto LABEL_26;
          }
          if ( v21 >= v72 )
          {
            cleanup_argloc(&v79);
            v69 = &v83;
            goto LABEL_26;
          }
          v57 = *(_QWORD *)v18;
          v58 = *(_QWORD *)(v18 + 16);
          if ( (unsigned __int64)&v79 < *v20 || (unsigned __int64)&v79 >= v57 + 24 * v58 )
          {
            if ( v58 >= v72
              || (v66 = qvector_reserve(v20, v57, v72, 24), v21 = v20[1], v19 = v72, *v20 = v66, v57 = v66, v21 < v72) )
            {
              while ( 1 )
              {
                v70 = v19;
                v62 = (_DWORD *)(v57 + 24 * v21);
                *v62 = 0;
                copy_argloc(v62, &v79);
                v19 = v70;
                ++v21;
                v62[4] = v81;
                if ( v21 >= v70 )
                  break;
                v57 = *v20;
              }
              v20[1] = v70;
              v69 = &v83;
              goto LABEL_114;
            }
            v20[1] = v72;
            cleanup_argloc(&v79);
            v69 = &v83;
          }
          else
          {
            LODWORD(v76) = v72;
            LODWORD(v83) = 0;
            v69 = &v83;
            copy_argloc(&v83, &v79);
            v59 = v72;
            LODWORD(v85) = v81;
            if ( v20[2] < (unsigned __int64)v72 )
            {
              *v20 = qvector_reserve(v20, *v20, v72, 24);
              v59 = v72;
            }
            v60 = v20[1];
            if ( v60 < v59 )
            {
              do
              {
                v76 = v59;
                v61 = (_DWORD *)(*v20 + 24 * v60);
                *v61 = 0;
                copy_argloc(v61, &v83);
                v59 = v76;
                ++v60;
                v61[4] = v85;
              }
              while ( v76 != v60 );
              v20[1] = v76;
              cleanup_argloc(&v83);
              goto LABEL_114;
            }
            v20[1] = v59;
            cleanup_argloc(&v83);
            cleanup_argloc(&v79);
          }
LABEL_26:
          v22 = 0;
          v23 = 0;
          v75 = &v78;
          while ( 1 )
          {
            LODWORD(v85) = v74;
            if ( !(unsigned __int8)sub_691B40(
                                     v6,
                                     (_DWORD)v69,
                                     (_DWORD)v75,
                                     0,
                                     a5,
                                     a6,
                                     v68,
                                     (_DWORD)v69,
                                     v71,
                                     v74,
                                     (_DWORD)v75,
                                     v76,
                                     v77,
                                     (_DWORD)v78,
                                     v79,
                                     v80,
                                     v81,
                                     v82,
                                     0,
                                     0,
                                     v85) )
              break;
            v27 = *v78;
            if ( !*v78 )
              break;
            v28 = v78 + 1;
            v29 = v27 - 1;
            if ( v27 < 0 )
            {
              v33 = (unsigned __int8)v78[1];
              if ( !(_BYTE)v33 )
              {
LABEL_39:
                v78 = v28;
                break;
              }
              v28 = v78 + 2;
              v29 = (*v78 & 0x7F | (v33 << 7)) - 1;
            }
            v78 = v28;
            LOWORD(v85) = v29;
            v30 = *v28;
            if ( HIDWORD(v74) == 64 )
            {
              if ( !v30 )
                break;
              v36 = v28 + 1;
              v37 = v30 - 1;
              if ( v30 < 0 )
              {
                v38 = (unsigned __int8)v28[1];
                if ( !(_BYTE)v38 )
                {
                  v78 = v28 + 1;
                  break;
                }
                v36 = v28 + 2;
                v37 = (v30 & 0x7F | (v38 << 7)) - 1;
              }
              v78 = v36;
              LOWORD(v24) = v37;
            }
            else
            {
              if ( !v30 )
                goto LABEL_39;
              v31 = 0;
              while ( 1 )
              {
                ++v28;
                if ( v30 >= 0 )
                  break;
                v31 = v30 & 0x7F | (v31 << 7);
                v30 = *v28;
                if ( !*v28 )
                  goto LABEL_39;
              }
              v78 = v28;
              v24 = (v31 << 6) | v30 & 0x3F;
              if ( v24 > 0xFFFF )
                break;
            }
            WORD1(v85) = v24;
            if ( v20 )
            {
              v25 = v22 + *v20;
              v26 = *(_QWORD *)(v25 + 8);
              *(_QWORD *)(v25 + 8) = v84;
              v84 = v26;
              LODWORD(v26) = *(_DWORD *)v25;
              *(_DWORD *)v25 = v83;
              LODWORD(v83) = v26;
              LOWORD(v26) = *(_WORD *)(v25 + 16);
              *(_WORD *)(v25 + 16) = v85;
              LOWORD(v85) = v26;
              LOWORD(v26) = *(_WORD *)(v25 + 18);
              *(_WORD *)(v25 + 18) = WORD1(v85);
              WORD1(v85) = v26;
            }
            ++v23;
            v22 += 24;
            cleanup_argloc(v69);
            if ( v23 >= v73 )
              goto LABEL_41;
          }
          cleanup_argloc(v69);
LABEL_41:
          if ( v73 == v23 )
          {
            v12 = v78;
            if ( v7 && v20 )
            {
              *v7 = 2;
              *((_QWORD *)v7 + 1) = v20;
            }
            goto LABEL_11;
          }
          if ( v20 )
          {
            v50 = (char *)*v20;
            if ( *v20 )
            {
              v51 = v20[1];
              v52 = 0;
              if ( v51 )
              {
                do
                {
                  v53 = 3 * v52++;
                  cleanup_argloc(&v50[8 * v53]);
                  v50 = (char *)*v20;
                }
                while ( v51 != v52 );
              }
              v20[1] = 0;
              qfree(v50);
            }
            qfree(v20);
          }
          return 0;
        }
        goto LABEL_59;
      }
      if ( (v35 & 0x80u) == 0 )
        return 0;
      v32 = ((unsigned int)a2 | (v34 << 7)) - 1;
    }
    v72 = v32 & 0xFFFFFF7F;
    if ( (v32 & 0xFFFFFF7F) != 0 )
    {
      HIDWORD(v74) = 128;
      if ( v7 )
        goto LABEL_23;
      goto LABEL_50;
    }
    goto LABEL_11;
  }
  v13 = (v11 & 0x7F) - 1;
  if ( v11 > 0x80u )
  {
    v15 = (unsigned __int8)v10[1];
    v12 = v10 + 2;
    v78 = v10 + 2;
    if ( v15 )
    {
      if ( v7 )
      {
        *v7 = 4;
        v7[2] = v13 | ((v15 - 1) << 16);
      }
      goto LABEL_11;
    }
  }
  else
  {
    if ( (v11 & 0x7F) != 0 )
    {
      if ( v7 )
      {
        *v7 = 3;
        v7[2] = v13;
      }
      goto LABEL_11;
    }
    if ( !a4 )
    {
      if ( v7 )
      {
        *v7 = 1;
        v7[2] = 0;
      }
      goto LABEL_11;
    }
  }
  return 0;
}

