__int64 __fastcall sub_B760(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // r12
  const char *v8; // r15
  __int64 v9; // r14
  size_t v10; // rax
  size_t v11; // r13
  char *v12; // r10
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // r13
  const char **v20; // r14
  __int64 i; // rbx
  int v22; // r9d
  unsigned int v23; // ebp
  __int64 v25; // rax
  __int64 v26; // r13
  char *v27; // rsi
  unsigned __int64 v28; // rbp
  __int64 v29; // rsi
  int v30; // eax
  const char *v31; // r14
  size_t v32; // r15
  void *v33; // r15
  char v34; // dl
  char *v35; // rax
  char v36; // si
  char v37; // cl
  __int64 v38; // r13
  char *v39; // r8
  char v40; // al
  char v41; // cl
  __int64 v42; // rax
  int v43; // eax
  void *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // r15
  unsigned __int64 v48; // r14
  __int64 v49; // r13
  _BYTE *v50; // rsi
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v53; // r14
  _BYTE *v54; // rsi
  __int64 v55; // r13
  const void *v56; // r13
  size_t v57; // rax
  char *v58; // r9
  size_t v59; // r14
  char *v60; // r11
  void *v61; // rsi
  char *v62; // rdx
  __int64 v63; // rbp
  _BYTE *v64; // rsi
  unsigned __int64 v65; // r13
  __int64 v66; // r15
  __int64 v67; // r14
  char *v69; // [rsp+10h] [rbp-D8h]
  char *s1; // [rsp+18h] [rbp-D0h]
  char *s1b; // [rsp+18h] [rbp-D0h]
  char *s1c; // [rsp+18h] [rbp-D0h]
  char *s1a; // [rsp+18h] [rbp-D0h]
  char *s1e; // [rsp+18h] [rbp-D0h]
  char *s1d; // [rsp+18h] [rbp-D0h]
  __int64 v76; // [rsp+20h] [rbp-C8h]
  char *v77; // [rsp+20h] [rbp-C8h]
  void *v78; // [rsp+28h] [rbp-C0h]
  char *v79; // [rsp+28h] [rbp-C0h]
  void *v80; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v81; // [rsp+38h] [rbp-B0h]
  void *v82; // [rsp+48h] [rbp-A0h]
  void *ptr; // [rsp+50h] [rbp-98h] BYREF
  __int128 v84; // [rsp+58h] [rbp-90h]
  void *v85; // [rsp+68h] [rbp-80h]
  __int128 v86; // [rsp+70h] [rbp-78h]
  void *v87; // [rsp+80h] [rbp-68h]
  __int128 v88; // [rsp+88h] [rbp-60h]
  __int64 (__fastcall *v89)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [rsp+98h] [rbp-50h]
  __int64 v90; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v91; // [rsp+A8h] [rbp-40h]

  v5 = a5;
  v91 = __readfsqword(0x28u);
  if ( !a5 )
  {
    if ( !(_BYTE)byte_7AA10 && __cxa_guard_acquire(&byte_7AA10) )
    {
      qword_7AA20 = 0;
      xmmword_7AA28 = 0;
      __cxa_atexit((void (*)(void *))sub_A2B0, &qword_7AA20, &off_78C40);
      __cxa_guard_release(&byte_7AA10);
    }
    v5 = &qword_7AA20;
  }
  v8 = *(const char **)a4;
  if ( *(_QWORD *)a4 )
  {
    v9 = v5[1];
    v10 = strlen(*(const char **)a4);
    v11 = v10;
    v12 = (char *)v10;
    if ( v9 )
    {
      --v9;
      v12 = (char *)(v10 + v9);
    }
    v13 = *v5;
    v14 = (__int64)(v12 + 1);
    if ( v5[2] < (unsigned __int64)(v12 + 1) )
    {
      s1b = v12;
      v69 = v12 + 1;
      v42 = sub_29E60(v5, v13, v14, 1);
      v12 = s1b;
      v14 = (__int64)v69;
      *v5 = v42;
      v13 = v42;
    }
    v5[1] = v14;
    v12[v13] = 0;
    memmove((void *)(v9 + *v5), v8, v11);
  }
  v15 = v5[1];
  if ( !v15 )
  {
    v18 = *v5;
    v16 = 2;
    v17 = 1;
    if ( (unsigned __int64)v5[2] >= 2 )
      goto LABEL_10;
LABEL_23:
    v25 = sub_29E60(v5, v18, v16, 1);
    *v5 = v25;
    v18 = v25;
    goto LABEL_10;
  }
  v16 = v15 + 1;
  v17 = v5[1];
  v18 = *v5;
  --v15;
  if ( v5[2] < v16 )
    goto LABEL_23;
LABEL_10:
  v5[1] = v16;
  *(_BYTE *)(v18 + v17) = 0;
  *(_BYTE *)(*v5 + v15) = 32;
  if ( a2 > 1 && *(_QWORD *)(a4 + 56) )
  {
    v29 = *(_QWORD *)(a4 + 48);
    ptr = nullptr;
    v85 = nullptr;
    v87 = nullptr;
    v89 = sub_1D2A0;
    LOBYTE(v90) = 0;
    v84 = 0;
    v86 = 0;
    v88 = 0;
    sub_26220(&ptr, v29);
    v30 = sub_26730(&ptr, (unsigned int)a2, a3, 0);
    if ( v30 > 0 )
    {
      if ( a2 <= v30 )
        v30 = a2;
      a2 -= v30;
      a3 += 8LL * v30;
    }
    if ( v87 )
    {
      *(_QWORD *)&v88 = 0;
      j__free(v87);
    }
    if ( v85 )
    {
      *(_QWORD *)&v86 = 0;
      j__free(v85);
    }
    if ( ptr )
    {
      *(_QWORD *)&v84 = 0;
      j__free(ptr);
    }
  }
  v80 = nullptr;
  v81 = 0;
  v80 = (void *)sub_29E60(&v80, 0, 1, 1);
  *(_QWORD *)&v81 = 1;
  *(_BYTE *)v80 = 0;
  v19 = *(_QWORD *)(a4 + 40);
  if ( v19 )
  {
    if ( a2 > 1 )
    {
      s1 = *(char **)(a3 + 8);
      if ( strcmp(s1, "help") )
      {
        v76 = a4;
        v20 = *(const char ***)(a4 + 32);
        for ( i = 0; i != v19; ++i )
        {
          if ( !strcmp(s1, *v20) )
          {
            v23 = sub_B760(
                    a1,
                    a2 - 1,
                    (int)a3 + 8,
                    (int)v20,
                    (int)v5,
                    v22,
                    a3,
                    a1,
                    (int)&v80,
                    (int)s1,
                    v76,
                    v78,
                    (__int64)v80,
                    v81,
                    SDWORD2(v81),
                    v82,
                    (__int64)ptr,
                    v84,
                    *((void **)&v84 + 1),
                    (__int64)v85,
                    v86,
                    *((void **)&v86 + 1),
                    (__int64)v87,
                    v88,
                    SDWORD2(v88),
                    (int)v89,
                    v90);
            goto LABEL_19;
          }
          v20 += 8;
        }
        a4 = v76;
      }
      goto LABEL_26;
    }
    if ( a2 != 1 )
      goto LABEL_26;
    goto LABEL_25;
  }
  v31 = *(const char **)(a4 + 24);
  ptr = nullptr;
  v84 = 0;
  if ( v31 )
  {
    v32 = strlen(v31);
    ptr = (void *)sub_29E60(&ptr, 0, v32 + 1, 1);
    *(_QWORD *)&v84 = v32 + 1;
    memmove(ptr, v31, v32);
    *((_BYTE *)ptr + v32) = 0;
    if ( (_QWORD)v84 )
    {
      v33 = ptr;
      v34 = *(_BYTE *)ptr;
      if ( *(_BYTE *)ptr )
      {
        v35 = (char *)ptr;
        v36 = 0;
        while ( 1 )
        {
          v37 = v35[1];
          if ( v34 != 34 )
          {
            v37 = v34;
            v34 = v35[1];
            goto LABEL_48;
          }
          while ( v37 != 34 )
          {
            v36 ^= 1u;
            if ( !v37 )
            {
LABEL_50:
              v38 = ((_QWORD)v84 != 1) + v19;
              goto LABEL_51;
            }
            v34 = v35[2];
            ++v35;
LABEL_48:
            if ( v36 )
              goto LABEL_49;
            if ( v37 != 32 )
            {
LABEL_57:
              v39 = v35 + 1;
              if ( !v34 )
                goto LABEL_50;
              v37 = v35[2];
              if ( v34 == 34 )
                goto LABEL_62;
              goto LABEL_59;
            }
            while ( 1 )
            {
              ++v19;
              v39 = v35 + 1;
              if ( !v34 )
                goto LABEL_50;
              v37 = v35[2];
              if ( v34 == 34 )
                break;
LABEL_59:
              v40 = v37;
              v41 = v34;
              v34 = v40;
              v35 = v39;
              if ( v41 != 32 )
                goto LABEL_57;
            }
LABEL_62:
            v35 = v39;
          }
          v34 = v35[2];
          ++v35;
LABEL_49:
          ++v35;
          if ( !v34 )
            goto LABEL_50;
        }
      }
      v38 = 1;
      if ( (_QWORD)v84 == 1 )
      {
        if ( a2 > 1 )
        {
          s1c = (char *)ptr;
          v46 = strcmp(*(const char **)(a3 + 8), "help");
          v44 = s1c;
          if ( !v46 )
            goto LABEL_69;
          goto LABEL_86;
        }
LABEL_54:
        v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 16LL))(
                a1,
                *(unsigned int *)(a4 + 16),
                (unsigned int)a2,
                a3);
        if ( ptr )
        {
          *(_QWORD *)&v84 = 0;
          j__free(ptr);
        }
        goto LABEL_19;
      }
LABEL_51:
      if ( a2 <= 1 )
      {
        if ( a2 == 1 && v38 )
        {
          if ( ptr )
          {
            *(_QWORD *)&v84 = 0;
            j__free(ptr);
          }
LABEL_25:
          v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a4);
          if ( v23 == -2 )
            goto LABEL_26;
          goto LABEL_19;
        }
        goto LABEL_54;
      }
      if ( strcmp(*(const char **)(a3 + 8), "help") )
      {
        if ( v38 == a2 - 1 )
          goto LABEL_54;
        goto LABEL_86;
      }
