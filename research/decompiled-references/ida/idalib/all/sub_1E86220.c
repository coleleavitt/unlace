__int64 __fastcall sub_1E86220(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  int v31; // eax
  __int64 i; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  _QWORD *v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r9
  _QWORD *v41; // r13
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 (__fastcall *v51)(__int64); // rax
  __int64 v52; // rbp
  __int64 (__fastcall *v53)(__int64); // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 *v57; // [rsp+8h] [rbp-40h]

  v6 = a2;
  v8 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  v9 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(_QWORD *)v8;
  v57 = (__int64 *)v8;
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(v11 + 16);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(unsigned __int8 *)(v13 + 16);
  if ( (_BYTE)v12 != 48 )
  {
    a2 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 35;
    if ( (unsigned int)a2 <= 1 )
      goto LABEL_9;
    v46 = (unsigned int)(v12 - 35);
    if ( (unsigned int)v46 <= 1 )
    {
      v47 = sub_F63050(v9, a2, v46, v8);
      v8 = (unsigned __int64)v57;
      v9 = v47;
      v10 = *v57;
      v48 = *(unsigned __int8 *)(*v57 + 16);
      if ( v48 == 35 || v48 == 36 )
        goto LABEL_14;
      goto LABEL_11;
    }
LABEL_41:
    a2 = *(unsigned __int8 *)(v10 + 16);
    v9 = 0;
    v12 = (unsigned int)(a2 - 35);
    if ( (unsigned __int8)(a2 - 35) <= 1u )
      return 0;
    goto LABEL_12;
  }
  if ( (_BYTE)v14 == 48 )
  {
    if ( *((_BYTE *)sub_F60F10(v11, a2, v12, v8, a5, a6) + 73) >> 5 == 2
      || *((_BYTE *)sub_F60F10(v13, a2, v15, v16, v17, v18) + 73) >> 5 == 2 )
    {
      return 0;
    }
    if ( v11 == v13 )
      return 1;
    if ( (unsigned __int8)sub_1E63CF0(a1, (unsigned int)a2, a4, (__int64 *)((char *)&dword_0 + 1), 3970, v19) )
      return 0;
    v24 = sub_F60F10(v13, (unsigned int)a2, v20, v21, v22, v23);
    v29 = sub_F60F10(v11, (unsigned int)a2, v25, v26, v27, v28);
    return sub_B70650((__int64)v24, (__int64)v29);
  }
  v12 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 35;
  if ( (unsigned int)v12 > 1 )
    goto LABEL_41;
LABEL_9:
  v31 = *(unsigned __int8 *)(v10 + 16);
  if ( v31 != 35 && v31 != 36 )
  {
LABEL_11:
    v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_12:
    if ( (unsigned int)(v14 - 35) > 1 )
      return 0;
    v10 = sub_F63050(v10, a2, v12, v8);
LABEL_14:
    if ( !v9 || !v10 )
      return 0;
  }
  for ( i = *(_QWORD *)(v9 + 24); ; i = *(_QWORD *)(v33 + 24) )
  {
    v33 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
    v34 = *(unsigned __int8 *)(v33 + 16);
    if ( (unsigned int)(v34 - 35) <= 1 )
    {
      if ( (_BYTE)v34 == 36 )
        goto LABEL_19;
      continue;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v33 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
      break;
    v50 = sub_F63050(v33, a2, v34, v8);
    v33 = v50;
    if ( !v50 )
      break;
    v34 = *(unsigned __int8 *)(v50 + 16);
    if ( (_BYTE)v34 == 36 )
    {
LABEL_19:
      v35 = (_QWORD *)sub_F62610(v33, a2, v34, v8, a5, a6);
      goto LABEL_20;
    }
  }
  v35 = nullptr;
LABEL_20:
  v36 = *(_QWORD *)(v10 + 24);
  while ( 2 )
  {
    v37 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
    v38 = *(unsigned __int8 *)(v37 + 16);
    if ( (unsigned int)(v38 - 35) <= 1 )
    {
      if ( (_BYTE)v38 == 36 )
        break;
      goto LABEL_35;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
      return 0;
    v49 = sub_F63050(v37, a2, v38, v8);
    v37 = v49;
    if ( !v49 )
      return 0;
    v38 = *(unsigned __int8 *)(v49 + 16);
    if ( (_BYTE)v38 != 36 )
    {
LABEL_35:
      v36 = *(_QWORD *)(v37 + 24);
      continue;
    }
    break;
  }
  v39 = sub_F62610(v37, a2, v38, v8, a5, a6);
  v41 = (_QWORD *)v39;
  if ( !v35 || !v39 || (unsigned __int8)sub_1E63CF0(a1, v6, a4, (__int64 *)((char *)&dword_0 + 1), 3970, v40) )
    return 0;
  if ( v41 != v35 )
  {
    do
    {
      v51 = *(__int64 (__fastcall **)(__int64))(*v35 + 32LL);
      if ( v51 == sub_A55E60 )
        v52 = v35[12];
      else
        v52 = v51((__int64)v35);
      v53 = *(__int64 (__fastcall **)(__int64))(*v41 + 32LL);
      if ( v53 == sub_A55E60 )
        v54 = v41[12];
      else
        v54 = v53((__int64)v41);
      if ( v52 == v54 )
        break;
      v55 = sub_BAB630((__int64)v41, v6, v42, v43, v44, v45);
      v41 = (_QWORD *)v55;
      if ( !v55 )
        return 0;
    }
    while ( (_QWORD *)v55 != v35 );
  }
  return 1;
}
