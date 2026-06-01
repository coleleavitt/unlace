__int64 __fastcall sub_6001A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char **exception; // rbx
  unsigned __int64 v8; // r14
  __int64 v9; // r13
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  int v15; // esi
  __int64 *v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // r8
  __int64 *i; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rcx
  unsigned int v26; // edx
  __int64 *v27; // rdi
  __int64 v28; // rdx
  __int64 *v29; // r8
  __int64 *j; // rax
  __int64 v31; // rdx
  __int64 v32; // r13
  unsigned __int64 v33; // r14
  __int64 result; // rax
  __int64 v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rax
  int v39; // esi
  unsigned int v40; // edx
  __int64 *v41; // rdi
  __int64 v42; // rdx
  __int64 *v43; // r8
  __int64 *k; // rax
  __int64 v45; // rdx
  __int64 *v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // edx
  __int64 *v49; // rdi
  __int64 v50; // rdx
  __int64 *v51; // r8
  __int64 *m; // rax
  __int64 v53; // rdx
  unsigned int v54; // r14d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned int v62; // [rsp+1Ch] [rbp-7Ch]
  __int64 v64; // [rsp+28h] [rbp-70h]
  __int64 v65[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a3 + 40);
  v9 = *(_QWORD *)(v8 + 16);
  sub_5FF1D0(a1 + 1528, v8, a4);
  sub_FB9C70(a1 + 1128, v8);
  sub_62A000(*(_QWORD *)(a1 + 56), a3);
  v10 = *(_QWORD **)(a1 + 64);
  if ( v10 )
  {
    v11 = *((_DWORD *)v10 - 1);
    if ( v11 == *((_DWORD *)v10 - 2) )
    {
      v54 = (3 * v11 + 1) >> 1;
      v55 = 8 * v54 + 8;
      if ( 8 * v11 + 8 >= (unsigned int)v55 || v11 >= v54 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v65, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v65);
        sub_233E40((__int64)v65);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v56 = (unsigned int *)sub_186B300(v10 - 1, v55);
      v57 = v56[1];
      v10 = v56 + 2;
      *v56 = v54;
      *(_QWORD *)(a1 + 64) = v56 + 2;
      LODWORD(v56) = v57;
      v14 = &v10[v57];
      v13 = (_DWORD)v56 + 1;
    }
    else
    {
      v12 = v11;
      v13 = v11 + 1;
      v14 = &v10[v12];
    }
  }
  else
  {
    v59 = (_QWORD *)sub_186B270(0x18u);
    v10 = v59 + 1;
    *v59 = 2;
    v13 = 1;
    *(_QWORD *)(a1 + 64) = v10;
    v14 = v10;
  }
  *v14 = a3;
  *((_DWORD *)v10 - 1) = v13;
  v15 = *(_DWORD *)(v9 + 12);
  v16 = *(__int64 **)(a2 + 152);
  v17 = *(unsigned int *)(a2 + 160);
  v18 = v17 - 1;
  v17 *= 8;
  v19 = (__int64 *)((char *)v16 + v17);
  v20 = 8LL * (v15 & v18);
  v21 = &v16[(unsigned __int64)v20 / 8];
  if ( v20 != v17 )
  {
    for ( i = &v16[(unsigned __int64)v20 / 8]; v19 != i; ++i )
    {
      v23 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v23 + 12) == v15 && v9 == v23 )
        {
LABEL_19:
          v64 = a4;
          *(_BYTE *)(*(_QWORD *)(a1 + 1560) + a4) = 0;
          goto LABEL_20;
        }
      }
      else if ( !v23 )
      {
        goto LABEL_11;
      }
    }
  }
  for ( ; v21 != v16; ++v16 )
  {
    v35 = *v16;
    if ( (unsigned __int64)*v16 > 1 )
    {
      if ( *(_DWORD *)(v35 + 12) == v15 && v9 == v35 )
        goto LABEL_19;
    }
    else if ( !v35 )
    {
      break;
    }
  }
