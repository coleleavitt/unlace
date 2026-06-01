bool __fastcall sub_4DF260(_QWORD *a1, __int64 *a2, __int64 *a3, unsigned __int64 a4, double a5)
{
  unsigned __int64 v6; // r15
  __int64 (*v7)(); // rax
  _QWORD *v8; // r13
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rbx
  const char *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  size_t v15; // r8
  const char *v16; // rdx
  const char *v17; // r9
  unsigned __int64 v18; // r10
  void *v19; // rdi
  size_t v20; // r10
  const char *v21; // rsi
  unsigned __int64 v22; // r8
  size_t v23; // r10
  __int64 v24; // r9
  size_t v25; // r11
  __int64 v26; // rsi
  const char *v27; // rdi
  unsigned __int64 v28; // rax
  char *v29; // rax
  unsigned __int64 v30; // rax
  const char *v31; // rcx
  const char *v32; // rsi
  char *v33; // rbx
  char *v34; // rbp
  const char *v35; // rcx
  const char *v36; // rsi
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r12
  __int64 v44; // rbp
  char *v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v49; // [rsp+8h] [rbp-A0h]
  size_t v50; // [rsp+20h] [rbp-88h]
  unsigned __int64 v51; // [rsp+20h] [rbp-88h]
  size_t v52; // [rsp+20h] [rbp-88h]
  unsigned __int64 v53; // [rsp+20h] [rbp-88h]
  unsigned __int64 v55; // [rsp+30h] [rbp-78h]
  size_t v56; // [rsp+30h] [rbp-78h]
  size_t v57; // [rsp+30h] [rbp-78h]
  unsigned __int64 v58; // [rsp+38h] [rbp-70h]
  const char *v59; // [rsp+38h] [rbp-70h]
  __int64 v60; // [rsp+38h] [rbp-70h]
  size_t v61; // [rsp+40h] [rbp-68h]
  size_t v62; // [rsp+40h] [rbp-68h]
  const char *v63; // [rsp+48h] [rbp-60h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  __int128 v65; // [rsp+58h] [rbp-50h]
  unsigned __int64 v66; // [rsp+68h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( a4 <= 3 )
  {
    if ( !under_debugger )
      interr(40936, a2, a3, a4, a5);
    BUG();
  }
  v6 = 0;
  v7 = *(__int64 (**)())(*a3 + 264);
  if ( v7 != vault_files_dirtree_widget_t__::vfunc_33 )
    v6 = ((__int64 (__fastcall *)(__int64 *))v7)(a3);
  v8 = (_QWORD *)*a1;
  v49 = *a1 + 32LL * a1[1];
  if ( *a1 == v49 )
    return (unsigned __int64)a2[1] > 1;
  while ( 1 )
  {
    v9 = *v8;
    if ( !*v8 )
      goto LABEL_6;
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 24LL))(*v8);
    if ( !v10 )
      goto LABEL_6;
    v11 = 0;
    while ( 1 )
    {
      v12 = (const char *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, v11);
      if ( v12 != (const char *)-1LL )
      {
        v13 = (_QWORD *)sub_4DF1E0(a3, v12);
        if ( v13 )
        {
          if ( v6 < v13[1] )
          {
            v14 = sub_4D89F0((__int64)(a3 + 141), *(_DWORD *)(*v13 + 24 * v6), 0);
            v15 = v14;
            v17 = v16;
            if ( v14 )
            {
              v18 = a2[1];
              if ( v18 > 1 )
              {
                v36 = (const char *)*a2;
                v37 = v18 - 1;
                v38 = v18 + 2;
                if ( a2[2] < v18 + 2 )
                {
                  v63 = v17;
                  v61 = v14;
                  v58 = v18 - 1;
                  v55 = a2[1];
                  v51 = v18 + 2;
                  v40 = qvector_reserve(a2, v36, v38, 1);
                  v17 = v63;
                  v15 = v61;
                  v37 = v58;
                  v18 = v55;
                  *a2 = v40;
                  v36 = (const char *)v40;
                  v38 = v51;
                }
                a2[1] = v38;
                v36[v18 + 1] = 0;
                *(_WORD *)(*a2 + v37) = 8236;
              }
              v19 = nullptr;
              src = nullptr;
              v65 = 0;
              v20 = v15 + 1;
              if ( v15 != -1 )
              {
                v59 = v17;
                v56 = v15;
                v52 = v15 + 1;
                src = (void *)qvector_reserve(&src, 0, v15 + 1, 1);
                v17 = v59;
                v19 = src;
                v15 = v56;
                v20 = v52;
              }
              v21 = v17;
              v50 = v15;
              *(_QWORD *)&v65 = v20;
              memmove(v19, v17, v15);
              *((_BYTE *)src + v50) = 0;
              v22 = v65;
              if ( (_QWORD)v65 )
              {
                v23 = v65 - 1;
                if ( (_QWORD)v65 != 1 )
                {
                  v24 = a2[1];
                  v25 = v65 - 1;
                  if ( v24 )
                  {
                    --v24;
                    v25 = v23 + v24;
                    v22 = v65 + v24;
                  }
                  v26 = *a2;
                  if ( a2[2] < v22 )
                  {
                    v62 = v25;
                    v60 = v24;
                    v57 = v65 - 1;
                    v53 = v22;
                    v41 = qvector_reserve(a2, v26, v22, 1);
                    v25 = v62;
                    v24 = v60;
                    *a2 = v41;
                    v26 = v41;
                    v23 = v57;
                    v22 = v53;
                  }
                  a2[1] = v22;
                  *(_BYTE *)(v26 + v25) = 0;
                  v21 = (const char *)src;
                  memcpy((void *)(v24 + *a2), src, v23);
                }
              }
              if ( src )
              {
                *(_QWORD *)&v65 = 0;
                qfree(src, v21);
              }
              v27 = &s1;
              if ( a2[1] )
                v27 = (const char *)*a2;
              v28 = qustrlen(v27);
              if ( v28 >= a4 )
                break;
            }
          }
        }
      }
      if ( v10 == ++v11 )
        goto LABEL_6;
    }
    if ( a4 >= v28 )
      goto LABEL_6;
    v29 = (char *)&s1;
    if ( a2[1] )
      v29 = (char *)*a2;
    src = v29;
    if ( skip_utf8(&src, a4 - 1) )
      return 0;
    v30 = a2[1];
    v31 = (const char *)src;
    v32 = (const char *)*a2;
    if ( v30 )
    {
      v33 = (char *)((_BYTE *)src - v32);
      if ( src == v32 )
      {
        if ( v32 )
        {
LABEL_53:
          a2[1] = 0;
          qfree(v32, v32, 0, v31);
          v30 = a2[1];
          v42 = 0;
          *a2 = 0;
          a2[2] = 0;
          if ( !v30 )
          {
            v33 = nullptr;
            v32 = nullptr;
            v43 = 4;
            v44 = 3;
LABEL_59:
            v46 = qvector_reserve(a2, v32, v43, 1);
            *a2 = v46;
            v32 = (const char *)v46;
            goto LABEL_51;
          }
          v32 = nullptr;
        }
        else
        {
          v42 = a2[2];
        }
      }
      else
      {
        v34 = v33 + 1;
        if ( v30 < (unsigned __int64)(v33 + 1) )
        {
LABEL_37:
          if ( a2[2] < (unsigned __int64)v34 )
          {
            v47 = qvector_reserve(a2, v32, v34, 1);
            *a2 = v47;
            v32 = (const char *)v47;
            v30 = a2[1];
          }
          memset((void *)&v32[v30], 0, (size_t)&v34[-v30]);
          v35 = (const char *)*a2;
          a2[1] = (__int64)v34;
          v31 = &v35[(_QWORD)v33];
        }
        else if ( (char *)v30 != v33 + 1 )
        {
          a2[1] = (__int64)v34;
        }
LABEL_48:
        *v31 = 0;
        v33 = (char *)a2[1];
        v42 = a2[2];
        v32 = (const char *)*a2;
        v30 = (unsigned __int64)v33;
        if ( !v33 )
        {
          v43 = 4;
          v44 = 3;
          goto LABEL_50;
        }
      }
      v33 = (char *)(v30 - 1);
      v44 = v30 + 2;
      v43 = v30 + 3;
      goto LABEL_50;
    }
    v31 = (const char *)((_BYTE *)src - &s1);
    v33 = (char *)((_BYTE *)src - &s1);
    if ( src != &s1 )
    {
      v31 = v32 - 1;
      v34 = v33 + 1;
      if ( v33 != (char *)-1LL )
        goto LABEL_37;
      goto LABEL_48;
    }
    if ( v32 )
      goto LABEL_53;
    v42 = a2[2];
    v43 = 4;
    v44 = 3;
LABEL_50:
    if ( v42 < v43 )
      goto LABEL_59;
LABEL_51:
    a2[1] = v43;
    v32[v44] = 0;
    v45 = &v33[*a2];
    *(_WORD *)v45 = -32542;
    v45[2] = -90;
LABEL_6:
    v8 += 4;
    if ( (_QWORD *)v49 == v8 )
      return (unsigned __int64)a2[1] > 1;
  }
}
