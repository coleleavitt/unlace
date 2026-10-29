__m128i *__fastcall sub_1810430(__int64 a1, char *a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  unsigned __int64 *v9; // rax
  char *v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  char *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 *v19; // rax
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 *i; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __m128i *v26; // rbx
  __int64 v28; // r14
  __int64 *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  char **v32; // rax
  _QWORD *v33; // r13
  __int64 v34; // rax
  char *v35; // rdi
  char *v36; // rax
  char *v37; // r14
  __int64 v38; // r14
  __int64 *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  char **v42; // rax
  _QWORD *v43; // r13
  __int64 v44; // rax
  char *v45; // rdi
  char *v46; // rax
  char *v47; // r14
  __int64 *v48; // rax
  __int64 v49; // rcx
  char *v50; // rax
  __int64 v51; // rax
  char *v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // [rsp+8h] [rbp-E0h]
  __int64 v68; // [rsp+8h] [rbp-E0h]
  __int64 v69; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v70[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v72[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v73; // [rsp+98h] [rbp-50h]
  unsigned int v74; // [rsp+A0h] [rbp-48h]
  char v75; // [rsp+A4h] [rbp-44h]

  if ( (a2[29] & 1) == 0 )
    goto LABEL_20;
  v8 = (__int64)a2;
  v9 = sub_B8C3D0((__int64)a2, (__int64)a2, (__int64)a3, a4, a5, a6);
  v11 = *v9;
  v12 = *v9 + 8LL * *((unsigned int *)v9 + 2);
  if ( v11 >= v12 )
  {
    if ( v11 == v12 )
      goto LABEL_8;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 53 )
    {
      v13 = (__int64 *)(v12 + 8);
      do
      {
        v10 = (char *)v13;
        if ( (__int64 *)v11 == v13 )
          goto LABEL_8;
        v14 = *v13++;
      }
      while ( *(_WORD *)(v14 + 36) != 53 );
    }
LABEL_29:
    v28 = *(_QWORD *)v11;
    if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) != 53 )
    {
      v29 = (__int64 *)(v11 + 8);
      do
        v28 = *v29++;
      while ( *(_WORD *)(v28 + 36) != 53 );
    }
    sub_168B9F0((__int64)v70, (__int64 *)(a1 + 8), *(_DWORD *)(v28 + 24), 0x7Fu, 0);
    if ( v73 )
    {
      sub_AE9DF0(v72, v28, 0xEu);
    }
    else if ( v75 )
    {
      v61 = sub_168B9E0(v70);
      v65 = v71;
      if ( v71 )
      {
        v68 = v61;
        v65 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
        v61 = v68;
      }
      v69 = v65;
      v66 = sub_1587BC0(v61, &v69, v61, v62, v63, v64);
      sub_AE9DF0((unsigned __int8 **)(*v66 + 32LL * v74 + 8), v28, 0xEu);
    }
    sub_15F7200(v70);
    sub_168B9F0((__int64)v70, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x16CFu, 0);
    sub_15F7200(v70);
    if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
      goto LABEL_20;
    v32 = (char **)sub_B8C3D0(v8, a1 + 8, v30, v31, a5, a6);
    v10 = *v32;
    v33 = v32;
    a5 = 8LL * *((unsigned int *)v32 + 2);
    a2 = &(*v32)[a5];
    v34 = a5 >> 3;
    v11 = a5 >> 5;
    if ( a5 >> 5 )
    {
      if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 53 )
      {
        v35 = v10;
      }
      else
      {
        v35 = v10 + 8;
        if ( *(_WORD *)(*((_QWORD *)v10 + 1) + 36LL) != 53 )
        {
          v35 = v10 + 16;
          if ( *(_WORD *)(*((_QWORD *)v10 + 2) + 36LL) != 53 )
          {
            v36 = v10;
            v11 = (unsigned __int64)&v10[32 * v11];
            if ( *(_WORD *)(*((_QWORD *)v10 + 3) + 36LL) == 53 )
            {
              v35 = v10 + 24;
            }
            else
            {
              while ( 1 )
              {
                v35 = v36 + 32;
                if ( (char *)v11 == v36 + 32 )
                {
                  v34 = (a2 - v35) >> 3;
                  goto LABEL_48;
                }
                a6 = *((_QWORD *)v36 + 4);
                if ( *(_WORD *)(a6 + 36) == 53 )
                  goto LABEL_82;
                a6 = *((_QWORD *)v36 + 5);
                if ( *(_WORD *)(a6 + 36) == 53 )
                {
                  v35 = v36 + 40;
                  goto LABEL_82;
                }
                a6 = *((_QWORD *)v36 + 6);
                if ( *(_WORD *)(a6 + 36) == 53 )
                {
                  v35 = v36 + 48;
                  goto LABEL_82;
                }
                a6 = *((_QWORD *)v36 + 7);
                if ( *(_WORD *)(a6 + 36) == 53 )
                  break;
                v36 += 32;
              }
              v35 = v36 + 56;
            }
          }
        }
      }
LABEL_82:
      if ( a2 != v35 )
      {
        v50 = v35 + 8;
        if ( a2 == v35 + 8 )
        {
          v37 = v35;
        }
        else
        {
          do
          {
            if ( *(_WORD *)(*(_QWORD *)v50 + 36LL) != 53 )
            {
              *(_QWORD *)v35 = *(_QWORD *)v50;
              v35 += 8;
            }
            v50 += 8;
          }
          while ( a2 != v50 );
          v10 = (char *)*v33;
          a5 += *v33;
          v11 = a5 - (_QWORD)a2;
          v37 = &v35[a5 - (_QWORD)a2];
          if ( a2 != (char *)a5 )
          {
            memmove(v35, a2, v11);
            v10 = (char *)*v33;
          }
        }
        goto LABEL_89;
      }
      goto LABEL_51;
    }
    v35 = v10;
