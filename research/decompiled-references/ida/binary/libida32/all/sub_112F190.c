char *__fastcall sub_112F190(__int64 a1, _DWORD *a2, const char **a3, char **a4)
{
  const char *v5; // r14
  const char *v8; // rbp
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  char v16; // al
  char v17; // al
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r15
  _QWORD *v21; // rdx
  char v22; // al
  char *result; // rax
  size_t v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // rdi
  char v30; // al
  const char *v31; // rdx
  size_t v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  char v35; // al
  const char **v36; // rax
  const char *v37; // r15
  int v38; // eax
  bool v39; // cf
  unsigned int v40; // eax
  size_t v41; // rax
  const char *v42; // rax
  size_t v43; // rax
  _QWORD *v44; // [rsp+8h] [rbp-80h]
  _QWORD *v45; // [rsp+8h] [rbp-80h]
  const char *v46; // [rsp+8h] [rbp-80h]
  __int64 v47; // [rsp+8h] [rbp-80h]
  _QWORD *v48; // [rsp+10h] [rbp-78h]
  _QWORD *v49; // [rsp+18h] [rbp-70h] BYREF
  _QWORD *v50; // [rsp+20h] [rbp-68h]
  __int64 v51; // [rsp+28h] [rbp-60h]
  __m128 v52; // [rsp+30h] [rbp-58h] BYREF
  __int64 v53; // [rsp+40h] [rbp-48h]

  v5 = "mips32r2";
  v8 = "mips64r2";
  if ( a2[10] == 6 && (unsigned int)(a2[12] - 1) <= 0xB )
  {
    v8 = "mips64r6";
    v5 = "mips32r6";
  }
  if ( a2[9] == 40 )
  {
    v8 = "mips64r6";
    v5 = "mips32r6";
  }
  v10 = a2[11];
  if ( v10 == 12 )
  {
    v8 = "mips3";
  }
  else if ( v10 == 3 )
  {
    v8 = "mips3";
    v5 = "mips2";
  }
  v52.m128_u64[0] = 0x913000008D4LL;
  v11 = sub_2193060(a1, &v52, 2);
  v12 = *(_QWORD *)(a1 + 8);
  v53 = 0x913000008D4LL;
  v13 = (_QWORD *)(v12 + 8LL * (unsigned int)v11);
  v49 = (_QWORD *)(v12 + 8 * HIDWORD(v11));
  v44 = v49;
  v52 = _mm_loadh_ps((const double *)&v49);
  if ( v13 != v49 )
  {
    while ( 1 )
    {
      v14 = (_QWORD *)*v13;
      if ( *v13 )
      {
        v15 = (_QWORD *)*v13;
        v49 = v13;
        v50 = v14;
        v16 = sub_2195AD0(v15, 2260);
        v13 = v49;
        if ( v16 )
          break;
        v17 = sub_2195AD0(v50, 2323);
        v13 = v49;
        if ( v17 )
          break;
      }
      v52.m128_u64[0] = (unsigned __int64)++v13;
      if ( v44 == v13 )
        goto LABEL_14;
    }
    v53 = 0x913000008D4LL;
    v49 = v44;
    v52 = _mm_loadh_ps((const double *)&v49);
    if ( v44 != v13 )
    {
      do
      {
        v25 = *v13;
        v26 = *(_QWORD *)(*v13 + 16LL);
        v51 = *v13;
        if ( !v26 )
          v26 = v25;
        v27 = v13 + 1;
        *(_BYTE *)(v26 + 44) |= 1u;
        v52.m128_u64[0] = (unsigned __int64)v27;
        if ( v27 == v44 )
          break;
        while ( 1 )
        {
          v28 = (_QWORD *)*v27;
          if ( *v27 )
          {
            v29 = (_QWORD *)*v27;
            v50 = v27;
            v49 = v28;
            if ( (unsigned __int8)sub_2195AD0(v29, 2260) )
              break;
            v30 = sub_2195AD0(v49, 2323);
            v27 = v50;
            if ( v30 )
              break;
          }
          v52.m128_u64[0] = (unsigned __int64)++v27;
          if ( v44 == v27 )
            goto LABEL_32;
        }
        v13 = (_QWORD *)v52.m128_u64[0];
      }
      while ( v44 != (_QWORD *)v52.m128_u64[0] );
LABEL_32:
      v31 = **(const char ***)(v51 + 48);
      v32 = 0;
      if ( v31 )
      {
        v46 = **(const char ***)(v51 + 48);
        v32 = strlen(v46);
        v31 = v46;
      }
      *a3 = v31;
      a3[1] = (const char *)v32;
    }
  }
LABEL_14:
  v52.m128_i32[0] = 2222;
  v18 = sub_2193060(a1, &v52, 1);
  v19 = *(_QWORD *)(a1 + 8);
  v20 = (_QWORD *)(v19 + 8LL * (unsigned int)v18);
  v21 = (_QWORD *)(v19 + 8 * HIDWORD(v18));
  if ( v20 == v21 )
    goto LABEL_18;
  while ( 1 )
  {
    if ( *v20 )
    {
      v45 = v21;
      v22 = sub_2195AD0(*v20, 2222);
      v21 = v45;
      if ( v22 )
        break;
    }
    if ( v21 == ++v20 )
      goto LABEL_18;
  }
  if ( v45 == v20 )
  {
LABEL_18:
    result = a4[1];
    goto LABEL_19;
  }
  do
  {
    v33 = *v20;
    v34 = *(_QWORD *)(*v20 + 16LL);
    if ( !v34 )
      v34 = *v20;
    ++v20;
    *(_BYTE *)(v34 + 44) |= 1u;
    if ( v20 == v21 )
      break;
    while ( 1 )
    {
      if ( *v20 )
      {
        v48 = v21;
        v47 = v33;
        v35 = sub_2195AD0(*v20, 2222);
        v33 = v47;
        v21 = v48;
        if ( v35 )
          break;
      }
      if ( v21 == ++v20 )
        goto LABEL_44;
    }
  }
  while ( v48 != v20 );
LABEL_44:
  v36 = *(const char ***)(v33 + 48);
  v37 = *v36;
  if ( !*v36 )
  {
    *a4 = nullptr;
    a4[1] = nullptr;
    v24 = (size_t)a3[1];
    if ( v24 )
    {
      if ( (a2[12] & 0xFFFFFFEF) == 3 )
      {
LABEL_66:
        result = (char *)"n32";
        a4[1] = (_BYTE *)(&dword_0 + 3);
        *a4 = (char *)"n32";
        v24 = (size_t)a3[1];
        goto LABEL_49;
      }
LABEL_55:
      if ( (unsigned int)(a2[10] - 6) > 1 )
        goto LABEL_56;
      v42 = *a3;
      switch ( v24 )
      {
        case 5uLL:
          if ( *(_DWORD *)v42 == 1936746861 && v42[4] == 49 || *(_DWORD *)v42 == 1936746861 && v42[4] == 50 )
            goto LABEL_93;
          if ( (*(_DWORD *)v42 != 1936746861 || v42[4] != 51)
            && (*(_DWORD *)v42 != 1936746861 || v42[4] != 52)
            && (*(_DWORD *)v42 != 1936746861 || v42[4] != 53) )
          {
            if ( *(_DWORD *)v42 != 808858992 || v42[4] != 48 )
            {
              if ( *(_DWORD *)v42 == 808728169 && v42[4] == 48 || *(_DWORD *)v42 == 808793705 && v42[4] == 48 )
              {
                result = (char *)"n64";
                a4[1] = (_BYTE *)(&dword_0 + 3);
                *a4 = (char *)"n64";
                goto LABEL_48;
              }
              break;
            }
            goto LABEL_93;
          }
          goto LABEL_106;
        case 6uLL:
          if ( *(_DWORD *)v42 == 1936746861 && *((_WORD *)v42 + 2) == 12851 )
          {
LABEL_93:
            result = "o32";
LABEL_94:
            *a4 = result;
            a4[1] = (_BYTE *)(&dword_0 + 3);
            goto LABEL_48;
          }
          if ( *(_DWORD *)v42 == 1936746861 && *((_WORD *)v42 + 2) == 13366
            || *(_DWORD *)v42 == 1702126447 && *((_WORD *)v42 + 2) == 28271 )
          {
LABEL_106:
            result = (char *)"n64";
            goto LABEL_94;
          }
          break;
        case 8uLL:
          if ( *(_QWORD *)v42 == 0x327232337370696DLL
            || *(_QWORD *)v42 == 0x337232337370696DLL
            || *(_QWORD *)v42 == 0x357232337370696DLL
            || *(_QWORD *)v42 == 0x367232337370696DLL )
          {
            goto LABEL_93;
          }
          if ( *(_QWORD *)v42 == 0x327234367370696DLL
            || *(_QWORD *)v42 == 0x337234367370696DLL
            || *(_QWORD *)v42 == 0x357234367370696DLL
            || *(_QWORD *)v42 == 0x367234367370696DLL )
          {
            goto LABEL_106;
          }
          break;
      }
LABEL_56:
      v38 = a2[8];
      a4[1] = (_BYTE *)(&dword_0 + 3);
      v39 = (unsigned int)(v38 - 16) < 2;
      result = "o32";
      if ( !v39 )
        result = (char *)"n64";
      *a4 = result;
      if ( !a3[1] )
        goto LABEL_95;
      return result;
    }
    goto LABEL_60;
  }
  result = (char *)strlen(*v36);
  *a4 = (char *)v37;
  a4[1] = result;
  if ( result != (_BYTE *)&dword_0 + 2 )
  {
LABEL_19:
    v24 = (size_t)a3[1];
    if ( v24 )
      goto LABEL_64;
    if ( result )
      goto LABEL_21;
LABEL_60:
    v40 = a2[8];
    if ( v40 < 0x10 )
      goto LABEL_130;
    if ( v40 <= 0x11 )
    {
      v43 = strlen(v5);
      *a3 = v5;
      v24 = v43;
      a3[1] = (const char *)v43;
      result = a4[1];
      if ( result )
      {
LABEL_49:
        if ( v24 )
          return result;
LABEL_21:
        result = *a4;
        if ( a4[1] != (_BYTE *)&dword_0 + 3 )
        {
LABEL_22:
          result = nullptr;
          v8 = &byte_22CD811;
LABEL_23:
          *a3 = v8;
          a3[1] = result;
          return result;
        }
LABEL_95:
        if ( *(_WORD *)result == 13167 && result[2] == 50 )
        {
          v8 = v5;
        }
        else if ( (*(_WORD *)result != 13166 || result[2] != 50) && (*(_WORD *)result != 13934 || result[2] != 52) )
        {
          goto LABEL_22;
        }
        result = (char *)strlen(v8);
        goto LABEL_23;
      }
LABEL_65:
      if ( (a2[12] & 0xFFFFFFEF) == 3 )
        goto LABEL_66;
      goto LABEL_55;
    }
    if ( v40 > 0x13 )
LABEL_130:
      abort();
    v41 = strlen(v8);
    *a3 = v8;
    v24 = v41;
    a3[1] = (const char *)v41;
    result = a4[1];
LABEL_64:
    if ( result )
      goto LABEL_49;
    goto LABEL_65;
  }
  if ( *(_WORD *)v37 == 12851 )
  {
    result = "o32";
  }
  else
  {
    if ( *(_WORD *)v37 != 13366 )
    {
LABEL_48:
      v24 = (size_t)a3[1];
      goto LABEL_49;
    }
    result = (char *)"n64";
  }
  *a4 = result;
  a4[1] = (_BYTE *)(&dword_0 + 3);
  if ( !a3[1] )
    goto LABEL_21;
  return result;
}

