__int64 __fastcall sub_4C0690(__int64 *a1, unsigned int a2, const char *src, int a4)
{
  __int64 v5; // rax
  __int64 v8; // rax
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rbx
  int v12; // ebp
  int v13; // ebx
  int v14; // eax
  unsigned __int64 v15; // r13
  char *v16; // r8
  char *v17; // rax
  _QWORD *v18; // r15
  _QWORD *v19; // rbp
  char *v20; // r14
  char *v21; // r12
  _QWORD *v22; // rbx
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r13
  __int64 v30; // rdi
  const char *v31; // rsi
  __int64 ea_name; // rax
  char *v33; // r15
  char *v34; // r13
  char *v35; // rdx
  size_t v36; // r14
  char v37; // al
  void *v38; // rdi
  int v39; // eax
  __int64 v40; // rdx
  _QWORD *v41; // r14
  __int64 v42; // rax
  int v43; // eax
  char *v44; // [rsp+0h] [rbp-F8h]
  char *v45; // [rsp+0h] [rbp-F8h]
  size_t n; // [rsp+8h] [rbp-F0h]
  _QWORD *v48; // [rsp+28h] [rbp-D0h]
  __int64 v49; // [rsp+30h] [rbp-C8h]
  int v50; // [rsp+38h] [rbp-C0h]
  unsigned int v51; // [rsp+3Ch] [rbp-BCh]
  int v52[2]; // [rsp+40h] [rbp-B8h]
  int v53[2]; // [rsp+40h] [rbp-B8h]
  void *v54; // [rsp+48h] [rbp-B0h]
  __int64 v55; // [rsp+50h] [rbp-A8h]
  int v56; // [rsp+58h] [rbp-A0h]
  int v57; // [rsp+5Ch] [rbp-9Ch] BYREF
  char *s2; // [rsp+60h] [rbp-98h] BYREF
  int v59[4]; // [rsp+68h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-80h]
  void *dest; // [rsp+80h] [rbp-78h] BYREF
  int v62[4]; // [rsp+88h] [rbp-70h]
  char *s1; // [rsp+A0h] [rbp-58h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+B8h] [rbp-40h]

  HIDWORD(v54) = a4;
  v65 = __readfsqword(0x28u);
  BYTE3(v54) = 0;
  if ( !*src )
    return BYTE3(v54);
  v5 = *a1;
  s2 = nullptr;
  v8 = *(_QWORD *)(v5 + 1528);
  *(_OWORD *)v59 = 0;
  *(_QWORD *)v52 = v8;
  if ( src )
  {
    v9 = strlen(src);
    v10 = v9 + 1;
    v11 = v9;
    s2 = (char *)qvector_reserve(&s2, 0, v9 + 1, 1);
    *(_QWORD *)v59 = v10;
    memmove(s2, src, v11);
    s2[v11] = 0;
  }
  BYTE3(v54) = validate_name(&s2, 6, 1);
  if ( !BYTE3(v54) )
  {
LABEL_6:
    BYTE3(v54) = 0;
    goto LABEL_7;
  }
  n = *(_QWORD *)v59;
  if ( *(_QWORD *)v59 )
  {
    v42 = 0x7FFF;
    if ( (unsigned __int64)(*(_QWORD *)v59 - 1LL) <= 0x7FFF )
      v42 = *(_QWORD *)v59 - 1LL;
    n = v42;
  }
  v12 = 0;
  v13 = 10;
  dest = nullptr;
  *(_OWORD *)v62 = 0;
  v48 = (_QWORD *)(*(_QWORD *)v52 + 16LL);
  while ( 2 )
  {
    v44 = s2;
    netnode_check(&v57, s2, 0, 0);
    if ( v57 == -1 )
      v14 = sub_4BD120((__int64)a1, a2, v44, 0);
    else
      v14 = sub_3B9110(a1, v57);
    if ( v14 != -1 )
    {
      if ( v14 == a2 )
        goto LABEL_86;
      if ( v12 )
      {
        v16 = s2;
        if ( v13 > v12 )
          goto LABEL_32;
        if ( v12 > 9 )
        {
          v13 = 10;
          v39 = 2;
          do
          {
            ++v39;
            v13 *= 10;
          }
          while ( v12 >= v13 );
          v40 = 0x7FFFLL - v39;
          if ( v39 + n <= 0x7FFF )
            v40 = n;
          n = v40;
          goto LABEL_32;
        }
        v13 = 10;
        if ( n + 2 <= 0x7FFF )
          goto LABEL_32;
        n = 32765;
        v29 = 32766;
        v13 = 10;
        goto LABEL_38;
      }
      if ( sub_4B54B0((__int64)v44) )
        goto LABEL_88;
      v15 = *(_QWORD *)v59;
      v16 = s2;
      if ( !*(_QWORD *)(*(_QWORD *)v52 + 24LL) )
        goto LABEL_52;
      v17 = (char *)haystack;
      v50 = 0;
      v18 = (_QWORD *)(*(_QWORD *)v52 + 16LL);
      if ( *(_QWORD *)v59 )
        v17 = s2;
      v51 = a2;
      v19 = *(_QWORD **)(*(_QWORD *)v52 + 24LL);
      v20 = s2;
      LODWORD(v49) = v13;
      v21 = v17;
      while ( 1 )
      {
        v27 = v19[5];
        if ( !v15 )
          break;
        v22 = v19;
        v23 = v20;
        v24 = haystack;
        if ( v27 )
          goto LABEL_22;
LABEL_23:
        v25 = strcmp(v24, v23);
        v26 = (_QWORD *)v19[2];
        v19 = (_QWORD *)v19[3];
        if ( v25 >= 0 )
        {
          v18 = v22;
          v19 = v26;
        }
        if ( !v19 )
        {
          v13 = v49;
          v12 = 0;
          v16 = v20;
          a2 = v51;
          goto LABEL_56;
        }
      }
      if ( !v27 )
      {
        while ( 1 )
        {
          v28 = v19[2];
          if ( !v28 )
            break;
          v18 = v19;
          v19 = (_QWORD *)v19[2];
          if ( *(_QWORD *)(v28 + 40) )
            goto LABEL_30;
        }
        v16 = v20;
        v41 = v19;
        v13 = v49;
        v12 = 0;
        a2 = v51;
        v18 = v41;
LABEL_56:
        if ( v48 == v18 )
          goto LABEL_52;
        if ( !v18[5] )
        {
          v31 = haystack;
          if ( v15 )
          {
LABEL_64:
            v49 = (__int64)v16;
            if ( strcmp(v16, v31) >= 0 )
              goto LABEL_44;
            v16 = (char *)v49;
            v36 = v15 - 1;
            if ( v15 == 1 )
              goto LABEL_54;
          }
          else
          {
LABEL_44:
            v12 = *((_DWORD *)v18 + 14);
            s1 = nullptr;
            v64 = 0;
            ea_name = get_ea_name(&s1, a2, 0, 0);
            v33 = s1;
            if ( ea_name > 0 && !strncmp(s1, v44, n) )
            {
              v34 = &v33[n];
              if ( !((unsigned __int64)v64 | n) )
                v34 = &byte_2CA12E1;
              v35 = v34 + 1;
              if ( *v34 == 95 )
              {
                while ( 1 )
                {
                  v37 = *v35;
                  if ( !*v35 )
                    break;
                  ++v35;
                  if ( (unsigned __int8)(v37 - 48) > 9u )
                    goto LABEL_49;
                }
                v43 = strtoul(v34 + 1, nullptr, 10);
                v33 = s1;
                if ( (v43 || v34[1] == 48 && !v34[2]) && v12 > v43 )
                {
                  if ( s1 )
                  {
                    *(_QWORD *)&v64 = 0;
                    qfree(s1);
                  }
                  goto LABEL_86;
                }
              }
            }
LABEL_49:
            if ( v33 )
            {
              *(_QWORD *)&v64 = 0;
              qfree(v33);
            }
            v15 = *(_QWORD *)v59;
            v16 = s2;
LABEL_52:
            if ( !v15 )
              goto LABEL_54;
            v36 = v15 - 1;
            if ( v15 == 1 )
              goto LABEL_54;
          }
          v38 = dest;
          if ( *(_QWORD *)&v62[2] < v15 )
          {
            v45 = v16;
            dest = (void *)qvector_reserve(&dest, dest, v15, 1);
            v16 = v45;
            v38 = dest;
          }
          *(_QWORD *)v62 = v15;
          memmove(v38, v16, v36);
          *((_BYTE *)dest + v36) = 0;
          v16 = s2;
          goto LABEL_32;
        }
        v31 = (const char *)v18[4];
        if ( v15 )
          goto LABEL_64;
        if ( !*v31 )
          goto LABEL_44;
LABEL_54:
        *(_QWORD *)v62 = 0;
LABEL_32:
        v29 = n + 1;
        if ( !n )
        {
          if ( v16 )
          {
            *(_QWORD *)v59 = 0;
            qfree(v16);
            s2 = nullptr;
            *(_QWORD *)&v59[2] = 0;
          }
          goto LABEL_35;
        }
LABEL_38:
        v30 = *(_QWORD *)v59;
        if ( *(_QWORD *)v59 < v29 )
        {
          if ( *(_QWORD *)&v59[2] < v29 )
          {
            s2 = (char *)qvector_reserve(&s2, v16, v29, 1);
            v30 = *(_QWORD *)v59;
            v16 = s2;
          }
          memset(&v16[v30], 0, v29 - v30);
          *(_QWORD *)v59 = v29;
          v16 = s2;
        }
        else if ( v29 != *(_QWORD *)v59 )
        {
          *(_QWORD *)v59 = v29;
        }
        v16[n] = 0;
LABEL_35:
        sub_357520((__int64 *)&s2);
        ++v12;
        continue;
      }
LABEL_30:
      v22 = v19;
LABEL_22:
      v24 = (const char *)v19[4];
      v23 = v21;
      goto LABEL_23;
    }
    break;
  }
  if ( !(unsigned __int8)sub_4C0DE0(
                           (int)a1,
                           a2,
                           v44,
                           (int)v44,
                           n,
                           (int)a1,
                           (int)&s2,
                           (int)&v57,
                           v48,
                           v49,
                           v50,
                           v52[0],
                           v54,
                           v55,
                           v56,
                           (int)s2,
                           v59[0],
                           v59[2],
                           v60,
                           (int)dest,
                           v62[0],
                           *(__int64 *)&v62[2]) )
  {
LABEL_88:
    if ( dest )
    {
      *(_QWORD *)v62 = 0;
      qfree(dest);
    }
    goto LABEL_6;
  }
  if ( v12 > 256 )
    *(_DWORD *)sub_4C0420((_QWORD *)(*(_QWORD *)v53 + 8LL), (const char *)&dest) = v12;
LABEL_86:
  if ( dest )
  {
    *(_QWORD *)v62 = 0;
    qfree(dest);
  }
LABEL_7:
  if ( s2 )
  {
    *(_QWORD *)v59 = 0;
    qfree(s2);
  }
  return BYTE3(v54);
}

