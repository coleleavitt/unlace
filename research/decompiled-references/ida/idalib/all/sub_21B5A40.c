void __fastcall sub_21B5A40(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // rax
  const void *v8; // r13
  signed __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  const void *v13; // r13
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  signed __int64 v16; // rbp
  __int64 v17; // r12
  unsigned __int64 v18; // rdx
  const char **v19; // rax
  size_t v20; // r9
  const char *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  const void *v27; // r14
  unsigned __int64 v28; // r15
  const void *v29; // rsi
  __int64 (__fastcall ***v30)(); // r14
  const char **v31; // r15
  const char **v32; // rbp
  size_t v33; // rax
  __int64 (__fastcall **v34)(); // rdi
  const char *v35; // rsi
  _BYTE *v36; // rax
  const char *v37; // r13
  size_t v38; // rax
  __int64 (__fastcall **v39)(); // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // [rsp+8h] [rbp-1B0h]
  __int64 v43; // [rsp+8h] [rbp-1B0h]
  const char *src; // [rsp+10h] [rbp-1A8h]
  void *srcb; // [rsp+10h] [rbp-1A8h]
  void *srcc; // [rsp+10h] [rbp-1A8h]
  void *srca; // [rsp+10h] [rbp-1A8h]
  __int64 (__fastcall **v48)(); // [rsp+20h] [rbp-198h] BYREF
  int v49; // [rsp+28h] [rbp-190h]
  __int128 v50; // [rsp+30h] [rbp-188h]
  void *dest; // [rsp+40h] [rbp-178h]
  char v52; // [rsp+48h] [rbp-170h]
  int v53; // [rsp+4Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+50h] [rbp-168h]
  void *ptr; // [rsp+60h] [rbp-158h] BYREF
  __m128i si128; // [rsp+68h] [rbp-150h]
  _BYTE v57[320]; // [rsp+78h] [rbp-140h] BYREF

  v5 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( (v5 & 4) != 0 )
    goto LABEL_20;
  if ( (v5 & 8) != 0 )
    goto LABEL_13;
  v6 = dword_26F71E0[*(unsigned __int8 *)(*(_QWORD *)a1 + 44LL)];
  if ( v6 == 1 )
  {
LABEL_20:
    v19 = *(const char ***)(a1 + 48);
    v20 = 0;
    v21 = *v19;
    if ( *v19 )
      v20 = strlen(*v19);
    v22 = sub_21B6660(a2, *(unsigned int *)(a1 + 40), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), v21, v20);
    v23 = *(unsigned int *)(a3 + 8);
    if ( v23 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v42 = v22;
      sub_2237220(a3, a3 + 16, v23 + 1, 8);
      v23 = *(unsigned int *)(a3 + 8);
      v22 = v42;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v23) = v22;
    v24 = *(_QWORD *)(a1 + 48);
    v25 = *(unsigned int *)(a3 + 12);
    v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v15;
    v13 = (const void *)(v24 + 8);
    v26 = 8LL * *(unsigned int *)(a1 + 56);
    v16 = v26 - 8;
    v27 = (const void *)(v24 + v26);
    v17 = (v26 - 8) >> 3;
    if ( v17 + v15 > v25 )
    {
      sub_2237220(a3, a3 + 16, v17 + v15, 8);
      v15 = *(unsigned int *)(a3 + 8);
    }
    if ( v13 == v27 )
      goto LABEL_19;
LABEL_18:
    memcpy((void *)(*(_QWORD *)a3 + 8 * v15), v13, v16);
    LODWORD(v15) = *(_DWORD *)(a3 + 8);
LABEL_19:
    *(_DWORD *)(a3 + 8) = v17 + v15;
    return;
  }
  if ( v6 )
  {
    if ( v6 != 2 )
    {
      if ( v6 == 3 )
      {
        v7 = *(unsigned int *)(a3 + 8);
        v8 = *(const void **)(a1 + 48);
        v9 = 8LL * *(unsigned int *)(a1 + 56);
        v10 = v9 >> 3;
        if ( (v9 >> 3) + v7 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, v10 + v7, 8);
          v7 = *(unsigned int *)(a3 + 8);
        }
        if ( v9 )
        {
          memcpy((void *)(*(_QWORD *)a3 + 8 * v7), v8, v9);
          LODWORD(v7) = *(_DWORD *)(a3 + 8);
        }
        *(_DWORD *)(a3 + 8) = v7 + v10;
      }
      return;
    }