LABEL_68:
      v44 = v33;
      goto LABEL_69;
    }
  }
  if ( a2 <= 1 )
    goto LABEL_54;
  v43 = strcmp(*(const char **)(a3 + 8), "help");
  v33 = ptr;
  if ( !v43 )
    goto LABEL_68;
LABEL_86:
  v47 = v81;
  if ( (_QWORD)v81 )
  {
    v48 = v81 + 1;
    v49 = v81;
    v47 = v81 - 1;
  }
  else
  {
    v48 = 2;
    v49 = 1;
  }
  v50 = v80;
  if ( *((_QWORD *)&v81 + 1) < v48 )
  {
    v80 = (void *)sub_29E60(&v80, v80, v48, 1);
    v50 = v80;
  }
  *(_QWORD *)&v81 = v48;
  v50[v49] = 0;
  *((_BYTE *)v80 + v47) = 39;
  v51 = 1;
  do
  {
    v56 = *(const void **)(a3 + 8 * v51);
    if ( v56 )
    {
      s1a = (char *)v81;
      v57 = strlen(*(const char **)(a3 + 8 * v51));
      v58 = s1a;
      v59 = v57;
      v60 = (char *)v57;
      if ( s1a )
      {
        v58 = s1a - 1;
        v60 = &s1a[v57 - 1];
      }
      v61 = v80;
      v62 = v60 + 1;
      if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)(v60 + 1) )
      {
        v79 = v60;
        v77 = v58;
        s1d = v60 + 1;
        v80 = (void *)sub_29E60(&v80, v80, v62, 1);
        v60 = v79;
        v61 = v80;
        v58 = v77;
        v62 = s1d;
      }
      *(_QWORD *)&v81 = v62;
      v60[(_QWORD)v61] = 0;
      memmove((char *)v80 + (_QWORD)v58, v56, v59);
    }
    v55 = v81;
    if ( (_QWORD)v81 )
    {
      v52 = v81 + 1;
      v53 = v81;
      v54 = v80;
      v55 = v81 - 1;
      if ( *((_QWORD *)&v81 + 1) >= (unsigned __int64)(v81 + 1) )
        goto LABEL_92;
    }
    else
    {
      v54 = v80;
      v52 = 2;
      v53 = 1;
      if ( *((_QWORD *)&v81 + 1) >= 2u )
        goto LABEL_92;
    }
    s1e = (char *)v52;
    v80 = (void *)sub_29E60(&v80, v54, v52, 1);
    v52 = (__int64)s1e;
    v54 = v80;
