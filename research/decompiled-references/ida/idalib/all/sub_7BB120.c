__int64 __fastcall sub_7BB120(__int64 a1, __int8 *a2, __int64 *a3, __int64 *a4, char *a5, char a6)
{
  __int64 v10; // rsi
  const char *v12; // rdi
  int v13; // edx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // r10
  size_t v18; // r8
  const char *v19; // rcx
  __int64 v20; // rdi
  char *v21; // rax
  char *v22; // r12
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // edx
  const void *v26; // rsi
  void *v27; // r14
  __int16 v28; // r15
  void *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r15
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  char *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // r14
  char *v45; // r13
  const char *src; // [rsp+8h] [rbp-E8h]
  unsigned __int16 *v47; // [rsp+10h] [rbp-E0h]
  const char *v48; // [rsp+18h] [rbp-D8h]
  size_t v49; // [rsp+18h] [rbp-D8h]
  char **na; // [rsp+20h] [rbp-D0h]
  size_t n; // [rsp+20h] [rbp-D0h]
  size_t nb; // [rsp+20h] [rbp-D0h]
  unsigned __int8 s2a; // [rsp+28h] [rbp-C8h]
  void *v55; // [rsp+30h] [rbp-C0h] BYREF
  __int128 v56; // [rsp+38h] [rbp-B8h]
  void *dest; // [rsp+50h] [rbp-A0h] BYREF
  __int128 v58; // [rsp+58h] [rbp-98h]
  char *s1; // [rsp+70h] [rbp-80h] BYREF
  __int128 v60; // [rsp+78h] [rbp-78h]
  void *ptr; // [rsp+90h] [rbp-60h] BYREF
  __int128 v62; // [rsp+98h] [rbp-58h]
  char v63[9]; // [rsp+AFh] [rbp-41h] BYREF
  unsigned __int64 v64; // [rsp+B8h] [rbp-38h]

  v10 = *a3;
  v64 = __readfsqword(0x28u);
  v56 = 0;
  v55 = nullptr;
  if ( sub_7B30F0((__int64 *)a1, v10, (__int64 *)&v55) == -1 )
  {
    v32 = a4[1];
    v33 = *a4;
    if ( a4[2] < (unsigned __int64)(v32 + 1) )
    {
      v36 = qvector_reserve(a4, v33, v32 + 1, 24);
      *a4 = v36;
      v32 = a4[1];
      v33 = v36;
    }
    v34 = v33 + 24 * v32;
    *(_QWORD *)v34 = 0;
    *(_OWORD *)(v34 + 8) = 0;
    ++a4[1];
    node2ea(*a3);
    sub_35A790((char **)v34);
    if ( !a6 )
      goto LABEL_24;
    goto LABEL_15;
  }
  v12 = haystack;
  if ( (_QWORD)v56 )
    v12 = (const char *)v55;
  v13 = strcmp(v12, a5);
  result = 1;
  if ( v13 )
  {
    v15 = a4[1];
    v16 = *a4;
    if ( a4[2] < (unsigned __int64)(v15 + 1) )
    {
      v35 = qvector_reserve(a4, v16, v15 + 1, 24);
      *a4 = v35;
      v15 = a4[1];
      v16 = v35;
    }
    v17 = v16 + 24 * v15;
    *(_QWORD *)v17 = 0;
    *(_OWORD *)(v17 + 8) = 0;
    ++a4[1];
    na = (char **)v17;
    node2ea(*a3);
    sub_35A790(na);
    if ( !a6 )
      goto LABEL_24;
    v18 = v56;
    v19 = haystack;
    if ( (_QWORD)v56 )
    {
      v19 = (const char *)v55;
      v18 = v56 - 1;
    }
    v20 = *(_QWORD *)a1;
    s1 = (char *)-1LL;
    if ( v20
      && (unsigned __int8)sub_7B2560(
                            v20,
                            a2,
                            (unsigned __int64 *)&s1,
                            v19,
                            v18,
                            0,
                            *(void (__fastcall **)(__int8 *, __int64))(a1 + 2128))
      && (char *)*a3 == s1 )
    {
      v37 = strlen(a5);
      *(_WORD *)(a1 + 1091) = v37 + 1;
      memcpy((void *)(a1 + 1094), a5, v37);
      v39 = *(_QWORD *)a1;
      if ( !*(_BYTE *)(*(_QWORD *)a1 + 6020LL) || !(unsigned __int8)must_journal(a1 + 1094, a5, v38) )
      {
        sub_73A6B0(v39, (_WORD *)(a1 + 1091), 0);
        result = 0;
        goto LABEL_5;
      }
      ptr = nullptr;
      v62 = 0;
      if ( (unsigned __int8)sub_73A6B0(v39, (_WORD *)(a1 + 1091), (__int64)&ptr) )
        add_undo_record(1, ptr, v62);
      if ( ptr )
      {
        *(_QWORD *)&v62 = 0;
        qfree(ptr);
        result = 0;
        goto LABEL_5;
      }
      goto LABEL_24;
    }
LABEL_15:
    v21 = (char *)strlen(a5);
    v22 = v21;
    if ( (unsigned __int64)v21 <= 0x1FF )
    {
      v28 = (_WORD)v21 + 1;
      v27 = (void *)(a1 + 1094);
      *(_WORD *)(a1 + 1091) = (_WORD)v21 + 1;
      memcpy((void *)(a1 + 1094), a5, (size_t)v21);
      sub_7443D0(*(_QWORD *)a1, (unsigned __int16 *)(a1 + 1091));
      sub_741460(*(_QWORD *)a1);
      if ( v40 >= 2
        && (unsigned __int64)v22 < *(unsigned __int16 *)v40
        && *(char *)(v40 + 2) == *(unsigned __int8 *)(a1 + 1093) )
      {
        v48 = (const char *)(v40 - 1);
        n = *(unsigned __int16 *)v40;
        v47 = (unsigned __int16 *)(v40 + 2);
        if ( !v22[v40 + 3] && !strncmp((const char *)(v40 + 3), a5, (size_t)v22) )
        {
          src = v48;
          dest = nullptr;
          v49 = n;
          nb = n + 3;
          v58 = 0;
          dest = (void *)qvector_reserve(&dest, 0, nb, 1);
          memset((char *)dest + v58, 0, nb - v58);
          *(_QWORD *)&v58 = nb;
          memcpy(dest, src, nb);
          v41 = *(_QWORD *)((char *)v47 + v49 + 2);
          s1 = nullptr;
          v60 = 0;
          if ( sub_7B30F0((__int64 *)a1, v41, (__int64 *)&s1) > 0 )
          {
            v42 = (char *)haystack;
            if ( (_QWORD)v60 )
              v42 = s1;
            if ( !strcmp(v42, a5) )
            {
              v44 = *(_QWORD *)a1;
              v45 = (char *)dest;
              if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) && (unsigned __int8)must_journal(v42, a5, v43) )
              {
                ptr = nullptr;
                v62 = 0;
                if ( (unsigned __int8)sub_73A6B0(v44, v45 + 1, (__int64)&ptr) )
                  add_undo_record(1, ptr, v62);
                if ( ptr )
                {
                  *(_QWORD *)&v62 = 0;
                  qfree(ptr);
                }
              }
              else
              {
                sub_73A6B0(v44, v45 + 1, 0);
              }
              sub_7B32E0(a1, v41, a5, (__int64)v22, 1);
              if ( s1 )
              {
                *(_QWORD *)&v60 = 0;
                qfree(s1);
              }
              if ( dest )
              {
                *(_QWORD *)&v58 = 0;
                qfree(dest);
                result = 0;
                goto LABEL_5;
              }
LABEL_24:
              result = 0;
              goto LABEL_5;
            }
          }
          if ( s1 )
          {
            *(_QWORD *)&v60 = 0;
            qfree(s1);
          }
          if ( dest )
          {
            *(_QWORD *)&v58 = 0;
            qfree(dest);
          }
        }
      }
      s1 = v22;
      v26 = a5;
      v25 = (int)v22;
    }
    else
    {
      v23 = *(_QWORD *)a1;
      s1 = v21;
      v24 = sub_7B0540(v23, (__int64)v63, a5, (unsigned __int64 *)&s1, 1);
      v25 = (int)s1;
      v26 = (const void *)v24;
      v27 = (void *)(a1 + 1094);
      v28 = (_WORD)s1 + 1;
    }
    *(_WORD *)(a1 + 1091) = v28;
    v29 = v27;
    memcpy(v27, v26, v25);
    v31 = *(_QWORD *)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL) && (unsigned __int8)must_journal(v29, v26, v30) )
    {
      ptr = nullptr;
      v62 = 0;
      if ( (unsigned __int8)sub_73A6B0(v31, (_WORD *)(a1 + 1091), (__int64)&ptr) )
        add_undo_record(1, ptr, v62);
      if ( ptr )
      {
        *(_QWORD *)&v62 = 0;
        qfree(ptr);
      }
    }
    else
    {
      sub_73A6B0(v31, (_WORD *)(a1 + 1091), 0);
    }
    result = sub_7B32E0(a1, *a3, a5, (__int64)v22, 0);
  }
LABEL_5:
  if ( v55 )
  {
    s2a = result;
    *(_QWORD *)&v56 = 0;
    qfree(v55);
    return s2a;
  }
  return result;
}
