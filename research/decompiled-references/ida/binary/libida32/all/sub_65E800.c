__int64 __fastcall sub_65E800(__int64 a1, __int64 a2, __int64 a3, const char *a4, int *a5, const char *a6, char a7)
{
  size_t v8; // rax
  size_t v9; // r13
  size_t v10; // r12
  __int64 v11; // rax
  __int64 v12; // r12
  void *v13; // rsi
  unsigned int v14; // eax
  void *v15; // rdi
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  const char *v19; // rsi
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rax
  const char *v23; // rbx
  unsigned int v24; // eax
  char *v25; // r13
  const char *v26; // r15
  unsigned int v27; // eax
  size_t v28; // rax
  int v29; // r12d
  size_t v30; // rbx
  int v31; // eax
  char *v32; // rax
  char *v33; // r15
  int v34; // r15d
  char *v35; // rdx
  __int64 v36; // rbp
  __int64 v37; // rbx
  char *v38; // rax
  void *v39; // rdi
  void (__fastcall **v40)(_QWORD); // rax
  void (__fastcall *v41)(char *); // rax
  size_t v43; // rax
  size_t v44; // r12
  size_t v45; // rax
  size_t v46; // rbp
  void (__fastcall *v47)(char *); // rax
  void *v48; // rdi
  void (__fastcall *v49)(char *); // rdx
  void (__fastcall *v50)(char *); // rax
  void *v51; // rdi
  size_t v52; // r13
  void *v53; // rdi
  size_t v54; // r14
  int v56; // [rsp+8h] [rbp-940h]
  unsigned int v58; // [rsp+34h] [rbp-914h]
  _DWORD *v59; // [rsp+38h] [rbp-910h]
  unsigned int v63; // [rsp+58h] [rbp-8F0h]
  unsigned __int8 v64; // [rsp+5Fh] [rbp-8E9h]
  _QWORD v65[2]; // [rsp+60h] [rbp-8E8h] BYREF
  void *ptr; // [rsp+70h] [rbp-8D8h]
  __int128 v67; // [rsp+78h] [rbp-8D0h]
  void *dest; // [rsp+90h] [rbp-8B8h] BYREF
  __int128 v69; // [rsp+98h] [rbp-8B0h]
  void *v70; // [rsp+B0h] [rbp-898h] BYREF
  __int128 v71; // [rsp+B8h] [rbp-890h]
  const char *v72; // [rsp+C8h] [rbp-880h]
  void *v73; // [rsp+E0h] [rbp-868h]
  __int128 v74; // [rsp+E8h] [rbp-860h]
  char src[1024]; // [rsp+100h] [rbp-848h] BYREF
  char s[1032]; // [rsp+500h] [rbp-448h] BYREF
  unsigned __int64 v77; // [rsp+908h] [rbp-40h]

  v77 = __readfsqword(0x28u);
  v58 = a7 & 8;
  if ( (a7 & 8) != 0 )
  {
    dest = nullptr;
    v70 = nullptr;
    v69 = 0;
    v71 = 0;
    if ( !a6 )
      goto LABEL_95;
    v8 = strlen(a6);
    v9 = v8 + 1;
    v10 = v8;
    v70 = (void *)qvector_reserve(&v70, 0, v8 + 1, 1);
    *(_QWORD *)&v71 = v9;
    memmove(v70, a6, v10);
    *((_BYTE *)v70 + v10) = 0;
    if ( (unsigned __int64)v71 > 1 )
    {
      v11 = operator new(0x30u);
      v12 = v11 + 16;
      v59 = (_DWORD *)v11;
      *(_OWORD *)(v11 + 16) = 0;
      *(_QWORD *)v11 = &off_2B0D3B0;
      v13 = v70;
      *(_DWORD *)(v11 + 8) = 1;
      *(_OWORD *)(v11 + 32) = 0;
      v14 = qregcomp(v11 + 16, v13, ((unsigned __int8)(a7 & 4) >> 2) ^ 1u);
      if ( v14 )
      {
        qregerror(v14, v12, src, 1024);
        v45 = strlen(src);
        v46 = v45;
        if ( v45 )
        {
          v53 = dest;
          v54 = v45 + 1;
          if ( *((_QWORD *)&v69 + 1) < v45 + 1 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v45 + 1, 1);
            v53 = dest;
          }
          *(_QWORD *)&v69 = v54;
          memmove(v53, src, v46);
          *((_BYTE *)dest + v46) = 0;
        }
        else
        {
          *(_QWORD *)&v69 = 0;
        }
        if ( v59 )
        {
          v47 = *(void (__fastcall **)(char *))(*(_QWORD *)v59 + 16LL);
          if ( v47 == sub_657B40 )
          {
            *(_QWORD *)v59 = &off_2B0D3B0;
            qregfree(v12);
            operator delete(v59, 0x30u);
          }
          else
          {
            v47((char *)v59);
          }
          v48 = v70;
LABEL_93:
          if ( v48 )
          {
            *(_QWORD *)&v71 = 0;
            qfree(v48);
          }
LABEL_95:
          sub_375400();
        }
      }
      else if ( v59 )
      {
        if ( v59[2] )
        {
          v15 = v70;
          if ( !v70 )
            goto LABEL_9;
          goto LABEL_8;
        }
        v49 = **(void (__fastcall ***)(char *))v59;
        if ( v49 == sub_657CC0 )
        {
          v50 = *(void (__fastcall **)(char *))(*(_QWORD *)v59 + 16LL);
          if ( v50 == sub_657B40 )
          {
            *(_QWORD *)v59 = &off_2B0D3B0;
            qregfree(v12);
            operator delete(v59, 0x30u);
            v15 = v70;
            if ( !v70 )
              goto LABEL_9;
LABEL_8:
            *(_QWORD *)&v71 = 0;
            qfree(v15);
            goto LABEL_9;
          }
          v50((char *)v59);
          v15 = v70;
          if ( v70 )
            goto LABEL_8;
        }
        else
        {
          v49((char *)v59);
          v15 = v70;
          if ( v70 )
            goto LABEL_8;
        }
LABEL_9:
        if ( dest )
        {
          *(_QWORD *)&v69 = 0;
          qfree(dest);
        }
        goto LABEL_12;
      }
    }
    v48 = v70;
    goto LABEL_93;
  }
  v59 = nullptr;
