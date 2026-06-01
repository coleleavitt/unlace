__int64 __fastcall sub_66B1A0(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v7; // ebx
  __int64 v8; // rax
  char *v9; // rdx
  const char *v10; // rcx
  __int64 result; // rax
  __int64 v12; // r10
  __int64 v13; // r15
  char tinfo_property; // al
  int v15; // r9d
  const char *v16; // rax
  size_t v17; // r13
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rsi
  __int64 tinfo_pdata; // rax
  char *v26; // rdi
  const char *v27; // rax
  bool v28; // r13
  char *v29; // rax
  bool v30; // zf
  __int64 *v31; // rax
  size_t v32; // rax
  char *v33; // r8
  size_t v34; // r13
  void *v35; // rdx
  const char *src; // [rsp+0h] [rbp-130h]
  char *srca; // [rsp+0h] [rbp-130h]
  char *v38; // [rsp+8h] [rbp-128h]
  char *v39; // [rsp+8h] [rbp-128h]
  void *v40; // [rsp+8h] [rbp-128h]
  __int64 *v41; // [rsp+10h] [rbp-120h]
  unsigned __int8 v43; // [rsp+18h] [rbp-118h]
  char *v44; // [rsp+28h] [rbp-108h] BYREF
  void *dest; // [rsp+30h] [rbp-100h] BYREF
  __int128 v46; // [rsp+38h] [rbp-F8h]
  char *s; // [rsp+50h] [rbp-E0h] BYREF
  __int128 v48; // [rsp+58h] [rbp-D8h]
  char v49[136]; // [rsp+70h] [rbp-C0h] BYREF
  unsigned __int64 v50; // [rsp+F8h] [rbp-38h]

  v7 = 0;
  v50 = __readfsqword(0x28u);
  v8 = 0;
  ++a1[9];
  if ( !*(_QWORD *)(a2 + 8) )
  {
LABEL_36:
    sub_660860((__int64)a1, v49, 128, 8LL * *(_QWORD *)(a2 + 24), 0, a6);
    result = 1;
    if ( v49[0] )
      result = sub_6602F0((__int64)a1, v49, nullptr, 1u, 1u);
    goto LABEL_38;
  }
  while ( 1 )
  {
    v12 = *(_QWORD *)a2 + 144 * v8;
    v13 = v12;
    if ( (*(_BYTE *)(v12 + 132) & 0x20) == 0 )
      break;
LABEL_13:
    v8 = ++v7;
    if ( (unsigned __int64)v7 >= *(_QWORD *)(a2 + 8) )
      goto LABEL_36;
  }
  v41 = (__int64 *)(v12 + 64);
  tinfo_property = get_tinfo_property(*(_QWORD *)(v12 + 64), 2);
  sub_660860(
    (__int64)a1,
    v49,
    128,
    *(_QWORD *)v13,
    (2 * ((*(_BYTE *)(a2 + 45) & 4) != 0)) | ((tinfo_property & 0xF) == 14),
    v15);
  v16 = sub_537210(v13);
  dest = nullptr;
  v46 = 0;
  if ( v16 )
  {
    src = v16;
    v17 = strlen(v16);
    dest = (void *)qvector_reserve(&dest, 0, v17 + 1, 1);
    *(_QWORD *)&v46 = v17 + 1;
    memmove(dest, src, v17);
    *((_BYTE *)dest + v17) = 0;
  }
  v18 = a1[8];
  v19 = *(_QWORD *)(v13 + 24);
  if ( v18 >= 0 )
  {
    if ( v19 > 1 )
      goto LABEL_4;
    goto LABEL_19;
  }
  if ( v19 > 1 )
  {
    s = nullptr;
    v48 = 0;
    v24 = *(_QWORD *)(v13 + 64);
    if ( (v24 & 0x100) == 0 )
      goto LABEL_4;
    tinfo_pdata = get_tinfo_pdata(&s, v24, 0);
    v26 = s;
    if ( tinfo_pdata )
    {
      if ( (_QWORD)v48 )
      {
        if ( *s == 36 )
        {
          if ( s )
          {
            *(_QWORD *)&v48 = 0;
            qfree(s);
            v18 = a1[8];
            goto LABEL_19;
          }
          goto LABEL_35;
        }
        v38 = s;
        v29 = strrchr(s, 58);
        v26 = v38;
        v30 = v29 == nullptr;
        v27 = v29 + 1;
        if ( v30 )
          v27 = v38;
      }
      else
      {
        v27 = haystack;
      }
      v28 = *v27 == 36;
      if ( !v26 )
        goto LABEL_33;
    }
    else
    {
      if ( !s )
      {
        if ( *(_QWORD *)(v13 + 24) > 1u )
          goto LABEL_4;
LABEL_35:
        v18 = a1[8];
        goto LABEL_19;
      }
      v28 = 0;
    }
    *(_QWORD *)&v48 = 0;
    qfree(v26);
LABEL_33:
    if ( *(_QWORD *)(v13 + 24) > 1u && !v28 )
      goto LABEL_4;
    goto LABEL_35;
  }
LABEL_19:
  if ( (v18 & 0x100) == 0 )
  {
    v20 = sub_534260(*(_QWORD *)(*(_QWORD *)a1 + 1824LL), *(_QWORD *)(v13 + 64));
    v21 = v20;
    if ( v20 )
    {
      sub_53CE30(v20, *(_QWORD *)a1, *(_BYTE *)(v13 + 64), 1);
      if ( (*(_BYTE *)(v21 + 68) & 4) != 0 )
      {
        a1[8] |= 0x20u;
        if ( (unsigned __int64)v46 <= 1 )
        {
          if ( *(_QWORD *)(v21 + 32) )
          {
            v22 = *(_QWORD *)a1;
            v48 = 0;
            s = nullptr;
            v23 = sub_534380(*(_QWORD *)(v22 + 1672), (__int64 *)&s, v21, 0);
            if ( v23 )
            {
              v31 = *(__int64 **)(v21 + 32);
              v44 = nullptr;
              sub_64DE70(*(_QWORD *)(*(_QWORD *)a1 + 1672LL), *v31, v23, nullptr, 0, (unsigned __int64)&v44, 0, 0);
              if ( v44 )
              {
                if ( *v44 )
                {
                  v39 = v44;
                  v32 = strlen(v44);
                  v33 = v39;
                  v34 = v32;
                  if ( v32 )
                  {
                    v35 = (void *)(v32 + 1);
                    if ( *((_QWORD *)&v46 + 1) < v32 + 1 )
                    {
                      srca = v39;
                      v40 = (void *)(v32 + 1);
                      dest = (void *)qvector_reserve(&dest, dest, v35, 1);
                      v33 = srca;
                      v35 = v40;
                    }
                    *(_QWORD *)&v46 = v35;
                    memmove(dest, v33, v34);
                    *((_BYTE *)dest + v34) = 0;
                  }
                  else
                  {
                    *(_QWORD *)&v46 = 0;
                  }
                }
              }
            }
            if ( s )
            {
              *(_QWORD *)&v48 = 0;
              qfree(s);
            }
          }
        }
      }
    }
  }
LABEL_4:
  v9 = nullptr;
  s = nullptr;
  v48 = 0;
  if ( *(_QWORD *)(v13 + 72) )
  {
    value_repr_t__print_(v13 + 72, &s, 1);
    v9 = s;
  }
  v10 = nullptr;
  if ( (unsigned __int64)v46 > 1 )
    v10 = (const char *)dest;
  result = sub_669A50(
             a1,
             v41,
             *(char **)(v13 + 16),
             v10,
             (*(_DWORD *)(v13 + 132) & 0x800) != 0,
             *(_BYTE *)(v13 + 136),
             *(_DWORD *)(v13 + 132),
             v9,
             v49);
  if ( (_BYTE)result )
  {
    if ( s )
    {
      *(_QWORD *)&v48 = 0;
      qfree(s);
    }
    if ( dest )
    {
      *(_QWORD *)&v46 = 0;
      qfree(dest);
    }
    goto LABEL_13;
  }
  if ( s )
  {
    *(_QWORD *)&v48 = 0;
    qfree(s);
    result = 0;
  }
  if ( dest )
  {
    v43 = result;
    *(_QWORD *)&v46 = 0;
    qfree(dest);
    result = v43;
  }
LABEL_38:
  --a1[9];
  return result;
}
