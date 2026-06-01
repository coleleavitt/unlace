__int64 __fastcall sub_60B6C0(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned int v5; // r14d
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // r12
  size_t v9; // r15
  const void *v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // ecx
  _QWORD *v13; // r9
  __int64 v14; // rbp
  __int64 v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v29; // rax
  _QWORD *v30; // rbp
  char *v31; // rdx
  void *v32; // rdi
  __int64 *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  unsigned __int64 v38; // rdx
  void *v39; // rax
  __int64 v40; // rax
  unsigned int v41; // [rsp+Ch] [rbp-44h]
  unsigned int v42; // [rsp+Ch] [rbp-44h]
  _QWORD *v43; // [rsp+10h] [rbp-40h]
  _QWORD *v44; // [rsp+10h] [rbp-40h]

  if ( !a1 || !a3 )
    return 0;
  if ( *((_WORD *)a2 + 8) != 6 )
    return 0;
  if ( !*(_DWORD *)(a1 + 28) )
    return 0;
  v4 = *(_QWORD *)(a3 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_QWORD *)(v4 + 32);
  if ( (unsigned __int8)sub_CB1620(v6, *a2) )
    return 0;
  if ( (unsigned __int8)sub_CB1620(v6, v5) )
    return 0;
  v7 = *(_QWORD *)(v4 + 64);
  v8 = *(_QWORD *)(v7 + 2880);
  if ( !v8 )
    return 0;
  v9 = a2[1];
  v10 = *((const void **)a2 + 1);
  v11 = sub_25E2710(v10, v9);
  v12 = sub_25E2870(v7 + 552, v10, v9, v11);
  v13 = (_QWORD *)(*(_QWORD *)(v7 + 552) + 8LL * v12);
  v14 = *v13;
  if ( *v13 )
  {
    if ( v14 != -8 )
      goto LABEL_10;
    --*(_DWORD *)(v7 + 568);
  }
  v29 = *(_QWORD *)(v7 + 576);
  *(_QWORD *)(v7 + 656) += v9 + 17;
  v30 = (_QWORD *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v31 = (char *)v30 + v9 + 17;
  if ( *(_QWORD *)(v7 + 584) >= (unsigned __int64)v31 && v29 )
  {
    *(_QWORD *)(v7 + 576) = v31;
  }
  else
  {
    v44 = v13;
    v42 = v12;
    v40 = sub_5F8390(v7 + 576, v9 + 17, 3);
    v13 = v44;
    v12 = v42;
    v30 = (_QWORD *)v40;
  }
  v32 = v30 + 2;
  if ( v9 )
  {
    v43 = v13;
    v41 = v12;
    v39 = memcpy(v32, v10, v9);
    v13 = v43;
    v12 = v41;
    v32 = v39;
  }
  *((_BYTE *)v32 + v9) = 0;
  *v30 = v9;
  v30[1] = 0;
  *v13 = v30;
  ++*(_DWORD *)(v7 + 564);
  v33 = (__int64 *)(*(_QWORD *)(v7 + 552) + 8LL * (unsigned int)sub_25E2C40(v7 + 552, v12));
  v14 = *v33;
  if ( *v33 != -8 )
    goto LABEL_33;
  do
  {
    do
    {
      v14 = v33[1];
      ++v33;
    }
    while ( v14 == -8 );
LABEL_33:
    ;
  }
  while ( !v14 );
LABEL_10:
  v15 = *(_QWORD *)(v14 + 8);
  if ( !v15 )
  {
    v34 = *(_QWORD *)(v7 + 672);
    if ( !v34
      || (v35 = (*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v34 + 16LL))(v34, v10, v9),
          *(_QWORD *)(v14 + 8) = v35,
          (v15 = v35) == 0) )
    {
      v36 = *(_QWORD *)(v7 + 576);
      *(_QWORD *)(v7 + 656) += 24LL;
      v37 = (_QWORD *)((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( *(_QWORD *)(v7 + 584) >= (unsigned __int64)(v37 + 3) && v36 )
        *(_QWORD *)(v7 + 576) = v37 + 3;
      else
        v37 = (_QWORD *)sub_5F8390(v7 + 576, 24, 3);
      v38 = *v37 & 0xFFFFFC0000000000LL;
      v37[1] = 0;
      *v37 = v38 | 0x1FFFC05;
      *(_QWORD *)(v14 + 8) = v37;
      v37[2] = v14;
      v15 = *(_QWORD *)(v14 + 8);
    }
  }
  if ( (*(_BYTE *)(v15 + 3) & 4) == 0 )
    return 0;
  v16 = *(_QWORD **)(a1 + 8);
  v17 = 8LL * *(unsigned int *)(a1 + 24);
  v18 = &v16[(unsigned __int64)v17 / 8];
  v19 = v17 >> 3;
  v20 = v17 >> 5;
  if ( v20 )
  {
    v21 = &v16[4 * v20];
    while ( v15 != *v16 )
    {
      if ( v15 == v16[1] )
      {
        ++v16;
        break;
      }
      if ( v15 == v16[2] )
      {
        v16 += 2;
        break;
      }
      if ( v15 == v16[3] )
      {
        v16 += 3;
        break;
      }
      v16 += 4;
      if ( v16 == v21 )
      {
        v19 = v18 - v16;
        goto LABEL_44;
      }
    }
LABEL_19:
    if ( v18 == v16 )
      goto LABEL_20;
    return 0;
  }
LABEL_44:
  if ( v19 != 2 )
  {
    if ( v19 != 3 )
    {
      if ( v19 != 1 )
        goto LABEL_20;
      goto LABEL_47;
    }
    if ( v15 == *v16 )
      goto LABEL_19;
    ++v16;
  }
  if ( v15 == *v16 )
    goto LABEL_19;
  ++v16;
LABEL_47:
  if ( v15 == *v16 )
    goto LABEL_19;
LABEL_20:
  v24 = sub_11CFB40(v7, v15);
  if ( !v24 )
    return 0;
  v26 = sub_1181E10(v24, v15, v22, v23, v25);
  v27 = v26;
  if ( v26 )
    v27 = *(_QWORD *)(v26 + 16);
  return sub_11EE4F0(v8, v27);
}

