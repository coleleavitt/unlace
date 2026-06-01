__int64 __fastcall sub_F5870(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  __int64 eah; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  __int64 fchunk; // r14
  __int64 hidden_range; // r15
  const char *v13; // rsi
  char *v14; // rdi
  __int64 ea_name; // rax
  const char *v16; // rdx
  const char *v17; // rsi
  char *v18; // rdi
  int v19; // eax
  const char *v20; // rdi
  int flags; // eax
  int v22; // r9d
  bool v23; // bp
  char *v24; // rax
  char *v25; // rdi
  size_t v26; // rax
  unsigned __int64 v27; // rdx
  char v28; // r8
  __int64 v29; // r10
  size_t v30; // rbp
  char *v31; // r10
  bool v32; // r8
  __m128i *v33; // rax
  size_t v34; // rax
  char *v35; // rax
  size_t v36; // rdx
  int v37; // edx
  size_t v38; // rdx
  __int64 v39; // r8
  char v40; // r9
  char *v41; // r8
  __m128i *v42; // rax
  char *v43; // rax
  char *v44; // rax
  char *v45; // rax
  char v46; // al
  __int64 v47; // rax
  const char *v48; // [rsp+8h] [rbp-A0h]
  __int64 v49; // [rsp+8h] [rbp-A0h]
  const char *v50; // [rsp+8h] [rbp-A0h]
  int v51; // [rsp+8h] [rbp-A0h]
  int v52; // [rsp+8h] [rbp-A0h]
  char v53; // [rsp+8h] [rbp-A0h]
  int v54; // [rsp+10h] [rbp-98h]
  char *v55; // [rsp+10h] [rbp-98h]
  char *v56; // [rsp+10h] [rbp-98h]
  bool v57; // [rsp+1Fh] [rbp-89h]
  char *s1; // [rsp+20h] [rbp-88h] BYREF
  __int128 v59; // [rsp+28h] [rbp-80h]
  const char *s2; // [rsp+40h] [rbp-68h] BYREF
  char *s2_8[2]; // [rsp+48h] [rbp-60h] BYREF
  int v62; // [rsp+58h] [rbp-50h]
  unsigned __int64 v63; // [rsp+68h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  eah = get_eah();
  v8 = -1;
  if ( *(_DWORD *)(eah + 24) != 8 )
    v8 = 0x100000000LL;
  LODWORD(v9) = 0;
  if ( a3 < v8 )
  {
    v9 = getseg();
    fchunk = get_fchunk();
    hidden_range = get_hidden_range();
    if ( (a4 & 2) != 0 && v9 && (*(_BYTE *)(v9 + 44) & 4) != 0 )
    {
      *(_QWORD *)a2 = v9;
      *(_DWORD *)(a2 + 8) = 1;
      goto LABEL_74;
    }
    if ( (a4 & 4) == 0 )
    {
LABEL_28:
      flags = get_flags_ex();
      if ( (flags & 0x600) == 0x400
        && (flags & 0xF0000000) == 0x60000000
        && ((unsigned __int8)getinf_flag() || (*(_BYTE *)(get_ash() + 328) & 0x10) != 0) )
      {
        *(_QWORD *)a2 = a3;
        LODWORD(v9) = 1;
        *(_DWORD *)(a2 + 8) = 4;
        if ( (get_aflags() & 0x80000) == 0 )
          return (unsigned int)v9;
LABEL_74:
        LODWORD(v9) = 2;
        return (unsigned int)v9;
      }
      s1 = nullptr;
      v22 = a4 & 1;
      v59 = 0;
      if ( v9 )
      {
        if ( (a4 & 1) != 0 && *(_QWORD *)v9 != a3 )
        {
          if ( !fchunk )
          {
            if ( hidden_range && a3 == *(_QWORD *)hidden_range )
            {
              v46 = *(_BYTE *)(hidden_range + 40);
              v25 = nullptr;
              s2 = (const char *)hidden_range;
              v38 = 0;
              LODWORD(s2_8[1]) = 2;
              v30 = 1;
              BYTE4(s2_8[1]) = v46;
              v47 = *(_QWORD *)(hidden_range + 8);
              v62 = 3;
              s2_8[0] = (char *)(v47 - a3);
              v34 = 0;
              goto LABEL_83;
            }
            goto LABEL_110;
          }
          if ( a3 != *(_QWORD *)fchunk )
          {
            if ( hidden_range && a3 == *(_QWORD *)hidden_range )
            {
              v34 = 0;
              v25 = nullptr;
LABEL_62:
              v38 = *((_QWORD *)&v59 + 1);
              v30 = v34 + 1;
LABEL_82:
              v39 = *(_QWORD *)(hidden_range + 8);
              v40 = *(_BYTE *)(hidden_range + 40);
              s2 = (const char *)hidden_range;
              LODWORD(s2_8[1]) = 2;
              v41 = (char *)(v39 - a3);
              BYTE4(s2_8[1]) = v40;
              v62 = 3;
              s2_8[0] = v41;
              if ( &s2 >= (const char **)v25 && &s2 < (const char **)&v25[32 * v38] )
              {
                if ( v38 < v30 )
                {
                  v56 = v41;
                  v53 = v40;
                  s1 = (char *)qvector_reserve();
                  v25 = s1;
                  v41 = v56;
                  v34 = v59;
                  v40 = v53;
                }
                v43 = &v25[32 * v34];
                *(_QWORD *)v43 = hidden_range;
                *((_QWORD *)v43 + 1) = v41;
                *((_DWORD *)v43 + 4) = 2;
                v43[20] = v40;
                *((_DWORD *)v43 + 6) = 3;
                v25 = s1;
                v30 = v59 + 1;
LABEL_86:
                *(_QWORD *)&v59 = v30;
                goto LABEL_43;
              }
LABEL_83:
              if ( v38 < v30 )
              {
                s1 = (char *)qvector_reserve();
                v25 = s1;
                v34 = v59;
                v30 = v59 + 1;
              }
              v42 = (__m128i *)&v25[32 * v34];
              *v42 = _mm_load_si128((const __m128i *)&s2);
              v42[1] = _mm_load_si128((const __m128i *)&s2_8[1]);
              goto LABEL_86;
            }
            goto LABEL_110;
          }
          v27 = a3;
          v26 = 0;
          v25 = nullptr;
          goto LABEL_34;
        }
        v54 = a4 & 1;
        v49 = *(_QWORD *)(v9 + 8) - *(_QWORD *)v9;
        v23 = (*(_BYTE *)(v9 + 44) & 4) == 0;
        s1 = (char *)qvector_reserve();
        v22 = v54;
        v24 = &s1[32 * v59];
        *(_QWORD *)v24 = v9;
        *((_QWORD *)v24 + 1) = v49;
        *((_DWORD *)v24 + 4) = 0;
        v24[20] = v23;
        *((_DWORD *)v24 + 6) = 1;
        v25 = s1;
        v26 = v59 + 1;
        *(_QWORD *)&v59 = v59 + 1;
        if ( !fchunk )
        {
          v30 = v26;
          goto LABEL_40;
        }
        if ( !v54 )
          goto LABEL_33;
        if ( *(_QWORD *)fchunk != a3 )
        {
          v30 = v26;
          if ( !hidden_range )
          {
LABEL_43:
            if ( v30 )
            {
              v35 = v25;
              if ( v30 == 1 )
              {
LABEL_49:
                v37 = *((_DWORD *)v35 + 6);
                *(_DWORD *)(a2 + 8) = v37;
                switch ( v37 )
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
                LODWORD(v9) = 2 - (unsigned __int8)v35[20];
LABEL_54:
                if ( !v25 )
                  return (unsigned int)v9;
                goto LABEL_55;
              }
              qsort(v25, v30, 0x20u, (__compar_fn_t)compar);
              v36 = v30 - 1;
              v25 = s1;
              if ( (__int64)(v30 - 1) > 0 )
              {
                v35 = &s1[32 * v36];
                while ( v35[20] )
                {
                  v35 -= 32;
                  if ( !--v36 )
                  {
                    v35 = s1;
                    goto LABEL_49;
                  }
                }
                goto LABEL_49;
              }
            }
            LODWORD(v9) = 0;
            goto LABEL_54;
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
            if ( *(_QWORD *)hidden_range == a3 )
            {
              v25 = nullptr;
              v34 = 0;
              goto LABEL_62;
            }
LABEL_110:
            LODWORD(v9) = 0;
            return (unsigned int)v9;
          }
          v25 = nullptr;
          v30 = 0;
          goto LABEL_81;
        }
        v25 = nullptr;
        v26 = 0;
        if ( (a4 & 1) == 0 )
        {
LABEL_33:
          v27 = *(_QWORD *)fchunk;
          goto LABEL_34;
        }
        if ( a3 != *(_QWORD *)fchunk )
        {
          v30 = 0;
          if ( !hidden_range )
            return (unsigned int)v9;
          goto LABEL_42;
        }
      }
      v27 = a3;
LABEL_34:
      v28 = *(_BYTE *)(fchunk + 16);
      v29 = *(_QWORD *)(fchunk + 8);
      s2 = (const char *)fchunk;
      v30 = v26 + 1;
      LODWORD(s2_8[1]) = 1;
      v31 = (char *)(v29 - v27);
      v62 = 2;
      s2_8[0] = v31;
      v32 = (v28 & 0x40) == 0;
      BYTE4(s2_8[1]) = v32;
      if ( &s2 >= (const char **)v25 && &s2 < (const char **)&v25[32 * *((_QWORD *)&v59 + 1)] )
      {
        if ( *((_QWORD *)&v59 + 1) < v30 )
        {
          v57 = v32;
          v55 = v31;
          v52 = v22;
          s1 = (char *)qvector_reserve();
          v25 = s1;
          v32 = v57;
          v26 = v59;
          v31 = v55;
          v22 = v52;
        }
        v45 = &v25[32 * v26];
        *(_QWORD *)v45 = fchunk;
        *((_QWORD *)v45 + 1) = v31;
        *((_DWORD *)v45 + 4) = 1;
        v45[20] = v32;
        *((_DWORD *)v45 + 6) = 2;
        v25 = s1;
        v30 = v59 + 1;
      }
      else
      {
        if ( *((_QWORD *)&v59 + 1) < v30 )
        {
          v51 = v22;
          s1 = (char *)qvector_reserve();
          v25 = s1;
          v26 = v59;
          v22 = v51;
          v30 = v59 + 1;
        }
        v33 = (__m128i *)&v25[32 * v26];
        *v33 = _mm_load_si128((const __m128i *)&s2);
        v33[1] = _mm_load_si128((const __m128i *)&s2_8[1]);
      }
      *(_QWORD *)&v59 = v30;
LABEL_40:
      if ( !hidden_range )
        goto LABEL_43;
      if ( v22 )
      {
LABEL_42:
        v34 = v30;
        if ( *(_QWORD *)hidden_range != a3 )
          goto LABEL_43;
        goto LABEL_62;
      }
LABEL_81:
      a3 = *(_QWORD *)hidden_range;
      v38 = *((_QWORD *)&v59 + 1);
      v34 = v30++;
      goto LABEL_82;
    }
    s1 = nullptr;
    s2 = nullptr;
    v59 = 0;
    *(_OWORD *)s2_8 = 0;
    sub_163D70(a1, &s1);
    if ( !v9 )
    {
LABEL_13:
      if ( fchunk )
      {
        ea_name = get_ea_name();
        v16 = s2;
        if ( ea_name > 0 )
        {
          if ( s2_8[0] )
          {
            v17 = s2;
            v18 = (char *)::s1;
            if ( !(_QWORD)v59 )
              goto LABEL_18;
          }
          else
          {
            v17 = ::s1;
            if ( !(_QWORD)v59 )
              goto LABEL_19;
          }
          v18 = s1;
LABEL_18:
          v48 = s2;
          v19 = strcmp(v18, v17);
          v16 = v48;
          if ( !v19 )
          {
LABEL_19:
            *(_QWORD *)a2 = fchunk;
            *(_DWORD *)(a2 + 8) = 2;
            LODWORD(v9) = ((*(_BYTE *)(fchunk + 16) & 0x40) != 0) + 1;
            goto LABEL_65;
          }
        }
      }
      else
      {
        v16 = s2;
      }
      if ( hidden_range )
      {
        if ( (unsigned __int64)v59 > 1 )
        {
          v20 = *(const char **)(hidden_range + 16);
          if ( v20 )
          {
            v50 = v16;
            v44 = strstr(v20, s1);
            v16 = v50;
            if ( v44 )
            {
              *(_QWORD *)a2 = hidden_range;
              *(_DWORD *)(a2 + 8) = 3;
              LODWORD(v9) = 2 - *(unsigned __int8 *)(hidden_range + 40);
LABEL_65:
              if ( v16 )
              {
                s2_8[0] = nullptr;
                qfree();
              }
              if ( !s1 )
                return (unsigned int)v9;
LABEL_55:
              *(_QWORD *)&v59 = 0;
              qfree();
              return (unsigned int)v9;
            }
          }
        }
      }
      if ( v16 )
      {
        s2_8[0] = nullptr;
        qfree();
      }
      if ( s1 )
      {
        *(_QWORD *)&v59 = 0;
        qfree();
      }
      goto LABEL_28;
    }
    get_segm_name();
    if ( s2_8[0] )
    {
      v13 = s2;
      v14 = (char *)::s1;
      if ( !(_QWORD)v59 )
        goto LABEL_12;
    }
    else
    {
      v13 = ::s1;
      if ( !(_QWORD)v59 )
        goto LABEL_64;
    }
    v14 = s1;
LABEL_12:
    if ( strcmp(v14, v13) )
      goto LABEL_13;
LABEL_64:
    *(_QWORD *)a2 = v9;
    v16 = s2;
    *(_DWORD *)(a2 + 8) = 1;
    LODWORD(v9) = ((*(_BYTE *)(v9 + 44) & 4) != 0) + 1;
    goto LABEL_65;
  }
  return (unsigned int)v9;
}