LABEL_92:
    *(_QWORD *)&v81 = v52;
    ++v51;
    v54[v53] = 0;
    *((_BYTE *)v80 + v55) = 32;
  }
  while ( a2 > (int)v51 );
  v63 = v81;
  if ( (unsigned __int64)v81 <= 1 )
    goto LABEL_103;
  v64 = v80;
  v67 = v81 - 1;
  if ( *((char *)v80 + v81 - 2) != 32 )
    goto LABEL_112;
  if ( v67 > 1 )
  {
    if ( *((_QWORD *)&v81 + 1) < (unsigned __int64)v67 )
    {
      v80 = (void *)sub_29E60(&v80, v80, v81 - 1, 1);
      v64 = v80;
    }
    *(_QWORD *)&v81 = v63 - 1;
    v64[v63 - 2] = 0;
    v63 = v81;
LABEL_103:
    v64 = v80;
    v65 = 2;
    v66 = 1;
    if ( !v63 )
    {
LABEL_104:
      if ( *((_QWORD *)&v81 + 1) >= v65 )
        goto LABEL_105;
      goto LABEL_110;
    }
LABEL_111:
    v67 = v63 - 1;
LABEL_112:
    v65 = v63 + 1;
    v66 = v63;
    v63 = v67;
    goto LABEL_104;
  }
  if ( !v80 )
    goto LABEL_112;
  *(_QWORD *)&v81 = 0;
  j__free(v80);
  v63 = v81;
  v64 = nullptr;
  v80 = nullptr;
  *((_QWORD *)&v81 + 1) = 0;
  if ( (_QWORD)v81 )
    goto LABEL_111;
  v65 = 2;
  v66 = 1;
