__int64 __fastcall sub_16A8F30(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebp
  __int64 *v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  __int64 *v27; // r14
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r13
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  unsigned int v50; // eax
  unsigned int v51; // edx
  __int64 v52; // r14
  __int64 i; // rbp
  __int64 v54; // rdx
  __int64 v55; // rdx
  unsigned __int64 v56; // r13
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rax

  v7 = *(_QWORD *)(a1 + 264);
  v8 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  v9 = sub_C00A40(v8, (__int64)a2, a3, a4, a5);
  v10 = *(_QWORD *)(v7 + 32);
  v11 = 6658;
  if ( (unsigned __int8)sub_FD3830(v10, 0x1A02u, v9, v7, v12, v13) == 1 )
  {
    v17 = sub_C00A40(v8, 6658, v14, v15, v16);
    v11 = 6657;
    if ( (unsigned __int8)sub_FD3830(v10, 0x1A01u, v17, v7, v18, v19) == 1 )
      return 0;
    v20 = 6657;
  }
  else
  {
    v20 = 6658;
  }
  v22 = (__int64 *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11
    || sub_C1BF80(*v22, v11, v14, v15) )
  {
    v27 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
    if ( sub_C1BF80(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), v11, v14, v15) )
      goto LABEL_12;
    v24 = *v22;
    if ( *(_BYTE *)(*v22 + 16) == 33 )
      goto LABEL_9;
  }
  else
  {
    v24 = *v22;
    if ( *(_BYTE *)(*v22 + 16) == 33 )
    {
LABEL_9:
      v25 = *(_QWORD *)(v24 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      v26 = *(_QWORD *)v25;
      if ( *(_BYTE *)(*(_QWORD *)v25 + 16LL) == 26
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
        && sub_F63050(v26, v11, v14, v15) )
      {
        v27 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
        v28 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v28 + 16) == 33
          || (v60 = *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v60 + 16) == 33)
          && (v28 = sub_F63050(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), v11, v60, v15)) != 0 )
        {
          v29 = *(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v30 = *(_QWORD *)v29;
          if ( *(_BYTE *)(*(_QWORD *)v29 + 16LL) == 26
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
            && sub_F63050(v30, v11, v14, v15) )
          {
LABEL_12:
            v33 = *(_QWORD *)(sub_F68450(*v22, v11, v14, v15, v23) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v33 + 16) - 25 > 1 )
              v33 = sub_F63050(v33, v11, v31, v32);
            v38 = *(_QWORD *)(sub_F68450(*v27, v11, v31, v32, v34) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v38 + 16) - 25 <= 1 )
              goto LABEL_15;
            goto LABEL_59;
          }
        }
      }
      goto LABEL_47;
    }
  }
  v54 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v54 != 33 )
    goto LABEL_48;
  v24 = sub_F63050(v24, v11, v54, v15);
  if ( v24 )
    goto LABEL_9;
LABEL_47:
  LODWORD(v54) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_48:
  v55 = (unsigned int)(v54 - 25);
  if ( (unsigned int)v55 > 1 )
    return 0;
  v56 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v57 = *(_QWORD *)v56;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v56 + 16LL) - 43 > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v57 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 > 1 )
      return 0;
    v57 = sub_F63050(v57, v11, v55, v15);
    if ( !v57 )
      return 0;
  }
  while ( 1 )
  {
    v36 = *(_QWORD *)(v57 + 32) & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_BYTE *)(v57 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v57 = *(_QWORD *)v36;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v36 + 16LL) - 43 <= 1 )
        break;
      v58 = sub_F63050(v57, v11, v55, v36);
      v36 = *(_QWORD *)(v58 + 32) & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(v58 + 18) & 0x10) == 0 )
        goto LABEL_53;
    }
  }
LABEL_53:
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25) > 1u )
    return 0;
  v33 = *v22;
  if ( (unsigned int)*(unsigned __int8 *)(v33 + 16) - 25 > 1 )
    v33 = sub_F63050(v33, v11, v55, v36);
  v59 = *(_QWORD *)v56;
  v35 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v56 + 16LL) - 43;
  if ( (unsigned int)v35 <= 1 || (v59 = sub_16A7B60(v59, v11, v35, v36)) != 0 )
    v56 = sub_9B4870(v59, v11, v35, v36, v23) & 0xFFFFFFFFFFFFFFF0LL;
  v38 = *(_QWORD *)v56;
  if ( (unsigned int)*(unsigned __int8 *)(v38 + 16) - 25 > 1 )
LABEL_59:
    v38 = sub_F63050(v38, v11, v35, v36);
LABEL_15:
  v39 = *(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v39 == *(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) )
    return 0;
  if ( v20 == 6658 )
    return v20;
  v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v40 + 16) == 13 && ((*(_WORD *)(v40 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v41 = v33;
    if ( (*(_BYTE *)(v33 + 16) == 26 || *(_BYTE *)(v39 + 16) == 26 && (v41 = sub_F63050(v33, v11, v39, v36)) != 0)
      && *(char *)(v41 + 19) >= 0
      && !*(_WORD *)(v41 + 22) )
    {
      return 0;
    }
  }
  v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v42 + 16) == 13 && ((*(_WORD *)(v42 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    v43 = v38;
    if ( (*(_BYTE *)(v38 + 16) == 26
       || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
       && (v43 = sub_F63050(v38, v11, v39, v36)) != 0)
      && *(char *)(v43 + 19) >= 0
      && !*(_WORD *)(v43 + 22) )
    {
      return 0;
    }
  }
  v44 = *(_QWORD *)(a1 + 248);
  if ( *(_DWORD *)(*(_QWORD *)(v44 + 17448) + 260LL) == 15 )
  {
    if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(v33 + 24) & 0xFFFFFFFFFFFFFFF0LL), v11, v44, v36, v23) )
    {
      v62 = v33;
      if ( *(_BYTE *)(v33 + 16) != 26 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
          return 0;
        v62 = sub_F63050(v33, v11, v61, v36);
        if ( !v62 )
          return 0;
      }
      if ( *(char *)(v62 + 19) >= 0 && !*(_WORD *)(v62 + 22) )
        return 0;
    }
    v44 = *(_QWORD *)(a1 + 248);
  }
  v45 = *(_QWORD *)(v38 + 24);
  v20 = 6657;
  if ( !sub_16A7BC0(*(_QWORD *)(v33 + 24), v45, v44, v36, v23, v37) )
    return v20;
  if ( *(_BYTE *)(v33 + 16) == 25
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 25
    && sub_F63050(v33, v45, v46, v47)
    || *(_BYTE *)(v38 + 16) == 25
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 25
    && sub_F63050(v38, v45, v46, v47) )
  {
    return 0;
  }
  v50 = *(unsigned __int16 *)(v33 + 22);
  v51 = *(unsigned __int16 *)(v38 + 22);
  if ( v51 >= v50 )
  {
    if ( v51 > v50 )
    {
      v20 = 6657;
      if ( *(char *)(v33 + 19) >= 0 )
        return v20;
    }
  }
  else
  {
    v20 = 6657;
    v50 = *(unsigned __int16 *)(v38 + 22);
    if ( *(char *)(v38 + 19) >= 0 )
      return v20;
  }
  if ( !v50 )
    return 0;
  v52 = v50 - 1;
  for ( i = 0;
        sub_16A7BC0(*(_QWORD *)(v33 + 8 * i + 48), *(_QWORD *)(v38 + 8 * i + 48), *(_QWORD *)(a1 + 248), v47, v48, v49);
        ++i )
  {
    if ( v52 == i )
      return 0;
  }
  return 6657;
}
