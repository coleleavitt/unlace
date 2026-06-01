__int64 __fastcall sub_3FBE20(_QWORD *a1, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v6; // rdi
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v13; // ebp
  __int64 v14; // r15
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  char *v20; // rdi
  int v21; // eax
  __int64 v22; // rax
  const char *v23; // r8
  __int64 v24; // r8
  const char *v25; // r9
  size_t v26; // rdx
  __m128i si128; // xmm0
  char *v28; // rax
  char *v29; // rcx
  size_t v30; // rdx
  int v31; // eax
  char *v32; // rax
  size_t n; // [rsp+0h] [rbp-B8h]
  int v34; // [rsp+8h] [rbp-B0h]
  unsigned int v35; // [rsp+Ch] [rbp-ACh]
  __int64 v36; // [rsp+10h] [rbp-A8h]
  const char *src; // [rsp+18h] [rbp-A0h]
  char *s1; // [rsp+20h] [rbp-98h] BYREF
  __int128 v39; // [rsp+28h] [rbp-90h]
  void *v40; // [rsp+38h] [rbp-80h]
  char *v41; // [rsp+40h] [rbp-78h] BYREF
  __int128 v42; // [rsp+48h] [rbp-70h]
  void *v43; // [rsp+58h] [rbp-60h]
  char *s2; // [rsp+60h] [rbp-58h] BYREF
  __int128 v45; // [rsp+68h] [rbp-50h]
  int v46[2]; // [rsp+78h] [rbp-40h]
  int v47; // [rsp+80h] [rbp-38h]
  int v48; // [rsp+88h] [rbp-30h]
  __int64 v49; // [rsp+90h] [rbp-28h]

  v6 = *a1;
  *(_QWORD *)v46 = __readfsqword(0x28u);
  v8 = sub_615160(v6, 10, 0x20000);
  if ( !(_BYTE)v8 )
    return 0;
  v11 = v8;
  if ( (a3 & 0xF00000) == 0x500000 || (a3 & 0x600) != 0x400 )
    return 0;
  v13 = a3 & 0xF0000000;
  switch ( v13 )
  {
    case 0u:
      if ( (unsigned int)get_item_end(a2, 10, v9, v10) - a2 != 1 )
        return 0;
      if ( (get_aflags(a2) & 0x800) != 0 )
        return 0;
      v14 = sub_4EE820(a1 + 194, a2);
      if ( !v14 )
        return 0;
      v15 = 1;
      goto LABEL_19;
    case 0x10000000u:
      if ( (unsigned int)get_item_end(a2, 10, v9, v10) - a2 != 2 )
        return 0;
      v15 = 2;
      break;
    case 0x20000000u:
      v15 = 3;
      if ( (unsigned int)get_item_end(a2, 10, v9, v10) - a2 != 4 )
        return 0;
      break;
    default:
      return 0;
  }
  if ( (get_aflags(a2) & 0x800) != 0 )
    return 0;
  if ( !a2 )
    return 0;
  v14 = sub_4EE820(a1 + 194, a2);
  if ( !v14 )
    return 0;
  if ( v15 != 2 )
  {
    v15 = 3;
    goto LABEL_19;
  }
  if ( (unsigned int)sub_614FB0(*a1, 5) != 11 )
    goto LABEL_19;
  v39 = 0;
  s1 = nullptr;
  if ( sub_4F9200(a1, &s1, v14, 0) > 2 )
  {
    if ( (_QWORD)v39 )
    {
      LODWORD(n) = (_DWORD)s1;
      v20 = s1;
      if ( !strcmp(s1, ".idata") )
      {
LABEL_26:
        if ( v20 )
        {
          *(_QWORD *)&v39 = 0;
          qfree(v20);
        }
        return 0;
      }
    }
  }
  if ( a4 < a2 )
  {
    v21 = sub_3B9AA0((__int64)a1, a2 + 2, 4);
    if ( (v21 & 0x600) == 0x400 && (v21 & 0xF0000000) == 0x50000000 )
    {
      v22 = *a1;
      if ( a4 >= *(_DWORD *)(*a1 + 1712LL) && a4 < *(_DWORD *)(v22 + 1716) )
        goto LABEL_36;
      *(_DWORD *)(v22 + 1716) = 0;
      v35 = sub_3BCA60(
              a1,
              a4 + 1,
              *(_DWORD *)v14,
              (__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))sub_3948C0,
              nullptr);
      v41 = nullptr;
      v42 = 0;
      if ( v35 == -1 )
        goto LABEL_41;
      if ( sub_6203E0(a1, &v41, v35, 1001) <= 2 )
      {
LABEL_39:
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
LABEL_41:
        if ( a4 >= *(_DWORD *)(*a1 + 1712LL) && a4 < *(_DWORD *)(*a1 + 1716LL) )
        {
LABEL_36:
          v20 = s1;
          goto LABEL_26;
        }
        goto LABEL_30;
      }
      v23 = *(const char **)(a1[4] + 48LL);
      v45 = 0;
      s2 = nullptr;
      if ( !v23
        || (src = v23,
            n = strlen(v23),
            LODWORD(v36) = n + 1,
            s2 = (char *)qvector_reserve(&s2, 0, n + 1, 1),
            *(_QWORD *)&v45 = n + 1,
            memmove(s2, src, n),
            s2[n] = 0,
            v24 = v45 - 1,
            !(_QWORD)v45) )
      {
        v24 = 0;
      }
      v25 = (const char *)(v24 + 18);
      v26 = v24 + 19;
      if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v24 + 19) )
      {
        src = (const char *)(v24 + 18);
        v36 = v24;
        n = v24 + 19;
        v32 = (char *)qvector_reserve(&s2, s2, v26, 1);
        v25 = src;
        v24 = v36;
        s2 = v32;
        v26 = n;
      }
      *(_QWORD *)&v45 = v26;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838F0);
      v25[(_QWORD)s2] = 0;
      v28 = &s2[v24];
      *((_WORD *)v28 + 8) = 8306;
      *(__m128i *)v28 = si128;
      v29 = s2;
      if ( (_QWORD)v45 && (v30 = v45 - 1, (_QWORD)v45 != 1) && s2 )
      {
        if ( (_QWORD)v42 )
        {
          if ( (__int64)v42 - 1 >= v30 )
          {
            n = (size_t)s2;
            v31 = strncmp(v41, s2, v30);
            v29 = (char *)n;
            if ( !v31 )
            {
              *(_DWORD *)(*a1 + 1712LL) = v35;
              *(_DWORD *)(*a1 + 1716LL) = a2;
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(*a1 + 1712LL) = v35;
        *(_DWORD *)(*a1 + 1716LL) = a2;
        if ( !v29 )
          goto LABEL_39;
      }
      *(_QWORD *)&v45 = 0;
      qfree(v29);
      goto LABEL_39;
    }
  }
LABEL_30:
  if ( s1 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(s1);
  }
LABEL_19:
  LODWORD(s2) = 0;
  v16 = sub_3FA960(*a1, a2, *(_BYTE *)(v14 + 23) == 0, *(char *)(v14 + 96), (int *)&s2);
  if ( v16 >= v15 + 1 )
  {
    create_strlit(
      a2,
      v16,
      (int)s2,
      v17,
      v18,
      v19,
      n,
      v34,
      v36,
      (int)src,
      (int)s1,
      v39,
      SDWORD2(v39),
      v40,
      (__int64)v41,
      v42,
      SDWORD2(v42),
      v43,
      (__int64)s2,
      v45,
      SDWORD2(v45),
      v46[0],
      v47,
      v48,
      v49);
    remember_problem(13, a2, 0);
    return v11;
  }
  return 0;
}

