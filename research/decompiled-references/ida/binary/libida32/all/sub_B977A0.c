__int64 __fastcall sub_B977A0(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned int v5; // eax
  const void *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *v9; // rdi
  size_t v10; // rdx
  size_t v11; // r13
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  __int64 v21; // rdi
  _BYTE *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // r12d
  int v26; // ebp
  unsigned __int64 v27; // rdx
  __int64 v28; // rdi
  _BYTE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdi
  __int64 v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r14
  __int64 v51; // rax
  unsigned __int8 v52; // si
  int v53; // esi
  __int64 v54; // r13
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdi
  _BYTE *v58; // rax
  unsigned __int64 v59; // [rsp+28h] [rbp-60h] BYREF
  void *v60[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v61; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 9) & 1) == 0 && (*(_QWORD *)(a2 + 8) & 7LL) == 4 )
  {
    sub_971800(*(_QWORD *)a1, "__module_private__ ");
    v4 = *(_QWORD *)a1;
  }
  v5 = sub_F348E0(*(_BYTE *)(a2 + 73) >> 5);
  v6 = (const void *)sub_F34900(v5);
  v9 = *(_BYTE **)(v4 + 32);
  v11 = v10;
  v12 = *(_QWORD *)(v4 + 24);
  v13 = v12 - (_QWORD)v9;
  if ( v11 > v12 - (unsigned __int64)v9 )
  {
    v4 = sub_22581D0(v4, v6, v11);
    v12 = *(_QWORD *)(v4 + 24);
    v9 = *(_BYTE **)(v4 + 32);
LABEL_6:
    if ( v12 > (unsigned __int64)v9 )
      goto LABEL_7;
    goto LABEL_34;
  }
  if ( !v11 )
    goto LABEL_6;
  memcpy(v9, v6, v11);
  v27 = *(_QWORD *)(v4 + 24);
  v9 = (_BYTE *)(v11 + *(_QWORD *)(v4 + 32));
  *(_QWORD *)(v4 + 32) = v9;
  if ( v27 > (unsigned __int64)v9 )
  {
LABEL_7:
    *(_QWORD *)(v4 + 32) = v9 + 1;
    *v9 = 32;
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_8;
LABEL_35:
    if ( (unsigned __int8)sub_B8E960((const char **)a1, a2, 1, v13, v7, v8) )
    {
      v28 = *(_QWORD *)a1;
      v29 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
      if ( (unsigned __int64)v29 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
      {
        sub_2257CD0(v28, 32);
      }
      else
      {
        *(_QWORD *)(v28 + 32) = v29 + 1;
        *v29 = 32;
      }
    }
    result = *(_QWORD *)(a2 + 40);
    if ( (result & 7) == 0 && (result & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_10;
LABEL_21:
    if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_22;
LABEL_31:
    result = sub_B8E960((const char **)a1, a2, 2, v13, v7, v8);
    if ( (*(_BYTE *)(a2 + 74) & 1) == 0 )
      return result;
    goto LABEL_23;
  }
LABEL_34:
  sub_2257CD0(v4, 32);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    goto LABEL_35;
LABEL_8:
  result = *(_QWORD *)(a2 + 40);
  if ( (result & 7) != 0 )
    goto LABEL_22;
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_21;
LABEL_10:
  v15 = *(_QWORD *)(a2 + 120);
  v16 = *(_QWORD *)a1;
  if ( (v15 & 4) != 0 )
  {
    v17 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v17 )
    {
      sub_E6C510(v17, v16, a1 + 8, 0, 1);
      v16 = *(_QWORD *)a1;
    }
  }
  sub_B4EFB0(a2, v16);
  result = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 60;
  if ( (unsigned int)result > 1 )
    goto LABEL_21;
  v18 = *(_QWORD *)(sub_B9B550(a2) + 56);
  v19 = *(_QWORD *)(a2 + 160);
  if ( !v19 )
    goto LABEL_44;
  v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v19 & 4) != 0 )
  {
    if ( !v20 )
      goto LABEL_44;
    v20 = *(_QWORD *)v20;
  }
  if ( v20 && (*(_BYTE *)(a1 + 13) & 1) == 0 )
  {
    result = (__int64)sub_B8F470((__int64 *)a1, v20 + 16, *(unsigned int *)(v20 + 8), v18);
    goto LABEL_21;
  }
