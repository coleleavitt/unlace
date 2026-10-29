/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44C380
// Address: 0x000000000044C380

//----- (000000000044C380) ----------------------------------------------------
__int64 __fastcall sub_44C380(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r13
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_QWORD, _QWORD, __int64, const char *); // rax
  const char *v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int8 *v10; // rsi
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl
  char *v14; // rdx
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rsi
  char *v18; // rsi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r14
  size_t v21; // r15
  size_t v22; // r8
  void *v23; // rsi
  __int64 v24; // rcx
  unsigned __int8 *v25; // rax
  char *v26; // rax
  char *v27; // rsi
  __int64 v28; // r14
  void *v29; // rax
  unsigned __int64 v30; // r14
  unsigned __int8 *v31; // r14
  int v32; // eax
  char v33; // al
  int v34; // r14d
  int v35; // r15d
  int v36; // eax
  int v37; // edx
  _BYTE *v38; // rax
  _BYTE *v39; // rdx
  const char *v40; // rsi
  int v41; // ebp
  char *v42; // rax
  const char *v43; // rbp
  __int64 (__fastcall *v44)(_QWORD, const char *); // rax
  int v45; // eax
  __int64 (__fastcall *v46)(_QWORD, _QWORD, _QWORD); // rax
  int v47; // eax
  const char *v48; // r14
  size_t v49; // rax
  size_t v50; // r15
  size_t v51; // rbp
  __int64 v52; // rdx
  size_t v53; // r14
  const char *v54; // rax
  __int64 v55; // rbp
  const char *v56; // rsi
  void *v57; // rbp
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // eax
  char v61; // dl
  const char *v62; // rax
  const char *v63; // rbp
  void (__fastcall *v64)(_QWORD, const char *); // rax
  const char *v65; // r14
  unsigned __int8 v66; // r15
  unsigned int v67; // eax
  unsigned int v68; // ebp
  int v69; // eax
  __int64 (__fastcall *v70)(_QWORD, const char *, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  int v71; // eax
  char *s1b; // [rsp+0h] [rbp-68h]
  unsigned __int8 s1; // [rsp+0h] [rbp-68h]
  char *s1a; // [rsp+0h] [rbp-68h]
  __int64 v75; // [rsp+8h] [rbp-60h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v78; // [rsp+28h] [rbp-40h]

  v2 = a1 + 312;
  v78 = __readfsqword(0x28u);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_2:
              if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 216))(v2, *(_QWORD *)(a1 + 224)) < 0 )
              {
                if ( *(_QWORD *)(a1 + 272) )
                {
                  sub_448BF0(a1);
                  continue;
                }
                if ( !*(_DWORD *)(a1 + 348) )
                {
                  *a2 = 34;
                  return 0;
                }
                *a2 = 37;
                return 0;
              }
              v4 = (unsigned int)(*(_DWORD *)(a1 + 304) + 1);
              v5 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, const char *))(a1 + 168);
              *(_DWORD *)(a1 + 304) = v4;
              if ( v5 )
              {
                v6 = ::s1;
                if ( *(_QWORD *)(a1 + 320) )
                  v6 = *(const char **)(a1 + 312);
                v7 = v5(*(_QWORD *)(a1 + 208), *(_QWORD *)(a1 + 296), v4, v6);
                if ( v7 )
                  goto LABEL_91;
              }
              v8 = *(_QWORD *)(a1 + 320);
              if ( !v8 )
                continue;
              v9 = v8 - 2;
              if ( v8 - 1 <= 1 )
                break;
