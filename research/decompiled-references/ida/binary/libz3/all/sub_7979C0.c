__int64 __fastcall sub_7979C0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // edi
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  __int64 *v22; // rsi
  __int64 v23; // rax
  int v24; // edi
  __int64 *v25; // rbx
  size_t v26; // r14
  unsigned int v27; // r10d
  __int64 v28; // rbp
  int v29; // esi
  __int64 v30; // r10
  __int64 *v31; // r8
  __int64 *v32; // rax
  __int64 *v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rax
  _QWORD *v38; // rdx
  unsigned int v39; // ebx
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rsi
  unsigned int v43; // eax
  __int64 *v45; // rax
  int v46; // r8d
  __int64 *v47; // r11
  __int64 v48; // rax
  void *v49; // rcx
  __int64 v50; // r9
  void **v51; // rcx
  __int64 v52; // r15
  __int64 v53; // r12
  __int64 *v54; // r13
  __int64 *v55; // rbx
  __int64 v56; // rax
  __int64 *v57; // rdx
  __int64 *v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  bool v61; // cf
  char **exception; // rbx
  bool v63; // [rsp+Fh] [rbp-89h]
  int v64; // [rsp+10h] [rbp-88h]
  unsigned int v65; // [rsp+10h] [rbp-88h]
  int v66; // [rsp+18h] [rbp-80h]
  int v67; // [rsp+1Ch] [rbp-7Ch]
  int v68; // [rsp+28h] [rbp-70h]
  __int64 v69[11]; // [rsp+40h] [rbp-58h] BYREF

  v4 = sub_796F80((__int64)a1, a2);
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 && !*(_DWORD *)(v5 + 24) )
  {
    v60 = *(_QWORD *)(v5 + 32);
    v61 = v60 > 0xFFFFFFFE;
    if ( v60 > 0xFFFFFFFE )
      LODWORD(v60) = 0;
    v63 = !v61;
    v66 = v60;
  }
  else
  {
    v66 = 0;
    v63 = 0;
  }
  v67 = *(_DWORD *)(v4 + 24);
  while ( 1 )
  {
    v6 = sub_796F80((__int64)a1, a2);
    v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 48LL))(a1, v4 + 24, a2);
    v8 = *(__int64 **)v6;
    v9 = v7;
    v10 = *(unsigned int *)(v6 + 8);
    v11 = *(_DWORD *)(v9 + 12);
    v12 = v10 - 1;
    v10 *= 8;
    v13 = (__int64 *)(*(_QWORD *)v6 + v10);
    v14 = 8LL * (v11 & v12);
    v15 = (__int64 *)(*(_QWORD *)v6 + v14);
    if ( v14 == v10 )
      break;
    v16 = (__int64 *)(*(_QWORD *)v6 + v14);
    while ( 1 )
    {
      v17 = *v16;
      if ( (unsigned __int64)*v16 > 1 )
        break;
      if ( !v17 )
        goto LABEL_12;
LABEL_9:
      if ( v13 == ++v16 )
        goto LABEL_35;
    }
    if ( *(_DWORD *)(v17 + 12) != v11 || v9 != v17 )
      goto LABEL_9;
LABEL_32:
    v36 = *(_DWORD *)(v4 + 24) + 1;
    *(_DWORD *)(v4 + 24) = v36;
    if ( v63 && v66 + v67 < v36 )
      return 0;
  }
LABEL_35:
  if ( v8 == v15 )
  {
LABEL_12:
    v18 = (__int64 *)a1[7];
    ++*(_DWORD *)(v9 + 8);
    if ( !v18 )
      goto LABEL_43;
    goto LABEL_13;
  }
  while ( 2 )
  {
    v37 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v37 + 12) == v11 && v9 == v37 )
        goto LABEL_32;
      goto LABEL_39;
    }
    if ( v37 )
    {
LABEL_39:
      if ( v15 == ++v8 )
        goto LABEL_12;
      continue;
    }
    break;
  }
  v18 = (__int64 *)a1[7];
  ++*(_DWORD *)(v9 + 8);
  if ( !v18 )
  {
LABEL_43:
    v38 = (_QWORD *)sub_186B270(0x18u);
    *v38 = 2;
    v21 = 1;
    v18 = v38 + 1;
    a1[7] = v18;
    v22 = v18;
    goto LABEL_15;
  }
LABEL_13:
  v19 = *((_DWORD *)v18 - 1);
  if ( v19 == *((_DWORD *)v18 - 2) )
  {
    v39 = (3 * v19 + 1) >> 1;
    v40 = 8 * v39 + 8;
    if ( 8 * v19 + 8 >= (unsigned int)v40 || v19 >= v39 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v69, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v69);
      sub_233E40((__int64)v69);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v41 = (unsigned int *)sub_186B300(v18 - 1, v40);
    v42 = v41[1];
    v18 = (__int64 *)(v41 + 2);
    *v41 = v39;
    a1[7] = v41 + 2;
    LODWORD(v41) = v42;
    v22 = &v18[v42];
    v21 = (_DWORD)v41 + 1;
  }
  else
  {
    v20 = v19;
    v21 = v19 + 1;
    v22 = &v18[v20];
  }
