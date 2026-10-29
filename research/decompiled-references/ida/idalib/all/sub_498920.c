unsigned __int64 __fastcall sub_498920(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  char v9; // al
  _QWORD *v10; // r8
  __int64 v11; // r14
  char *v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // r15
  char *v15; // r13
  char *v16; // rbx
  const char *v17; // rsi
  const char *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  __int64 v22; // r14
  unsigned __int64 v23; // rsi
  _QWORD *v24; // r12
  __int64 v25; // rax
  __int64 v26; // r12
  void *v27; // rdi
  _QWORD *v28; // rbp
  const char *v29; // rsi
  const char *v30; // rdx
  const char *v31; // rsi
  __int64 v32; // rax
  unsigned __int64 v33; // [rsp+0h] [rbp-D8h]
  _QWORD *v34; // [rsp+0h] [rbp-D8h]
  __int64 v36; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v37; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+18h] [rbp-C0h]
  __int64 v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  _QWORD *v43; // [rsp+48h] [rbp-90h]
  __int64 v44; // [rsp+58h] [rbp-80h] BYREF
  char *s2; // [rsp+60h] [rbp-78h] BYREF
  __int128 v46; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __int128 v48; // [rsp+88h] [rbp-50h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v4 = a1;
  v5 = *a3;
  v6 = a1[36];
  v49 = __readfsqword(0x28u);
  v37 = v6;
  v41 = 144 * a4;
  v7 = 144 * a4 + v5;
  v40 = 16 * a4;
  v8 = *(_QWORD *)(a1[27] + 16 * a4);
  v46 = 0;
  s2 = nullptr;
  v33 = v8;
  v38 = v8 >> 3;
  v9 = sub_6BC9A0(a2, &s2, a3);
  v10 = a3;
  if ( v9 )
  {
    v6 = a1[36];
    if ( v6 )
    {
      v11 = v46;
      v12 = (char *)haystack;
      v36 = v7;
      v43 = v10;
      if ( (_QWORD)v46 )
        v12 = s2;
      v13 = 0;
      v14 = a1[48] + 16LL;
      v15 = s2;
      v16 = v12;
      while ( 1 )
      {
        v19 = *(_QWORD *)(v14 + 8);
        if ( !v11 )
          break;
        v17 = v15;
        v18 = haystack;
        if ( v19 )
          goto LABEL_11;
LABEL_7:
        if ( !strcmp(v18, v17) )
          goto LABEL_12;
        ++v13;
        v14 += 144;
        if ( v13 == v6 )
        {
          v7 = v36;
          v4 = a1;
          v10 = v43;
          goto LABEL_13;
        }
      }
      if ( !v19 )
      {
LABEL_12:
        v20 = v13;
        v4 = a1;
        v7 = v36;
        v10 = v43;
        v6 = v20;
        goto LABEL_13;
      }
LABEL_11:
      v18 = *(const char **)v14;
      v17 = v16;
      goto LABEL_7;
    }
  }
LABEL_13:
  if ( v33 <= 7 && (*(_BYTE *)(v7 + 132) & 0x20) != 0 )
  {
    v24 = (_QWORD *)(*v10 + v41);
    v34 = v10;
    sub_379560(v24);
    memmove(v24, v24 + 18, *v34 + 144LL * v34[1]-- - (_QWORD)v24 - 144);
    memmove((void *)(v40 + v4[27]), (const void *)(v40 + v4[27] + 16), 16LL * v4[28]-- - 16 - v40);
    if ( v6 < v37 )
    {
      sub_6BF400(32 * v6 + v4[35], *a2, 1);
      v25 = v4[35];
      v26 = v25 + 32 * v6;
      v27 = *(void **)v26;
      if ( *(_QWORD *)v26 )
      {
        *(_QWORD *)(v26 + 8) = 0;
        qfree(v27);
        v25 = v4[35];
      }
      memmove((void *)v26, (const void *)(v26 + 32), v25 - v26 + 32LL * v4[36]-- - 32);
      v28 = (_QWORD *)(v4[48] + 144 * v6);
      sub_379560(v28);
      memmove(v28, v28 + 18, v4[48] + 144LL * v4[49]-- - (_QWORD)v28 - 144);
    }
  }
  else
  {
    LODWORD(v48) = 0;
    v44 = 17;
    ptr = nullptr;
    DWORD1(v48) = v38;
    copy_tinfo_t(&ptr);
    create_tinfo(v7 + 64, 11, 11, &ptr);
    clear_tinfo_t(&ptr);
    clear_tinfo_t(&v44);
    if ( *(_QWORD *)(v7 + 24) > 1u )
    {
      *(_DWORD *)(v7 + 132) &= ~0x20u;
      if ( v6 >= v37 )
        goto LABEL_18;
      v22 = 32 * v6;
    }
    else
    {
      sub_35A790((char **)(v7 + 16));
      if ( v6 >= v37 )
      {
        *(_DWORD *)(v7 + 132) &= ~0x20u;
        goto LABEL_18;
      }
      ptr = nullptr;
      v48 = 0;
      sub_493230(&ptr, (__int64)(v4 + 30));
      v29 = haystack;
      if ( *(_QWORD *)(v7 + 24) )
        v29 = *(const char **)(v7 + 16);
      sub_6BCB20(&ptr, v29);
      v30 = haystack;
      if ( (_QWORD)v48 )
        v30 = (const char *)ptr;
      v31 = haystack;
      v22 = 32 * v6;
      v32 = 32 * v6 + v4[35];
      if ( *(_QWORD *)(v32 + 8) )
        v31 = *(const char **)v32;
      sub_6BF450(a2, v31, v30, -1);
      sub_4939F0(v4[48] + 144 * v6 + 16, v7 + 16);
      sub_4939F0(v22 + v4[35], (__int64)&ptr);
      if ( ptr )
      {
        *(_QWORD *)&v48 = 0;
        qfree(ptr);
      }
      *(_DWORD *)(v7 + 132) &= ~0x20u;
    }
    v23 = *(_QWORD *)(v4[35] + v22 + 24);
    if ( v23 == -1 )
      sub_368890();
    sub_3E34B0((__int64)a2, v23);
  }
LABEL_18:
  if ( s2 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(s2);
  }
  return v49 - __readfsqword(0x28u);
}
