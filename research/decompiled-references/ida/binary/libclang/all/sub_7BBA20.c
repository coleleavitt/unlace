__int64 __fastcall sub_7BBA20(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v4; // r14
  __int64 v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __m128i *v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // r15
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r12
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 j; // rcx
  signed __int64 v56; // r12
  __int64 v57; // rax
  __m128i *v58; // r13
  __m128i v59; // xmm0
  __int64 v60; // rsi
  __int64 v61; // rax
  __m128i v62; // xmm0
  unsigned int v63; // eax
  int v64; // esi
  unsigned __int64 v65; // rdx
  __int64 v66; // rdx
  unsigned __int64 v67; // rcx
  __m128i *v68; // [rsp+0h] [rbp-168h]
  char *src; // [rsp+8h] [rbp-160h]
  __int64 v70; // [rsp+10h] [rbp-158h]
  char *v71; // [rsp+18h] [rbp-150h]
  void *ptr; // [rsp+20h] [rbp-148h] BYREF
  __int64 v73; // [rsp+28h] [rbp-140h]
  _BYTE v74[312]; // [rsp+30h] [rbp-138h] BYREF

  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 )
  {
    if ( v1 > 7 )
      goto LABEL_3;
    return 0;
  }
  sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 <= 7 )
    return 0;
LABEL_3:
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  i = 0;
  v4 = *(_QWORD *)(v2 + 64);
  if ( !v4 )
  {
    sub_6003F0(a1);
    v15 = *(_QWORD *)(a1 + 120);
    if ( v15 )
    {
      if ( v15 <= 7 )
        goto LABEL_45;
    }
    else
    {
      sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
      v15 = *(_QWORD *)(a1 + 120);
      if ( v15 <= 7 )
      {
        if ( v15 )
          goto LABEL_45;
        goto LABEL_110;
      }
    }
    v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v16 )
    {
LABEL_34:
      v17 = v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_BYTE *)(v17 + 72) & 1) != 0 )
      {
        sub_7B7DB0(a1);
        v17 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v18 = *(_QWORD *)(v17 + 56);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( *(char *)(v18 + 28) >= 0 )
          {
            v19 = *(_QWORD *)(v18 + 40);
            if ( (v19 & 7) != 0 || v19 <= 7 )
              break;
          }
          v18 = *(_QWORD *)(v18 + 128);
          if ( !v18 )
            goto LABEL_45;
        }
        while ( 1 )
        {
          sub_79C190(v18 + 48);
          v18 = *(_QWORD *)(v18 + 128);
          if ( !v18 )
            break;
          while ( 1 )
          {
            if ( *(char *)(v18 + 28) >= 0 )
            {
              v20 = *(_QWORD *)(v18 + 40);
              if ( (v20 & 7) != 0 || v20 <= 7 )
                break;
            }
            v18 = *(_QWORD *)(v18 + 128);
            if ( !v18 )
              goto LABEL_45;
          }
        }
      }
LABEL_45:
      sub_6003F0(a1);
      v21 = *(_QWORD *)(a1 + 120);
      if ( v21 )
      {
        if ( v21 > 7 )
          goto LABEL_47;
      }
      else
      {
        sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
        v21 = *(_QWORD *)(a1 + 120);
        if ( v21 > 7 )
        {
LABEL_47:
          v22 = v21 & 0xFFFFFFFFFFFFFFF8LL;
          i = *(_QWORD *)v22;
          if ( !*(_QWORD *)v22 )
          {
LABEL_67:
            if ( (*(_BYTE *)(v22 + 72) & 1) != 0 )
            {
              sub_7B7DB0(a1);
              v22 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            }
            v34 = *(_QWORD *)(v22 + 56);
            if ( v34 )
            {
              while ( 1 )
              {
                if ( *(char *)(v34 + 28) >= 0 )
                {
                  v35 = *(_QWORD *)(v34 + 40);
                  if ( (v35 & 7) != 0 || v35 <= 7 )
                    break;
                }
                v34 = *(_QWORD *)(v34 + 128);
                if ( !v34 )
                  goto LABEL_103;
              }
LABEL_73:
              v36 = sub_79C190(v34 + 48);
              if ( !v36 )
                goto LABEL_97;
              while ( (*(_BYTE *)(v36 + 28) & 0x7F) != 0x30 )
              {
                v37 = *(_QWORD *)(v36 + 8);
                v36 = v37 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v37 <= 7 )
                  goto LABEL_97;
              }
              v38 = sub_79C190(v34 + 48);
              v39 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
              v40 = *(_QWORD *)(v39 + 64);
              if ( !v38 )
              {
                if ( !v40 )
                  BUG();
                goto LABEL_97;
              }
              while ( (*(_BYTE *)(v38 + 28) & 0x7F) != 0x30 )
              {
                v41 = *(_QWORD *)(v38 + 8);
                v38 = v41 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v41 <= 7 )
                {
                  if ( v40 )
                    goto LABEL_97;
                  goto LABEL_94;
                }
              }
              if ( v40 )
                goto LABEL_82;
              v40 = v38;
LABEL_94:
              *(_QWORD *)(v39 + 64) = v40;
              v38 = *(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              i = *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64);
              if ( *(_QWORD *)(v40 + 8) <= 7u )
                goto LABEL_97;
              while ( (*(_BYTE *)(v38 + 28) & 0x7F) != 0x30 )
              {
                v46 = *(_QWORD *)(v38 + 8);
                v38 = v46 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v46 <= 7 )
                  goto LABEL_97;
              }
LABEL_82:
              v42 = i;
              for ( i = v38; ; i = v43 )
              {
                *(_QWORD *)(v42 + 80) = i;
                v43 = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( *(_QWORD *)(i + 8) <= 7u )
                  break;
                while ( (*(_BYTE *)(v43 + 28) & 0x7F) != 0x30 )
                {
                  v44 = *(_QWORD *)(v43 + 8);
                  v43 = v44 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v44 <= 7 )
                    goto LABEL_97;
                }
                v42 = i;
              }
