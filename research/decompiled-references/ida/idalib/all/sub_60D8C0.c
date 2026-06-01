unsigned __int64 __fastcall sub_60D8C0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax
  __int64 v5; // rbp
  unsigned __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 item_end; // rax
  __int64 spd; // rax
  __int64 v16; // rdx
  __int64 v17; // r13
  char v18; // cl
  unsigned int v19; // eax
  int v20; // r15d
  int v21; // edx
  int v22; // eax
  int dtype_size; // eax
  __int64 *v24; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  int v27; // edx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // r9
  __int64 v34; // rdi
  char *v35; // r8
  char *v36; // rdx
  void (__fastcall *v37)(__int64, __int128 *, char *, __int64, char *); // rax
  _QWORD *v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  char *v41; // rdi
  char *v42; // rdi
  size_t n; // [rsp+0h] [rbp-1F0h]
  char *na; // [rsp+0h] [rbp-1F0h]
  void *src; // [rsp+8h] [rbp-1E8h]
  unsigned __int64 v46; // [rsp+10h] [rbp-1E0h]
  unsigned __int64 v47; // [rsp+10h] [rbp-1E0h]
  int v48; // [rsp+20h] [rbp-1D0h] BYREF
  int v49; // [rsp+24h] [rbp-1CCh] BYREF
  char *s1; // [rsp+28h] [rbp-1C8h] BYREF
  __int128 v51; // [rsp+30h] [rbp-1C0h]
  __int128 v52; // [rsp+48h] [rbp-1A8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-198h]
  __int64 v54; // [rsp+60h] [rbp-190h]
  __int64 v55; // [rsp+68h] [rbp-188h]
  _BYTE v56[320]; // [rsp+70h] [rbp-180h] BYREF
  unsigned __int64 v57; // [rsp+1B0h] [rbp-40h] BYREF

  v3 = *(__int64 **)a1;
  v57 = __readfsqword(0x28u);
  v5 = *v3;
  v52 = -1;
  v6 = (unsigned __int64 *)v56;
  v53 = -1;
  v54 = 0;
  v55 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v6 != &v57 );
  if ( (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) != 0 || (int)decode_insn(&v52, a2, v7, v8, v9, v10, 0.0) <= 0 )
    return v57 - __readfsqword(0x28u);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int128 *, int *, int *))(**(_QWORD **)(a1 + 8) + 24LL))(
          *(_QWORD *)(a1 + 8),
          &v52,
          &v48,
          &v49) )
  {
    sub_6085B0(v5, *(__int64 **)(*(_QWORD *)a1 + 104LL), a2, *(char ***)(a1 + 24));
    return v57 - __readfsqword(0x28u);
  }
  item_end = get_item_end(a2, &v52, v12, v13);
  spd = get_spd(*(_QWORD *)(a1 + 32), item_end);
  v16 = *(_QWORD *)(a1 + 16);
  v17 = spd - *(_QWORD *)(a1 + 48);
  v18 = *(_BYTE *)(v16 + 88);
  v19 = v18 & 0xF0;
  if ( (v18 & 0xF0) == 0xC0 )
    v19 = *(_DWORD *)(v16 + 28);
  if ( v19 <= 0x10 )
  {
    v19 = getinf(99);
    if ( v19 <= 0x10 )
      v19 = getinf(99);
  }
  if ( v19 == 176 || v19 == 256 || (unsigned __int8)getinf_flag(67, 2) )
    v20 = 1;
  else
    v20 = sub_565920(*(_QWORD **)(v5 + 1672));
  if ( v49 != -1 )
  {
    v17 += *(_QWORD *)&v56[40 * v49 + 16];
    v21 = sub_3792E0(0x2Eu, &s1, &v52, (char *)&v52 + 40 * v49 + 40);
    v22 = *(_DWORD *)(v5 + 936) & 0x8000;
    if ( v21 )
    {
      if ( !v22 || ((unsigned __int8)s1 & 2) != 0 )
      {
LABEL_18:
        dtype_size = get_dtype_size((unsigned __int8)v56[40 * v49 + 5]);
        if ( v20 > dtype_size )
          v20 = dtype_size;
        goto LABEL_20;
      }
    }
    else if ( !v22 )
    {
      goto LABEL_18;
    }
    v17 = -v17;
    goto LABEL_18;
  }