LABEL_15:
  *v22 = v9;
  *((_DWORD *)v18 - 1) = v21;
  v23 = *(unsigned int *)(v6 + 8);
  v24 = *(_DWORD *)(v6 + 16);
  if ( 3 * (int)v23 < (unsigned int)(4 * (v24 + *(_DWORD *)(v6 + 12))) )
  {
    v64 = 2 * v23;
    v26 = 8LL * (unsigned int)(2 * v23);
    v45 = (__int64 *)sub_186B270(v26);
    v46 = v64;
    v25 = v45;
    if ( v64 )
    {
      memset(v45, 0, v26);
      v46 = v64;
    }
    v47 = *(__int64 **)v6;
    v48 = *(unsigned int *)(v6 + 8);
    v27 = v46 - 1;
    v28 = (__int64)&v25[v26 / 8];
    v49 = (void *)(*(_QWORD *)v6 + 8 * v48);
    if ( *(void **)v6 != v49 )
    {
      v50 = v9;
      v51 = (void **)v6;
      v52 = v4;
      v53 = *(_QWORD *)v6 + 8 * v48;
      v54 = v25;
      v55 = v47;
      do
      {
        while ( (unsigned __int64)*v55 <= 1 )
        {
          if ( (__int64 *)v53 == ++v55 )
            goto LABEL_63;
        }
        v56 = 8LL * (*(_DWORD *)(*v55 + 12) & v27);
        v57 = &v54[(unsigned __int64)v56 / 8];
        if ( v26 == v56 )
        {
LABEL_67:
          if ( v54 == v57 )
          {
LABEL_75:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v58 = v54;
          while ( *v58 )
          {
            if ( v57 == ++v58 )
              goto LABEL_75;
          }
        }
        else
        {
          v58 = &v54[(unsigned __int64)v56 / 8];
          while ( *v58 )
          {
            if ( (__int64 *)v28 == ++v58 )
              goto LABEL_67;
          }
        }
        v59 = *v55++;
        *v58 = v59;
      }
      while ( (__int64 *)v53 != v55 );
LABEL_63:
      v6 = (__int64)v51;
      v49 = *v51;
      v25 = v54;
      v4 = v52;
      v9 = v50;
    }
    if ( v49 )
    {
      v68 = v46;
      v65 = v46 - 1;
      sub_186B220(v49);
      v46 = v68;
      v27 = v65;
    }
    *(_QWORD *)v6 = v25;
    v24 = 0;
    *(_DWORD *)(v6 + 8) = v46;
    *(_DWORD *)(v6 + 16) = 0;
  }
  else
  {
    v25 = *(__int64 **)v6;
    v26 = 8 * v23;
    v27 = v23 - 1;
    v28 = *(_QWORD *)v6 + 8 * v23;
  }
  v29 = *(_DWORD *)(v9 + 12);
  v30 = 8LL * (v29 & v27);
  v31 = &v25[(unsigned __int64)v30 / 8];
  if ( v30 != v26 )
  {
    v32 = &v25[(unsigned __int64)v30 / 8];
    v33 = nullptr;
    while ( 1 )
    {
      v34 = *v32;
      if ( (unsigned __int64)*v32 > 1 )
      {
        if ( *(_DWORD *)(v34 + 12) == v29 && v9 == v34 )
        {
          *v32 = v9;
          goto LABEL_48;
        }
      }
      else
      {
        if ( !v34 )
        {
          if ( v33 )
            goto LABEL_73;
          v33 = v32;
          goto LABEL_74;
        }
        v33 = v32;
      }
      if ( ++v32 == (__int64 *)v28 )
        goto LABEL_28;
    }
  }
  v33 = nullptr;
LABEL_28:
  while ( 2 )
  {
    if ( v31 == v25 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v35 = *v25;
    if ( (unsigned __int64)*v25 > 1 )
    {
      if ( *(_DWORD *)(v35 + 12) == v29 && v9 == v35 )
      {
        *v25 = v9;
        goto LABEL_48;
      }
      goto LABEL_27;
    }
    if ( v35 )
    {
      v33 = v25;
LABEL_27:
      ++v25;
      continue;
    }
    break;
  }
  if ( v33 )
LABEL_73:
    *(_DWORD *)(v6 + 16) = v24 - 1;
  else
    v33 = v25;
LABEL_74:
  *v33 = v9;
  ++*(_DWORD *)(v6 + 12);
LABEL_48:
  v43 = *(_DWORD *)(v4 + 24) + 1;
  *(_DWORD *)(v4 + 24) = v43;
  if ( v63 && v67 + v66 < v43 )
    return 0;
  return v9;
}

