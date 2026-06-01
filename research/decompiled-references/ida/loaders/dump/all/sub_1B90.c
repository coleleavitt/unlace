unsigned __int64 __fastcall sub_1B90(__int64 a1, __int16 a2, double a3, double a4)
{
  char v4; // r12
  unsigned __int64 v5; // rbx
  char *v6; // r13
  int v7; // r14d
  char *v8; // r15
  int v9; // eax
  int v10; // eax
  bool v11; // al
  char *v12; // rax
  char *v13; // rcx
  int v14; // edx
  char v15; // r13
  char **v16; // rbx
  __int64 v17; // rbp
  char **v18; // r15
  char *v19; // r14
  char **p_endptr; // rsi
  const char *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  bool v26; // dl
  unsigned __int64 v27; // rax
  char *v28; // rax
  char v29; // ah
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v33; // rbp
  __int64 v34; // rdi
  __int64 ph; // rbx
  char v36; // cl
  int v37; // eax
  unsigned __int64 v38; // [rsp+8h] [rbp-24B0h]
  int v40; // [rsp+20h] [rbp-2498h]
  bool v41; // [rsp+27h] [rbp-2491h]
  char *v42; // [rsp+28h] [rbp-2490h]
  unsigned __int64 v43; // [rsp+30h] [rbp-2488h]
  bool v44; // [rsp+38h] [rbp-2480h]
  char *v45; // [rsp+38h] [rbp-2480h]
  char *v46; // [rsp+38h] [rbp-2480h]
  char *v47; // [rsp+40h] [rbp-2478h]
  char *endptr; // [rsp+58h] [rbp-2460h] BYREF
  char *nptr[1024]; // [rsp+60h] [rbp-2458h] BYREF
  char v50[10]; // [rsp+2066h] [rbp-452h] BYREF
  char v51; // [rsp+2070h] [rbp-448h] BYREF
  unsigned __int64 v52; // [rsp+2478h] [rbp-40h]

  v4 = 0;
  v5 = 0;
  v6 = &v51;
  v52 = __readfsqword(0x28u);
  word_5102 = a2;
  v50[0] = 0;
  byte_5120 = HIBYTE(a2) & 1;
  qword_5118 = -1;
  qword_5110 = -1;
  v40 = 0;
  v42 = nullptr;
  v43 = 0;
  v41 = 0;
  v38 = 0;
  while ( qlgets(v6, 1024, a1) )
  {
    strrpl(v6, 45, 32);
    v7 = sub_1350(v6, nptr);
    if ( !v7 )
      continue;
    v8 = nptr[0];
    v9 = (unsigned __int8)*nptr[0];
    if ( (_BYTE)v9 == 59 || (_BYTE)v9 == 35 )
      continue;
    ++v40;
    v10 = v9 - 42;
    if ( !v10 )
      v10 = *((unsigned __int8 *)nptr[0] + 1);
    v11 = v7 == 1 && v10 == 0;
    if ( v11 )
    {
      v41 = v11;
      v43 = v5 - v38;
      continue;
    }
    endptr = nptr[0];
    if ( v41 )
      v38 = strtoull(nptr[0], &endptr, 8);
    else
      v38 = strtoull(nptr[0], &endptr, 16);
    v12 = v42;
    v13 = (char *)(endptr - v8);
    if ( (unsigned __int64)v42 < endptr - v8 )
      v12 = (char *)(endptr - v8);
    v42 = v12;
    if ( v40 == 1 )
    {
      v46 = (char *)(endptr - v8);
      qstrncpy(v50, endptr, 10);
      v13 = v46;
    }
    if ( v43 && v5 < v38 )
    {
      v47 = v13;
      v33 = v5;
      do
      {
        v34 = v33;
        v33 += v43;
        sub_1260(v34, v33);
      }
      while ( v33 < v38 );
      v5 = v33;
      v13 = v47;
    }
    if ( v50[0] || (unsigned __int64)v13 > 3 )
    {
      v44 = !v41 && v40 > 1;
      if ( v44 )
      {
        v41 = 0;
        if ( v5 != v38 )
        {
          endptr = v8;
          if ( v5 == strtoull(v8, &endptr, 8) )
          {
            v41 = v44;
            endptr = v8;
            v38 = strtoull(v8, &endptr, 8);
          }
        }
      }
      if ( v7 == 1 )
      {
        v5 = v38;
        if ( *(_DWORD *)(((__int64 (*)(void))get_eah)() + 24) != 8 && v38 > 0x100000000LL )
          goto LABEL_32;
        goto LABEL_34;
      }
      v14 = 1;
    }
    else
    {
      v38 = v5;
      v14 = 0;
    }
    v45 = v6;
    v15 = v4;
    v16 = &nptr[v14];
    v17 = 0;
    v18 = &(&nptr[v14])[(unsigned __int64)(unsigned int)(v7 - v14)];
    while ( 1 )
    {
      v19 = *v16;
      endptr = *v16;
      if ( v15 )
        break;
      if ( v40 == 1 && strlen(v19) == 6 )
      {
        strtoull(v19, &endptr, 8);
        v28 = endptr;
        endptr = v19;
        if ( v28 - v19 == 6 )
          break;
      }
      p_endptr = &endptr;
      v21 = v19;
      v15 = 0;
      v22 = strtoull(v19, &endptr, 16);
      v23 = 2;
      v24 = v22;
      v25 = endptr - v19;
      if ( endptr - v19 <= 1 )
        goto LABEL_38;
LABEL_27:
      v21 = (const char *)&unk_5140;
      *(_DWORD *)((char *)&unk_5140 + v17) = v24;
      v24 = v25 % v23;
      v17 += v25 / v23;
LABEL_28:
      if ( ++v16 == v18 )
        goto LABEL_29;
    }
    p_endptr = &endptr;
    v21 = v19;
    v15 = 1;
    v27 = strtoull(v19, &endptr, 8);
    v23 = 3;
    v24 = v27;
    v25 = endptr - v19;
    if ( endptr - v19 > 1 )
      goto LABEL_27;
    v15 = 1;
LABEL_38:
    if ( !v19[1] )
    {
      p_endptr = (char **)(unsigned int)*v19;
      v21 = &byte_300F;
      if ( strchr(&byte_300F, (int)p_endptr) )
        goto LABEL_28;
    }
LABEL_29:
    v4 = v15;
    v6 = v45;
    v5 = v17 + v38;
    if ( *(_DWORD *)(get_eah(v21, p_endptr, v24) + 24) == 8 )
    {
      if ( v17 < 0 )
      {
        if ( v38 >= -v17 )
          goto LABEL_34;
      }
      else if ( ~v38 >= v17 )
      {
        goto LABEL_34;
      }
      v5 = -1;
LABEL_33:
      sub_1AC0(
        (__int64)"The size 0x%a is too big and does not fit into the address space, truncating to 0x%a\n",
        a3,
        a4);
    }
    else
    {
      if ( v17 < 0 )
      {
        v26 = v38 >= -v17;
        if ( v5 <= 0x100000000LL )
          goto LABEL_61;
        goto LABEL_32;
      }
      v26 = !__CFADD__(v17, v38);
      if ( v5 > 0x100000000LL )
        goto LABEL_32;
LABEL_61:
      if ( !v26 )
      {
LABEL_32:
        v5 = 0x100000000LL;
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_1260(v38, v5);
  }
  v29 = HIBYTE(word_5102);
  if ( (word_5102 & 1) != 0 )
  {
    if ( (unsigned __int64)qword_5108 <= 0xFFFF )
    {
      if ( (unsigned __int64)v42 > 4 )
      {
        if ( (unsigned __int64)v42 <= 8 )
          goto LABEL_49;
        goto LABEL_52;
      }
      ph = get_ph();
      v36 = getinf_flag(3, 4);
      v37 = *(_DWORD *)(ph + 8);
      if ( v36 && (v37 & 0x10000000) != 0 || (v37 & 4) != 0 )
      {
        if ( (unsigned __int64)qword_5108 <= 0x100000000LL )
          goto LABEL_49;
        goto LABEL_52;
      }
      if ( (unsigned __int64)qword_5108 > 0x100000000LL )
        goto LABEL_52;
      v30 = 0;
      setinf_flag(3, 2, 0);
    }
    else
    {
      if ( (unsigned __int64)qword_5108 <= 0x100000000LL && (unsigned __int64)v42 <= 8 )
      {
LABEL_49:
        v30 = 1;
        setinf_flag(3, 4, 0);
        setinf_flag(3, 2, 1);
        goto LABEL_53;
      }
LABEL_52:
      v30 = 2;
      setinf_flag(3, 4, 1);
    }
LABEL_53:
    v31 = getseg(qword_5110);
    set_segm_addressing(v31, v30);
    set_default_dataseg(qword_5118);
    v29 = HIBYTE(word_5102);
  }
  if ( (v29 & 2) == 0 )
    create_filename_cmt();
  return v52 - __readfsqword(0x28u);
}

