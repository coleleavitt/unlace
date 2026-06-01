unsigned __int64 __fastcall sub_48BA20(__int64 a1, int a2, int a3, unsigned int a4, unsigned int a5, char a6)
{
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int *v20; // rax
  unsigned int v21; // edx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rsi
  __int64 v32; // rax
  char *v33; // rcx
  unsigned int v34; // edx
  unsigned int v35; // edx
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // r9
  _QWORD *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+8h] [rbp-70h]
  __int64 v48; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+10h] [rbp-68h]
  char *v50; // [rsp+10h] [rbp-68h]
  unsigned int v51; // [rsp+20h] [rbp-58h] BYREF
  __int64 v52; // [rsp+28h] [rbp-50h]
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  if ( a2 == 2 || a2 == a3 )
  {
    if ( !under_debugger )
      interr(1943);
    goto LABEL_74;
  }
  if ( !a4 )
  {
    if ( !under_debugger )
      interr(1944);
    goto LABEL_74;
  }
  if ( !a5 && a6 )
  {
    if ( !under_debugger )
      interr(2134);
    goto LABEL_74;
  }
  v11 = a2;
  v12 = a3;
  v13 = 48LL * a2;
  v14 = a1 + v13 + 32;
  v15 = *(_QWORD *)(a1 + v13 + 40);
  if ( !v15 )
    goto LABEL_29;
  v16 = v14;
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v15 + 16);
      v18 = *(_QWORD *)(v15 + 24);
      if ( *(_DWORD *)(v15 + 32) < a4 )
        break;
      v16 = v15;
      v15 = *(_QWORD *)(v15 + 16);
      if ( !v17 )
        goto LABEL_11;
    }
    v15 = *(_QWORD *)(v15 + 24);
  }
  while ( v18 );
LABEL_11:
  v12 = a3;
  if ( v14 == v16 || a4 < *(_DWORD *)(v16 + 32) )
  {
LABEL_29:
    v30 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v30 + 1) )
    {
      v48 = *(_QWORD *)(a1 + 16);
      v46 = *(_QWORD *)(a1 + 8);
      v40 = qvector_reserve(a1, 0, v30 + 1, 12);
      v41 = *(_QWORD *)(a1 + 16);
      v42 = *(_QWORD **)a1;
      v31 = (_QWORD *)v40;
      v43 = *(_QWORD *)(a1 + 8) - 1LL;
      *(_QWORD *)(a1 + 16) = v48;
      if ( v43 >= 0 )
      {
        do
        {
          v44 = *v42;
          v40 += 12;
          v42 = (_QWORD *)((char *)v42 + 12);
          *(_QWORD *)(v40 - 12) = v44;
          *(_DWORD *)(v40 - 4) = *((_DWORD *)v42 - 1);
        }
        while ( v43-- != 0 );
        v42 = *(_QWORD **)a1;
      }
      v49 = v41;
      qfree(v42);
      v32 = *(_QWORD *)(a1 + 8);
      v30 = v46;
      *(_QWORD *)a1 = v31;
      *(_QWORD *)(a1 + 16) = v49;
    }
    else
    {
      v31 = *(_QWORD **)a1;
      v32 = *(_QWORD *)(a1 + 8);
    }
    v33 = (char *)v31 + 12 * v32;
    *(_QWORD *)v33 = 0;
    *((_DWORD *)v33 + 2) = 0;
    ++*(_QWORD *)(a1 + 8);
    *(_DWORD *)&v33[4 * v12] = a5;
    *(_DWORD *)&v33[4 * v11] = a4;
    v34 = *(_DWORD *)v33;
    if ( *(_DWORD *)v33 )
    {
      v38 = *(_QWORD *)(a1 + 40);
      v51 = *(_DWORD *)v33;
      v52 = v30;
      v39 = a1 + 32;
      if ( !v38 )
        goto LABEL_58;
      do
      {
        if ( *(_DWORD *)(v38 + 32) >= v34 )
        {
          v39 = v38;
          v38 = *(_QWORD *)(v38 + 16);
        }
        else
        {
          v38 = *(_QWORD *)(v38 + 24);
        }
      }
      while ( v38 );
      if ( a1 + 32 == v39 || v34 < *(_DWORD *)(v39 + 32) )
      {
LABEL_58:
        v50 = v33;
        v47 = v30;
        sub_48B960((_QWORD *)(a1 + 24), v39, (__int64)&v51);
        v30 = v47;
        v33 = v50;
      }
      else
      {
        if ( a6 )
        {
          if ( !under_debugger )
            interr(1975);
          goto LABEL_74;
        }
        *(_QWORD *)(v39 + 40) = v30;
      }
    }
    v35 = *((_DWORD *)v33 + 1);
    if ( !v35 )
      return v53 - __readfsqword(0x28u);
    v36 = *(_QWORD *)(a1 + 88);
    v51 = *((_DWORD *)v33 + 1);
    v52 = v30;
    v37 = a1 + 80;
    if ( !v36 )
      goto LABEL_59;
    do
    {
      if ( *(_DWORD *)(v36 + 32) >= v35 )
      {
        v37 = v36;
        v36 = *(_QWORD *)(v36 + 16);
      }
      else
      {
        v36 = *(_QWORD *)(v36 + 24);
      }
    }
    while ( v36 );
    if ( a1 + 80 == v37 || v35 < *(_DWORD *)(v37 + 32) )
    {
LABEL_59:
      sub_48B960((_QWORD *)(a1 + 72), v37, (__int64)&v51);
      return v53 - __readfsqword(0x28u);
    }
    if ( !a6 )
    {
      *(_QWORD *)(v37 + 40) = v30;
      return v53 - __readfsqword(0x28u);
    }
    if ( !under_debugger )
      interr(1976);
