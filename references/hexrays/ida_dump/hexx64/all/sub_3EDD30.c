__int64 __fastcall sub_3EDD30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6, _DWORD *a7)
{
  char *v9; // rbp
  char **v11; // rax
  int v12; // ebp
  char v13; // dl
  unsigned int v14; // eax
  bool v15; // zf
  char v16; // al
  __int64 v17; // r15
  char v18; // dl
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  unsigned int tinfo_size; // eax
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // r13
  int v26; // edx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v30; // rsi
  __int64 v31; // rax
  int v32; // ebp
  __int64 item_end; // rsi
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r12
  _QWORD *v39; // rbp
  void *v40; // r15
  _QWORD *v41; // r13
  __int64 v42; // rdi
  __int64 v43; // rdi
  _QWORD *v44; // rdi
  int v45; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v46; // [rsp+8h] [rbp-A0h]
  __int64 v47; // [rsp+20h] [rbp-88h] BYREF
  __int64 v48; // [rsp+28h] [rbp-80h] BYREF
  char *v49; // [rsp+30h] [rbp-78h] BYREF
  __int128 v50; // [rsp+38h] [rbp-70h]
  _UNKNOWN **v51; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v52[10]; // [rsp+58h] [rbp-50h] BYREF

  v9 = a5;
  v52[2] = __readfsqword(0x28u);
  v50 = 0;
  v49 = nullptr;
  if ( (unsigned __int8)cleanup_name(&v49, a4, a5, 0) )
    v9 = v49;
  if ( v9 && (v11 = sub_3EBB10(v9)) != nullptr )
  {
    v12 = *((_DWORD *)v11 + 2) - *((_DWORD *)v11 + 3);
    v51 = (_UNKNOWN **)*((unsigned __int8 *)v11 + 16);
    copy_tinfo_t(a6 + 32, &v51);
    clear_tinfo_t(&v51);
  }
  else
  {
    v30 = *(_QWORD *)(a3 + 24);
    v31 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 920LL);
    if ( (*(_BYTE *)(v31 + 176) & 0x20) != 0 )
      goto LABEL_26;
    v32 = sub_3E9AE0((__int64 *)(v31 + 104), v30);
    if ( v32 <= 0 )
      goto LABEL_26;
    item_end = get_item_end(v30);
    v34 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 920LL);
    if ( (*(_BYTE *)(v34 + 176) & 0x20) != 0 || (v35 = sub_3E9AE0((__int64 *)(v34 + 104), item_end), v35 == -1) )
    {
      if ( !under_debugger )
        sub_383060(0xC55Bu, item_end, 0.0);
LABEL_49:
      BUG();
    }
    if ( v32 <= v35 )
      goto LABEL_26;
    v12 = v32 - v35;
  }
  v47 = 0;
  create_tinfo(&v47, 12, 12, a6);
  get_tinfo_size(0, v47, 0);
  if ( !(unsigned __int8)get_tinfo_details(v47, 12, a6) )
  {
    if ( !under_debugger )
      sub_383060(0xC55Cu, 12, 0.0);
    goto LABEL_49;
  }
  v13 = *(_BYTE *)(a6 + 88);
  v14 = v13 & 0xF0;
  if ( (v13 & 0xF0) == 0xC0 )
    v14 = *(_DWORD *)(a6 + 28);
  if ( v14 <= 0x10 )
  {
    v14 = getinf(99);
    v13 = *(_BYTE *)(a6 + 88);
  }
  v15 = v14 == 80;
  v16 = -16;
  v17 = *(_QWORD *)a6;
  if ( v15 )
    v16 = -32;
  *(_DWORD *)(a6 + 28) = 0;
  v52[0] = 0;
  v52[1] = 0;
  v18 = v16 | v13 & 0xF;
  v51 = &off_4E9C70;
  v19 = *(_QWORD *)(a6 + 8);
  *(_BYTE *)(a6 + 88) = v18;
  v46 = v19;
  v20 = v17 + 80 * v19;
  if ( v20 != v17 )
  {
    do
    {
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v17 + 64), 0);
      for_all_arglocs(&v51, v17, tinfo_size, 0);
      v17 += 80;
    }
    while ( v17 != v20 );
    v46 = *(_QWORD *)(a6 + 8);
  }
  if ( v12 <= 0 )
  {
    v27 = v46;
  }
  else
  {
    v22 = 0;
    do
    {
      while ( sub_64930(v52, v22) )
      {
        if ( v12 == ++v22 )
          goto LABEL_23;
      }
      v23 = *(_QWORD *)(a6 + 8);
      v24 = *(_QWORD *)a6;
      if ( *(_QWORD *)(a6 + 16) < (unsigned __int64)(v23 + 1) )
      {
        v36 = qvector_reserve(a6, v24, v23 + 1, 80);
        *(_QWORD *)a6 = v36;
        v24 = v36;
        v23 = *(_QWORD *)(a6 + 8);
      }
      v25 = v24 + 80 * v23;
      *(_DWORD *)v25 = 0;
      *(_QWORD *)(v25 + 8) = 0;
      *(_QWORD *)(v25 + 16) = 0;
      *(_QWORD *)(v25 + 40) = 0;
      *(_QWORD *)(v25 + 64) = 0;
      *(_DWORD *)(v25 + 72) = 0;
      *(_OWORD *)(v25 + 24) = 0;
      *(_OWORD *)(v25 + 48) = 0;
      ++*(_QWORD *)(a6 + 8);
      v48 = 25;
      copy_tinfo_t(v25 + 64, &v48);
      clear_tinfo_t(&v48);
      v26 = v22 + 45;
      ++v22;
      *(_DWORD *)v25 = 3;
      *(_DWORD *)(v25 + 8) = v26;
      ++*a7;
    }
    while ( v12 != v22 );
LABEL_23:
    v27 = *(_QWORD *)(a6 + 8);
  }
  v28 = *(int *)(*(_QWORD *)(a1 + 96) + 656LL);
  if ( v27 >= v28 )
  {
    v37 = *(_QWORD *)a6;
    v45 = v27 + 1 - v28;
    v38 = (int)v46 + (int)v28 - ((int)v27 + 1);
    v39 = (_QWORD *)(*(_QWORD *)a6 + 80 * v46);
    v40 = (void *)(*(_QWORD *)a6 + 80 * v38);
    if ( 80 * v46 != 80 * v38 )
    {
      v41 = (_QWORD *)(v37 + 80 * v38);
      do
      {
        clear_tinfo_t(v41 + 8);
        v42 = v41[5];
        if ( v42 )
        {
          v41[6] = 0;
          qfree(v42);
        }
        v43 = v41[2];
        if ( v43 )
        {
          v41[3] = 0;
          qfree(v43);
        }
        v44 = v41;
        v41 += 10;
        cleanup_argloc(v44);
      }
      while ( v39 != v41 );
      v37 = *(_QWORD *)a6;
      v27 = *(_QWORD *)(a6 + 8);
    }
    memmove(v40, v39, v37 + 80 * v27 - (_QWORD)v39);
    *(_QWORD *)(a6 + 8) -= 0xCCCCCCCCCCCCCCCDLL * ((__int64)(80 * (v46 - v38)) >> 4);
    *a7 -= v45;
  }
  v51 = &off_4E9C70;
  qfree(v52[0]);
  clear_tinfo_t(&v47);
LABEL_26:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  return 1;
}