LABEL_12:
  v70 = nullptr;
  v71 = 0;
  v74 = 0;
  v73 = nullptr;
  linearray_t_ctr(&v70, a2);
  linearray_t_set_place();
  LODWORD(v19) = a7 & 1;
  if ( (a7 & 1) == 0 )
    linearray_t_down(&v70);
  v63 = 0;
  v20 = *a5 - (((a7 & 2) == 0) - 1LL);
  if ( (a7 & 0x20) == 0 )
  {
    LODWORD(v19) = 3;
    v63 = sub_39D720(a1, 3);
  }
  if ( (a7 & 0x10) == 0 )
    callui(25, (int)v19, (int)&callui, v16, v17, v18);
  while ( 1 )
  {
    v23 = v72;
    if ( (a7 & 0x10) == 0 )
      callui(27, (int)v19, (int)&callui, 0, v17, v18);
    if ( (a7 & 0x20) == 0 )
    {
      v24 = (*(__int64 (__fastcall **)(const char *, __int64))(*(_QWORD *)v72 + 8LL))(v72, a2);
      if ( !(_BYTE)v24 )
        show_auto(v24, 0);
    }
    v19 = a4;
    if ( (a7 & 1) != 0 )
    {
      if ( (int)l_compare2(v23, a4, a2) > 0 || (unsigned __int8)linearray_t_ending(&v70, a4) )
      {
LABEL_79:
        v58 = 0;
        if ( (a7 & 0x20) != 0 )
          goto LABEL_62;
        goto LABEL_77;
      }
      v21 = linearray_t_down(&v70);
    }
    else
    {
      if ( (int)l_compare2(v23, a4, a2) < 0 || (unsigned __int8)linearray_t_beginning(&v70) )
        goto LABEL_79;
      v21 = linearray_t_up(&v70);
    }
    v19 = haystack;
    ptr = nullptr;
    v67 = 0;
    if ( *(_QWORD *)(v21 + 8) )
      v19 = *(const char **)v21;
    v22 = tag_remove();
    if ( v22 > 0 && (!v20 || v20 < v22) )
      break;
LABEL_26:
    if ( ptr )
    {
      *(_QWORD *)&v67 = 0;
      qfree(ptr);
    }
    v20 = 0;
  }
  v25 = (char *)ptr;
  v26 = (char *)ptr + v20;
  if ( (a7 & 8) == 0 )
  {
    if ( !a6 )
      goto LABEL_59;
    v28 = strlen(a6);
    v29 = *a6;
    v30 = v28;
    if ( (a7 & 4) == 0 )
    {
      v64 = *a6;
      qstrlwr(v26);
      v29 = tolower(v64);
    }
    while ( 1 )
    {
      LODWORD(v19) = v29;
      v32 = strchr(v26, v29);
      v33 = v32;
      if ( !v32 )
        goto LABEL_26;
      if ( (a7 & 4) != 0 )
        v31 = strncmp(v32, a6, v30);
      else
        v31 = strncasecmp(v32, a6, v30);
      if ( !v31 && ((a7 & 0x80) == 0 || !(unsigned __int8)sub_657B70(v25, v33 - v25, v30)) )
      {
        if ( (a7 & 1) != 0 )
          linearray_t_up(&v70);
        v19 = v72;
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a3 + 24LL))(a3, v72);
        v34 = (_DWORD)v33 - (_DWORD)v25;
        v58 = 1;
        v25 = (char *)ptr;
        *a5 = v34;
        goto LABEL_59;
      }
      v26 = v33 + 1;
    }
  }
  LODWORD(v19) = (_DWORD)ptr + v20;
  v27 = qregexec(v59 + 4, (char *)ptr + v20, 1, v65, 4 * (unsigned int)(v20 != 0));
  if ( v27 == 17 )
    goto LABEL_26;
  dest = nullptr;
  v69 = 0;
  if ( v27 )
  {
    qregerror(v27, v59 + 4, s, 1024);
    v43 = strlen(s);
    v44 = v43;
    if ( v43 )
    {
      v51 = dest;
      v52 = v43 + 1;
      if ( *((_QWORD *)&v69 + 1) < v43 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v43 + 1, 1);
        v51 = dest;
      }
      *(_QWORD *)&v69 = v52;
      memmove(v51, s, v44);
      *((_BYTE *)dest + v44) = 0;
    }
    else
    {
      *(_QWORD *)&v69 = 0;
    }
    sub_375400();
  }
  if ( a7 < 0 )
  {
    LODWORD(v19) = v20 + LODWORD(v65[0]);
    if ( (unsigned __int8)sub_657B70(v25, v20 + v65[0], v65[1] - v65[0]) )
    {
      if ( dest )
      {
        *(_QWORD *)&v69 = 0;
        qfree(dest);
      }
      goto LABEL_26;
    }
  }
  if ( (a7 & 1) != 0 )
    linearray_t_up(&v70);
  v19 = v72;
  (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)a3 + 24LL))(a3, v72);
  v58 = 1;
  *a5 = LODWORD(v65[0]) + v20;
  if ( dest )
  {
    *(_QWORD *)&v69 = 0;
    qfree(dest);
  }
  v25 = (char *)ptr;
