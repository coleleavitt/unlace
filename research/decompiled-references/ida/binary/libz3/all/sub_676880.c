__int64 __fastcall sub_676880(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // r13d
  unsigned int v7; // esi
  unsigned int v8; // edx
  __int64 v9; // rbp
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r13d
  unsigned int v19; // esi
  unsigned int v20; // edx
  __int64 v21; // rbp
  unsigned __int64 v22; // r15
  __int64 v23; // rax
  __int64 *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned int *v28; // rcx
  __int64 v29; // rdx
  int v30; // r13d
  unsigned __int64 v31; // r14
  __int64 *v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int *v37; // rcx
  __int64 v38; // rdx
  int v39; // r13d
  unsigned __int64 v40; // r14
  __int64 *v41; // rbp
  __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rdx
  unsigned int *v45; // rcx
  __int64 v46; // rax
  int v47; // r13d
  unsigned __int64 v48; // r14
  __int64 *v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rdx
  unsigned int *v53; // rsi
  __int64 v54; // rcx
  int v55; // r13d
  unsigned __int64 v56; // r14
  __int64 *v57; // rbp
  __int64 v58; // rsi
  __int64 v59; // rdi
  __int64 result; // rax
  unsigned int v61; // eax
  unsigned int v62; // eax

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1352) + 200LL))(*(_QWORD *)(a1 + 1352));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 1360) + 200LL))(*(_QWORD *)(a1 + 1360), a2);
  v4 = *(_QWORD *)(a1 + 376);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 352);
    if ( !v5 )
      goto LABEL_13;
    v6 = *(_DWORD *)(v4 + 4LL * (*(_DWORD *)(v4 - 4) - a2));
    v7 = *(_DWORD *)(v5 - 4);
    v8 = v7 - 1;
    if ( v6 >= v7 )
    {
      *(_DWORD *)(v5 - 4) = v6;
      goto LABEL_13;
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 352);
    if ( !v5 )
      goto LABEL_14;
    v6 = *(_DWORD *)(4LL * -a2);
    v61 = *(_DWORD *)(v5 - 4);
    v8 = v61 - 1;
    if ( v6 >= v61 )
    {
      *(_DWORD *)(v5 - 4) = v6;
      goto LABEL_14;
    }
  }
  v9 = 4LL * v8;
  v10 = 4 * (v8 - (unsigned __int64)(v8 - v6));
  while ( 1 )
  {
    v12 = (__int64 *)(*(_QWORD *)(a1 + 168) + 8LL * *(unsigned int *)(v5 + v9));
    v13 = *v12;
    if ( *v12 )
    {
      v14 = *(_QWORD *)(a1 + 160);
      v15 = (*(_DWORD *)(v13 + 8))-- == 1;
      if ( v15 )
        break;
    }
    *v12 = 0;
    v11 = v9 - 4;
    if ( v10 == v9 )
      goto LABEL_10;
LABEL_6:
    v9 = v11;
  }
  sub_15D7BC0(v14, v13);
  v5 = *(_QWORD *)(a1 + 352);
  v11 = v9 - 4;
  *v12 = 0;
  if ( v10 != v9 )
    goto LABEL_6;
LABEL_10:
  v4 = *(_QWORD *)(a1 + 376);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = v6;
  if ( v4 )
LABEL_13:
    *(_DWORD *)(v4 - 4) -= a2;