LABEL_48:
    if ( v34 != 2 )
    {
      if ( v34 != 3 )
      {
        if ( v34 != 1 )
        {
LABEL_51:
          v37 = a2;
          goto LABEL_89;
        }
        goto LABEL_127;
      }
      if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) == 53 )
        goto LABEL_82;
      v35 += 8;
    }
    if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) == 53 )
      goto LABEL_82;
    v35 += 8;
LABEL_127:
    v37 = a2;
    if ( *(_WORD *)(*(_QWORD *)v35 + 36LL) != 53 )
    {
LABEL_89:
      v51 = (v37 - v10) >> 3;
      *((_DWORD *)v33 + 2) = v51;
      if ( !(_DWORD)v51 )
        *(_BYTE *)(v8 + 29) &= ~1u;
      goto LABEL_8;
    }
    goto LABEL_82;
  }
  v10 = (char *)v11;
  a2 = *(char **)v11;
  if ( *(_WORD *)(*(_QWORD *)v11 + 36LL) == 53 )
  {
LABEL_28:
    if ( (char *)v12 == v10 )
      goto LABEL_8;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v10 += 8;
    if ( (char *)v12 == v10 )
      break;
    a2 = *(char **)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 36LL) == 53 )
      goto LABEL_28;
  }
LABEL_8:
  if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
    goto LABEL_20;
  v15 = sub_B8C3D0(v8, (__int64)a2, v11, (__int64)v10, a5, a6);
  v17 = *v15;
  v18 = *v15 + 8LL * *((unsigned int *)v15 + 2);
  if ( v17 >= v18 )
  {
    if ( v17 == v18 )
      goto LABEL_13;
    if ( *(_WORD *)(*(_QWORD *)v18 + 36LL) == 257 )
    {
LABEL_53:
      v38 = *(_QWORD *)v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 257 )
      {
        v39 = (__int64 *)(v17 + 8);
        do
          v38 = *v39++;
        while ( *(_WORD *)(v38 + 36) != 257 );
      }
      sub_168B9F0((__int64)v70, (__int64 *)(a1 + 8), *(_DWORD *)(v38 + 24), 0x7Fu, 0);
      if ( v73 )
      {
        sub_AE9DF0(v72, v38, 0xEu);
      }
      else if ( v75 )
      {
        v55 = sub_168B9E0(v70);
        v59 = v71;
        if ( v71 )
        {
          v67 = v55;
          v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v71 + 32LL))(v71);
          v55 = v67;
        }
        v69 = v59;
        v60 = sub_1587BC0(v55, &v69, v55, v56, v57, v58);
        sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v74 + 8), v38, 0xEu);
      }
      sub_15F7200(v70);
      sub_168B9F0((__int64)v70, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x16CFu, 0);
      sub_15F7200(v70);
      if ( (*(_BYTE *)(v8 + 29) & 1) == 0 )
        goto LABEL_20;
      v42 = (char **)sub_B8C3D0(v8, a1 + 8, v40, v41, a5, a6);
      v16 = *v42;
      v43 = v42;
      a5 = 8LL * *((unsigned int *)v42 + 2);
      a2 = &(*v42)[a5];
      v44 = a5 >> 3;
      v17 = a5 >> 5;
      if ( a5 >> 5 )
      {
        if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 257 )
        {
          v45 = v16;
        }
        else
        {
          v45 = v16 + 8;
          if ( *(_WORD *)(*((_QWORD *)v16 + 1) + 36LL) != 257 )
          {
            v45 = v16 + 16;
            if ( *(_WORD *)(*((_QWORD *)v16 + 2) + 36LL) != 257 )
            {
              v46 = v16;
              v17 = (unsigned __int64)&v16[32 * v17];
              if ( *(_WORD *)(*((_QWORD *)v16 + 3) + 36LL) == 257 )
              {
                v45 = v16 + 24;
              }
              else
              {
                while ( 1 )
                {
                  v45 = v46 + 32;
                  if ( (char *)v17 == v46 + 32 )
                  {
                    v44 = (a2 - v45) >> 3;
                    goto LABEL_72;
                  }
                  a6 = *((_QWORD *)v46 + 4);
                  if ( *(_WORD *)(a6 + 36) == 257 )
                    goto LABEL_91;
                  a6 = *((_QWORD *)v46 + 5);
                  if ( *(_WORD *)(a6 + 36) == 257 )
                  {
                    v45 = v46 + 40;
                    goto LABEL_91;
                  }
                  a6 = *((_QWORD *)v46 + 6);
                  if ( *(_WORD *)(a6 + 36) == 257 )
                  {
                    v45 = v46 + 48;
                    goto LABEL_91;
                  }
                  a6 = *((_QWORD *)v46 + 7);
                  if ( *(_WORD *)(a6 + 36) == 257 )
                    break;
                  v46 += 32;
                }
                v45 = v46 + 56;
              }
            }
          }
        }
