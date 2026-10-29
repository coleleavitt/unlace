_QWORD *__fastcall sub_5FF1D0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v6; // rbx
  int v7; // edi
  unsigned int v8; // eax
  unsigned __int64 *v9; // rbp
  size_t v10; // rbx
  unsigned __int64 *v11; // r9
  int v12; // edx
  __int64 v13; // r13
  unsigned __int64 *v14; // rsi
  unsigned __int64 *v15; // rbx
  unsigned __int64 *v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // r14d
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // r11
  char *v22; // rsi
  __int64 v23; // rdx
  char *v24; // r13
  unsigned __int64 *v25; // rax
  unsigned __int64 *v26; // rdx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  unsigned __int64 *v29; // rsi
  unsigned __int64 *v30; // r14
  unsigned __int64 v31; // rdx
  char *v32; // rax
  char *v33; // r14
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  _QWORD *v36; // r14
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  unsigned int *v39; // rax
  __int64 v41; // rax
  unsigned int v42; // ebp
  size_t v43; // rsi
  unsigned int *v44; // rax
  unsigned int v45; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 *v46; // [rsp+10h] [rbp-88h]
  char *v47; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v48; // [rsp+10h] [rbp-88h]
  unsigned __int64 *v49; // [rsp+18h] [rbp-80h]
  unsigned __int64 *v50; // [rsp+18h] [rbp-80h]
  int v52; // [rsp+24h] [rbp-74h]
  unsigned __int64 *v53; // [rsp+28h] [rbp-70h]
  __int64 v54[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *(unsigned int *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 64);
  v52 = 2 * v6;
  if ( 3 * (int)v6 < (unsigned int)(4 * (v7 + *(_DWORD *)(a1 + 60))) )
  {
    v19 = 2 * v6;
    v10 = 16LL * (unsigned int)(2 * v6);
    v20 = (unsigned __int64 *)sub_186B270(v10);
    v9 = v20;
    v21 = &v20[v10 / 8];
    if ( v19 )
    {
      if ( (v10 & 0x10) == 0 || (*(_OWORD *)v20 = 0, v20 += 2, v21 != v20) )
      {
        do
        {
          *(_OWORD *)v20 = 0;
          v20 += 4;
          *((_OWORD *)v20 - 1) = 0;
        }
        while ( v21 != v20 );
      }
    }
    v22 = *(char **)(a1 + 48);
    v11 = v21;
    v23 = *(unsigned int *)(a1 + 56);
    v24 = &v22[16 * v23];
    v45 = v52 - 1;
    v25 = (unsigned __int64 *)(v22 + 8);
    if ( v22 == v24 )
    {
LABEL_37:
      if ( v24 )
      {
        if ( (_DWORD)v23 )
        {
          v33 = v24;
          v47 = &v24[16 * v23];
          do
          {
            while ( 1 )
            {
              v34 = *((_QWORD *)v33 + 1);
              if ( !v34 )
                break;
              v50 = v11;
              v33 += 16;
              sub_186B220((void *)(v34 - 8));
              v11 = v50;
              if ( v47 == v33 )
                goto LABEL_42;
            }
            v33 += 16;
          }
          while ( v33 != v47 );
        }
LABEL_42:
        v48 = v11;
        sub_186B220(v24);
        v11 = v48;
      }
      *(_QWORD *)(a1 + 48) = v9;
      v7 = 0;
      *(_DWORD *)(a1 + 64) = 0;
      *(_DWORD *)(a1 + 56) = v52;
      goto LABEL_3;
    }
    while ( 1 )
    {
      v27 = *(v25 - 1);
      if ( v27 <= 1 )
      {
LABEL_25:
        v26 = v25 + 2;
        if ( v24 == (char *)(v25 + 1) )
          goto LABEL_36;
        goto LABEL_26;
      }
      v28 = 16LL * (*(_DWORD *)(v27 + 12) & v45);
      v29 = &v9[(unsigned __int64)v28 / 8];
      if ( v10 == v28 )
      {
LABEL_44:
        if ( v9 == v29 )
        {
LABEL_60:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v30 = v9;
        while ( *v30 )
        {
          v30 += 2;
          if ( v29 == v30 )
            goto LABEL_60;
        }
        *v30 = v27;
        if ( v25 == v30 + 1 )
          goto LABEL_25;
        v31 = v30[1];
        if ( v31 )
          goto LABEL_34;
      }
      else
      {
        v30 = &v9[(unsigned __int64)v28 / 8];
        while ( *v30 )
        {
          v30 += 2;
          if ( v21 == v30 )
            goto LABEL_44;
        }
        *v30 = v27;
        if ( v25 == v30 + 1 )
          goto LABEL_25;
        v31 = v30[1];
        if ( v31 )
        {
LABEL_34:
          v53 = v21;
          v49 = v25;
          v46 = v11;
          sub_186B220((void *)(v31 - 8));
          v21 = v53;
          v25 = v49;
          v11 = v46;
        }
      }
      v30[1] = 0;
      v30[1] = *v25;
      v26 = v25 + 2;
      v32 = (char *)(v25 + 1);
      *((_QWORD *)v32 - 1) = 0;
      if ( v24 == v32 )
      {
LABEL_36:
        v23 = *(unsigned int *)(a1 + 56);
        v24 = *(char **)(a1 + 48);
        goto LABEL_37;
      }
LABEL_26:
      v25 = v26;
    }
  }
  v8 = v6 - 1;
  v9 = *(unsigned __int64 **)(a1 + 48);
  v10 = 16 * v6;
  v45 = v8;
  v11 = &v9[v10 / 8];
LABEL_3:
  v12 = *(_DWORD *)(a2 + 12);
  v13 = 16LL * (v12 & v45);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v10 != v13 )
  {
    v15 = &v9[(unsigned __int64)v13 / 8];
    v16 = nullptr;
    while ( 1 )
    {
      v17 = *v15;
      if ( *v15 > 1 )
      {
        if ( *(_DWORD *)(v17 + 12) == v12 && a2 == v17 )
        {
          v38 = (_QWORD *)v15[1];
          goto LABEL_66;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( v16 )
            *(_DWORD *)(a1 + 64) = v7 - 1;
          else
            v16 = v15;
          v35 = v16[1];
          *v16 = a2;
          if ( v35 )
LABEL_56:
            sub_186B220((void *)(v35 - 8));
LABEL_57:
          v16[1] = 0;
          v36 = v16 + 1;
          ++*(_DWORD *)(a1 + 60);
LABEL_58:
          v37 = (_QWORD *)sub_186B270(0x10u);
          v38 = v37 + 1;
          *v37 = 2;
          v16[1] = (unsigned __int64)(v37 + 1);
          v39 = (unsigned int *)(v37 + 1);
          goto LABEL_59;
        }
        v16 = v15;
      }
      v15 += 2;
      if ( v15 == v11 )
        goto LABEL_14;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v14 == v9 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v18 = *v9;
    if ( *v9 > 1 )
      break;
    if ( !v18 )
    {
      if ( v16 )
        *(_DWORD *)(a1 + 64) = v7 - 1;
      else
        v16 = v9;
      v35 = v16[1];
      *v16 = a2;
      if ( v35 )
        goto LABEL_56;
      goto LABEL_57;
    }
    v16 = v9;
LABEL_13:
    v9 += 2;
  }
  if ( *(_DWORD *)(v18 + 12) != v12 || a2 != v18 )
    goto LABEL_13;
  v38 = (_QWORD *)v9[1];
  v15 = v9;
LABEL_66:
  v36 = v15 + 1;
  if ( !v38 )
  {
    v16 = v15;
    goto LABEL_58;
  }
  v41 = *((unsigned int *)v38 - 1);
  if ( (_DWORD)v41 == *((_DWORD *)v38 - 2) )
  {
    v42 = (unsigned int)(3 * v41 + 1) >> 1;
    v43 = 4 * v42 + 8;
    if ( 4 * (int)v41 + 8 >= (unsigned int)v43 || (unsigned int)v41 >= v42 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v54, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v54);
      sub_233E40((__int64)v54);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v44 = (unsigned int *)sub_186B300(v38 - 1, v43);
    v38 = v44 + 2;
    v15[1] = (unsigned __int64)(v44 + 2);
    *v44 = v42;
    v39 = &v44[v44[1] + 2];
  }
  else
  {
    v39 = (unsigned int *)v38 + v41;
  }
LABEL_59:
  *v39 = a3;
  ++*((_DWORD *)v38 - 1);
  return v36;
}