LABEL_44:
  result = sub_B8F320((__int64 *)a1, *(_QWORD *)(a2 + 168) + 8LL, **(unsigned int **)(a2 + 168), v18);
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    goto LABEL_31;
LABEL_22:
  if ( (*(_BYTE *)(a2 + 74) & 1) == 0 )
    return result;
LABEL_23:
  v21 = *(_QWORD *)a1;
  v22 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
  {
    sub_2257CD0(v21, 32);
  }
  else
  {
    v23 = (__int64)(v22 + 1);
    *(_QWORD *)(v21 + 32) = v22 + 1;
    *v22 = 32;
  }
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v23, v13, v7, v8);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 128) + 16LL) )
  {
    sub_971800(*(_QWORD *)a1, ": ");
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v30, v31, v32, v33);
    v38 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v38 + 24) & 1) != 0 )
      v39 = sub_B72C40(v38);
    else
      v39 = *(_QWORD *)(v38 + 24);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v34, v35, v36, v37);
    v44 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v44 + 24) & 1) != 0 )
      v45 = sub_B72C40(v44);
    else
      v45 = *(_QWORD *)(v44 + 24);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v40, v41, v42, v43);
    v50 = v45 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
    while ( v39 != v50 )
    {
      while ( 1 )
      {
        sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v46, v47, v48, v49);
        v56 = *(_QWORD *)(a2 + 128);
        if ( (*(_BYTE *)(v56 + 24) & 1) != 0 )
          v51 = sub_B72C40(v56);
        else
          v51 = *(_QWORD *)(v56 + 24);
        if ( v51 != v39 )
          sub_971800(*(_QWORD *)a1, ", ");
        v52 = *(_BYTE *)(v39 + 12);
        if ( (v52 & 1) != 0 )
        {
          sub_971800(*(_QWORD *)a1, "virtual ");
          v52 = *(_BYTE *)(v39 + 12);
        }
        v53 = (v52 >> 2) & 3;
        if ( v53 != 3 )
        {
          sub_B8ED40((__int64 *)a1, v53);
          sub_971800(*(_QWORD *)a1, " ");
        }
        v54 = *(_QWORD *)a1;
        v55 = *(_QWORD *)(**(_QWORD **)(v39 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v55 + 8) & 0xF) != 0 )
          v55 = sub_F411C0(**(_QWORD **)(v39 + 16));
        v59 = v55 & 0xFFFFFFFFFFFFFFF0LL;
        sub_F54860(v60, &v59, a1 + 8);
        sub_22581D0(v54, v60[0], v60[1]);
        if ( v60[0] != &v61 )
          operator delete(v60[0]);
        if ( *(_DWORD *)(v39 + 8) )
          break;
        v39 += 24;
        if ( v39 == v50 )
          goto LABEL_68;
      }
      v39 += 24;
      sub_971800(*(_QWORD *)a1, "...");
    }
LABEL_68:
    v57 = *(_QWORD *)a1;
    v58 = *(_BYTE **)(*(_QWORD *)a1 + 32LL);
    if ( (unsigned __int64)v58 >= *(_QWORD *)(*(_QWORD *)a1 + 24LL) )
    {
      sub_2257CD0(v57, 32);
    }
    else
    {
      *(_QWORD *)(v57 + 32) = v58 + 1;
      *v58 = 32;
    }
  }
  v24 = *(_QWORD *)a1;
  if ( *(char *)(a1 + 11) < 0 )
    return sub_971800(v24, "{}");
  sub_971800(v24, "{\n");
  sub_B96800(a1, a2 + 64, 1);
  v25 = *(_DWORD *)(a1 + 32);
  v26 = 0;
  if ( v25 )
  {
    do
    {
      ++v26;
      sub_971800(*(_QWORD *)a1, "  ");
    }
    while ( v25 != v26 );
  }
  return sub_971800(*(_QWORD *)a1, "}");
}

