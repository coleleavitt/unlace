__int64 __fastcall sub_C90950(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  _DWORD *v5; // rax
  __int64 result; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r13
  unsigned int v10; // r15d
  int v11; // edx
  _DWORD *v12; // rsi
  __int64 v13; // rdx
  _QWORD *v14; // r13
  _QWORD *v15; // r15
  __int64 v16; // r15
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  int v21; // edx
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // r13
  bool v25; // zf
  _DWORD *v26; // rax
  void *v27; // rbx
  __int64 v28; // rsi
  _DWORD *v29; // rax
  void *v30; // r13
  char v31; // al
  void *v32; // rdi
  char v33; // al
  char v34; // al
  unsigned __int64 v35; // rax
  void *v36; // rbx
  __int64 v37; // r8
  __int64 v38; // r15
  _DWORD *v39; // rax
  _DWORD *v40; // rax
  unsigned int v41; // r13d
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  char v47; // al
  unsigned __int64 v48; // rax
  void *v49; // rbx
  _QWORD *v50; // rdx
  char **exception; // rbp
  __int64 v52; // [rsp+8h] [rbp-80h]
  unsigned int v53; // [rsp+8h] [rbp-80h]
  unsigned int v54; // [rsp+8h] [rbp-80h]
  __int64 v55; // [rsp+10h] [rbp-78h]
  __int64 v56; // [rsp+10h] [rbp-78h]
  __int64 v57; // [rsp+18h] [rbp-70h] BYREF
  char v58; // [rsp+2Fh] [rbp-59h] BYREF
  __int64 v59; // [rsp+30h] [rbp-58h] BYREF
  __int64 v60; // [rsp+38h] [rbp-50h]
  __int64 v61; // [rsp+40h] [rbp-48h] BYREF
  __int64 v62; // [rsp+48h] [rbp-40h]

  v57 = a2;
  v59 = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_C8B2F0((_QWORD *)(a1 + 624), &v59);
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_7;
  v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v5 )
    goto LABEL_7;
  if ( *v5 == 5 )
  {
    v21 = v5[1];
    if ( v21 == 2 )
    {
      if ( *(_DWORD *)(a2 + 24) != 2 )
        goto LABEL_31;
      v28 = *(_QWORD *)(a2 + 32);
      v24 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      if ( v21 != 3 || *(_DWORD *)(a2 + 24) != 2 )
        goto LABEL_31;
      v24 = *(_QWORD *)(a2 + 32);
      v28 = *(_QWORD *)(a2 + 40);
    }
    v59 = 0;
    v61 = 1;
    v25 = *(_WORD *)(v24 + 4) == 0;
    v60 = 0;
    v62 = 0;
    if ( v25 && !*(_DWORD *)(v24 + 24) && ((v29 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL)) == nullptr || *v29 == -1) )
    {
      v31 = sub_1666AE0(a1 + 24, v28, &v59, &v58);
      v32 = qword_1C7F2C0;
      if ( v31 )
      {
        if ( (v61 & 0x100000000LL) == 0 && (_DWORD)v61 == 1 )
        {
          v47 = sub_182CFA0(qword_1C7F2C0, &v59);
          v32 = qword_1C7F2C0;
          if ( v47 )
          {
            v48 = sub_182D020(qword_1C7F2C0, &v59);
            v32 = qword_1C7F2C0;
            if ( !HIDWORD(v48)
              && (*(_DWORD *)v24 >= *(_DWORD *)(a1 + 816)
               || (*(_DWORD *)(*(_QWORD *)(a1 + 824) + 4LL * (*(_DWORD *)v24 >> 5)) & (1 << *(_DWORD *)v24)) == 0) )
            {
              sub_182D020(qword_1C7F2C0, &v59);
              v49 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v59);
              sub_182CBA0(v49, &v61);
              result = *(unsigned int *)(v24 + 8);
              *(_DWORD *)(v24 + 8) = result + 1;
              goto LABEL_63;
            }
          }
        }
      }
      sub_182CBA0(v32, &v59);
      sub_182CBA0(v32, &v61);
    }
    else
    {
      v30 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v59);
      sub_182CBA0(v30, &v61);
    }
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_7;
    v5 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v5 )
      goto LABEL_7;
  }
  if ( *v5 != 5 )
    goto LABEL_7;
