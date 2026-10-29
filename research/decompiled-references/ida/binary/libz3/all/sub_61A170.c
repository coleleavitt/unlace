void __fastcall sub_61A170(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rsi
  int v13; // edx
  int *v14; // rax
  _DWORD *v15; // rax
  int v16; // edx
  int *v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 *v21; // rdx
  int v22; // edi
  unsigned int v23; // r10d
  __int64 *v24; // rsi
  __int64 v25; // r10
  __int64 *v26; // r8
  __int64 *v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 *v32; // rdx
  int v33; // esi
  unsigned int v34; // r9d
  __int64 *v35; // rcx
  __int64 v36; // r9
  __int64 *v37; // rdi
  __int64 *v38; // r12
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rsi
  int v44; // eax
  _QWORD *v45; // rsi
  unsigned int v46; // r8d
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rsi
  _QWORD *v50; // rdx
  _QWORD *v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rcx
  int v54; // edx
  _QWORD *v55; // rcx
  unsigned int v56; // r14d
  unsigned int v57; // ecx
  unsigned int *v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // [rsp+0h] [rbp-78h]
  unsigned int v62; // [rsp+Ch] [rbp-6Ch]
  __int64 v63[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return;
  v6 = *(unsigned int *)(a2 + 24);
  if ( (_DWORD)v6 )
  {
    v7 = a2;
    v61 = a2 + 8 * v6;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v7 + 32);
      if ( *(_WORD *)(v8 + 4) )
        goto LABEL_9;
      v9 = *(unsigned int *)(v8 + 24);
      if ( (_DWORD)v9 )
      {
        v10 = *(_QWORD *)(v7 + 32);
        v11 = v8 + 8 * v9;
        do
        {
          v12 = *(_QWORD *)(v10 + 32);
          v10 += 8;
          sub_61A170(a1, v12);
        }
        while ( v10 != v11 );
        if ( *(_WORD *)(v8 + 4) )
          goto LABEL_9;
      }
      v13 = *(_DWORD *)(a1 + 40);
      v14 = *(int **)(*(_QWORD *)(v8 + 16) + 24LL);
      if ( !v14 )
        goto LABEL_9;
      if ( v13 != *v14 )
      {
        v13 = *v14;
        goto LABEL_15;
      }
      if ( v14[1] != 1 )
        goto LABEL_26;
      sub_616E40(a1 + 80, *(_QWORD *)(v8 + 32));
      v19 = *(_QWORD *)(v8 + 32);
      v20 = *(unsigned int *)(a1 + 88);
      v21 = *(__int64 **)(a1 + 80);
      v22 = *(_DWORD *)(v19 + 12);
      v23 = v20 - 1;
      v20 *= 16;
      v24 = (__int64 *)((char *)v21 + v20);
      v25 = 16LL * (v22 & v23);
      v26 = &v21[(unsigned __int64)v25 / 8];
      if ( v25 == v20 )
      {
LABEL_44:
        while ( v26 != v21 )
        {
          v29 = *v21;
          if ( (unsigned __int64)*v21 > 1 )
          {
            if ( *(_DWORD *)(v29 + 12) == v22 && v19 == v29 )
            {
              v27 = v21;
              goto LABEL_70;
            }
          }
          else if ( !v29 )
          {
            break;
          }
          v21 += 2;
        }
LABEL_96:
        BUG();
      }
      v27 = &v21[(unsigned __int64)v25 / 8];
      while ( 1 )
      {
        v28 = *v27;
        if ( (unsigned __int64)*v27 > 1 )
          break;
        if ( !v28 )
          goto LABEL_96;
LABEL_40:
        v27 += 2;
        if ( v24 == v27 )
          goto LABEL_44;
      }
      if ( *(_DWORD *)(v28 + 12) != v22 || v19 != v28 )
        goto LABEL_40;
LABEL_70:
      v41 = (_QWORD *)v27[1];
      if ( v41 )
      {
        v42 = *((_DWORD *)v41 - 1);
        if ( v42 == *((_DWORD *)v41 - 2) )
        {
          v46 = (3 * v42 + 1) >> 1;
          v47 = 8 * v46 + 8;
          if ( 8 * v42 + 8 >= (unsigned int)v47 || v42 >= v46 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v63, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v63);
            sub_233E40((__int64)v63);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v62 = (3 * v42 + 1) >> 1;
          v48 = (unsigned int *)sub_186B300(v41 - 1, v47);
          v49 = v48[1];
          v41 = v48 + 2;
          v27[1] = (__int64)(v48 + 2);
          *v48 = v62;
          LODWORD(v48) = v49;
          v45 = &v41[v49];
          v44 = (_DWORD)v48 + 1;
        }
        else
        {
          v43 = v42;
          v44 = v42 + 1;
          v45 = &v41[v43];
        }
      }
      else
      {
        v50 = (_QWORD *)sub_186B270(0x18u);
        *v50 = 2;
        v44 = 1;
        v41 = v50 + 1;
        v27[1] = (__int64)v41;
        v45 = v41;
      }
      *v45 = v8;
      *((_DWORD *)v41 - 1) = v44;
      if ( !*(_WORD *)(v8 + 4) )
      {
        v14 = *(int **)(*(_QWORD *)(v8 + 16) + 24LL);
        if ( v14 )
        {
          v13 = *v14;
          if ( *(_DWORD *)(a1 + 40) != *v14 )
          {
LABEL_15:
            if ( !v13 && v14[1] == 2 )
            {
              v15 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(v8 + 32)) + 24);
              if ( v15 )
              {
                if ( *(_DWORD *)(a1 + 40) == *v15 && !v15[1] )
                  sub_61CF40(a1 + 104, *(_QWORD *)(v8 + 32), *(_QWORD *)(v8 + 40));
              }
            }
            goto LABEL_9;
          }
LABEL_26:
          if ( v14[1] )
            goto LABEL_15;
          sub_61CF40(a1 + 104, v8, *(_QWORD *)(v8 + 32));
        }
      }
