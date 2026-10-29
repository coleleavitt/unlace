unsigned __int64 __fastcall sub_5F18C0(__int64 a1, unsigned int a2)
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
  unsigned int item_end; // eax
  int spd; // eax
  __int64 v16; // rdx
  int v17; // r13d
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
  int v29; // edi
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rsi
  unsigned __int64 v33; // r9
  __int64 v34; // rdi
  char *v35; // r8
  _QWORD *v36; // rdx
  void (__fastcall *v37)(__int64, _QWORD *, _QWORD *, __int64, char *); // rax
  _QWORD *v38; // rbx
  void *v39; // rdi
  void *v40; // rdi
  char *v41; // rdi
  char *v42; // rdi
  int n; // [rsp+8h] [rbp-160h]
  size_t na; // [rsp+8h] [rbp-160h]
  char *nb; // [rsp+8h] [rbp-160h]
  void *src; // [rsp+10h] [rbp-158h]
  unsigned __int64 v47; // [rsp+18h] [rbp-150h]
  unsigned __int64 v48; // [rsp+18h] [rbp-150h]
  int v49; // [rsp+28h] [rbp-140h] BYREF
  int v50; // [rsp+2Ch] [rbp-13Ch] BYREF
  char *s1; // [rsp+30h] [rbp-138h] BYREF
  __int128 v52; // [rsp+38h] [rbp-130h]
  _QWORD v53[3]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v54[192]; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int64 v55; // [rsp+128h] [rbp-40h] BYREF

  v3 = *(__int64 **)a1;
  v55 = __readfsqword(0x28u);
  v5 = *v3;
  v53[0] = -1;
  v53[2] = 0;
  v53[1] = 0xFFFFFFFFLL;
  v6 = (unsigned __int64 *)v54;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 3;
    *((_WORD *)v6 - 11) = 0;
    *((_WORD *)v6 - 10) = 0;
    *((_DWORD *)v6 - 1) = 0;
    *((_WORD *)v6 - 9) = 0;
    *(v6 - 2) = 0;
    *((_DWORD *)v6 - 2) = 0;
  }
  while ( v6 != &v55 );
  if ( (~((unsigned __int16)get_flags_ex(a2, 4) >> 8) & 6) != 0 || (int)decode_insn(v53, a2, v7, v8, v9, v10) <= 0 )
    return v55 - __readfsqword(0x28u);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *, int *, int *))(**(_QWORD **)(a1 + 8) + 24LL))(
          *(_QWORD *)(a1 + 8),
          v53,
          &v49,
          &v50) )
  {
    sub_5EC6F0(v5, *(__int64 **)(*(_QWORD *)a1 + 104LL), a2, *(char ***)(a1 + 24));
    return v55 - __readfsqword(0x28u);
  }
  item_end = get_item_end(a2, v53, v12, v13);
  spd = get_spd(*(_QWORD *)(a1 + 32), item_end);
  v16 = *(_QWORD *)(a1 + 16);
  v17 = spd - *(_DWORD *)(a1 + 48);
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
    v20 = sub_54C1C0(*(_QWORD **)(v5 + 1480));
  if ( v50 != -1 )
  {
    n = v17 + *(_DWORD *)&v54[24 * v50 + 12];
    v17 = n;
    v21 = sub_375980(0x2Eu, &s1, v53, &v53[3 * v50 + 3]);
    v22 = *(_DWORD *)(v5 + 768) & 0x8000;
    if ( v21 )
    {
      if ( !v22 || ((unsigned __int8)s1 & 2) != 0 )
      {
LABEL_18:
        dtype_size = get_dtype_size((unsigned __int8)v54[24 * v50 + 5]);
        if ( v20 > dtype_size )
          v20 = dtype_size;
        goto LABEL_20;
      }
    }
    else if ( !v22 )
    {
      goto LABEL_18;
    }
    v17 = -n;
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
        v31 = *(_DWORD *)(v30 + 8);
        if ( v17 <= v31 && v29 > v31 )
          break;
      }
      v28 = ++v27;
      if ( v27 >= v25 )
        return v55 - __readfsqword(0x28u);
    }
    if ( v30 )
    {
      if ( v50 != -1 )
        apply_tinfo_to_stkarg(
          v53,
          &v53[3 * v50 + 3],
          *(unsigned int *)&v54[24 * v50 + 12],
          v30 + 64,
          *(_QWORD *)(v30 + 16));
      s1 = nullptr;
      v52 = 0;
      v32 = *(_QWORD *)(v30 + 64);
      if ( (v32 & 0x100) == 0 )
      {
LABEL_30:
        if ( &s1 == (char **)(v30 + 16) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD *, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
            *(_QWORD *)(a1 + 8),
            v53,
            &v53[3 * v49 + 3],
            v30 + 64,
            0);
          goto LABEL_35;
        }
LABEL_31:
        v33 = *(_QWORD *)(v30 + 24);
        if ( !v33 || (na = v33 - 1, v33 == 1) )
        {
          v34 = *(_QWORD *)(a1 + 8);
          v35 = nullptr;
          *(_QWORD *)&v52 = 0;
          v36 = &v53[3 * v49 + 3];
          v37 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64, char *))(*(_QWORD *)v34 + 16LL);
LABEL_34:
          v37(v34, v53, v36, v30 + 64, v35);
LABEL_35:
          sub_5EB9D0(v5, *(__int64 **)(*(_QWORD *)a1 + 104LL), a2, v30);
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
            *(_QWORD *)&v52 = 0;
            qfree(s1);
          }
          return v55 - __readfsqword(0x28u);
        }
        v42 = s1;
        src = *(void **)(v30 + 16);
        if ( *((_QWORD *)&v52 + 1) < v33 )
        {
          v48 = *(_QWORD *)(v30 + 24);
          s1 = (char *)qvector_reserve(&s1, s1, v33, 1);
          v33 = v48;
          v42 = s1;
        }
        *(_QWORD *)&v52 = v33;
        v47 = v33;
        memmove(v42, src, na);
        s1[v47 - 1] = 0;
LABEL_50:
        v34 = *(_QWORD *)(a1 + 8);
        v36 = &v53[3 * v49 + 3];
        v37 = *(void (__fastcall **)(__int64, _QWORD *, _QWORD *, __int64, char *))(*(_QWORD *)v34 + 16LL);
        if ( (unsigned __int64)v52 <= 1 )
          v35 = nullptr;
        else
          v35 = s1;
        goto LABEL_34;
      }
      if ( get_tinfo_pdata(&s1, v32, 0) )
      {
        if ( !(_QWORD)v52 )
          goto LABEL_30;
        nb = s1;
        v41 = s1;
        if ( !strcmp(s1, "__gnuc_va_list") )
        {
          if ( *((_QWORD *)&v52 + 1) <= 9u )
          {
            s1 = (char *)qvector_reserve(&s1, nb, 10, 1);
            v41 = s1;
          }
          *(_QWORD *)&v52 = 10;
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
  return v55 - __readfsqword(0x28u);
}