LABEL_17:
              if ( v8 )
              {
LABEL_18:
                v14 = *(char **)(a1 + 312);
                if ( v14[v9] != 92 )
                {
LABEL_66:
                  v27 = v14;
                  if ( v14[v9] == 92 && v14[v9 - 1] == 92 )
                  {
                    v30 = v8 - 1;
                    if ( (__int64)(v8 - 1) <= 1 )
                    {
                      if ( v14 )
                      {
LABEL_56:
                        *(_QWORD *)(a1 + 320) = 0;
                        j__free(v27);
                        v8 = *(_QWORD *)(a1 + 320);
                        *(_QWORD *)(a1 + 312) = 0;
                        *(_QWORD *)(a1 + 328) = 0;
                      }
                    }
                    else
                    {
                      if ( *(_QWORD *)(a1 + 328) < v30 )
                      {
                        v42 = (char *)sub_481540(v2, v14, v8 - 1, 1u);
                        *(_QWORD *)(a1 + 312) = v42;
                        v27 = v42;
                      }
                      *(_QWORD *)(a1 + 320) = v30;
                      v27[v8 - 2] = 0;
                      v8 = *(_QWORD *)(a1 + 320);
                    }
                  }
                  break;
                }
                v15 = v9 - 1;
LABEL_20:
                v16 = &v14[v15];
                goto LABEL_21;
              }
              if ( !v9 )
              {
                if ( byte_4C8075 != 92 )
                  goto LABEL_74;
                v14 = *(char **)(a1 + 312);
                v15 = -1;
                goto LABEL_20;
              }
              v24 = v9;
              while ( 1 )
              {
                v14 = *(char **)(a1 + 312);
                if ( v14[v24] != 92 )
                {
                  v9 = v24;
                  goto LABEL_52;
                }
                v16 = &byte_4C8075;
                v9 = 1;
                v8 = v24 - 1;
                if ( v24 != 1 )
                {
                  v15 = v24 - 1;
                  v9 = v24;
                  v8 = 0;
                  goto LABEL_20;
                }
LABEL_21:
                if ( *v16 == 92 )
                  goto LABEL_64;
                v17 = *(_QWORD *)(a1 + 224);
                src = nullptr;
                *(_OWORD *)n = 0;
                if ( (*(__int64 (__fastcall **)(void **, __int64))(a1 + 216))(&src, v17) < 0 )
                  break;
                v8 = *(_QWORD *)(a1 + 320);
                ++*(_DWORD *)(a1 + 304);
                v18 = *(char **)(a1 + 312);
                v19 = v8 - 1;
                if ( (__int64)(v8 - 1) <= 1 )
                {
                  if ( v18 )
                  {
                    *(_QWORD *)(a1 + 320) = 0;
                    j__free(v18);
                    *(_QWORD *)(a1 + 312) = 0;
                    v8 = *(_QWORD *)(a1 + 320);
                    *(_QWORD *)(a1 + 328) = 0;
                  }
                }
                else
                {
                  if ( *(_QWORD *)(a1 + 328) < v19 )
                  {
                    v26 = (char *)sub_481540(v2, v18, v8 - 1, 1u);
                    *(_QWORD *)(a1 + 312) = v26;
                    v18 = v26;
                  }
                  *(_QWORD *)(a1 + 320) = v19;
                  v18[v8 - 2] = 0;
                  v8 = *(_QWORD *)(a1 + 320);
                }
                v20 = n[0];
                if ( n[0] )
                {
                  v21 = n[0] - 1;
                  if ( n[0] != 1 )
                  {
                    v22 = n[0] - 1;
                    if ( v8 )
                    {
                      --v8;
                      v22 = v21 + v8;
                      v20 = n[0] + v8;
                    }
                    v23 = *(void **)(a1 + 312);
                    if ( *(_QWORD *)(a1 + 328) < v20 )
                    {
                      s1b = (char *)v22;
                      v29 = sub_481540(v2, v23, v20, 1u);
                      *(_QWORD *)(a1 + 312) = v29;
                      v22 = (size_t)s1b;
                      v23 = v29;
                    }
                    *(_QWORD *)(a1 + 320) = v20;
                    *((_BYTE *)v23 + v22) = 0;
                    memcpy((void *)(v8 + *(_QWORD *)(a1 + 312)), src, v21);
                    v8 = *(_QWORD *)(a1 + 320);
                  }
                }
                if ( v8 )
                {
                  v9 = v8 - 2;
                  if ( !src )
                    goto LABEL_18;
                  n[0] = 0;
                  j__free(src);
                  v8 = *(_QWORD *)(a1 + 320);
                  goto LABEL_17;
                }
                if ( !src )
                {
                  v14 = *(char **)(a1 + 312);
                  v15 = -2;
                  v9 = -1;
                  if ( *(v14 - 1) == 92 )
                    goto LABEL_20;
                  goto LABEL_52;
                }
                n[0] = 0;
                v9 = -1;
                j__free(src);
                v8 = *(_QWORD *)(a1 + 320);
                v24 = -1;
                if ( v8 )
                  goto LABEL_18;
              }
              if ( src )
              {
                n[0] = 0;
                j__free(src);
              }
              v8 = *(_QWORD *)(a1 + 320);
LABEL_64:
              if ( v8 )
              {
                v14 = *(char **)(a1 + 312);
                goto LABEL_66;
              }
              if ( v9 )
              {
                v14 = *(char **)(a1 + 312);
LABEL_52:
                v27 = v14;
                if ( v14[v9] == 92 )
                {
                  v28 = v9 - 1;
                  if ( v28 )
                    goto LABEL_76;
                  if ( byte_4C8075 == 92 )
                    goto LABEL_55;
                }
                continue;
              }