LABEL_14:
  v16 = *(_QWORD *)(a1 + 384);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 360);
    if ( !v17 )
      goto LABEL_26;
    v18 = *(_DWORD *)(v16 + 4LL * (*(_DWORD *)(v16 - 4) - a2));
    v19 = *(_DWORD *)(v17 - 4);
    v20 = v19 - 1;
    if ( v18 >= v19 )
    {
      *(_DWORD *)(v17 - 4) = v18;
      goto LABEL_26;
    }
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 360);
    if ( !v17 )
      goto LABEL_27;
    v18 = *(_DWORD *)(4LL * -a2);
    v62 = *(_DWORD *)(v17 - 4);
    v20 = v62 - 1;
    if ( v18 >= v62 )
    {
      *(_DWORD *)(v17 - 4) = v18;
      goto LABEL_27;
    }
  }
  v21 = 4LL * v20;
  v22 = 4 * (v20 - (unsigned __int64)(v20 - v18));
  while ( 2 )
  {
    v24 = (__int64 *)(*(_QWORD *)(a1 + 184) + 8LL * *(unsigned int *)(v17 + v21));
    v25 = *v24;
    if ( !*v24 || (v26 = *(_QWORD *)(a1 + 176), v15 = *(_DWORD *)(v25 + 8) == 1, --*(_DWORD *)(v25 + 8), !v15) )
    {
      *v24 = 0;
      v23 = v21 - 4;
      if ( v22 == v21 )
        break;
      goto LABEL_19;
    }
    sub_15D7BC0(v26, v25);
    v17 = *(_QWORD *)(a1 + 360);
    v23 = v21 - 4;
    *v24 = 0;
    if ( v22 != v21 )
    {
LABEL_19:
      v21 = v23;
      continue;
    }
    break;
  }
  v16 = *(_QWORD *)(a1 + 384);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = v18;
  if ( v16 )
LABEL_26:
    *(_DWORD *)(v16 - 4) -= a2;
LABEL_27:
  v27 = *(_QWORD *)(a1 + 392);
  if ( v27 )
  {
    v28 = (unsigned int *)(v27 + 4LL * (*(_DWORD *)(v27 - 4) - a2));
    v29 = *(_QWORD *)(a1 + 200);
    if ( !v29 )
      goto LABEL_38;
LABEL_29:
    v30 = *v28;
    v31 = v29 + 8LL * *(unsigned int *)(v29 - 4);
    v32 = (__int64 *)(v29 + 8LL * *v28);
    if ( (unsigned __int64)v32 >= v31 )
      goto LABEL_36;
    do
    {
      while ( 1 )
      {
        v33 = *v32;
        if ( *v32 )
        {
          v34 = *(_QWORD *)(a1 + 192);
          v15 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v32 >= v31 )
          goto LABEL_35;
      }
      sub_15D7BC0(v34, v33);
      ++v32;
    }
    while ( (unsigned __int64)v32 < v31 );
LABEL_35:
    v29 = *(_QWORD *)(a1 + 200);
    v27 = *(_QWORD *)(a1 + 392);
    if ( v29 )
LABEL_36:
      *(_DWORD *)(v29 - 4) = v30;
    if ( v27 )
LABEL_38:
      *(_DWORD *)(v27 - 4) -= a2;
  }
  else
  {
    v29 = *(_QWORD *)(a1 + 200);
    v28 = (unsigned int *)(4LL * -a2);
    if ( v29 )
      goto LABEL_29;
  }
  v35 = *(_QWORD *)(a1 + 368);
  if ( !v35 )
  {
    *(_DWORD *)(a1 + 344) = *(_DWORD *)(4LL * -a2);
    v36 = *(_QWORD *)(a1 + 1584);
    if ( !v36 )
      goto LABEL_88;
LABEL_41:
    v37 = (unsigned int *)(v36 + 4LL * (*(_DWORD *)(v36 - 4) - a2));
    v38 = *(_QWORD *)(a1 + 1576);
    if ( !v38 )
      goto LABEL_51;
    goto LABEL_42;
  }
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(v35 + 4LL * (*(_DWORD *)(v35 - 4) - a2));
  *(_DWORD *)(v35 - 4) -= a2;
  v36 = *(_QWORD *)(a1 + 1584);
  if ( v36 )
    goto LABEL_41;