LABEL_9:
      v7 += 8;
      if ( v7 == v61 )
      {
        if ( *(_WORD *)(a2 + 4) )
          return;
        break;
      }
    }
  }
  v16 = *(_DWORD *)(a1 + 40);
  v17 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v17 )
    return;
  if ( *v17 != v16 )
  {
    v16 = *v17;
    goto LABEL_30;
  }
  if ( v17[1] != 1 )
    goto LABEL_29;
  sub_616E40(a1 + 80, *(_QWORD *)(a2 + 32));
  v30 = *(_QWORD *)(a2 + 32);
  v31 = *(unsigned int *)(a1 + 88);
  v32 = *(__int64 **)(a1 + 80);
  v33 = *(_DWORD *)(v30 + 12);
  v34 = v31 - 1;
  v31 *= 16;
  v35 = (__int64 *)((char *)v32 + v31);
  v36 = 16LL * (v33 & v34);
  v37 = &v32[(unsigned __int64)v36 / 8];
  if ( v36 == v31 )
  {
LABEL_61:
    while ( v37 != v32 )
    {
      v40 = *v32;
      if ( (unsigned __int64)*v32 > 1 )
      {
        if ( *(_DWORD *)(v40 + 12) == v33 && v30 == v40 )
        {
          v38 = v32;
          goto LABEL_82;
        }
      }
      else if ( !v40 )
      {
        break;
      }
      v32 += 2;
    }
LABEL_95:
    BUG();
  }
  v38 = &v32[(unsigned __int64)v36 / 8];
  while ( 1 )
  {
    v39 = *v38;
    if ( (unsigned __int64)*v38 > 1 )
      break;
    if ( !v39 )
      goto LABEL_95;
LABEL_57:
    v38 += 2;
    if ( v35 == v38 )
      goto LABEL_61;
  }
  if ( *(_DWORD *)(v39 + 12) != v33 || v30 != v39 )
    goto LABEL_57;
LABEL_82:
  v51 = (_QWORD *)v38[1];
  if ( v51 )
  {
    v52 = *((_DWORD *)v51 - 1);
    if ( v52 == *((_DWORD *)v51 - 2) )
    {
      v56 = (3 * v52 + 1) >> 1;
      v57 = 8 * v56 + 8;
      if ( 8 * v52 + 8 >= v57 || v52 >= v56 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v63, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v63);
        sub_233E40((__int64)v63);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v58 = (unsigned int *)sub_186B300(v51 - 1, v57);
      v51 = v58 + 2;
      v59 = v58[1];
      v38[1] = (__int64)(v58 + 2);
      *v58 = v56;
      LODWORD(v58) = v59;
      v55 = &v51[v59];
      v54 = (_DWORD)v58 + 1;
    }
    else
    {
      v53 = v52;
      v54 = v52 + 1;
      v55 = &v51[v53];
    }
  }
  else
  {
    v60 = (_QWORD *)sub_186B270(0x18u);
    v54 = 1;
    *v60 = 2;
    v51 = v60 + 1;
    v38[1] = (__int64)v51;
    v55 = v51;
  }
  *v55 = a2;
  *((_DWORD *)v51 - 1) = v54;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v17 = *(int **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v17 )
    {
      v16 = *v17;
      if ( *(_DWORD *)(a1 + 40) == *v17 )
      {
LABEL_29:
        if ( v17[1] )
          goto LABEL_30;
        sub_61CF40(a1 + 104, a2, *(_QWORD *)(a2 + 32));
      }
      else
      {
LABEL_30:
        if ( !v16 && v17[1] == 2 )
        {
          v18 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)(a2 + 32)) + 24);
          if ( v18 )
          {
            if ( *(_DWORD *)(a1 + 40) == *v18 && !v18[1] )
              sub_61CF40(a1 + 104, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
          }
        }
      }
    }
  }
}