LABEL_74:
              if ( byte_4C8075 == 92 )
              {
                v27 = *(char **)(a1 + 312);
                v28 = -1;
LABEL_76:
                if ( v27[v28] == 92 )
                {
LABEL_55:
                  if ( v27 )
                    goto LABEL_56;
                }
              }
            }
            if ( v8 <= 1 )
              goto LABEL_2;
            v10 = *(unsigned __int8 **)(a1 + 312);
            *(_QWORD *)(a1 + 8) = v10;
            v11 = *v10;
            if ( (unsigned __int8)(*v10 - 9) <= 4u || v11 == 32 )
            {
              v25 = v10 + 1;
              do
              {
                do
                {
                  *(_QWORD *)(a1 + 8) = v25;
                  v11 = *v25;
                  v10 = v25++;
                }
                while ( (unsigned __int8)(v11 - 9) <= 4u );
              }
              while ( v11 == 32 );
            }
            v12 = (*(_BYTE *)(a1 + 144) ^ 1) & (v11 == 35);
            if ( !v12 )
            {
              if ( *(_DWORD *)(a1 + 340) )
              {
                sub_449AC0(a1, v10);
                goto LABEL_2;
              }
              *a2 = 0;
              return *(_QWORD *)(a1 + 8);
            }
            s1 = v12;
            *(_QWORD *)(a1 + 8) = v10 + 1;
            v31 = sub_449E00(a1);
            sub_449AC0(a1, *(unsigned __int8 **)(a1 + 8));
            if ( strcmp((const char *)v31, "else") )
              break;
            if ( !*(_DWORD *)(a1 + 348) )
              goto LABEL_98;
            if ( !*(_DWORD *)(a1 + 344) )
            {
              v32 = *(_DWORD *)(a1 + 340);
              if ( v32 <= 1 )
                *(_DWORD *)(a1 + 340) = v32 == 0;
            }
          }
          if ( !strcmp((const char *)v31, "elif") )
          {
            if ( !*(_DWORD *)(a1 + 348) )
            {
LABEL_98:
              *a2 = 35;
              return 0;
            }
            if ( *(_DWORD *)(a1 + 344) )
              goto LABEL_2;
            if ( (*(_BYTE *)(a1 + 340) & 1) == 0 )
            {
              *(_DWORD *)(a1 + 340) = 2;
              goto LABEL_2;
            }
LABEL_106:
            v38 = *(_BYTE **)(a1 + 8);
            do
            {
              v39 = v38--;
              *(_QWORD *)(a1 + 8) = v38;
            }
            while ( *v38 );
            *(v39 - 1) = *(_BYTE *)(a1 + 580);
            src = (void *)1;
            n[0] = 0;
            if ( !(unsigned int)sub_4500B0(a1, (__int64)&src) )
            {
              *(_DWORD *)(a1 + 340) = n[0] == 0;
              goto LABEL_2;
            }
            *a2 = sub_479E90();
            return 0;
          }
          if ( *v31 == 105 && v31[1] == 102 && !v31[2] )
          {
            v34 = *(_DWORD *)(a1 + 340);
            ++*(_DWORD *)(a1 + 348);
            if ( v34 )
            {
LABEL_96:
              ++*(_DWORD *)(a1 + 344);
              goto LABEL_2;
            }
            goto LABEL_106;
          }
          if ( strcmp((const char *)v31, "ifdef") )
            break;
          v35 = 1;