LABEL_59:
  if ( v25 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v25);
  }
  if ( (a7 & 0x20) == 0 )
  {
LABEL_77:
    show_auto(0xFFFFFFFFLL, 0);
    v19 = (const char *)v63;
    sub_39D720(a1, v63);
  }
LABEL_62:
  linearray_t_dtr(&v70);
  if ( v73 )
  {
    *(_QWORD *)&v74 = 0;
    qfree(v73);
  }
  v35 = (char *)v70;
  if ( v70 )
  {
    v36 = v71;
    if ( (_QWORD)v71 )
    {
      v37 = 0;
      do
      {
        v38 = &v35[24 * v37];
        v39 = *(void **)v38;
        if ( *(_QWORD *)v38 )
        {
          *((_QWORD *)v38 + 1) = 0;
          qfree(v39);
          v35 = (char *)v70;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v71 = 0;
    qfree(v35);
  }
  if ( v59 )
  {
    v56 = v59[2];
    v59[2] = v56 - 1;
    if ( v56 == 1 )
    {
      v40 = *(void (__fastcall ***)(_QWORD))v59;
      if ( **(void (__fastcall ***)(char *))v59 == sub_657CC0 )
      {
        v41 = (void (__fastcall *)(char *))v40[2];
        if ( v41 == sub_657B40 )
        {
          *(_QWORD *)v59 = &off_2B0D3B0;
          qregfree(v59 + 4);
          operator delete(v59, 0x30u);
        }
        else
        {
          ((void (__fastcall *)(_DWORD *, const char *))v41)(v59, v19);
        }
      }
      else
      {
        ((void (__fastcall *)(_DWORD *, const char *))*v40)(v59, v19);
      }
    }
  }
  return v58;
}