LABEL_110:
  v80 = (void *)sub_29E60(&v80, v64, v65, 1);
  v64 = v80;
LABEL_105:
  *(_QWORD *)&v81 = v65;
  v64[v66] = 0;
  *((_BYTE *)v80 + v63) = 39;
  v44 = ptr;
LABEL_69:
  if ( v44 )
  {
    *(_QWORD *)&v84 = 0;
    j__free(v44);
  }
LABEL_26:
  v26 = v5[1];
  v27 = (char *)*v5;
  v28 = v26 - 1;
  if ( v26 - 1 <= 1 )
  {
    if ( v27 )
    {
      v5[1] = 0;
      j__free(v27);
      *v5 = 0;
      v5[2] = 0;
    }
  }
  else
  {
    if ( v5[2] < v28 )
    {
      v45 = sub_29E60(v5, v27, v26 - 1, 1);
      *v5 = v45;
      v27 = (char *)v45;
    }
    v5[1] = v28;
    v27[v26 - 2] = 0;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD), void **, __int64 *))(*(_QWORD *)a1 + 32LL))(
          a1,
          a4,
          sub_1D2A0,
          &v80,
          v5);
  if ( v23 == -2 )
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
LABEL_19:
  if ( v80 )
  {
    *(_QWORD *)&v81 = 0;
    j__free(v80);
  }
  return v23;
}

