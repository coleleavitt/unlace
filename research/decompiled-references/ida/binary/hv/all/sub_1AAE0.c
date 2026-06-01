__int64 __fastcall sub_1AAE0(__int64 *a1, char *a2, int a3, __int64 a4)
{
  void *v7; // rdi
  void *v9; // rdi
  size_t v10; // rax
  size_t v11; // r12
  size_t v12; // rax
  unsigned __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  size_t v16; // r12
  int v17; // eax
  __int64 v18; // rdx
  __int64 result; // rax
  const char *v20; // rdx
  void *v21; // rax
  __m128i v22; // xmm0
  void *v23; // rdi
  void *v24; // rdi
  size_t v25; // r14
  void *v26; // rdi
  size_t v27; // r14
  const char *v28; // rdx
  __int64 v29; // rdx
  int v30; // edx
  __int64 v31; // r12
  __int64 v32; // r12
  unsigned __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rcx
  int v36; // edx
  size_t v37; // rax
  size_t v38; // r12
  int v39; // edx
  int v40; // ecx
  int v41; // r8d
  int v42; // r9d
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm0
  void *v46; // rdi
  void *v47; // r14
  __int64 v48; // rbp
  __m128i v49; // xmm0
  void *v50; // rdi
  int v51; // edx
  size_t v52; // r14
  __m128i v53; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v55; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v56; // [rsp+28h] [rbp-30h]

  v7 = (void *)*a1;
  v56 = __readfsqword(0x28u);
  if ( v7 )
  {
    a1[1] = 0;
    j__free(v7);
    *a1 = 0;
    a1[2] = 0;
  }
  v9 = (void *)a1[3];
  if ( v9 )
  {
    a1[4] = 0;
    j__free(v9);
    a1[3] = 0;
    a1[5] = 0;
  }
  a1[6] = 0;
  *(__int64 *)((char *)a1 + 60) = 4294967292LL;
  *((_DWORD *)a1 + 14) = a3;
  if ( !a2 )
    return 0;
  v10 = strlen(a2);
  v11 = v10;
  if ( v10 )
  {
    v26 = (void *)a1[3];
    v27 = v10 + 1;
    if ( a1[5] < v10 + 1 )
    {
      v43 = sub_96080(a1 + 3, a1[3], v27, 1);
      a1[3] = v43;
      v26 = (void *)v43;
    }
    a1[4] = v27;
    memmove(v26, a2, v11);
    *(_BYTE *)(a1[3] + v11) = 0;
  }
  else
  {
    a1[4] = 0;
  }
  v12 = strlen(a2);
  v16 = v12;
  if ( !v12 )
  {
    v17 = *((_DWORD *)a1 + 14);
    a1[1] = 0;
    v18 = (unsigned int)(v17 - 5);
    switch ( v17 )
    {
      case 5:
        goto LABEL_48;
      case 6:
        goto LABEL_47;
      case 7:
        goto LABEL_44;
      case 9:
      case 10:
        goto LABEL_13;
      case 22:
        goto LABEL_36;
      default:
        if ( (v17 & 0xFFFFFFFD) != 9 )
          return 0;
        if ( a4 )
          goto LABEL_28;
        goto LABEL_61;
    }
  }
  v24 = (void *)*a1;
  v25 = v12 + 1;
  if ( a1[2] < v12 + 1 )
  {
    v44 = sub_96080(a1, *a1, v12 + 1, 1);
    *a1 = v44;
    v24 = (void *)v44;
  }
  a1[1] = v25;
  memmove(v24, a2, v16);
  *(_BYTE *)(*a1 + v16) = 0;
  v17 = *((_DWORD *)a1 + 14);
  v18 = (unsigned int)(v17 - 5);
  switch ( v17 )
  {
    case 5:
LABEL_48:
      v30 = 0;
      goto LABEL_45;
    case 6:
LABEL_47:
      v30 = 1;
      goto LABEL_45;
    case 7:
LABEL_44:
      v30 = 2;
LABEL_45:
      *((_DWORD *)a1 + 16) = v30;
      result = sub_18030((_DWORD *)a1 + 15, a2, v30);
      if ( !(_DWORD)result )
        goto LABEL_46;
      return result;
    case 9:
    case 10:
      v31 = a1[1];
      if ( !v31 )
        goto LABEL_13;
      v32 = v31 - 1;
      if ( !v32 )
        goto LABEL_13;
      v33 = 0xFFEFFFFFFFF7FFFELL;
      v34 = *a1;
      break;
    case 22:
LABEL_36:
      ptr = nullptr;
      if ( (unsigned __int8)sub_94030(&ptr, a2, v18) && ptr )
      {
        a1[6] = (__int64)ptr;
        v17 = *((_DWORD *)a1 + 14);
        goto LABEL_39;
      }
      sub_8F890(0, a2);
      return 57;
    default:
      if ( (v17 & 0xFFFFFFFD) != 9 )
        return 0;
      if ( !a4 )
        goto LABEL_61;
      v29 = a1[1];
      goto LABEL_33;
  }
  while ( 1 )
  {
    v35 = v32--;
    v36 = *(unsigned __int8 *)(v34 + v32);
    if ( (_BYTE)v36 == 35 || (_BYTE)v36 == 64 )
    {
      v51 = ((_BYTE)v36 == 35) + 1;
      *((_DWORD *)a1 + 16) = v51;
      result = sub_18030((_DWORD *)a1 + 15, (char *)(v35 + v34), v51);
      if ( (_DWORD)result )
        return result;
      sub_1AA40(a1, v32);
      v17 = *((_DWORD *)a1 + 14);
LABEL_57:
      if ( *a2 == 64 && v17 == 9 )
        goto LABEL_59;
      goto LABEL_39;
    }
    v13 = (unsigned int)(v36 - 42);
    if ( (unsigned __int8)(v36 - 42) > 0x34u )
      break;
    if ( _bittest64((const __int64 *)&v33, v13) && (unsigned __int8)(v36 - 48) > 9u || !v32 )
      goto LABEL_57;
  }
LABEL_13:
  if ( *a2 == 64 )
  {
    if ( v17 != 9 )
      goto LABEL_15;
LABEL_59:
    v37 = strlen(a2);
    v38 = v37;
    if ( !v37 )
    {
      a1[1] = 0;
      if ( !a4 )
        goto LABEL_61;
LABEL_43:
      v20 = haystack;
LABEL_18:
      sub_652F0(&ptr, a4, v20);
      v21 = ptr;
      v22 = _mm_loadu_si128(&v55);
      goto LABEL_19;
    }
    v52 = v37 + 1;
    if ( a1[2] < v37 + 1 )
      *a1 = sub_96080(a1, *a1, v37 + 1, 1);
    a1[1] = v52;
    memmove((void *)*a1, a2, v38);
    *(_BYTE *)(*a1 + v38) = 0;
LABEL_46:
    v17 = *((_DWORD *)a1 + 14);
  }
LABEL_39:
  if ( (v17 & 0xFFFFFFFD) != 9 )
  {
    if ( v17 != 10 )
      return 0;
LABEL_15:
    if ( (unsigned __int64)a1[1] <= 1 )
      return 0;
    if ( !a4 )
      goto LABEL_61;
LABEL_17:
    v20 = (const char *)*a1;
    goto LABEL_18;
  }
  if ( !a4 )
  {
LABEL_61:
    sub_8F890(0, 0);
    sub_708D0(
      (unsigned int)"please specify a valid site with -s or with the VAULT_SITE envvar\n",
      0,
      v39,
      v40,
      v41,
      v42);
    return 12;
  }
  v29 = a1[1];
  if ( v17 != 11 )
  {
    if ( !v29 )
      goto LABEL_43;
    goto LABEL_17;
  }
LABEL_33:
  if ( !v29 )
  {
LABEL_28:
    if ( byte_165961 != 47 || *(_BYTE *)(*a1 + 1) != 47 )
      goto LABEL_29;
    v28 = haystack;
LABEL_66:
    sub_64590((unsigned int)&ptr, a4 + 32, (_DWORD)v28, v13, v14, v15, v53.m128i_i64[0], v53.m128i_i32[2], (__int64)ptr);
    v45 = _mm_loadu_si128(&v55);
    v46 = (void *)*a1;
    v47 = ptr;
    v55 = 0;
    ptr = nullptr;
    v48 = v45.m128i_i64[0];
    if ( v46 )
    {
      a1[1] = 0;
      v53 = v45;
      j__free(v46);
      v49 = _mm_load_si128(&v53);
      v50 = ptr;
      *a1 = (__int64)v47;
      *(__m128i *)(a1 + 1) = v49;
      if ( v50 )
      {
        v55.m128i_i64[0] = 0;
        j__free(v50);
        v48 = a1[1];
      }
    }
    else
    {
      *a1 = (__int64)v47;
      *(__m128i *)(a1 + 1) = v45;
    }
    if ( v48 )
    {
      v28 = (const char *)*a1;
      goto LABEL_35;
    }
LABEL_29:
    v28 = haystack;
    goto LABEL_35;
  }
  v28 = (const char *)*a1;
  if ( *(_BYTE *)*a1 == 47 && v28[1] == 47 )
    goto LABEL_66;
LABEL_35:
  sub_64CF0(&ptr, a4, v28);
  v21 = ptr;
  v22 = _mm_loadu_si128(&v55);
LABEL_19:
  v23 = (void *)*a1;
  *(__m128i *)(a1 + 1) = v22;
  *a1 = (__int64)v21;
  if ( v23 )
    j__free(v23);
  return 0;
}