LABEL_31:
  v22 = v5[1];
  if ( v22 == 2 )
  {
    if ( *(_DWORD *)(a2 + 24) == 2 )
    {
      v24 = *(_QWORD *)(a2 + 32);
      v23 = *(_QWORD *)(a2 + 40);
LABEL_35:
      v59 = 0;
      v61 = 1;
      v25 = *(_WORD *)(v24 + 4) == 0;
      v60 = 0;
      v62 = 0;
      if ( !v25 || *(_DWORD *)(v24 + 24) || (v26 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL)) != nullptr && *v26 != -1 )
      {
        v27 = qword_1C7F2C0;
LABEL_40:
        sub_182CBA0(v27, &v59);
        sub_182CBA0(v27, &v61);
        goto LABEL_7;
      }
      v33 = sub_1666AE0(a1 + 24, v23, &v59, &v58);
      v27 = qword_1C7F2C0;
      if ( !v33 )
        goto LABEL_40;
      if ( (v61 & 0x100000000LL) != 0 )
        goto LABEL_40;
      if ( (_DWORD)v61 != 1 )
        goto LABEL_40;
      v34 = sub_182CFA0(qword_1C7F2C0, &v59);
      v27 = qword_1C7F2C0;
      if ( !v34 )
        goto LABEL_40;
      v35 = sub_182D020(qword_1C7F2C0, &v59);
      v27 = qword_1C7F2C0;
      if ( HIDWORD(v35)
        || *(_DWORD *)v24 < *(_DWORD *)(a1 + 816)
        && (*(_DWORD *)(*(_QWORD *)(a1 + 824) + 4LL * (*(_DWORD *)v24 >> 5)) & (1 << *(_DWORD *)v24)) != 0 )
      {
        goto LABEL_40;
      }
      sub_182D020(qword_1C7F2C0, &v59);
      v36 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v59);
      sub_182CBA0(v36, &v61);
      ++*(_DWORD *)(v24 + 8);
      sub_C8A9D0(0, v4);
      result = (unsigned int)(*(_DWORD *)(v24 + 8) - 1);
LABEL_63:
      *(_DWORD *)(v24 + 8) = result;
      if ( !(_DWORD)result )
        return sub_15D7BC0(v4, v24);
      return result;
    }
  }
  else if ( v22 == 3 && *(_DWORD *)(a2 + 24) == 2 )
  {
    v23 = *(_QWORD *)(a2 + 32);
    v24 = *(_QWORD *)(a2 + 40);
    goto LABEL_35;
  }
