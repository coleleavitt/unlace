__int64 __fastcall sub_552F80(int a1, unsigned __int64 *a2, unsigned __int64 *a3, int *a4, __int64 a5)
{
  unsigned __int64 *v6; // r10
  unsigned __int64 v7; // rbp
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // r14
  char v12; // r15
  unsigned __int64 v13; // rdi
  int v14; // r12d
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  void *v19; // rax
  __int64 v20; // r11
  unsigned __int64 v21; // rdi
  char v23; // al
  const char *v24; // rsi
  int v25; // eax
  int tinfo_udt_member; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  const char *v29; // rax
  const char *v30; // rdi
  int v31; // eax
  __int64 v32; // r8
  _QWORD *v33; // r12
  __int64 i; // rbx
  __m128i v35; // xmm0
  int v36; // r10d
  int v37; // r8d
  unsigned __int64 v38; // rdi
  int v39; // r8d
  unsigned __int64 v40; // rdi
  int v42; // [rsp+8h] [rbp-98h]
  unsigned __int64 *v43; // [rsp+8h] [rbp-98h]
  int v44; // [rsp+8h] [rbp-98h]
  unsigned __int64 *v45; // [rsp+8h] [rbp-98h]
  int v46; // [rsp+8h] [rbp-98h]
  unsigned __int64 v47; // [rsp+10h] [rbp-90h]
  int v48; // [rsp+10h] [rbp-90h]
  unsigned __int64 *v49; // [rsp+10h] [rbp-90h]
  int v50; // [rsp+10h] [rbp-90h]
  unsigned __int64 *v51; // [rsp+10h] [rbp-90h]
  __int64 v52; // [rsp+18h] [rbp-88h]
  int v53; // [rsp+18h] [rbp-88h]
  __int64 v54; // [rsp+20h] [rbp-80h]
  __int64 *v55; // [rsp+28h] [rbp-78h] BYREF
  void *v56; // [rsp+30h] [rbp-70h]
  __int128 v57; // [rsp+38h] [rbp-68h]
  __int128 v58; // [rsp+48h] [rbp-58h]
  unsigned __int64 v59; // [rsp+60h] [rbp-40h]

  v6 = a2;
  v7 = *a2;
  v59 = __readfsqword(0x28u);
  *a3 = v7;
  v9 = *a4;
  v55 = (__int64 *)a5;
  v57 = 0;
  v10 = v9 & 0xF;
  v58 = 0;
  v56 = nullptr;
  if ( v10 == 7 )
  {
    *a3 = 0;
    v11 = *(_QWORD *)(a5 + 8);
    v15 = *a4;
    v42 = *a4 & 0x1000000;
    if ( v11 )
    {
      v16 = *(_QWORD *)a5;
      v14 = 0;
      v7 = 0;
      v12 = 0;
      goto LABEL_14;
    }
    return (unsigned int)-1;
  }
  if ( (v9 & 8) != 0 )
  {
    v12 = 0;
    if ( v10 == 9 )
    {
      v12 = 1;
      v10 = 8;
    }
  }
  else if ( v10 == 2 )
  {
    v27 = v9 & 0xFFFFFFF0;
    *a4 = v27;
    v12 = *(_BYTE *)(a5 + 51);
    if ( v12 )
    {
      *a4 = v27 | 1;
      v7 = *a3;
      goto LABEL_63;
    }
    v10 = 0;
    v7 = 8 * *a3;
    *a3 = v7;
  }
  else
  {
    if ( v10 == 6 )
    {
      *a3 = -1;
      v11 = *(_QWORD *)(a5 + 8);
      v12 = *(_BYTE *)(a5 + 51);
      v13 = v11;
      if ( !v12 )
      {
        if ( !v11 )
          return (unsigned int)-1;
LABEL_95:
        v16 = *(_QWORD *)a5;
        v14 = 0;
        v7 = 0;
        v15 = *a4;
        v42 = *a4 & 0x1000000;
        goto LABEL_14;
      }
      v12 = 0;
      goto LABEL_12;
    }
    v12 = 0;
    if ( v10 == 1 )
    {
LABEL_63:
      if ( v7 < *(_QWORD *)(a5 + 8) )
        return (unsigned int)v7;
      return (unsigned int)-1;
    }
  }
  v11 = *(_QWORD *)(a5 + 8);
  v13 = v11;
  if ( !v7 )
  {
    v15 = *a4;
    v42 = *a4 & 0x1000000;
    if ( v11 )
    {
      v16 = *(_QWORD *)a5;
      v14 = 0;
      goto LABEL_14;
    }
    goto LABEL_91;
  }
  if ( *(_BYTE *)(a5 + 51) )
  {
LABEL_12:
    v15 = *a4;
    v42 = *a4 & 0x1000000;
    if ( v11 )
    {
      v16 = *(_QWORD *)a5;
      v14 = 0;
      v7 = 0;
      goto LABEL_14;
    }
    if ( (unsigned int)(v10 - 6) <= 1 )
      v13 = 0;
    goto LABEL_91;
  }
  if ( !v11 )
  {
    v14 = -1;
    if ( v12 )
      return (unsigned int)v14;
    return (unsigned int)-1;
  }
  if ( (v10 & 7) != 0 )
    goto LABEL_95;
  v16 = *(_QWORD *)a5;
  v32 = *(_QWORD *)a5 + 144 * v11;
  v33 = *(_QWORD **)a5;
  for ( i = 0x8E38E38E38E38E39LL * ((__int64)(144 * v11) >> 4); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v35 = _mm_loadu_si128((const __m128i *)&v33[18 * (i >> 1)]);
      if ( v7 < _mm_add_epi64(v35, _mm_srli_si128(v35, 8)).m128i_u64[0] )
        break;
      v33 += 18 * (i >> 1) + 18;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_84;
    }
  }
