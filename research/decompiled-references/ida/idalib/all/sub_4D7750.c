__int64 __fastcall sub_4D7750(__int64 *a1, __int64 a2, const char *src)
{
  __int64 v4; // rax
  __int64 v7; // rax
  size_t v8; // rax
  __int64 v9; // r13
  size_t v10; // rbx
  int v11; // ebp
  int v12; // ebx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  char *v15; // r8
  char *v16; // rax
  _QWORD *v17; // r15
  _QWORD *v18; // rbp
  char *v19; // r14
  char *v20; // r12
  _QWORD *v21; // rbx
  const char *v22; // rsi
  const char *v23; // rdi
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r13
  __int64 v29; // rdi
  const char *v30; // rsi
  __int64 ea_name; // rax
  char *v32; // r15
  char *v33; // r13
  char *v34; // rdx
  size_t v35; // r14
  char v36; // al
  void *v37; // rdi
  int v38; // eax
  __int64 v39; // rdx
  _QWORD *v40; // r14
  __int64 v41; // rax
  int v42; // eax
  int v43; // [rsp+0h] [rbp-108h]
  char *v44; // [rsp+8h] [rbp-100h]
  char *v45; // [rsp+8h] [rbp-100h]
  __int64 n; // [rsp+10h] [rbp-F8h]
  __int64 v48; // [rsp+30h] [rbp-D8h]
  char *v49; // [rsp+38h] [rbp-D0h]
  int v50; // [rsp+40h] [rbp-C8h]
  void *v51; // [rsp+48h] [rbp-C0h]
  __int64 v52; // [rsp+50h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B8h]
  int v54; // [rsp+58h] [rbp-B0h]
  int v55; // [rsp+60h] [rbp-A8h]
  __int64 v56; // [rsp+68h] [rbp-A0h] BYREF
  char *s2; // [rsp+70h] [rbp-98h] BYREF
  __int64 v58[2]; // [rsp+78h] [rbp-90h]
  int v59; // [rsp+88h] [rbp-80h]
  void *dest; // [rsp+90h] [rbp-78h] BYREF
  __int128 v61; // [rsp+98h] [rbp-70h]
  char *s1; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v64; // [rsp+C8h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  HIBYTE(v54) = 0;
  if ( !*src )
    return HIBYTE(v54);
  v4 = *a1;
  s2 = nullptr;
  v7 = *(_QWORD *)(v4 + 1720);
  *(_OWORD *)v58 = 0;
  v52 = v7;
  if ( src )
  {
    v8 = strlen(src);
    v9 = v8 + 1;
    v10 = v8;
    s2 = (char *)qvector_reserve(&s2, 0, v8 + 1, 1);
    v58[0] = v9;
    memmove(s2, src, v10);
    s2[v10] = 0;
  }
  HIBYTE(v54) = validate_name(&s2, 6, 1);
  if ( !HIBYTE(v54) )
  {
LABEL_6:
    HIBYTE(v54) = 0;
    goto LABEL_7;
  }
  n = v58[0];
  if ( v58[0] )
  {
    v41 = 0x7FFF;
    if ( (unsigned __int64)(v58[0] - 1) <= 0x7FFF )
      v41 = v58[0] - 1;
    n = v41;
  }
  v11 = 0;
  v12 = 10;
  dest = nullptr;
  v61 = 0;
  v48 = v52 + 16;
  while ( 2 )
  {
    v44 = s2;
    netnode_check(&v56, s2, 0, 0);
    if ( v56 == -1 )
      v13 = sub_4D4180(a1, a2, v44, 0);
    else
      v13 = sub_3BDE50(a1, v56);
    if ( v13 != -1 )
    {
      if ( v13 == a2 )
        goto LABEL_86;
      if ( v11 )
      {
        v15 = s2;
        if ( v12 > v11 )
          goto LABEL_32;
        if ( v11 > 9 )
        {
          v12 = 10;
          v38 = 2;
          do
          {
            ++v38;
            v12 *= 10;
          }
          while ( v11 >= v12 );
          v39 = 0x7FFFLL - v38;
          if ( (unsigned __int64)(v38 + n) <= 0x7FFF )
            v39 = n;
          n = v39;
          goto LABEL_32;
        }
        v12 = 10;
        if ( (unsigned __int64)(n + 2) <= 0x7FFF )
          goto LABEL_32;
        n = 32765;
        v28 = 32766;
        v12 = 10;
        goto LABEL_38;
      }
      if ( sub_4CC1E0((__int64)v44) )
        goto LABEL_88;
      v14 = v58[0];
      v15 = s2;
      if ( !*(_QWORD *)(v52 + 24) )
        goto LABEL_52;
      v16 = (char *)haystack;
      v17 = (_QWORD *)(v52 + 16);
      if ( v58[0] )
        v16 = s2;
      v51 = (void *)a2;
      v18 = *(_QWORD **)(v52 + 24);
      v19 = s2;
      LODWORD(v49) = v12;
      v20 = v16;
      while ( 1 )
      {
        v26 = v18[5];
        if ( !v14 )
          break;
        v21 = v18;
        v22 = v19;
        v23 = haystack;
        if ( v26 )
          goto LABEL_22;
LABEL_23:
        v24 = strcmp(v23, v22);
        v25 = (_QWORD *)v18[2];
        v18 = (_QWORD *)v18[3];
        if ( v24 >= 0 )
        {
          v17 = v21;
          v18 = v25;
        }
        if ( !v18 )
        {
          v12 = (int)v49;
          v11 = 0;
          v15 = v19;
          a2 = (__int64)v51;
          goto LABEL_56;
        }
      }
      if ( !v26 )
      {
        while ( 1 )
        {
          v27 = v18[2];
          if ( !v27 )
            break;
          v17 = v18;
          v18 = (_QWORD *)v18[2];
          if ( *(_QWORD *)(v27 + 40) )
            goto LABEL_30;
        }
        v15 = v19;
        v40 = v18;
        v12 = (int)v49;
        v11 = 0;
        a2 = (__int64)v51;
        v17 = v40;
LABEL_56:
        if ( (_QWORD *)v48 == v17 )
          goto LABEL_52;
        if ( !v17[5] )
        {
          v30 = haystack;
          if ( v14 )
          {
LABEL_64:
            v49 = v15;
            if ( strcmp(v15, v30) >= 0 )
              goto LABEL_44;
            v15 = v49;
            v35 = v14 - 1;
            if ( v14 == 1 )
              goto LABEL_54;
          }
          else
          {
LABEL_44:
            v11 = *((_DWORD *)v17 + 14);
            s1 = nullptr;
            v63 = 0;
            ea_name = get_ea_name(&s1, a2, 0, 0);
            v32 = s1;
            if ( ea_name > 0 && !strncmp(s1, v44, n) )
            {
              v33 = &v32[n];
              if ( !((unsigned __int64)v63 | n) )
                v33 = &byte_2CCB1E1;
              v34 = v33 + 1;
              if ( *v33 == 95 )
              {
                while ( 1 )
                {
                  v36 = *v34;
                  if ( !*v34 )
                    break;
                  ++v34;
                  if ( (unsigned __int8)(v36 - 48) > 9u )
                    goto LABEL_49;
                }
                v42 = strtoul(v33 + 1, nullptr, 10);
                v32 = s1;
                if ( (v42 || v33[1] == 48 && !v33[2]) && v11 > v42 )
                {
                  if ( s1 )
                  {
                    *(_QWORD *)&v63 = 0;
                    qfree(s1);
                  }
                  goto LABEL_86;
                }
              }
            }
LABEL_49:
            if ( v32 )
            {
              *(_QWORD *)&v63 = 0;
              qfree(v32);
            }
            v14 = v58[0];
            v15 = s2;
LABEL_52:
            if ( !v14 )
              goto LABEL_54;
            v35 = v14 - 1;
            if ( v14 == 1 )
              goto LABEL_54;
          }
          v37 = dest;
          if ( *((_QWORD *)&v61 + 1) < v14 )
          {
            v45 = v15;
            dest = (void *)qvector_reserve(&dest, dest, v14, 1);
            v15 = v45;
            v37 = dest;
          }
          *(_QWORD *)&v61 = v14;
          memmove(v37, v15, v35);
          *((_BYTE *)dest + v35) = 0;
          v15 = s2;
          goto LABEL_32;
        }
        v30 = (const char *)v17[4];
        if ( v14 )
          goto LABEL_64;
        if ( !*v30 )
          goto LABEL_44;
LABEL_54:
        *(_QWORD *)&v61 = 0;
LABEL_32:
        v28 = n + 1;
        if ( !n )
        {
          if ( v15 )
          {
            v58[0] = 0;
            qfree(v15);
            s2 = nullptr;
            v58[1] = 0;
          }
          goto LABEL_35;
        }
LABEL_38:
        v29 = v58[0];
        if ( v58[0] < v28 )
        {
          if ( v58[1] < v28 )
          {
            s2 = (char *)qvector_reserve(&s2, v15, v28, 1);
            v29 = v58[0];
            v15 = s2;
          }
          memset(&v15[v29], 0, v28 - v29);
          v58[0] = v28;
          v15 = s2;
        }
        else if ( v28 != v58[0] )
        {
          v58[0] = v28;
        }
        v15[n] = 0;
LABEL_35:
        sub_35A910((__int64 *)&s2);
        ++v11;
        continue;
      }
LABEL_30:
      v21 = v18;
LABEL_22:
      v23 = (const char *)v18[4];
      v22 = v20;
      goto LABEL_23;
    }
    break;
  }
  if ( !(unsigned __int8)sub_4D7EC0(
                           (int)a1,
                           a2,
                           v44,
                           v43,
                           (int)v44,
                           n,
                           (int)a1,
                           (int)&s2,
                           &v56,
                           v48,
                           (int)v49,
                           v50,
                           v51,
                           v52,
                           v54,
                           v55,
                           v56,
                           (int)s2,
                           v58[0],
                           v58[1],
                           v59,
                           (__int64)dest) )
  {
LABEL_88:
    if ( dest )
    {
      *(_QWORD *)&v61 = 0;
      qfree(dest);
    }
    goto LABEL_6;
  }
  if ( v11 > 256 )
    *(_DWORD *)sub_4D74E0((_QWORD *)(v53 + 8), (__int64)&dest) = v11;
LABEL_86:
  if ( dest )
  {
    *(_QWORD *)&v61 = 0;
    qfree(dest);
  }
LABEL_7:
  if ( s2 )
  {
    v58[0] = 0;
    qfree(s2);
  }
  return HIBYTE(v54);
}
