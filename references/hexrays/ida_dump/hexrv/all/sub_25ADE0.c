__int64 __fastcall sub_25ADE0(
        __int64 a1,
        int a2,
        unsigned int a3,
        void (__fastcall ***a4)(_QWORD, _QWORD, void *, __int64),
        __int64 *a5,
        int a6,
        int a7,
        char *s)
{
  __int64 v11; // rbp
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  _BYTE *v15; // rsi
  __int64 v16; // rbp
  unsigned int v17; // r13d
  char *v18; // r14
  __int64 v19; // r9
  size_t v20; // r10
  signed __int64 v21; // r11
  __int64 v22; // rsi
  signed __int64 v23; // rdx
  __int64 v24; // rcx
  void (__fastcall *v25)(_QWORD, _QWORD, void *, __int64); // r9
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  char *v28; // rbp
  __int64 v29; // rsi
  _BYTE *v30; // rdi
  char *v31; // rax
  char v32; // dl
  _BYTE *v33; // rdi
  char *v34; // rax
  char v35; // dl
  char *v36; // rax
  char v37; // dl
  __int64 v38; // rbp
  size_t v39; // rax
  size_t v40; // r9
  __int64 v41; // rsi
  void *v42; // rdi
  size_t v43; // rdx
  __int64 v44; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  signed __int64 v48; // [rsp+8h] [rbp-4C0h]
  size_t v49; // [rsp+8h] [rbp-4C0h]
  size_t v50; // [rsp+8h] [rbp-4C0h]
  unsigned __int64 v51; // [rsp+8h] [rbp-4C0h]
  size_t v52; // [rsp+10h] [rbp-4B8h]
  __int64 v53; // [rsp+18h] [rbp-4B0h]
  signed __int64 v54; // [rsp+20h] [rbp-4A8h]
  __int64 v56; // [rsp+30h] [rbp-498h]
  _BYTE *v59; // [rsp+40h] [rbp-488h] BYREF
  __int128 v60; // [rsp+48h] [rbp-480h]
  _BYTE *v61; // [rsp+60h] [rbp-468h] BYREF
  __int128 v62; // [rsp+68h] [rbp-460h]
  char src[1023]; // [rsp+80h] [rbp-448h] BYREF
  char v64; // [rsp+47Fh] [rbp-49h] BYREF
  char v65; // [rsp+480h] [rbp-48h] BYREF
  unsigned __int64 v66; // [rsp+488h] [rbp-40h]

  v11 = a5[1];
  v66 = __readfsqword(0x28u);
  if ( !v11 )
  {
    v15 = (_BYTE *)*a5;
    v14 = 1;
    v13 = 2;
    if ( (unsigned __int64)a5[2] >= 2 )
      goto LABEL_3;
LABEL_50:
    v51 = v13;
    v47 = qvector_reserve(a5, v15, v13, 1);
    v13 = v51;
    *a5 = v47;
    v15 = (_BYTE *)v47;
    goto LABEL_3;
  }
  v13 = v11 + 1;
  v14 = v11;
  v15 = (_BYTE *)*a5;
  --v11;
  if ( a5[2] < v13 )
    goto LABEL_50;
LABEL_3:
  a5[1] = v13;
  v15[v11] = 32;
  v16 = 0;
  *(_BYTE *)(*a5 + v14) = 0;
  v17 = 0;
  v56 = a6;
  while ( 1 )
  {
    sub_325750(a5, 12, v13, a4);
    v18 = strchr(s, 10);
    if ( !v18 )
      v18 = &s[strlen(s)];
    v19 = a5[1];
    v20 = v18 - s;
    v21 = v18 - s;
    if ( v19 )
    {
      --v19;
      v21 = v20 + v19;
    }
    v22 = *a5;
    v23 = v21 + 1;
    if ( a5[2] < (unsigned __int64)(v21 + 1) )
    {
      v54 = v21;
      v53 = v19;
      v48 = v21 + 1;
      v27 = qvector_reserve(a5, v22, v23, 1);
      v21 = v54;
      v19 = v53;
      v20 = v18 - s;
      v23 = v48;
      *a5 = v27;
      v22 = v27;
    }
    a5[1] = v23;
    ++v17;
    *(_BYTE *)(v22 + v21) = 0;
    memmove((void *)(v19 + *a5), s, v20);
    sub_325830(a5, 12);
    v24 = *a5;
    v25 = **a4;
    if ( !*v18 )
      break;
    s = v18 + 1;
    v25(a4, a3, &unk_3F4053, v24);
    if ( v16 )
    {
      v13 = a5[1];
      v26 = v16 + 1;
      if ( v13 < v16 + 1 )
      {
        v41 = *a5;
        if ( a5[2] < v26 )
        {
          v44 = qvector_reserve(a5, v41, v16 + 1, 1);
          v13 = a5[1];
          *a5 = v44;
          v41 = v44;
        }
        memset((void *)(v41 + v13), 0, v26 - v13);
        a5[1] = v26;
      }
      else if ( v26 != v13 )
      {
        a5[1] = v26;
      }
      *(_BYTE *)(*a5 + v16) = 0;
    }
    else
    {
      src[0] = 0;
      v28 = (char *)add_spaces(src, 1024, v56);
      if ( a1 )
      {
        v61 = nullptr;
        v29 = *(int *)(a1 + 16);
        v62 = 0;
        tag_addr(&v61, v29, 0);
        if ( v28 >= &v65 )
        {
          if ( !under_debugger )
            sub_37DDE0(520);
LABEL_57:
          BUG();
        }
        v30 = v61;
        v31 = v61;
        if ( v28 == &v64 )
        {
LABEL_47:
          v64 = 0;
          v28 = &v64;
        }
        else
        {
          while ( 1 )
          {
            v32 = *v31++;
            *v28 = v32;
            if ( !v32 )
              break;
            if ( ++v28 == &v64 )
              goto LABEL_47;
          }
        }
        if ( v30 )
        {
          *(_QWORD *)&v62 = 0;
          qfree(v30);
        }
        v59 = nullptr;
        v60 = 0;
        tag_addr(&v59, a2 | 0x80000000, 0);
        if ( v28 >= &v65 )
        {
          if ( !under_debugger )
            sub_37DDE0(520);
          goto LABEL_57;
        }
        v33 = v59;
        v34 = v59;
        if ( v28 == &v64 )
        {
LABEL_46:
          v64 = 0;
          v28 = &v64;
        }
        else
        {
          while ( 1 )
          {
            v35 = *v34++;
            *v28 = v35;
            if ( !v35 )
              break;
            if ( ++v28 == &v64 )
              goto LABEL_46;
          }
        }
        if ( v33 )
        {
          *(_QWORD *)&v60 = 0;
          qfree(v33);
        }
      }
      if ( v28 >= &v65 )
      {
        if ( !under_debugger )
          sub_37DDE0(520);
        goto LABEL_57;
      }
      v36 = (char *)&unk_405ED6;
      if ( v28 == &v64 )
      {
LABEL_42:
        v64 = 0;
      }
      else
      {
        while ( 1 )
        {
          v37 = *v36++;
          *v28 = v37;
          if ( !v37 )
            break;
          if ( ++v28 == &v64 )
            goto LABEL_42;
        }
      }
      v38 = add_spaces(src, 1024, a7);
      v39 = strlen(src);
      v40 = v39;
      if ( v39 )
      {
        v42 = (void *)*a5;
        v43 = v39 + 1;
        if ( a5[2] < v39 + 1 )
        {
          v50 = v39 + 1;
          v52 = v39;
          v46 = qvector_reserve(a5, *a5, v43, 1);
          v40 = v52;
          v43 = v50;
          *a5 = v46;
          v42 = (void *)v46;
        }
        a5[1] = v43;
        v49 = v40;
        memmove(v42, src, v40);
        *(_BYTE *)(*a5 + v49) = 0;
      }
      else
      {
        a5[1] = 0;
      }
      v16 = v38 - (_QWORD)src;
    }
  }
  v25(a4, a3, &unk_3F4053, v24);
  return v17;
}