LABEL_97:
              while ( 1 )
              {
                v34 = *(_QWORD *)(v34 + 128);
                if ( !v34 )
                  break;
                if ( *(char *)(v34 + 28) >= 0 )
                {
                  v47 = *(_QWORD *)(v34 + 40);
                  if ( (v47 & 7) != 0 || v47 <= 7 )
                    goto LABEL_73;
                }
              }
              v22 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
              goto LABEL_103;
            }
            v4 = v22;
LABEL_112:
            v22 = v4;
LABEL_103:
            *(_BYTE *)(v22 + 72) |= 2u;
            v2 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            goto LABEL_4;
          }
          v23 = sub_79C190(i + 48);
          v24 = *(_QWORD *)(a1 + 120);
          i = v23;
          if ( v23 )
          {
            while ( (*(_BYTE *)(i + 28) & 0x7F) != 0x30 )
            {
              v25 = *(_QWORD *)(i + 8);
              i = v25 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v25 <= 7 )
              {
                i = 0;
                goto LABEL_65;
              }
            }
            if ( !v24 )
            {
              sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
              v24 = *(_QWORD *)(a1 + 120);
            }
            if ( v24 <= 7 || (v26 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL)) == 0 )
            {
              sub_6003F0(a1);
              *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64) = 0;
              BUG();
            }
            v27 = sub_79C190(v26 + 48);
            if ( v27 )
            {
              while ( (*(_BYTE *)(v27 + 28) & 0x7F) != 0x30 )
              {
                v45 = *(_QWORD *)(v27 + 8);
                v27 = v45 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v45 <= 7 )
                {
                  v27 = 0;
                  break;
                }
              }
            }
            sub_6003F0(a1);
            *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64) = v27;
            v24 = *(_QWORD *)(a1 + 120);
            v28 = *(_QWORD *)(v27 + 8);
            i = *(_QWORD *)((v24 & 0xFFFFFFFFFFFFFFF8LL) + 64);
            v29 = v28 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v28 > 7 )
            {
              while ( (*(_BYTE *)(v29 + 28) & 0x7F) != 0x30 )
              {
                v30 = *(_QWORD *)(v29 + 8);
                v29 = v30 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v30 <= 7 )
                  goto LABEL_65;
              }
              while ( 1 )
              {
                v31 = i;
                i = v29;
                *(_QWORD *)(v31 + 80) = v29;
                v32 = *(_QWORD *)(v29 + 8);
                v29 = v32 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v32 <= 7 )
                  break;
                while ( (*(_BYTE *)(v29 + 28) & 0x7F) != 0x30 )
                {
                  v33 = *(_QWORD *)(v29 + 8);
                  v29 = v33 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v33 <= 7 )
                    goto LABEL_64;
                }
              }
LABEL_64:
              v24 = *(_QWORD *)(a1 + 120);
            }
          }
LABEL_65:
          if ( v24 )
          {
LABEL_66:
            v22 = v24 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v24 <= 7 )
              goto LABEL_112;
            goto LABEL_67;
          }
LABEL_116:
          sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
          v24 = *(_QWORD *)(a1 + 120);
          goto LABEL_66;
        }
        if ( !v21 )
        {
          i = 0;
          goto LABEL_116;
        }
      }
      i = 0;
      goto LABEL_112;
    }
    sub_79C190(v16 + 48);
    v15 = *(_QWORD *)(a1 + 120);
    if ( v15 )
    {
LABEL_33:
      if ( v15 <= 7 )
        goto LABEL_45;
      goto LABEL_34;
    }