LABEL_11:
  v24 = *(unsigned int *)(a1 + 104);
  v25 = *(__int64 **)(a1 + 96);
  v26 = v24 - 1;
  v24 *= 8;
  v27 = (__int64 *)((char *)v25 + v24);
  v28 = 8LL * (v15 & v26);
  v29 = &v25[(unsigned __int64)v28 / 8];
  if ( v28 != v24 )
  {
    for ( j = &v25[(unsigned __int64)v28 / 8]; v27 != j; ++j )
    {
      v31 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        if ( *(_DWORD *)(v31 + 12) == v15 && v9 == v31 )
          goto LABEL_19;
      }
      else if ( !v31 )
      {
        goto LABEL_18;
      }
    }
  }
  for ( ; v29 != v25; ++v25 )
  {
    v58 = *v25;
    if ( (unsigned __int64)*v25 > 1 )
    {
      if ( *(_DWORD *)(v58 + 12) == v15 && v9 == v58 )
        goto LABEL_19;
    }
    else if ( !v58 )
    {
      break;
    }
  }
LABEL_18:
  v64 = a4;
LABEL_20:
  v62 = *(_DWORD *)(a3 + 68);
  if ( !v62 )
    goto LABEL_24;
  v32 = a3;
  do
  {
    v33 = *(_QWORD *)(v32 + 80);
    v32 += 8;
    v33 &= 0xFFFFFFFFFFFFFFF8LL;
    sub_5FF1D0(a1 + 1600, v33, a4);
    sub_FB9C70(a1 + 1264, v33);
  }
  while ( v32 != a3 + 8LL * v62 );
  if ( v62 == 1 && *(_DWORD *)(a3 + 64) == 1 )
  {
    v36 = *(__int64 **)(a1 + 96);
    v37 = *(_QWORD *)((*(_QWORD *)(a3 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v38 = *(unsigned int *)(a1 + 104);
    v39 = *(_DWORD *)(v37 + 12);
    v40 = v38 - 1;
    v38 *= 8;
    v41 = (__int64 *)((char *)v36 + v38);
    v42 = 8LL * (v39 & v40);
    v43 = &v36[(unsigned __int64)v42 / 8];
    if ( v42 != v38 )
    {
      for ( k = &v36[(unsigned __int64)v42 / 8]; v41 != k; ++k )
      {
        v45 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *(_DWORD *)(v45 + 12) == v39 && v37 == v45 )
            goto LABEL_24;
        }
        else if ( !v45 )
        {
          goto LABEL_42;
        }
      }
    }
    for ( ; v43 != v36; ++v36 )
    {
      v60 = *v36;
      if ( (unsigned __int64)*v36 > 1 )
      {
        if ( *(_DWORD *)(v60 + 12) == v39 && v37 == v60 )
          goto LABEL_24;
      }
      else if ( !v60 )
      {
        break;
      }
    }
LABEL_42:
    v46 = *(__int64 **)(a2 + 152);
    v47 = *(unsigned int *)(a2 + 160);
    v48 = v47 - 1;
    v47 *= 8;
    v49 = (__int64 *)((char *)v46 + v47);
    v50 = 8LL * (v39 & v48);
    v51 = &v46[(unsigned __int64)v50 / 8];
    if ( v50 != v47 )
    {
      for ( m = &v46[(unsigned __int64)v50 / 8]; v49 != m; ++m )
      {
        v53 = *m;
        if ( (unsigned __int64)*m > 1 )
        {
          if ( *(_DWORD *)(v53 + 12) == v39 && v37 == v53 )
            goto LABEL_24;
        }
        else if ( !v53 )
        {
          goto LABEL_49;
        }
      }
    }
    for ( ; v51 != v46; ++v46 )
    {
      v61 = *v46;
      if ( (unsigned __int64)*v46 > 1 )
      {
        if ( *(_DWORD *)(v61 + 12) == v39 && v37 == v61 )
          goto LABEL_24;
      }
      else if ( !v61 )
      {
        break;
      }
    }
LABEL_49:
    result = 1;
  }
  else
  {
LABEL_24:
    result = 0;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 1568) + v64) = result;
  return result;
}

