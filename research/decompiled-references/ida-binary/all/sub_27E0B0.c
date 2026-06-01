__int64 __fastcall sub_27E0B0(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // rbx
  __int64 eah; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  __int64 fchunk; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 hidden_range; // r15
  const char *p_s1; // rsi
  char *v16; // rdi
  __int64 ea_name; // rax
  const char *v18; // rdx
  char *v19; // rdi
  int v20; // eax
  const char *v21; // rdi
  const char *v22; // rsi
  int flags; // eax
  const char **p_s2; // rcx
  unsigned __int64 v25; // rdx
  int v26; // r9d
  bool v27; // bp
  char *v28; // rax
  char *v29; // rdi
  size_t v30; // rax
  const char *v31; // rdx
  char v32; // r8
  __int64 v33; // r10
  size_t v34; // rbp
  char *v35; // r10
  bool v36; // r8
  __m128i *v37; // rax
  size_t v38; // rax
  char *v39; // rax
  __int64 v40; // r8
  char v41; // r9
  char *v42; // r8
  __m128i *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char *v46; // rax
  char v47; // al
  __int64 v48; // rax
  const char *v49; // [rsp+8h] [rbp-A0h]
  __int64 v50; // [rsp+8h] [rbp-A0h]
  const char *v51; // [rsp+8h] [rbp-A0h]
  int v52; // [rsp+8h] [rbp-A0h]
  int v53; // [rsp+8h] [rbp-A0h]
  char v54; // [rsp+8h] [rbp-A0h]
  int v55; // [rsp+10h] [rbp-98h]
  char *v56; // [rsp+10h] [rbp-98h]
  char *v57; // [rsp+10h] [rbp-98h]
  bool v58; // [rsp+1Fh] [rbp-89h]
  char *s1; // [rsp+20h] [rbp-88h] BYREF
  __int128 v60; // [rsp+28h] [rbp-80h]
  const char *s2; // [rsp+40h] [rbp-68h] BYREF
  char *s2_8[2]; // [rsp+48h] [rbp-60h] BYREF
  int v63; // [rsp+58h] [rbp-50h]
  unsigned __int64 v64; // [rsp+68h] [rbp-40h]

  v5 = a3;
  v64 = __readfsqword(0x28u);
  eah = get_eah(a1, a2, a3);
  v8 = -1;
  if ( *(_DWORD *)(eah + 24) != 8 )
    v8 = 0x100000000LL;
  LODWORD(v9) = 0;
  if ( v5 < v8 )
  {
    v9 = getseg(v5);
    fchunk = get_fchunk(v5);
    hidden_range = get_hidden_range(v5);
    if ( (a4 & 2) != 0 && v9 && (*(_BYTE *)(v9 + 44) & 4) != 0 )
    {
      *(_QWORD *)a2 = v9;
      *(_DWORD *)(a2 + 8) = 1;
      goto LABEL_74;
    }
    if ( (a4 & 4) == 0 )
    {
LABEL_28:
      v22 = &byte_4;
      flags = get_flags_ex(v5, 4);
      v25 = flags & 0x600;
      if ( v25 == 1024 && (flags & 0xF0000000) == 0x60000000 )
      {
        v22 = (_BYTE *)(&dword_0 + 2);
        if ( (unsigned __int8)getinf_flag(2, 2) || (*(_BYTE *)(get_ash() + 328) & 0x10) != 0 )
        {
          *(_QWORD *)a2 = v5;
          LODWORD(v9) = 1;
          *(_DWORD *)(a2 + 8) = 4;
          if ( (get_aflags(v5) & 0x80000) == 0 )
            return (unsigned int)v9;
LABEL_74:
          LODWORD(v9) = 2;
          return (unsigned int)v9;
        }
      }
      s1 = nullptr;
      v26 = a4 & 1;
      v60 = 0;
      if ( v9 )
      {
        if ( (a4 & 1) != 0 && *(_QWORD *)v9 != v5 )
        {
          if ( !fchunk )
          {
            if ( hidden_range && v5 == *(_QWORD *)hidden_range )
            {
              v47 = *(_BYTE *)(hidden_range + 40);
              v29 = nullptr;
              s2 = (const char *)hidden_range;
              v25 = 0;
              LODWORD(s2_8[1]) = 2;
              v34 = 1;
              BYTE4(s2_8[1]) = v47;
              v48 = *(_QWORD *)(hidden_range + 8);
              v63 = 3;
              s2_8[0] = (char *)(v48 - v5);
              v38 = 0;
              goto LABEL_83;
            }
            goto LABEL_110;
          }
          if ( v5 != *(_QWORD *)fchunk )
          {
            if ( hidden_range && v5 == *(_QWORD *)hidden_range )
            {
              v38 = 0;
              v29 = nullptr;
LABEL_62:
              v25 = *((_QWORD *)&v60 + 1);
              v34 = v38 + 1;
LABEL_82:
              v40 = *(_QWORD *)(hidden_range + 8);
              v41 = *(_BYTE *)(hidden_range + 40);
              p_s2 = &s2;
              s2 = (const char *)hidden_range;
              LODWORD(s2_8[1]) = 2;
              v42 = (char *)(v40 - v5);
              BYTE4(s2_8[1]) = v41;
              v63 = 3;
              s2_8[0] = v42;
              if ( &s2 >= (const char **)v29 )
              {
                v22 = &v29[32 * v25];
                if ( &s2 < (const char **)v22 )
                {
                  if ( v25 < v34 )
                  {
                    v22 = v29;
                    v57 = v42;
                    v54 = v41;
                    s1 = (char *)qvector_reserve(&s1, v29, v34, 32);
                    v29 = s1;
                    v42 = v57;
                    v38 = v60;
                    v41 = v54;
                  }
                  v44 = &v29[32 * v38];
                  *(_QWORD *)v44 = hidden_range;
                  *((_QWORD *)v44 + 1) = v42;
                  *((_DWORD *)v44 + 4) = 2;
                  v44[20] = v41;
                  *((_DWORD *)v44 + 6) = 3;
                  v29 = s1;
                  v34 = v60 + 1;
LABEL_86:
                  *(_QWORD *)&v60 = v34;
                  goto LABEL_43;
                }
              }
LABEL_83:
              if ( v25 < v34 )
              {
                v22 = v29;
                s1 = (char *)qvector_reserve(&s1, v29, v34, 32);
                v29 = s1;
                v38 = v60;
                v34 = v60 + 1;
              }
              v43 = (__m128i *)&v29[32 * v38];
              *v43 = _mm_load_si128((const __m128i *)&s2);
              v43[1] = _mm_load_si128((const __m128i *)&s2_8[1]);
              goto LABEL_86;
            }
            goto LABEL_110;
          }
          v31 = (const char *)v5;
          v30 = 0;
          v29 = nullptr;
          goto LABEL_34;
        }
        v22 = nullptr;
        v55 = a4 & 1;
        v50 = *(_QWORD *)(v9 + 8) - *(_QWORD *)v9;
        v27 = (*(_BYTE *)(v9 + 44) & 4) == 0;
        s1 = (char *)qvector_reserve(&s1, 0, 1, 32);
        v26 = v55;
        v25 = 32 * v60;
        v28 = &s1[32 * v60];
        *(_QWORD *)v28 = v9;
        *((_QWORD *)v28 + 1) = v50;
        *((_DWORD *)v28 + 4) = 0;
        v28[20] = v27;
        *((_DWORD *)v28 + 6) = 1;
        v29 = s1;
        v30 = v60 + 1;
        *(_QWORD *)&v60 = v60 + 1;
        if ( !fchunk )
        {
          v34 = v30;
          goto LABEL_40;
        }
        if ( !v55 )
          goto LABEL_33;
        if ( *(_QWORD *)fchunk != v5 )
        {
          v34 = v30;
          if ( !hidden_range )
          {
LABEL_43:
            if ( v34 )
            {
              v39 = v29;
              if ( v34 == 1 )
              {
LABEL_49:
                v25 = *((unsigned int *)v39 + 6);
                *(_DWORD *)(a2 + 8) = v25;
                switch ( (_DWORD)v25 )
                {
                  case 2:
                    *(_QWORD *)a2 = fchunk;
                    break;
                  case 3:
                    *(_QWORD *)a2 = hidden_range;
                    break;
                  case 1:
                    *(_QWORD *)a2 = v9;
                    break;
                }
                LODWORD(v9) = 2 - (unsigned __int8)v39[20];
                goto LABEL_54;
              }
              v22 = (const char *)v34;
              qsort(v29, v34, 0x20u, (__compar_fn_t)compar);
              v25 = v34 - 1;
              v29 = s1;
              if ( (__int64)(v34 - 1) > 0 )
              {
                v39 = &s1[32 * v25];
                while ( v39[20] )
                {
                  v39 -= 32;
                  if ( !--v25 )
                  {
                    v39 = s1;
                    goto LABEL_49;
                  }
                }
                goto LABEL_49;
              }
            }
            LODWORD(v9) = 0;
LABEL_54:
            if ( v29 )
            {
              *(_QWORD *)&v60 = 0;
              qfree(v29, v22, v25, p_s2);
            }
            return (unsigned int)v9;
          }
          goto LABEL_42;
        }
      }
      else
      {
        if ( !fchunk )
        {
          if ( !hidden_range )
            goto LABEL_110;
          if ( (a4 & 1) != 0 )
          {
            if ( *(_QWORD *)hidden_range == v5 )
            {
              v29 = nullptr;
              v38 = 0;
              goto LABEL_62;
            }
LABEL_110:
            LODWORD(v9) = 0;
            return (unsigned int)v9;
          }
          v29 = nullptr;
          v34 = 0;
          goto LABEL_81;
        }
        v29 = nullptr;
        v30 = 0;
        if ( (a4 & 1) == 0 )
        {
LABEL_33:
          v31 = *(const char **)fchunk;
          goto LABEL_34;
        }
        if ( v5 != *(_QWORD *)fchunk )
        {
          v34 = 0;
          if ( !hidden_range )
            return (unsigned int)v9;
          goto LABEL_42;
        }
      }
      v31 = (const char *)v5;
LABEL_34:
      v32 = *(_BYTE *)(fchunk + 16);
      v33 = *(_QWORD *)(fchunk + 8);
      s2 = (const char *)fchunk;
      v34 = v30 + 1;
      LODWORD(s2_8[1]) = 1;
      p_s2 = *((const char ***)&v60 + 1);
      v35 = (char *)(v33 - (_QWORD)v31);
      v25 = (unsigned __int64)&s2;
      v63 = 2;
      s2_8[0] = v35;
      v36 = (v32 & 0x40) == 0;
      BYTE4(s2_8[1]) = v36;
      if ( &s2 >= (const char **)v29 && (v22 = &v29[32 * *((_QWORD *)&v60 + 1)], &s2 < (const char **)v22) )
      {
        if ( *((_QWORD *)&v60 + 1) < v34 )
        {
          v22 = v29;
          v58 = v36;
          v56 = v35;
          v53 = v26;
          s1 = (char *)qvector_reserve(&s1, v29, v34, 32);
          v29 = s1;
          v36 = v58;
          v30 = v60;
          v35 = v56;
          v26 = v53;
        }
        v46 = &v29[32 * v30];
        *(_QWORD *)v46 = fchunk;
        *((_QWORD *)v46 + 1) = v35;
        *((_DWORD *)v46 + 4) = 1;
        v46[20] = v36;
        *((_DWORD *)v46 + 6) = 2;
        v29 = s1;
        v34 = v60 + 1;
      }
      else
      {
        if ( *((_QWORD *)&v60 + 1) < v34 )
        {
          v22 = v29;
          v52 = v26;
          s1 = (char *)qvector_reserve(&s1, v29, v34, 32);
          v29 = s1;
          v30 = v60;
          v26 = v52;
          v34 = v60 + 1;
        }
        v37 = (__m128i *)&v29[32 * v30];
        *v37 = _mm_load_si128((const __m128i *)&s2);
        v37[1] = _mm_load_si128((const __m128i *)&s2_8[1]);
      }
      *(_QWORD *)&v60 = v34;
LABEL_40:
      if ( !hidden_range )
        goto LABEL_43;
      if ( v26 )
      {
LABEL_42:
        v38 = v34;
        if ( *(_QWORD *)hidden_range != v5 )
          goto LABEL_43;
        goto LABEL_62;
      }
LABEL_81:
      v5 = *(_QWORD *)hidden_range;
      v25 = *((_QWORD *)&v60 + 1);
      v38 = v34++;
      goto LABEL_82;
    }
    p_s1 = (const char *)&s1;
    s1 = nullptr;
    s2 = nullptr;
    v60 = 0;
    *(_OWORD *)s2_8 = 0;
    sub_1F3900(a1, (const char *)&s1, v12, v13, 0.0);
    if ( !v9 )
    {
LABEL_13:
      if ( fchunk )
      {
        p_s1 = *(const char **)fchunk;
        ea_name = get_ea_name(&s2, *(_QWORD *)fchunk, 0, 0);
        v18 = s2;
        if ( ea_name > 0 )
        {
          if ( s2_8[0] )
          {
            p_s1 = s2;
            v19 = (char *)&::s1;
            if ( !(_QWORD)v60 )
              goto LABEL_18;
          }
          else
          {
            p_s1 = &::s1;
            if ( !(_QWORD)v60 )
              goto LABEL_19;
          }
          v19 = s1;
LABEL_18:
          v49 = s2;
          v20 = strcmp(v19, p_s1);
          v18 = v49;
          if ( !v20 )
          {
LABEL_19:
            *(_QWORD *)a2 = fchunk;
            *(_DWORD *)(a2 + 8) = 2;
            LODWORD(v9) = ((*(_BYTE *)(fchunk + 16) & 0x40) != 0) + 1;
LABEL_65:
            if ( v18 )
            {
              s2_8[0] = nullptr;
              qfree(v18, p_s1);
            }
            if ( s1 )
            {
              *(_QWORD *)&v60 = 0;
              qfree(s1, p_s1);
            }
            return (unsigned int)v9;
          }
        }
      }
      else
      {
        v18 = s2;
      }
      if ( hidden_range )
      {
        if ( (unsigned __int64)v60 > 1 )
        {
          v21 = *(const char **)(hidden_range + 16);
          if ( v21 )
          {
            p_s1 = s1;
            v51 = v18;
            v45 = strstr(v21, s1);
            v18 = v51;
            if ( v45 )
            {
              *(_QWORD *)a2 = hidden_range;
              *(_DWORD *)(a2 + 8) = 3;
              LODWORD(v9) = 2 - *(unsigned __int8 *)(hidden_range + 40);
              goto LABEL_65;
            }
          }
        }
      }
      if ( v18 )
      {
        s2_8[0] = nullptr;
        qfree(v18, p_s1);
      }
      if ( s1 )
      {
        *(_QWORD *)&v60 = 0;
        qfree(s1, p_s1);
      }
      goto LABEL_28;
    }
    get_segm_name(&s2, v9, 1);
    if ( s2_8[0] )
    {
      p_s1 = s2;
      v16 = (char *)&::s1;
      if ( !(_QWORD)v60 )
        goto LABEL_12;
    }
    else
    {
      p_s1 = &::s1;
      if ( !(_QWORD)v60 )
        goto LABEL_64;
    }
    v16 = s1;
LABEL_12:
    if ( strcmp(v16, p_s1) )
      goto LABEL_13;
LABEL_64:
    *(_QWORD *)a2 = v9;
    v18 = s2;
    *(_DWORD *)(a2 + 8) = 1;
    LODWORD(v9) = ((*(_BYTE *)(v9 + 44) & 4) != 0) + 1;
    goto LABEL_65;
  }
  return (unsigned int)v9;
}