LABEL_20:
  v24 = *(__int64 **)(a1 + 16);
  v25 = v24[1];
  if ( v25 )
  {
    v26 = *v24;
    v27 = 0;
    v28 = 0;
    v29 = v17 + v20;
    while ( 1 )
    {
      v30 = v26 + 80 * v28;
      if ( *(_DWORD *)v30 == 1 )
      {
        v31 = *(_QWORD *)(v30 + 8);
        if ( v17 <= v31 && v29 > v31 )
          break;
      }
      v28 = ++v27;
      if ( v27 >= v25 )
        return v57 - __readfsqword(0x28u);
    }
    if ( v30 )
    {
      if ( v49 != -1 )
        apply_tinfo_to_stkarg(
          (__int64)&v52,
          (unsigned __int8 *)&v52 + 40 * v49 + 40,
          *(_QWORD *)&v56[40 * v49 + 16],
          (_QWORD *)(v30 + 64),
          *(const char **)(v30 + 16));
      s1 = nullptr;
      v51 = 0;
      v32 = *(_QWORD *)(v30 + 64);
      if ( (v32 & 0x100) == 0 )
      {
LABEL_30:
        if ( &s1 == (char **)(v30 + 16) )
        {
          (*(void (__fastcall **)(_QWORD, __int128 *, char *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
            *(_QWORD *)(a1 + 8),
            &v52,
            (char *)&v52 + 40 * v48 + 40,
            v30 + 64,
            0);
          goto LABEL_35;
        }
LABEL_31:
        v33 = *(_QWORD *)(v30 + 24);
        if ( !v33 || (n = v33 - 1, v33 == 1) )
        {
          v34 = *(_QWORD *)(a1 + 8);
          v35 = nullptr;
          *(_QWORD *)&v51 = 0;
          v36 = (char *)&v52 + 40 * v48 + 40;
          v37 = *(void (__fastcall **)(__int64, __int128 *, char *, __int64, char *))(*(_QWORD *)v34 + 16LL);
LABEL_34:
          v37(v34, &v52, v36, v30 + 64, v35);
LABEL_35:
          sub_607890(v5, *(__int64 **)(*(_QWORD *)a1 + 104LL), a2, v30);
          v38 = *(_QWORD **)(a1 + 16);
          clear_tinfo_t(v30 + 64);
          v39 = *(void **)(v30 + 40);
          if ( v39 )
          {
            *(_QWORD *)(v30 + 48) = 0;
            qfree(v39);
          }
          v40 = *(void **)(v30 + 16);
          if ( v40 )
          {
            *(_QWORD *)(v30 + 24) = 0;
            qfree(v40);
          }
          cleanup_argloc(v30);
          memmove((void *)v30, (const void *)(v30 + 80), *v38 + 80LL * v38[1]-- - v30 - 80);
          if ( s1 )
          {
            *(_QWORD *)&v51 = 0;
            qfree(s1);
          }
          return v57 - __readfsqword(0x28u);
        }
        v42 = s1;
        src = *(void **)(v30 + 16);
        if ( *((_QWORD *)&v51 + 1) < v33 )
        {
          v47 = *(_QWORD *)(v30 + 24);
          s1 = (char *)qvector_reserve(&s1, s1, v33, 1);
          v33 = v47;
          v42 = s1;
        }
        *(_QWORD *)&v51 = v33;
        v46 = v33;
        memmove(v42, src, n);
        s1[v46 - 1] = 0;
LABEL_50:
        v34 = *(_QWORD *)(a1 + 8);
        v36 = (char *)&v52 + 40 * v48 + 40;
        v37 = *(void (__fastcall **)(__int64, __int128 *, char *, __int64, char *))(*(_QWORD *)v34 + 16LL);
        if ( (unsigned __int64)v51 <= 1 )
          v35 = nullptr;
        else
          v35 = s1;
        goto LABEL_34;
      }
      if ( get_tinfo_pdata(&s1, v32, 0) )
      {
        if ( !(_QWORD)v51 )
          goto LABEL_30;
        na = s1;
        v41 = s1;
        if ( !strcmp(s1, "__gnuc_va_list") )
        {
          if ( *((_QWORD *)&v51 + 1) <= 9u )
          {
            s1 = (char *)qvector_reserve(&s1, na, 10, 1);
            v41 = s1;
          }
          *(_QWORD *)&v51 = 10;
          *(_QWORD *)v41 = 0x6772617261765F5FLL;
          v41[8] = 115;
          s1[9] = 0;
          goto LABEL_50;
        }
      }
      if ( &s1 == (char **)(v30 + 16) )
        goto LABEL_50;
      goto LABEL_31;
    }
  }
  return v57 - __readfsqword(0x28u);
}
