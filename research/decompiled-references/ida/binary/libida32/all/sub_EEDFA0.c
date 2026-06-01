__int64 __fastcall sub_EEDFA0(_QWORD *a1, __int64 a2, double a3)
{
  int v3; // r12d
  int v6; // r13d
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // r14
  __int64 i; // r12
  __int64 v19; // rax
  __int64 v20; // rdi
  _BYTE *v21; // rax
  size_t v22; // rdx
  _QWORD *v23; // rsi
  unsigned int *v24; // rsi
  char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // r13d
  int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdi
  _BYTE *v38; // rax
  _QWORD *v39; // rsi
  size_t v40; // rdx
  unsigned int *v41; // rsi
  int v42; // esi
  char *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  int v52; // eax
  __int64 v53; // r13
  __int64 j; // r12
  __int64 v55; // rdi
  int v56; // r14d
  __int64 v57; // r13
  int v58; // r12d
  int v59; // esi
  const char *v60; // rax
  size_t v61; // rdx
  __int64 result; // rax

  v3 = 0;
  v6 = *((_DWORD *)a1 + 2);
  if ( v6 > 0 )
  {
    do
    {
      ++v3;
      sub_971800(*a1, "  ");
    }
    while ( v3 != v6 );
  }
  sub_971800(*a1, "asm ");
  if ( *(_BYTE *)(a2 + 13) )
    sub_971800(*a1, "volatile ");
  v7 = *a1;
  if ( *(_DWORD *)(a2 + 80) )
  {
    sub_971800(v7, "goto ");
    v7 = *a1;
  }
  sub_971800(v7, "(");
  sub_EE16F0(a1, *(char **)(a2 + 48), v8, v9, v10, v11, a3);
  if ( !*(_DWORD *)(a2 + 16) && !*(_DWORD *)(a2 + 20) && !*(_DWORD *)(a2 + 24) && !*(_DWORD *)(a2 + 80) )
    goto LABEL_59;
  sub_971800(*a1, " : ");
  v16 = *(_DWORD *)(a2 + 16);
  if ( v16 )
  {
    v17 = (unsigned int)(v16 - 1);
    for ( i = 0; ; ++i )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8 * i);
      if ( v19 && **(_DWORD **)(v19 + 16) )
      {
        v20 = *a1;
        v21 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v21 >= *(_QWORD *)(*a1 + 24LL) )
        {
          sub_2257CD0(v20, 91);
        }
        else
        {
          *(_QWORD *)(v20 + 32) = v21 + 1;
          *v21 = 91;
        }
        v22 = 0;
        v23 = *(_QWORD **)(*(_QWORD *)(a2 + 72) + 8 * i);
        if ( v23 )
        {
          v24 = (unsigned int *)v23[2];
          v22 = *v24;
          v23 = v24 + 4;
        }
        sub_9717A0(*a1, v23, v22);
        sub_971800(*a1, "] ");
      }
      sub_EE16F0(a1, *(char **)(*(_QWORD *)(a2 + 56) + 8 * i), v12, v13, v14, v15, a3);
      sub_971800(*a1, " (");
      v25 = (char *)sub_ECA070(a2, i);
      sub_EE16F0(a1, v25, v26, v27, v28, v29, a3);
      sub_971800(*a1, ")");
      if ( v17 == i )
        break;
      sub_971800(*a1, ", ");
    }
  }
  if ( !*(_DWORD *)(a2 + 20) )
  {
LABEL_59:
    if ( !*(_DWORD *)(a2 + 24) && !*(_DWORD *)(a2 + 80) )
      goto LABEL_34;
  }
  sub_971800(*a1, " : ");
  v32 = *(_DWORD *)(a2 + 20);
  if ( v32 )
  {
    v33 = 0;
    while ( 1 )
    {
      v34 = *(_QWORD *)(a2 + 72);
      v35 = 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v33);
      v36 = *(_QWORD *)(v34 + v35);
      if ( v36 && **(_DWORD **)(v36 + 16) )
      {
        v37 = *a1;
        v38 = *(_BYTE **)(*a1 + 32LL);
        if ( (unsigned __int64)v38 >= *(_QWORD *)(*a1 + 24LL) )
        {
          sub_2257CD0(v37, 91);
        }
        else
        {
          *(_QWORD *)(v37 + 32) = v38 + 1;
          *v38 = 91;
        }
        v39 = *(_QWORD **)(*(_QWORD *)(a2 + 72) + 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v33));
        v40 = 0;
        if ( v39 )
        {
          v41 = (unsigned int *)v39[2];
          v40 = *v41;
          v39 = v41 + 4;
        }
        sub_9717A0(*a1, v39, v40);
        sub_971800(*a1, "] ");
        v35 = 8LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v33);
      }
      sub_EE16F0(a1, *(char **)(*(_QWORD *)(a2 + 56) + v35), *(_QWORD *)(a2 + 56), v34, v30, v31, a3);
      sub_971800(*a1, " (");
      v42 = v33++;
      v43 = (char *)sub_ECA080(a2, v42);
      sub_EE16F0(a1, v43, v44, v45, v46, v47, a3);
      sub_971800(*a1, ")");
      if ( v33 == v32 )
        break;
      sub_971800(*a1, ", ");
    }
  }
  if ( !*(_DWORD *)(a2 + 24) )
  {
LABEL_34:
    if ( !*(_DWORD *)(a2 + 80) )
      goto LABEL_46;
  }
  sub_971800(*a1, " : ");
  v52 = *(_DWORD *)(a2 + 24);
  if ( v52 )
  {
    v53 = (unsigned int)(v52 - 1);
    for ( j = 0; ; ++j )
    {
      sub_EE16F0(a1, *(char **)(*(_QWORD *)(a2 + 64) + 8 * j), v48, v49, v50, v51, a3);
      if ( j == v53 )
        break;
      if ( (_DWORD)j != -1 )
        sub_971800(*a1, ", ");
    }
  }
  v55 = *a1;
  if ( *(_DWORD *)(a2 + 80) )
  {
    sub_971800(v55, " : ");
    v56 = *(_DWORD *)(a2 + 80);
    if ( v56 )
    {
      v57 = *a1;
      v58 = 0;
      while ( 1 )
      {
        v59 = v58++;
        v60 = sub_ECA0C0(a2, v59);
        sub_9717A0(v57, v60, v61);
        if ( v58 == v56 )
          break;
        sub_971800(*a1, ", ");
        v57 = *a1;
      }
    }
LABEL_46:
    v55 = *a1;
  }
  result = sub_971800(v55, ");");
  if ( (*((_BYTE *)a1 + 28) & 8) != 0 )
    return sub_22581D0(*a1, a1[5], a1[6]);
  return result;
}