LABEL_7:
  result = sub_C8B2F0((_QWORD *)(a1 + 856), &v57);
  v7 = *(_QWORD **)(a1 + 856);
  if ( v7 )
  {
LABEL_8:
    result = *((unsigned int *)v7 - 1);
    if ( !(_DWORD)result )
      return result;
    while ( 1 )
    {
      v8 = (unsigned int)(result - 1);
      v9 = v7[v8];
      *((_DWORD *)v7 - 1) = v8;
      v57 = v9;
      v10 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 < *(_DWORD *)(a1 + 816) )
      {
        v12 = (_DWORD *)(*(_QWORD *)(a1 + 824) + 4LL * (v10 >> 5));
        result = (unsigned int)*v12;
        v11 = 1 << v10;
        if ( ((1 << v10) & (unsigned int)result) != 0 )
          goto LABEL_19;
      }
      else
      {
        sub_186B510(a1 + 816, v10 + 1, 0);
        v11 = 1 << v10;
        v12 = (_DWORD *)(*(_QWORD *)(a1 + 824) + 4LL * (v10 >> 5));
        LODWORD(result) = *v12;
      }
      *v12 = v11 | result;
      result = *(unsigned __int16 *)(v9 + 4);
      if ( !(_WORD)result )
      {
        v13 = *(unsigned int *)(v9 + 24);
        result = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 24LL);
        if ( !result || *(_DWORD *)result || *(_DWORD *)(result + 4) != 2 || (_DWORD)v13 != 2 )
          goto LABEL_15;
        v37 = *(_QWORD *)(v9 + 32);
        v38 = *(_QWORD *)(v9 + 40);
        if ( !*(_WORD *)(v37 + 4) && !*(_DWORD *)(v37 + 24) )
        {
          v39 = *(_DWORD **)(*(_QWORD *)(v37 + 16) + 24LL);
          if ( !v39 || *v39 == -1 )
          {
            v45 = *(_DWORD *)v37;
            if ( *(_DWORD *)v37 >= *(_DWORD *)(a1 + 840) )
            {
              v54 = *(_DWORD *)v37;
              v56 = *(_QWORD *)(v9 + 32);
              sub_186B510(a1 + 840, v45 + 1, 0);
              v37 = v56;
              v45 = v54;
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 848) + 4LL * (v45 >> 5)) |= 1 << v45;
          }
        }
        if ( !*(_WORD *)(v38 + 4) && !*(_DWORD *)(v38 + 24) )
        {
          v40 = *(_DWORD **)(*(_QWORD *)(v38 + 16) + 24LL);
          if ( !v40 || *v40 == -1 )
          {
            v46 = *(_DWORD *)v38;
            if ( *(_DWORD *)v38 >= *(_DWORD *)(a1 + 840) )
            {
              v53 = *(_DWORD *)v38;
              v55 = v37;
              sub_186B510(a1 + 840, v46 + 1, 0);
              v37 = v55;
              v46 = v53;
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 848) + 4LL * (v46 >> 5)) |= 1 << v46;
          }
        }
        v52 = v37;
        result = sub_C90740(a1, v37, v38);
        if ( (_BYTE)result )
          goto LABEL_19;
        result = sub_C90740(a1, v38, v52);
        if ( (_BYTE)result )
          goto LABEL_19;
        result = *(unsigned __int16 *)(v9 + 4);
        if ( !(_WORD)result )
          break;
      }
      v7 = *(_QWORD **)(a1 + 856);
      if ( (_WORD)result == 2 )
      {
        v16 = *(_QWORD *)(v9 + 24);
        if ( v7 )
        {
          v17 = *((_DWORD *)v7 - 1);
          if ( v17 == *((_DWORD *)v7 - 2) )
          {
            v41 = (3 * v17 + 1) >> 1;
            v42 = 8 * v41 + 8;
            if ( 8 * v17 + 8 >= v42 || v17 >= v41 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C8AA10(&v59, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v59);
              sub_233E40((__int64)&v59);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v43 = (unsigned int *)sub_186B300(v7 - 1, v42);
            v44 = v43[1];
            v7 = v43 + 2;
            *v43 = v41;
            *(_QWORD *)(a1 + 856) = v43 + 2;
            LODWORD(v43) = v44;
            v20 = &v7[v44];
            v19 = (_DWORD)v43 + 1;
          }
          else
          {
            v18 = v17;
            v19 = v17 + 1;
            v20 = &v7[v18];
          }
        }
        else
        {
          v50 = (_QWORD *)sub_186B270(0x18u);
          *v50 = 2;
          v19 = 1;
          v7 = v50 + 1;
          *(_QWORD *)(a1 + 856) = v7;
          v20 = v7;
        }
        *v20 = v16;
        *((_DWORD *)v7 - 1) = v19;
        goto LABEL_8;
      }
LABEL_20:
      if ( v7 )
      {
        result = *((unsigned int *)v7 - 1);
        if ( (_DWORD)result )
          continue;
      }
      return result;
    }
    v13 = *(unsigned int *)(v9 + 24);
LABEL_15:
    v14 = (_QWORD *)(v9 + 32);
    v15 = &v14[v13];
    if ( (_DWORD)v13 )
    {
      do
        result = sub_C8B2F0((_QWORD *)(a1 + 856), v14++);
      while ( v14 != v15 );
    }
LABEL_19:
    v7 = *(_QWORD **)(a1 + 856);
    goto LABEL_20;
  }
  return result;
}