LABEL_13:
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
            a2,
            *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a1 + 32));
    v12 = *(unsigned int *)(a3 + 8);
    if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v43 = v11;
      sub_2237220(a3, a3 + 16, v12 + 1, 8);
      v12 = *(unsigned int *)(a3 + 8);
      v11 = v43;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v12) = v11;
    v13 = *(const void **)(a1 + 48);
    v14 = *(unsigned int *)(a3 + 12);
    v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
    *(_DWORD *)(a3 + 8) = v15;
    v16 = 8LL * *(unsigned int *)(a1 + 56);
    v17 = v16 >> 3;
    v18 = (v16 >> 3) + v15;
    if ( v18 > v14 )
    {
      sub_2237220(a3, a3 + 16, v18, 8);
      v15 = *(unsigned int *)(a3 + 8);
    }
    if ( !v16 )
      goto LABEL_19;
    goto LABEL_18;
  }
  ptr = v57;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  p_ptr = &ptr;
  v48 = &off_2BEBEE0;
  v49 = 2;
  v52 = 0;
  v53 = 1;
  dest = nullptr;
  v50 = 0;
  sub_227B8B0(&v48, 0, 0, 0);
  v28 = *(_QWORD *)(a1 + 32);
  v29 = *(const void **)(a1 + 24);
  if ( v28 > *((_QWORD *)&v50 + 1) - (_QWORD)dest )
  {
    v30 = (__int64 (__fastcall ***)())sub_227BF10(&v48, v29, *(_QWORD *)(a1 + 32));
  }
  else
  {
    v30 = &v48;
    if ( v28 )
    {
      memcpy(dest, v29, *(_QWORD *)(a1 + 32));
      dest = (char *)dest + v28;
      v30 = &v48;
    }
  }
  v31 = *(const char ***)(a1 + 48);
  v32 = &v31[*(unsigned int *)(a1 + 56)];
  if ( v31 != v32 )
  {
    if ( *v31 )
    {
      src = *v31;
      v33 = strlen(*v31);
      v34 = v30[4];
      v35 = src;
      if ( v33 <= (char *)v30[3] - (char *)v34 )
      {
        if ( v33 )
        {
          srcc = (void *)v33;
          memcpy(v34, v35, v33);
          v30[4] = (__int64 (__fastcall **)())((char *)v30[4] + (_QWORD)srcc);
        }
      }
      else
      {
        sub_227BF10(v30, src, v33);
      }
    }
LABEL_35:
    while ( v32 != ++v31 )
    {
      while ( 1 )
      {
        v36 = v30[4];
        if ( v30[3] == (__int64 (__fastcall **)())v36 )
        {
          sub_227BF10(v30, ",", 1);
        }
        else
        {
          *v36 = 44;
          v30[4] = (__int64 (__fastcall **)())((char *)v30[4] + 1);
        }
        v37 = *v31;
        if ( !*v31 )
          break;
        v38 = strlen(*v31);
        v39 = v30[4];
        if ( v38 <= (char *)v30[3] - (char *)v39 )
        {
          if ( v38 )
          {
            srcb = (void *)v38;
            memcpy(v39, v37, v38);
            v30[4] = (__int64 (__fastcall **)())((char *)v30[4] + (_QWORD)srcb);
          }
          goto LABEL_35;
        }
        ++v31;
        sub_227BF10(v30, v37, v38);
        if ( v32 == v31 )
          goto LABEL_41;
      }
    }
  }
LABEL_41:
  v40 = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)a2 + 16LL))(a2, *p_ptr, p_ptr[1]);
  v41 = *(unsigned int *)(a3 + 8);
  if ( v41 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    srca = (void *)v40;
    sub_2237220(a3, a3 + 16, v41 + 1, 8);
    v41 = *(unsigned int *)(a3 + 8);
    v40 = (__int64)srca;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v41) = v40;
  ++*(_DWORD *)(a3 + 8);
  v48 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v48);
  if ( ptr != v57 )
    free(ptr);
}
