__int64 __fastcall sub_C0D420(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // rbp
  __int64 v9; // r9
  int v10; // edi
  __int64 *v11; // rcx
  unsigned int v12; // r10d
  __int64 v13; // r9
  __int64 *v14; // rsi
  __int64 v15; // r10
  __int64 *v16; // r8
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned int v20; // r12d
  _DWORD *v22; // rax
  __int64 *i; // rax
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  _BOOL8 v28; // rsi
  _DWORD *v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // r13
  unsigned int v32; // r15d
  __int64 v33; // rcx
  int v34; // eax
  _QWORD *v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // r14d
  unsigned int v38; // ecx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 *v43; // rdx
  __int64 v44; // rsi
  bool v45; // zf
  __int64 v46; // r14
  __int64 v47; // rdi
  __int64 v48; // rbx
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rbx
  int v52; // eax
  _QWORD *v53; // rdx
  unsigned __int64 v54; // r14
  __int64 *v55; // r13
  __int64 v56; // rsi
  __int64 v57[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)a1) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v57, (const char *)off_1C7E180);
    goto LABEL_80;
  }
  if ( *(_DWORD *)(a2 + 8) <= 1u )
    goto LABEL_10;
  v9 = *(unsigned int *)(a1 + 80);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(__int64 **)(a1 + 72);
  v12 = v9 - 1;
  v13 = 16 * v9;
  v14 = &v11[(unsigned __int64)v13 / 8];
  v15 = 16LL * (v10 & v12);
  v16 = &v11[(unsigned __int64)v15 / 8];
  if ( v15 == v13 )
  {
LABEL_16:
    if ( v11 != v16 )
    {
      for ( i = *(__int64 **)(a1 + 72); v16 != i; i += 2 )
      {
        v24 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v24 + 12) == v10 && a2 == v24 )
          {
            v25 = &v11[(unsigned __int64)v15 / 8];
            if ( v15 != v13 )
              goto LABEL_30;
LABEL_33:
            while ( v16 != v11 )
            {
              v27 = *v11;
              if ( (unsigned __int64)*v11 > 1 )
              {
                if ( *(_DWORD *)(v27 + 12) == v10 && a2 == v27 )
                {
                  v25 = v11;
                  goto LABEL_61;
                }
              }
              else if ( !v27 )
              {
                break;
              }
              v11 += 2;
            }
LABEL_82:
            BUG();
          }
        }
        else if ( !v24 )
        {
          if ( !*(_WORD *)(a2 + 4) )
            goto LABEL_13;
          goto LABEL_11;
        }
      }
    }
LABEL_10:
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_11;
LABEL_13:
    v22 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v22 && *v22 == 5 )
      return sub_C0BC30(a1, a2, a3, a4);
LABEL_11:
    *(_BYTE *)(a3 + 4) &= ~1u;
    v19 = *(_QWORD *)(a1 + 40);
    *(_DWORD *)a3 = 1;
    *(_BYTE *)(a4 + 4) &= ~1u;
    *(_DWORD *)a4 = 1;
    v20 = sub_16235A0(v19, a2);
    if ( v20 != -1 )
      return v20;
    v28 = 0;
    v29 = *(_DWORD **)(sub_15D1F10(a2) + 24);
    if ( v29 && *v29 == 5 )
      v28 = v29[1] == 1;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _BOOL8))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8), v28);
    sub_16238E0(*(_QWORD *)(a1 + 40), a2, v20);
    v30 = *(_QWORD **)(a1 + 64);
    if ( v30 )
    {
      v31 = *((unsigned int *)v30 - 1);
      if ( v20 >= (unsigned int)v31 )
      {
        v32 = v20 + 1;
        if ( v20 + 1 < (unsigned int)v31 )
        {
          v54 = (unsigned __int64)&v30[v31];
          v41 = *(_QWORD *)(a1 + 56);
          v55 = &v30[v32];
          if ( (unsigned __int64)v55 >= v54 )
            goto LABEL_77;
          do
          {
            v56 = *v55;
            if ( *v55 )
            {
              v45 = (*(_DWORD *)(v56 + 8))-- == 1;
              if ( v45 )
              {
                sub_15D7BC0(v41, v56);
                v41 = *(_QWORD *)(a1 + 56);
              }
            }
            ++v55;
          }
          while ( (unsigned __int64)v55 < v54 );
          v30 = *(_QWORD **)(a1 + 64);
          if ( v30 )
LABEL_77:
            *((_DWORD *)v30 - 1) = v32;
          goto LABEL_56;
        }
        if ( (unsigned int)v31 < v32 )
        {
          do
          {
            v36 = *((_DWORD *)v30 - 1);
            if ( v36 == *((_DWORD *)v30 - 2) )
            {
              v37 = (3 * v36 + 1) >> 1;
              v38 = 8 * v37 + 8;
              if ( 8 * v36 + 8 >= v38 || v36 >= v37 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v57, "Overflow encountered when expanding vector");
LABEL_80:
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v57);
                sub_233E40((__int64)v57);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v39 = (unsigned int *)sub_186B300(v30 - 1, v38);
              v40 = v39[1];
              v30 = v39 + 2;
              *v39 = v37;
              *(_QWORD *)(a1 + 64) = v39 + 2;
              LODWORD(v39) = v40;
              v35 = &v30[v40];
              v34 = (_DWORD)v39 + 1;
            }
            else
            {
              v33 = v36;
              v34 = v36 + 1;
              v35 = &v30[v33];
            }
LABEL_50:
            LODWORD(v31) = v31 + 1;
            *v35 = 0;
            *((_DWORD *)v30 - 1) = v34;
          }
          while ( (_DWORD)v31 != v32 );
        }
      }
    }
    else
    {
      v32 = v20 + 1;
      if ( v20 != -1 )
      {
        LODWORD(v31) = 0;
        v53 = (_QWORD *)sub_186B270(0x18u);
        *v53 = 2;
        v34 = 1;
        v30 = v53 + 1;
        *(_QWORD *)(a1 + 64) = v30;
        v35 = v30;
        goto LABEL_50;
      }
    }
    v41 = *(_QWORD *)(a1 + 56);