LABEL_110:
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v15 = *(_QWORD *)(a1 + 120);
    goto LABEL_33;
  }
LABEL_4:
  if ( (*(_BYTE *)(v2 + 72) & 2) != 0 )
  {
    v6 = sub_7BB160(a1);
    if ( v6 )
    {
      v7 = v6 + 48;
      *(_BYTE *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 72) &= ~2u;
      v8 = sub_79C190(v6 + 48);
      if ( v8 )
      {
        while ( (*(_BYTE *)(v8 + 28) & 0x7F) != 0x30 )
        {
          v9 = *(_QWORD *)(v8 + 8);
          v8 = v9 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v9 <= 7 )
            goto LABEL_27;
        }
        ptr = v74;
        v73 = 0x1000000000LL;
        v10 = sub_79C190(v7);
        if ( v10 )
        {
          while ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x30 )
          {
            v11 = *(_QWORD *)(v10 + 8);
            v10 = v11 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v11 <= 7 )
              goto LABEL_24;
          }
LABEL_17:
          if ( (*(_BYTE *)(v10 + 88) & 8) != 0 && *(char *)(v10 + 28) >= 0 )
          {
            v48 = sub_798D40(v10);
            v49 = sub_6F6DE0(v48, *(_QWORD *)(*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFFFF0LL));
            v50 = (unsigned int)v73;
            v51 = (unsigned int)v73 + 1LL;
            if ( HIDWORD(v73) < v51 )
            {
              sub_25D6060(&ptr, v74, v51, 16);
              v50 = (unsigned int)v73;
            }
            v52 = (__int64 *)((char *)ptr + 16 * v50);
            *v52 = v49;
            v52[1] = v10;
            LODWORD(v73) = v73 + 1;
          }
          else
          {
            v12 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v12 + 64) )
              *(_QWORD *)(i + 80) = v10;
            else
              *(_QWORD *)(v12 + 64) = v10;
            i = v10;
          }
          while ( 1 )
          {
            v13 = *(_QWORD *)(v10 + 8);
            v10 = v13 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v13 <= 7 )
              break;
            if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x30 )
              goto LABEL_17;
          }
        }
LABEL_24:
        v14 = (__m128i *)ptr;
        if ( (_DWORD)v73 )
        {
          v53 = 16LL * (unsigned int)v73;
          v70 = v53;
          v68 = (__m128i *)((char *)ptr + v53);
          v54 = ((v53 >> 4) + 1) >> 1;
          for ( j = v54; ; j = (__int64)(src + 1) >> 1 )
          {
            v71 = (char *)v54;
            v56 = j;
            src = (char *)j;
            v57 = operator new(16 * j, (const std::nothrow_t *)&std::nothrow);
            v54 = (__int64)v71;
            v58 = (__m128i *)v57;
            if ( v57 )
              break;
            if ( src == (_BYTE *)&dword_0 + 1 )
            {
              v56 = 0;
              sub_7B50E0(v14, v68);
              goto LABEL_125;
            }
          }
          v59 = _mm_loadu_si128(v14);
          v60 = v57 + v56 * 16;
          v61 = v57 + 16;
          *(__m128i *)(v61 - 16) = v59;
          if ( v56 != 1 )
          {
            do
            {
              v62 = _mm_loadu_si128((const __m128i *)(v61 - 16));
              v61 += 16;
              *(__m128i *)(v61 - 16) = v62;
            }
            while ( v60 != v61 );
            v59 = _mm_loadu_si128((const __m128i *)(v60 - 16));
          }
          *v14 = v59;
          if ( v71 == src )
          {
            sub_7B5160(v14, &v14[v56], v58);
            sub_7B5160(&v14[v56], v68, v58);
            sub_7B53E0(v14, &v14[v56], v68, (v56 * 16) >> 4, (v70 - v56 * 16) >> 4, v58);
          }
          else
          {
            sub_7B5B00(v14, v68, v58, (__int64)src);
          }
LABEL_125:
          operator delete(v58, v56 * 16);
          v63 = 0;
          v64 = v73;
          v14 = (__m128i *)ptr;
          v65 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !*(_QWORD *)(v65 + 64) )
          {
            *(_QWORD *)(v65 + 64) = *((_QWORD *)ptr + 1);
            i = *(_QWORD *)((*(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL) + 64);
            v63 = 1;
          }
          for ( ; v63 != v64; *(_QWORD *)(v67 + 80) = i )
          {
            v66 = v63;
            v67 = i;
            ++v63;
            i = v14[v66].m128i_u64[1];
          }
        }
        if ( v14 != (__m128i *)v74 )
          free(v14);
      }
    }
LABEL_27:
    v2 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  return *(_QWORD *)(v2 + 64);
}