LABEL_91:
        if ( a2 != v45 )
        {
          v52 = v45 + 8;
          if ( a2 == v45 + 8 )
          {
            v47 = v45;
          }
          else
          {
            do
            {
              if ( *(_WORD *)(*(_QWORD *)v52 + 36LL) != 257 )
              {
                *(_QWORD *)v45 = *(_QWORD *)v52;
                v45 += 8;
              }
              v52 += 8;
            }
            while ( a2 != v52 );
            v16 = (char *)*v43;
            a5 += *v43;
            v17 = a5 - (_QWORD)a2;
            v47 = &v45[a5 - (_QWORD)a2];
            if ( a2 != (char *)a5 )
            {
              memmove(v45, a2, v17);
              v16 = (char *)*v43;
            }
          }
          goto LABEL_98;
        }
        goto LABEL_75;
      }
      v45 = v16;
LABEL_72:
      if ( v44 != 2 )
      {
        if ( v44 != 3 )
        {
          if ( v44 != 1 )
          {
LABEL_75:
            v47 = a2;
            goto LABEL_98;
          }
          goto LABEL_133;
        }
        if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 257 )
          goto LABEL_91;
        v45 += 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) == 257 )
        goto LABEL_91;
      v45 += 8;
LABEL_133:
      v47 = a2;
      if ( *(_WORD *)(*(_QWORD *)v45 + 36LL) != 257 )
      {
LABEL_98:
        v53 = (v47 - v16) >> 3;
        *((_DWORD *)v43 + 2) = v53;
        if ( !(_DWORD)v53 )
          *(_BYTE *)(v8 + 29) &= ~1u;
        goto LABEL_13;
      }
      goto LABEL_91;
    }
    v48 = (__int64 *)(v18 + 8);
    while ( 1 )
    {
      v16 = (char *)v48;
      if ( (__int64 *)v17 == v48 )
        break;
      v49 = *v48++;
      if ( *(_WORD *)(v49 + 36) == 257 )
        goto LABEL_53;
    }
  }
  else
  {
    v16 = (char *)v17;
    while ( 1 )
    {
      a2 = *(char **)v16;
      if ( *(_WORD *)(*(_QWORD *)v16 + 36LL) == 257 )
        break;
      v16 += 8;
      if ( (char *)v18 == v16 )
        goto LABEL_13;
    }
    if ( (char *)v18 != v16 )
      goto LABEL_53;
  }
LABEL_13:
  if ( (*(_BYTE *)(v8 + 29) & 1) != 0 )
  {
    v19 = sub_B8C3D0(v8, (__int64)a2, v17, (__int64)v16, a5, a6);
    v20 = (__int64 *)*v19;
    v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
    if ( *v19 < v21 )
    {
      v54 = *v19;
      while ( *(_WORD *)(*(_QWORD *)v54 + 36LL) != 321 )
      {
        v54 += 8LL;
        if ( v21 == v54 )
          goto LABEL_20;
      }
      if ( v21 == v54 )
        goto LABEL_20;
      return nullptr;
    }
    if ( v20 != (__int64 *)v21 )
    {
      if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 321 )
      {
        for ( i = (__int64 *)(v21 + 8); v20 != i; ++i )
        {
          v23 = *i;
          if ( *(_WORD *)(v23 + 36) == 321 )
            return nullptr;
        }
        goto LABEL_20;
      }
      return nullptr;
    }
  }
LABEL_20:
  v24 = *(_QWORD **)(a1 + 248);
  v25 = v24[294];
  v24[304] += 40LL;
  v26 = (__m128i *)((v25 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v24[295] >= (unsigned __int64)&v26[2].m128i_u64[1] && v25 )
    v24[294] = (char *)v26 + 40;
  else
    v26 = (__m128i *)sub_986170((__int64)(v24 + 294), 40, 40, 3, a5, a6);
  sub_B169C0(v26, *(_QWORD *)(a1 + 248), a3);
  return v26;
}