LABEL_111:
          v40 = (const char *)sub_449E00(a1);
          if ( !*v40 )
            goto LABEL_131;
          v41 = *(_DWORD *)(a1 + 340);
          ++*(_DWORD *)(a1 + 348);
          if ( v41 )
            goto LABEL_96;
          if ( (sub_44AF90(a1, v40) != nullptr) != v35 )
            *(_DWORD *)(a1 + 340) = 1;
        }
        v35 = strcmp((const char *)v31, "ifndef");
        if ( !v35 )
          goto LABEL_111;
        if ( strcmp((const char *)v31, "endif") )
          break;
        v36 = *(_DWORD *)(a1 + 348);
        if ( !v36 )
        {
          *a2 = 36;
          return 0;
        }
        v37 = *(_DWORD *)(a1 + 344);
        if ( v37 )
          *(_DWORD *)(a1 + 344) = v37 - 1;
        else
          *(_DWORD *)(a1 + 340) = 0;
        *(_DWORD *)(a1 + 348) = v36 - 1;
      }
      if ( *(_DWORD *)(a1 + 340) )
        goto LABEL_2;
      if ( strcmp((const char *)v31, "pragma") )
        break;
      v43 = *(const char **)(a1 + 8);
      if ( strcmp(v43, "once") )
      {
        v44 = *(__int64 (__fastcall **)(_QWORD, const char *))(a1 + 176);
        if ( !v44 )
          goto LABEL_2;
        v45 = v44(*(_QWORD *)(a1 + 208), v43);
        *a2 = v45;
        if ( !v45 )
          goto LABEL_2;
        return 0;
      }
      v48 = *(const char **)(a1 + 296);
      src = nullptr;
      *(_OWORD *)n = 0;
      if ( v48 )
      {
        v49 = strlen(v48);
        v50 = v49 + 1;
        v51 = v49;
        src = sub_481540((__int64)&src, nullptr, v49 + 1, 1u);
        n[0] = v50;
        memmove(src, v48, v51);
        *((_BYTE *)src + v51) = 0;
      }
      v52 = *(_QWORD *)(a1 + 240);
      v53 = n[0];
      v54 = ::s1;
      v55 = v52 + 24LL * *(_QWORD *)(a1 + 248);
      if ( n[0] )
        v54 = (const char *)src;
      s1a = (char *)v54;
      while ( v55 != v52 )
      {
        v56 = ::s1;
        if ( *(_QWORD *)(v52 + 8) )
          v56 = *(const char **)v52;
        v75 = v52;
        if ( !strcmp(s1a, v56) )
          goto LABEL_147;
        v52 = v75 + 24;
      }
      v57 = nullptr;
      if ( v53 )
      {
        v57 = sub_4814F0(v53);
        memcpy(v57, src, v53);
      }
      v58 = *(_QWORD *)(a1 + 248);
      if ( *(_QWORD *)(a1 + 256) < (unsigned __int64)(v58 + 1) )
      {
        *(_QWORD *)(a1 + 240) = sub_481540(a1 + 240, *(void **)(a1 + 240), v58 + 1, 0x18u);
        v58 = *(_QWORD *)(a1 + 248);
      }
      v59 = *(_QWORD *)(a1 + 240) + 24 * v58;
      *(_QWORD *)v59 = v57;
      *(__m128i *)(v59 + 8) = _mm_unpacklo_epi64((__m128i)v53, (__m128i)v53);
      ++*(_QWORD *)(a1 + 248);
LABEL_147:
      if ( src )
      {
        n[0] = 0;
        j__free(src);
      }
    }
    if ( !strcmp((const char *)v31, "warning") )
    {
      v46 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 184);
      if ( !v46 )
        goto LABEL_2;
      v47 = v46(*(_QWORD *)(a1 + 208), *(_QWORD *)(a1 + 8), s1);
      *a2 = v47;
      if ( !v47 )
        goto LABEL_2;
      return 0;
    }
    v60 = strcmp((const char *)v31, "softinclude");
    v61 = s1;
    if ( !v60 )
    {
      v33 = 0;
      goto LABEL_90;
    }
    if ( !strcmp((const char *)v31, "include_next") )
      break;
    if ( !strcmp((const char *)v31, "include") || !strcmp((const char *)v31, "import") )
    {
      v33 = 0;
      v61 = 0;
      goto LABEL_90;
    }
    if ( !strcmp((const char *)v31, "define") )
    {
      v65 = (const char *)sub_449E00(a1);
      if ( !*v65 )
        goto LABEL_131;
      v66 = *(_BYTE *)(a1 + 580) == 40;
      v67 = sub_449F50(a1);
      v68 = v67;
      if ( v67 == -2 )
        goto LABEL_2;
      if ( v67 == -1 )
        goto LABEL_131;
      v69 = sub_44BF80(a1, v65, *(_BYTE **)(a1 + 8), v67, v66, (bool *)&src);
      *a2 = v69;
      if ( !v69 )
      {
        v70 = *(__int64 (__fastcall **)(_QWORD, const char *, _QWORD, _QWORD, _QWORD, _QWORD))(a1 + 192);
        if ( !v70 )
          goto LABEL_2;
        v71 = v70(*(_QWORD *)(a1 + 208), v65, *(_QWORD *)(a1 + 8), v68, v66, (unsigned __int8)src);
        *a2 = v71;
        if ( !v71 )
          goto LABEL_2;
        return 0;
      }
      return 0;
    }
    if ( strcmp((const char *)v31, "undef") )
    {
      if ( !strcmp((const char *)v31, "error") )
      {
        *a2 = 41;
        sub_479F30(0, *(const char **)(a1 + 8));
        return 0;
      }
LABEL_131:
      *a2 = 29;
      return 0;
    }
    v62 = (const char *)sub_449E00(a1);
    v63 = v62;
    if ( !*v62 )
      goto LABEL_131;
    sub_44B7D0(a1, v62);
    v64 = *(void (__fastcall **)(_QWORD, const char *))(a1 + 200);
    if ( v64 )
      v64(*(_QWORD *)(a1 + 208), v63);
  }
  v33 = s1;
  v61 = 0;
LABEL_90:
  v7 = sub_450550(a1, v61, v33);
  if ( !v7 )
    goto LABEL_2;
LABEL_91:
  *a2 = v7;
  return 0;
}
// 4C8075: using guessed type char byte_4C8075;
