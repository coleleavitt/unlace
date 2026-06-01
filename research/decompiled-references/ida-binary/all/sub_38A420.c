const char *__fastcall struc_stroff_data_t__::vfunc_7(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rsi
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r14
  const char *v12; // rdi
  const char *v13; // rbx
  unsigned int v15; // eax
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rax
  char *v19; // rdi
  __int64 v20; // rcx
  size_t v21; // rax
  size_t v22; // r14
  size_t v23; // r12
  char *v24; // rax
  __int64 v25; // r13
  __int64 v26; // r12
  const char *v27; // rdi
  char *v28; // rax
  const char *v29; // rbp
  __int64 v30; // r14
  __int64 v31; // r12
  const char *v32; // rdi
  _BYTE *v33; // rdi
  signed __int64 v34; // rax
  char *v35; // rsi
  const char *v36; // [rsp+0h] [rbp-620h]
  __int64 v37; // [rsp+8h] [rbp-618h] BYREF
  __int128 v38; // [rsp+10h] [rbp-610h]
  char *v39; // [rsp+28h] [rbp-5F8h] BYREF
  __int128 v40; // [rsp+30h] [rbp-5F0h]
  char *v41; // [rsp+48h] [rbp-5D8h] BYREF
  __int128 v42; // [rsp+50h] [rbp-5D0h]
  __int128 v43; // [rsp+68h] [rbp-5B8h] BYREF
  __int64 v44; // [rsp+78h] [rbp-5A8h]
  __int64 v45; // [rsp+80h] [rbp-5A0h]
  __int64 v46; // [rsp+88h] [rbp-598h]
  _BYTE v47[320]; // [rsp+90h] [rbp-590h] BYREF
  char v48[8]; // [rsp+1D0h] [rbp-450h] BYREF
  char s[1032]; // [rsp+1D8h] [rbp-448h] BYREF
  unsigned __int64 v50; // [rsp+5E0h] [rbp-40h]

  v4 = nullptr;
  v50 = __readfsqword(0x28u);
  v38 = 0;
  v37 = 0;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)sub_32D290(qword_8CD7E8, 0, &v37, a4, 0.0) )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = v8 + 24LL * *(_QWORD *)(a1 + 16);
    if ( v8 != v9 )
    {
      v10 = v38;
      v11 = v37;
      while ( 1 )
      {
        if ( *(_QWORD *)(v8 + 8) )
        {
          v4 = *(char **)v8;
          v12 = &s1;
          if ( !v10 )
            goto LABEL_5;
        }
        else
        {
          if ( !v10 )
            break;
          v4 = (char *)&s1;
        }
        v12 = (const char *)v11;
LABEL_5:
        if ( strcmp(v12, v4) )
        {
          v8 += 24;
          if ( v9 != v8 )
            continue;
        }
        break;
      }
    }
  }
  else
  {
    v8 = v6 + 24 * v7;
  }
  if ( v8 != *(_QWORD *)(a1 + 8) + 24LL * *(_QWORD *)(a1 + 16) )
    goto LABEL_13;
  v4 = nullptr;
  v15 = sub_331180(0, 0, 0);
  v16 = (int)v15;
  if ( v15 > 7 )
    goto LABEL_19;
  v40 = 0;
  v39 = nullptr;
  v4 = (char *)xmmword_8CC810;
  if ( !(unsigned __int8)print_operand(&v39, xmmword_8CC810, v15, 0, 0) )
    goto LABEL_41;
  v19 = (char *)&s1;
  if ( (_QWORD)v40 )
    v19 = v39;
  v4 = s;
  if ( !sub_389920(v19, s, 0.0) )
  {
LABEL_45:
    v26 = *(_QWORD *)(a1 + 8) + 24LL * *(_QWORD *)(a1 + 16);
    goto LABEL_46;
  }
  v41 = nullptr;
  v42 = 0;
  v21 = strlen(s);
  v4 = nullptr;
  v22 = v21 + 1;
  v23 = v21;
  v24 = (char *)qvector_reserve(&v41, 0, v21 + 1, 1);
  v41 = v24;
  *(_QWORD *)&v42 = v22;
  if ( (unsigned int)v23 >= 8 )
  {
    v33 = (_BYTE *)((unsigned __int64)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    *(_QWORD *)v24 = *(_QWORD *)s;
    *(_QWORD *)&v24[(unsigned int)v23 - 8] = *(_QWORD *)&v48[(unsigned int)v23];
    v34 = v24 - v33;
    v35 = &s[-v34];
    LODWORD(v34) = (unsigned int)(v23 + v34) >> 3;
    qmemcpy(v33, v35, 8LL * (unsigned int)v34);
    v4 = &v35[8 * (unsigned int)v34];
    v20 = 0;
  }
  else if ( (v23 & 4) != 0 )
  {
    *(_DWORD *)v24 = *(_DWORD *)s;
    v20 = *(unsigned int *)&v48[(unsigned int)v23 + 4];
    *(_DWORD *)&v24[(unsigned int)v23 - 4] = v20;
  }
  else if ( (_DWORD)v23 )
  {
    *v24 = s[0];
    if ( (v23 & 2) != 0 )
    {
      v20 = *(unsigned __int16 *)&v48[(unsigned int)v23 + 6];
      *(_WORD *)&v24[(unsigned int)v23 - 2] = v20;
    }
  }
  v41[v23] = 0;
  v8 = *(_QWORD *)(a1 + 8);
  v25 = v42;
  v26 = v8 + 24LL * *(_QWORD *)(a1 + 16);
  v36 = v41;
  if ( v8 == v26 )
  {
    if ( !v41 )
      goto LABEL_47;
LABEL_44:
    *(_QWORD *)&v42 = 0;
    qfree(v36, v4);
    goto LABEL_45;
  }
  do
  {
    if ( !*(_QWORD *)(v8 + 8) )
    {
      if ( !v25 )
        break;
      v4 = (char *)&s1;
LABEL_38:
      v27 = v36;
      goto LABEL_33;
    }
    v4 = *(char **)v8;
    v27 = &s1;
    if ( v25 )
      goto LABEL_38;
LABEL_33:
    if ( !strcmp(v27, v4) )
      break;
    v8 += 24;
  }
  while ( v26 != v8 );
  if ( v36 )
    goto LABEL_44;
LABEL_46:
  if ( v8 == v26 )
  {
LABEL_47:
    v44 = -1;
    v28 = v47;
    v45 = 0;
    v46 = 0;
    v43 = -1;
    do
    {
      *(_WORD *)v28 = 0;
      v28 += 40;
      *((_WORD *)v28 - 19) = 0;
      *((_WORD *)v28 - 18) = 0;
      *((_DWORD *)v28 - 2) = 0;
      *((_WORD *)v28 - 17) = 0;
      *((_OWORD *)v28 - 2) = 0;
      *((_QWORD *)v28 - 2) = 0;
    }
    while ( v48 != v28 );
    v4 = (char *)xmmword_8CC810;
    decode_insn(&v43, xmmword_8CC810, v48, v20, 0, 0, 0.0);
    if ( v47[40 * v16 + 1] != 5 )
      goto LABEL_41;
    v4 = nullptr;
    v42 = 0;
    v41 = nullptr;
    v41 = (char *)qvector_reserve(&v41, 0, 2, 1);
    *(_QWORD *)&v42 = 2;
    *v41 = 32;
    v41[1] = 0;
    v8 = *(_QWORD *)(a1 + 8);
    v29 = v41;
    v30 = v42;
    v31 = v8 + 24LL * *(_QWORD *)(a1 + 16);
    if ( v8 == v31 )
    {
LABEL_39:
      if ( v29 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v29, v4);
      }
      goto LABEL_41;
    }
    while ( 2 )
    {
      if ( *(_QWORD *)(v8 + 8) )
      {
        v4 = *(char **)v8;
        v32 = &s1;
        if ( v30 )
          goto LABEL_58;
      }
      else
      {
        if ( !v30 )
          goto LABEL_39;
        v4 = (char *)&s1;
LABEL_58:
        v32 = v29;
      }
      if ( !strcmp(v32, v4) )
        goto LABEL_39;
      v8 += 24;
      if ( v31 == v8 )
        goto LABEL_39;
      continue;
    }
  }
LABEL_41:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v4);
  }
LABEL_19:
  v17 = 3LL * *(_QWORD *)(a1 + 16);
  v18 = *(_QWORD *)(a1 + 8);
  v13 = nullptr;
  if ( v8 != v18 + 8 * v17 )
  {
LABEL_13:
    v13 = &s1;
    if ( *(_QWORD *)(v8 + 8) )
      v13 = *(const char **)v8;
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37, v4);
  }
  return v13;
}