LABEL_56:
    ++*(_DWORD *)(a2 + 8);
    v42 = v20;
    v43 = &v30[v42];
    v44 = *v43;
    if ( *v43 )
    {
      v45 = (*(_DWORD *)(v44 + 8))-- == 1;
      if ( v45 )
      {
        sub_15D7BC0(v41, v44);
        v43 = (__int64 *)(v42 * 8 + *(_QWORD *)(a1 + 64));
      }
    }
    *v43 = a2;
    return v20;
  }
  v17 = &v11[(unsigned __int64)v15 / 8];
  while ( 1 )
  {
    v18 = *v17;
    if ( (unsigned __int64)*v17 > 1 )
      break;
    if ( !v18 )
      goto LABEL_10;
LABEL_7:
    v17 += 2;
    if ( v14 == v17 )
      goto LABEL_16;
  }
  if ( *(_DWORD *)(v18 + 12) != v10 || a2 != v18 )
    goto LABEL_7;
  v25 = &v11[(unsigned __int64)v15 / 8];
  while ( 1 )
  {
LABEL_30:
    while ( 1 )
    {
      v26 = *v25;
      if ( (unsigned __int64)*v25 > 1 )
        break;
      if ( !v26 )
        goto LABEL_82;
      v25 += 2;
      if ( v14 == v25 )
        goto LABEL_33;
    }
    if ( *(_DWORD *)(v26 + 12) == v10 && a2 == v26 )
      break;
    v25 += 2;
    if ( v14 == v25 )
      goto LABEL_33;
  }
LABEL_61:
  v46 = *((unsigned int *)v25 + 2);
  v47 = *(_QWORD *)(a1 + 16);
  v48 = 16 * v46;
  v49 = 16 * v46 + *(_QWORD *)(a1 + 104);
  if ( (*(_BYTE *)(v49 + 4) & 1) != 0 )
  {
    sub_182EA00(v47, a3, v49);
    v51 = *(_QWORD *)(a1 + 120) + v48;
    v47 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v51 + 4) & 1) != 0 )
      goto LABEL_66;
LABEL_63:
    v52 = *(_DWORD *)v51;
    *(_BYTE *)(a4 + 4) &= ~1u;
    *(_DWORD *)a4 = v52;
  }
  else
  {
    v50 = *(_DWORD *)v49;
    v51 = *(_QWORD *)(a1 + 120) + v48;
    *(_BYTE *)(a3 + 4) &= ~1u;
    *(_DWORD *)a3 = v50;
    if ( (*(_BYTE *)(v51 + 4) & 1) == 0 )
      goto LABEL_63;
LABEL_66:
    sub_182EA00(v47, a4, v51);
  }
  return *(unsigned int *)(*(_QWORD *)(a1 + 96) + 4 * v46);
}

