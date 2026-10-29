unsigned __int64 __fastcall sub_483D30(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v4; // rbp
  __int64 v5; // r12
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  char v9; // al
  _QWORD *v10; // r8
  __int64 v11; // r14
  char *v12; // rax
  unsigned __int64 v13; // r12
  __int64 v14; // r15
  char *v15; // r13
  char *v16; // rbp
  const char *v17; // rsi
  const char *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // r14
  __int64 v25; // rsi
  _QWORD *v26; // r12
  __int64 v27; // rax
  __int64 v28; // r12
  void *v29; // rdi
  _QWORD *v30; // rbx
  const char *v31; // rsi
  const char *v32; // rdx
  const char *v33; // rsi
  __int64 v34; // rax
  unsigned __int64 v35; // [rsp+0h] [rbp-D8h]
  _QWORD *v36; // [rsp+0h] [rbp-D8h]
  __int64 v38; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v39; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+18h] [rbp-C0h]
  __int64 v42; // [rsp+30h] [rbp-A8h]
  __int64 v43; // [rsp+38h] [rbp-A0h]
  _QWORD *v45; // [rsp+48h] [rbp-90h]
  __int64 v46; // [rsp+58h] [rbp-80h] BYREF
  char *s2; // [rsp+60h] [rbp-78h] BYREF
  __int128 v48; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __int128 v50; // [rsp+88h] [rbp-50h]
  unsigned __int64 v51; // [rsp+98h] [rbp-40h]

  v4 = a1;
  v5 = *a3;
  v51 = __readfsqword(0x28u);
  v42 = a4 << 7;
  v6 = (a4 << 7) + v5;
  v43 = 16 * a4;
  v7 = *(_QWORD *)(a1[27] + 16 * a4);
  v8 = a1[35];
  v48 = 0;
  s2 = nullptr;
  v35 = v7;
  v40 = v7 >> 3;
  v39 = v8;
  v9 = sub_69BF50(a2, &s2);
  v10 = a3;
  if ( v9 )
  {
    v8 = a1[35];
    if ( v8 )
    {
      v11 = v48;
      v12 = (char *)haystack;
      v38 = v6;
      v45 = v10;
      if ( (_QWORD)v48 )
        v12 = s2;
      v13 = 0;
      v14 = a1[47] + 16LL;
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
        v14 += 128;
        if ( v13 == v8 )
        {
          v6 = v38;
          v4 = a1;
          v10 = v45;
          goto LABEL_13;
        }
      }
      if ( !v19 )
      {
LABEL_12:
        v20 = v13;
        v4 = a1;
        v6 = v38;
        v10 = v45;
        v8 = v20;
        goto LABEL_13;
      }
LABEL_11:
      v18 = *(const char **)v14;
      v17 = v16;
      goto LABEL_7;
    }
  }
LABEL_13:
  if ( v35 <= 7 && (*(_BYTE *)(v6 + 116) & 0x20) != 0 )
  {
    v26 = (_QWORD *)(*v10 + v42);
    v36 = v10;
    sub_375BF0(v26);
    memmove(v26, v26 + 16, *v36 + (v36[1]-- << 7) - (_QWORD)v26 - 128LL);
    memmove((void *)(v43 + v4[27]), (const void *)(v43 + v4[27] + 16), 16LL * v4[28]-- - 16 - v43);
    if ( v8 < v39 )
    {
      sub_69E930(32 * v8 + v4[34], *a2, 1);
      v27 = v4[34];
      v28 = v27 + 32 * v8;
      v29 = *(void **)v28;
      if ( *(_QWORD *)v28 )
      {
        *(_QWORD *)(v28 + 8) = 0;
        qfree(v29);
        v27 = v4[34];
      }
      memmove((void *)v28, (const void *)(v28 + 32), v27 - v28 + 32LL * v4[35]-- - 32);
      v30 = (_QWORD *)(v4[47] + (v8 << 7));
      sub_375BF0(v30);
      memmove(v30, v30 + 16, v4[47] + (v4[48]-- << 7) - (_QWORD)v30 - 128LL);
    }
  }
  else
  {
    LODWORD(v50) = 0;
    v46 = 17;
    ptr = nullptr;
    DWORD1(v50) = v40;
    copy_tinfo_t(&ptr);
    create_tinfo(v6 + 64, 11, 11, &ptr);
    clear_tinfo_t(&ptr);
    clear_tinfo_t(&v46);
    if ( *(_QWORD *)(v6 + 24) > 1u )
    {
      *(_DWORD *)(v6 + 116) &= ~0x20u;
      if ( v8 >= v39 )
        goto LABEL_18;
      v24 = 32 * v8;
    }
    else
    {
      sub_3573A0((char **)(v6 + 16));
      if ( v8 >= v39 )
      {
        *(_DWORD *)(v6 + 116) &= ~0x20u;
        goto LABEL_18;
      }
      ptr = nullptr;
      v50 = 0;
      sub_47E730(&ptr, (__int64)(v4 + 30));
      v31 = haystack;
      if ( *(_QWORD *)(v6 + 24) )
        v31 = *(const char **)(v6 + 16);
      sub_69C0D0(&ptr, v31);
      v32 = haystack;
      if ( (_QWORD)v50 )
        v32 = (const char *)ptr;
      v33 = haystack;
      v24 = 32 * v8;
      v34 = 32 * v8 + v4[34];
      if ( *(_QWORD *)(v34 + 8) )
        v33 = *(const char **)v34;
      sub_69E970(a2, v33, v32, 0xFFFFFFFFLL);
      sub_47EEB0(v4[47] + (v8 << 7) + 16, v6 + 16);
      sub_47EEB0(v24 + v4[34], (__int64)&ptr);
      if ( ptr )
      {
        *(_QWORD *)&v50 = 0;
        qfree(ptr);
      }
      *(_DWORD *)(v6 + 116) &= ~0x20u;
    }
    v25 = *(unsigned int *)(v4[34] + v24 + 24);
    if ( (_DWORD)v25 == -1 )
      sub_365330();
    sub_3DD870((__int64)a2, v25, v21, v22);
  }
LABEL_18:
  if ( s2 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(s2);
  }
  return v51 - __readfsqword(0x28u);
}