LABEL_88:
  v38 = *(_QWORD *)(a1 + 1576);
  v37 = (unsigned int *)(4LL * -a2);
  if ( v38 )
  {
LABEL_42:
    v39 = *v37;
    v40 = v38 + 8LL * *(unsigned int *)(v38 - 4);
    v41 = (__int64 *)(v38 + 8LL * *v37);
    if ( (unsigned __int64)v41 >= v40 )
      goto LABEL_49;
    do
    {
      while ( 1 )
      {
        v42 = *v41;
        if ( *v41 )
        {
          v43 = *(_QWORD *)(a1 + 1568);
          v15 = (*(_DWORD *)(v42 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v41 >= v40 )
          goto LABEL_48;
      }
      sub_15D7BC0(v43, v42);
      ++v41;
    }
    while ( (unsigned __int64)v41 < v40 );
LABEL_48:
    v38 = *(_QWORD *)(a1 + 1576);
    v36 = *(_QWORD *)(a1 + 1584);
    if ( v38 )
LABEL_49:
      *(_DWORD *)(v38 - 4) = v39;
    if ( !v36 )
      goto LABEL_52;
LABEL_51:
    *(_DWORD *)(v36 - 4) -= a2;
  }
LABEL_52:
  v44 = *(_QWORD *)(a1 + 1528);
  if ( v44 )
  {
    v45 = (unsigned int *)(v44 + 4LL * (*(_DWORD *)(v44 - 4) - a2));
    v46 = *(_QWORD *)(a1 + 1520);
    if ( !v46 )
      goto LABEL_63;
LABEL_54:
    v47 = *v45;
    v48 = v46 + 8LL * *(unsigned int *)(v46 - 4);
    v49 = (__int64 *)(v46 + 8LL * *v45);
    if ( (unsigned __int64)v49 >= v48 )
      goto LABEL_61;
    do
    {
      while ( 1 )
      {
        v50 = *v49;
        if ( *v49 )
        {
          v51 = *(_QWORD *)(a1 + 1512);
          v15 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v49 >= v48 )
          goto LABEL_60;
      }
      sub_15D7BC0(v51, v50);
      ++v49;
    }
    while ( (unsigned __int64)v49 < v48 );
LABEL_60:
    v46 = *(_QWORD *)(a1 + 1520);
    v44 = *(_QWORD *)(a1 + 1528);
    if ( v46 )
LABEL_61:
      *(_DWORD *)(v46 - 4) = v47;
    if ( v44 )
LABEL_63:
      *(_DWORD *)(v44 - 4) -= a2;
  }
  else
  {
    v46 = *(_QWORD *)(a1 + 1520);
    v45 = (unsigned int *)(4LL * -a2);
    if ( v46 )
      goto LABEL_54;
  }
  v52 = *(_QWORD *)(a1 + 1560);
  if ( v52 )
  {
    v53 = (unsigned int *)(v52 + 4LL * (*(_DWORD *)(v52 - 4) - a2));
    v54 = *(_QWORD *)(a1 + 1552);
    if ( !v54 )
      goto LABEL_75;
LABEL_66:
    v55 = *v53;
    v56 = v54 + 8LL * *(unsigned int *)(v54 - 4);
    v57 = (__int64 *)(v54 + 8LL * *v53);
    if ( (unsigned __int64)v57 >= v56 )
      goto LABEL_73;
    do
    {
      while ( 1 )
      {
        v58 = *v57;
        if ( *v57 )
        {
          v59 = *(_QWORD *)(a1 + 1544);
          v15 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v15 )
            break;
        }
        if ( (unsigned __int64)++v57 >= v56 )
          goto LABEL_72;
      }
      sub_15D7BC0(v59, v58);
      ++v57;
    }
    while ( (unsigned __int64)v57 < v56 );
LABEL_72:
    v54 = *(_QWORD *)(a1 + 1552);
    v52 = *(_QWORD *)(a1 + 1560);
    v46 = *(_QWORD *)(a1 + 1520);
    if ( v54 )
LABEL_73:
      *(_DWORD *)(v54 - 4) = v55;
    if ( v52 )
LABEL_75:
      *(_DWORD *)(v52 - 4) -= a2;
  }
  else
  {
    v54 = *(_QWORD *)(a1 + 1552);
    v53 = (unsigned int *)(4LL * -a2);
    if ( v54 )
      goto LABEL_66;
  }
  if ( v46 )
    result = *(unsigned int *)(v46 - 4);
  else
    result = 0;
  *(_DWORD *)(a1 + 1536) = result;
  return result;
}

