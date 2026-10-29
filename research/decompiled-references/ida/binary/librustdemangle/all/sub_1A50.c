void __fastcall sub_1A50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        unsigned __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v10; // rdx
  char *v11; // r15
  unsigned __int64 v12; // rbp
  __int64 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // r14
  int v16; // eax
  unsigned __int64 v17; // r12
  _BYTE *v18; // r10
  unsigned __int64 v19; // r8
  __int64 i; // rax
  char v21; // dl
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r8
  __int64 v26; // rdi
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rsi
  unsigned __int8 v29; // dl
  unsigned __int64 v30; // rcx
  __int16 v31; // r9
  char v32; // dl
  char v33; // al
  char v34; // al
  int v35; // eax
  int v36; // eax
  char v37; // al
  __int64 v38; // rbx
  __int64 v39; // rbx
  char v40; // al
  char *v41; // rdi
  unsigned __int64 v42; // rbp
  char *v43; // rax
  unsigned __int64 v44; // r8
  int v45; // edx
  int v46; // eax
  char v47; // dl
  __int64 v48; // rdi
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rcx
  char v51; // al
  char v52; // al
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  char v55; // dl
  unsigned int v56; // [rsp+0h] [rbp-78h]
  void *v57; // [rsp+0h] [rbp-78h]
  unsigned __int64 v58; // [rsp+8h] [rbp-70h]
  unsigned __int64 v59; // [rsp+8h] [rbp-70h]
  unsigned __int64 v60; // [rsp+10h] [rbp-68h]
  _BYTE *v62; // [rsp+20h] [rbp-58h]
  char *v63; // [rsp+20h] [rbp-58h]
  unsigned __int64 v64; // [rsp+28h] [rbp-50h]
  _BYTE *v65; // [rsp+28h] [rbp-50h]
  char v66; // [rsp+37h] [rbp-41h] BYREF
  unsigned __int64 v67; // [rsp+38h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 40);
  v67 = __readfsqword(0x28u);
  v11 = a7;
  v12 = a8;
  v13 = a9;
  v14 = a10;
  if ( v10 )
    return;
  v15 = a1;
  if ( *(_DWORD *)(a1 + 52) == -1 )
  {
    if ( a8 <= 1 )
    {
      if ( !a8 )
        return;
      v33 = *a7;
      v12 = 1;
    }
    else
    {
      v33 = *a7;
      if ( *(_WORD *)a7 == 9311 )
      {
        v11 = a7 + 1;
        v12 = a8 - 1;
        v33 = 36;
      }
    }
    while ( v33 != 36 )
    {
      while ( 1 )
      {
        if ( v33 != 46 )
        {
          v39 = 0;
          do
          {
            if ( ++v39 >= v12 )
              break;
            v40 = v11[v39];
            if ( v40 == 36 )
              break;
          }
          while ( v40 != 46 );
          if ( v10 )
          {
            v11 += v39;
          }
          else
          {
            v41 = v11;
            v11 += v39;
            (*(void (__fastcall **)(char *, __int64, _QWORD, __int64, unsigned __int64, __int64))(v15 + 24))(
              v41,
              v39,
              *(_QWORD *)(v15 + 16),
              a4,
              v14,
              v13);
          }
          goto LABEL_65;
        }
        if ( v12 == 1 )
          break;
        v33 = v11[1];
        if ( v33 == 46 )
        {
          v11 += 2;
          v39 = 2;
          if ( !v10 )
            (*(void (__fastcall **)(const char *, __int64, _QWORD, __int64, unsigned __int64, __int64))(v15 + 24))(
              "::",
              2,
              *(_QWORD *)(v15 + 16),
              a4,
              v14,
              v13);
          goto LABEL_65;
        }
        if ( !v10 )
          goto LABEL_67;
        ++v11;
        --v12;
        if ( v33 == 36 )
          goto LABEL_36;
      }
      if ( v10 )
        return;
LABEL_67:
      ++v11;
      (*(void (__fastcall **)(char *, __int64, _QWORD, __int64, unsigned __int64, __int64))(v15 + 24))(
        ".",
        1,
        *(_QWORD *)(v15 + 16),
        a4,
        v14,
        v13);
      v39 = 1;
LABEL_65:
      v12 -= v39;
      if ( !v12 )
        return;
      v33 = *v11;
      v10 = *(_QWORD *)(v15 + 40);
    }
LABEL_36:
    if ( v12 <= 2 )
      goto LABEL_70;
    v34 = v11[1];
    if ( v34 == 67 )
    {
      a4 = 2;
      v38 = 1;
      v37 = 44;
    }
    else
    {
      a4 = v12 - 1;
      if ( v12 == 3 )
      {
        v12 = 3;
        goto LABEL_70;
      }
      switch ( v34 )
      {
        case 'S':
          if ( v11[2] != 80 )
            goto LABEL_70;
          v37 = 64;
          break;
        case 'B':
          if ( v11[2] != 80 )
            goto LABEL_70;
          v37 = 42;
          break;
        case 'R':
          v51 = v11[2];
          if ( v51 == 70 )
          {
            v37 = 38;
          }
          else
          {
            if ( v51 != 80 )
              goto LABEL_70;
            v37 = 41;
          }
          break;
        case 'L':
          v52 = v11[2];
          if ( v52 == 84 )
          {
            v37 = 60;
          }
          else
          {
            if ( v52 != 80 )
              goto LABEL_70;
            v37 = 40;
          }
          break;
        case 'G':
          if ( v11[2] != 84 )
            goto LABEL_70;
          v37 = 62;
          break;
        default:
          if ( v34 == 117 && v12 != 4 )
          {
            v35 = v11[2];
            if ( (unsigned __int8)(v11[2] - 48) <= 9u )
            {
              v36 = v35 - 48;
            }
            else
            {
              a4 = (unsigned int)(v11[2] - 97);
              if ( (unsigned __int8)(v11[2] - 97) > 5u )
                goto LABEL_70;
              v36 = v35 - 87;
            }
            a4 = (unsigned int)v11[3];
            if ( (unsigned __int8)(v11[3] - 48) <= 9u )
            {
              a4 = (unsigned int)(a4 - 48);
            }
            else
            {
              if ( (unsigned __int8)(v11[3] - 97) > 5u )
                goto LABEL_70;
              a4 = (unsigned int)(a4 - 87);
            }
            if ( v36 <= 7 )
            {
              v37 = a4 | (16 * v36);
              if ( v37 > 31 )
              {
                a4 = 4;
                v38 = 3;
                goto LABEL_90;
              }
            }
          }
LABEL_70:
          v66 = 0;
          if ( !v10 )
            (*(void (__fastcall **)(char *, unsigned __int64, _QWORD, __int64, unsigned __int64, __int64))(v15 + 24))(
              v11,
              v12,
              *(_QWORD *)(v15 + 16),
              a4,
              v14,
              v13);
          return;
      }
      a4 = 3;
      v38 = 2;
    }
LABEL_90:
    if ( v11[a4] == 36 )
    {
      v39 = v38 + 2;
      v66 = v37;
      v11 += v39;
      if ( !v10 )
        (*(void (__fastcall **)(char *, __int64, _QWORD, __int64, unsigned __int64, __int64))(v15 + 24))(
          &v66,
          1,
          *(_QWORD *)(v15 + 16),
          a4,
          v14,
          v13);
      goto LABEL_65;
    }
    goto LABEL_70;
  }
  v16 = 60;
  v17 = 4;
  if ( !a9 )
  {
    (*(void (__fastcall **)(char *, unsigned __int64, _QWORD, __int64, unsigned __int64, _QWORD))(a1 + 24))(
      a7,
      a8,
      *(_QWORD *)(a1 + 16),
      a4,
      a10,
      0);
    return;
  }
  while ( a8 > v17 )
  {
    v17 *= 2LL;
    if ( !--v16 )
      goto LABEL_88;
  }
  v18 = malloc(4 * v17);
  if ( !v18 )
  {
LABEL_88:
    *(_DWORD *)(a1 + 40) = 1;
    return;
  }
  v19 = a10;
  if ( a8 )
  {
    for ( i = 0; i != a8; ++i )
    {
      v21 = a7[i];
      v18[4 * i] = 0;
      v18[4 * i + 1] = 0;
      v18[4 * i + 2] = 0;
      v18[4 * i + 3] = v21;
    }
    if ( !a10 )
    {
      v53 = 4 * a8;
      goto LABEL_111;
    }
  }
  else if ( !a10 )
  {
    goto LABEL_101;
  }
  v22 = v17;
  v23 = 72;
  v56 = 128;
  v24 = 0;
  v25 = a8;
  v58 = 0;
  v60 = 700;
  while ( 1 )
  {
    v26 = 1;
    v27 = 0;
    v28 = 36 - v23;
    do
    {
      v30 = 1;
      if ( !__CFADD__(v23, v28) )
      {
        v30 = 26;
        if ( v28 <= 0x1A )
          v30 = v28;
        if ( !v30 )
          v30 = 1;
      }
      if ( a10 <= v24 )
        goto LABEL_56;
      ++v24;
      v31 = *(_WORD *)&byte_4220[2 * *(unsigned __int8 *)(a9 + v24 - 1)];
      v32 = *(_BYTE *)(a9 + v24 - 1);
      if ( (v31 & 8) != 0 )
      {
        v29 = v32 - 97;
      }
      else
      {
        if ( (v31 & 4) == 0 )
          goto LABEL_55;
        v29 = v32 - 22;
      }
      v28 += 36LL;
      v27 += v26 * v29;
      v26 *= 36 - v30;
    }
    while ( v29 >= v30 );
    v42 = v25 + 1;
    v56 += (v27 + v58) / (v25 + 1);
    v59 = (v27 + v58) % (v25 + 1);
    if ( v25 + 1 > v22 && ((v22 *= 2LL, (v22 & 0x3FFFFFFFFFFFFFFFLL) != v22) || v42 > v22)
      || (v64 = v25, v62 = v18, v43 = (char *)realloc(v18, 4 * v22), v18 = v62, v44 = v64, !v43) )
    {
LABEL_55:
      *(_DWORD *)(a1 + 40) = 1;
LABEL_56:
      free(v18);
      return;
    }
    v65 = v43;
    v63 = &v43[4 * v59];
    memmove(v63 + 4, v63, 4 * (v44 - v59));
    if ( v56 <= 0xFFFF )
    {
      *v63 = 0;
      if ( v56 <= 0x7FF )
      {
        LOBYTE(v46) = 0;
        v47 = -64;
        goto LABEL_81;
      }
      v45 = -32;
    }
    else
    {
      v45 = -128;
      *v63 = (v56 >> 18) | 0xF0;
    }
    v46 = v45 | (v56 >> 12) & 0x3F;
    v47 = 0x80;
LABEL_81:
    v63[1] = v46;
    v63[2] = v47 | (v56 >> 6) & 0x3F;
    v63[3] = v56 & 0x3F | 0x80;
    if ( a10 == v24 )
      break;
    v48 = 0;
    v58 = v59 + 1;
    v49 = v27 / v60 / v42 + v27 / v60;
    if ( v49 > 0x1C7 )
    {
      do
      {
        v50 = v49;
        v48 += 36;
        v49 /= 0x23u;
      }
      while ( v50 > 0x3E57 );
    }
    v60 = 2;
    v23 = v48 + 36 * v49 / (v49 + 38);
    if ( a10 <= v24 )
      break;
    v25 = v42;
    v18 = v65;
  }
  v15 = a1;
  v18 = v65;
  v53 = 4 * v42;
  if ( 4 * v42 )
  {
LABEL_111:
    v54 = 0;
    v19 = 0;
    do
    {
      v55 = v18[v54];
      if ( v55 )
        v18[v19++] = v55;
      ++v54;
    }
    while ( v53 > v54 );
  }
  else
  {
    v19 = 0;
  }
LABEL_101:
  v57 = v18;
  (*(void (__fastcall **)(_BYTE *, unsigned __int64, _QWORD))(v15 + 24))(v18, v19, *(_QWORD *)(v15 + 16));
  free(v57);
}