LABEL_74:
    BUG();
  }
  v19 = *(_QWORD *)(v16 + 40);
  v20 = (unsigned int *)(*(_QWORD *)a1 + 4LL * a3 + 12 * v19);
  v21 = *v20;
  if ( *v20 < a5 )
  {
    if ( !v21 )
      goto LABEL_18;
  }
  else if ( a5 >= v21 )
  {
    return v53 - __readfsqword(0x28u);
  }
  if ( a6 )
  {
    if ( !under_debugger )
      interr(2135);
    goto LABEL_74;
  }
LABEL_18:
  *v20 = a5;
  if ( a3 != 2 )
  {
    v51 = a5;
    v52 = v19;
    v23 = *(_QWORD *)(a1 + 48LL * a3 + 40);
    v24 = a1 + 48LL * a3 + 32;
    v25 = v24;
    if ( !v23 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(v23 + 16);
        v27 = *(_QWORD *)(v23 + 24);
        if ( *(_DWORD *)(v23 + 32) < a5 )
          break;
        v25 = v23;
        v23 = *(_QWORD *)(v23 + 16);
        if ( !v26 )
          goto LABEL_24;
      }
      v23 = *(_QWORD *)(v23 + 24);
    }
    while ( v27 );
LABEL_24:
    if ( v24 == v25 || a5 < *(_DWORD *)(v25 + 32) )
    {
LABEL_39:
      sub_48B960((_QWORD *)(a1 + 48 * v12 + 24), v25, (__int64)&v51);
      return v53 - __readfsqword(0x28u);
    }
    v28 = *(_QWORD *)(v25 + 40);
    if ( v19 != v28 )
    {
      v29 = *(_QWORD *)a1 + 12 * v28;
      if ( !*(_DWORD *)(v29 + 4 * v11) )
      {
        *(_DWORD *)(v29 + 4 * v12) = 0;
        return v53 - __readfsqword(0x28u);
      }
      if ( !under_debugger )
        interr(1949);
      goto LABEL_74;
    }
  }
  return v53 - __readfsqword(0x28u);
}