LABEL_84:
  if ( (_QWORD *)v32 == v33 )
  {
    v14 = v11 - 1;
    v7 = (int)v11 - 1;
  }
  else
  {
    for ( ; (_QWORD *)v16 != v33; v33 -= 18 )
    {
      if ( *v33 != v7 )
        break;
    }
    v14 = 954437177 * (((__int64)v33 - v16) >> 4);
    v7 = v14;
  }
  v15 = *a4;
  v42 = *a4 & 0x1000000;
  if ( v7 >= v11 )
  {
LABEL_91:
    if ( v12 )
      return (unsigned int)-(v13 == 0);
    return (unsigned int)-1;
  }
LABEL_14:
  while ( 2 )
  {
    v17 = v16 + 144 * v7;
    switch ( v10 )
    {
      case 0:
      case 8:
        if ( v42 && (*(_BYTE *)(v17 + 133) & 4) != 0 )
          goto LABEL_17;
        v52 = *(_QWORD *)v17;
        v47 = *a3;
        if ( *a3 >= *(_QWORD *)v17 )
        {
          v20 = *(_QWORD *)(v17 + 8);
          if ( !v20 )
          {
            if ( v52 != v47 || v14 + 1 < v11 && ((v15 & 0x20000000) != 0 || (*(_BYTE *)(v17 + 132) & 0x20) != 0) )
            {
              v7 = ++v14;
              goto LABEL_18;
            }
LABEL_28:
            v19 = v56;
            v18 = v11;
            if ( v7 >= v11 )
              v14 = -1;
LABEL_37:
            if ( v12 )
            {
              if ( ++v14 >= v18 )
                v14 = -1;
            }
            goto LABEL_40;
          }
          if ( v47 >= v20 + v52 )
          {
LABEL_17:
            v7 = ++v14;
          }
          else
          {
            if ( *(_BYTE *)(a5 + 51) )
              goto LABEL_28;
            v21 = v14 + 1;
            if ( v21 >= v11 || v47 < *(_QWORD *)(v16 + 144 * v21) )
              goto LABEL_28;
            ++v14;
            v7 = v21;
          }
LABEL_18:
          v18 = v11;
          if ( v7 >= v11 )
            goto LABEL_19;
          continue;
        }
        v19 = v56;
        if ( v10 != 8 )
          v14 = -1;
LABEL_40:
        if ( v19 )
        {
          *(_QWORD *)&v57 = 0;
          qfree(v19);
        }
        return (unsigned int)v14;
      case 3:
        while ( 2 )
        {
          while ( 2 )
          {
            if ( (v15 & 0x8000000) == 0 )
            {
              if ( *(_QWORD *)(v17 + 24) > 1u )
              {
                v24 = haystack;
                if ( v6[3] )
                  v24 = (const char *)v6[2];
                v54 = v16;
                v53 = v15;
                v49 = v6;
                v44 = v10;
                v25 = strcmp(*(const char **)(v17 + 16), v24);
                v10 = v44;
                v6 = v49;
                v15 = v53;
                v16 = v54;
                if ( !v25 )
                  goto LABEL_34;
              }
              else if ( v15 < 0 )
              {
                v50 = v10;
                v45 = v6;
                tinfo_udt_member = find_tinfo_udt_member((int)v6);
                v6 = v45;
                v10 = v50;
                if ( tinfo_udt_member >= 0 )
                {
                  *v45 += *(_QWORD *)v17;
                  v19 = v56;
                  goto LABEL_40;
                }
                goto LABEL_77;
              }
              ++v14;
              v18 = v11;
              v7 = v14;
              if ( v14 < v11 )
              {
                v17 = v16 + 144LL * v14;
                continue;
              }
              goto LABEL_19;
            }
            break;
          }
          v46 = v10;
          v51 = v6;
          v28 = sub_534DB0(&v55, v7, *(_BYTE *)(a5 + 45) & 1);
          v29 = sub_538040((__int64)&v55, v28, v7);
          v30 = haystack;
          if ( v51[3] )
            v30 = (const char *)v51[2];
          v31 = strcmp(v30, v29);
          v10 = v46;
          v6 = v51;
          if ( !v31 )
            goto LABEL_46;
LABEL_77:
          v11 = *(_QWORD *)(a5 + 8);
          v7 = ++v14;
          v18 = v11;
          if ( v14 < v11 )
          {
            v16 = *(_QWORD *)a5;
            v15 = *a4;
            v17 = *(_QWORD *)a5 + 144LL * v14;
            continue;
          }
          break;
        }
LABEL_19:
        v14 = -1;
        goto LABEL_20;
      case 4:
        while ( 2 )
        {
          v48 = v10;
          v43 = v6;
          v23 = compare_tinfo(v6[8], *(_QWORD *)(v17 + 64), (v15 >> 29) & 2);
          v6 = v43;
          v10 = v48;
          if ( v23 )
          {
LABEL_46:
            v18 = *(_QWORD *)(a5 + 8);
            goto LABEL_35;
          }
          ++v14;
          v18 = *(_QWORD *)(a5 + 8);
          v7 = v14;
          if ( v14 < v18 )
          {
            v17 = *(_QWORD *)a5 + 144LL * v14;
            v15 = *a4;
            continue;
          }
          goto LABEL_19;
        }
      case 5:
        while ( 2 )
        {
          if ( *(_QWORD *)(v17 + 8) == *a3 )
          {
LABEL_34:
            v18 = v11;
LABEL_35:
            v19 = v56;
            if ( v7 >= v18 )
              v14 = -1;
            goto LABEL_37;
          }
          ++v14;
          v18 = v11;
          v7 = v14;
          if ( v14 < v11 )
          {
            v17 = v16 + 144LL * v14;
            continue;
          }
          goto LABEL_19;
        }
      case 6:
        v36 = -1;
        while ( 2 )
        {
          v37 = v14 + 1;
          v38 = *(_QWORD *)(v17 + 8);
          if ( v38 < *a3 )
          {
            *a3 = v38;
            v11 = *(_QWORD *)(a5 + 8);
            v18 = v11;
            if ( v37 < v11 )
            {
              v16 = *(_QWORD *)a5;
              v36 = v14;
              v17 = *(_QWORD *)a5 + 144LL * v37;
              goto LABEL_106;
            }
LABEL_20:
            v19 = v56;
            if ( (unsigned int)(v10 - 6) > 1 )
              v14 = -1;
            goto LABEL_37;
          }
          v18 = v11;
          if ( v37 < v11 )
          {
            v17 = v16 + 144LL * v37;
LABEL_106:
            ++v14;
            continue;
          }
          goto LABEL_117;
        }
      case 7:
        v36 = -1;
        while ( 2 )
        {
          v39 = v14 + 1;
          v40 = *(_QWORD *)(v17 + 8);
          if ( *a3 >= v40 )
          {
            v18 = v11;
            if ( v39 >= v11 )
            {
LABEL_117:
              v14 = v36;
              goto LABEL_20;
            }
            v17 = v16 + 144LL * v39;
          }
          else
          {
            *a3 = v40;
            v11 = *(_QWORD *)(a5 + 8);
            v18 = v11;
            if ( v39 >= v11 )
              goto LABEL_20;
            v16 = *(_QWORD *)a5;
            v36 = v14;
            v17 = *(_QWORD *)a5 + 144LL * v39;
          }
          ++v14;
          continue;
        }
      default:
        if ( !under_debugger )
          interr(473);
        BUG();
    }
  }
}
