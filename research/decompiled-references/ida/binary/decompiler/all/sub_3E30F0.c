__int64 __fastcall sub_3E30F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char *a5, __int64 a6, _DWORD *a7)
{
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
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r13
  int v25; // edx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v29; // rax
  int v30; // ebp
  unsigned __int64 item_end; // rsi
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // r12
  _QWORD *v37; // rbp
  void *v38; // r15
  _QWORD *v39; // r13
  int v40; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+8h] [rbp-A0h]
  _QWORD v42[10]; // [rsp+58h] [rbp-50h] BYREF

  v42[2] = __readfsqword(0x28u);
  if ( (unsigned __int8)cleanup_name() )
    a5 = 0;
  if ( a5 && (v11 = sub_3E0ED0(a5)) != 0 )
  {
    v12 = *((_DWORD *)v11 + 2) - *((_DWORD *)v11 + 3);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    v29 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 920LL);
    if ( (*(_BYTE *)(v29 + 176) & 0x20) != 0 )
      return 1;
    v30 = sub_3DEE70((__int64 *)(v29 + 104), *(_QWORD *)(a3 + 24));
    if ( v30 <= 0 )
      return 1;
    item_end = get_item_end();
    v32 = *(_QWORD *)(*(_QWORD *)(a2 + 64) + 920LL);
    if ( (*(_BYTE *)(v32 + 176) & 0x20) != 0 || (v33 = sub_3DEE70((__int64 *)(v32 + 104), item_end), v33 == -1) )
    {
      if ( !under_debugger )
        sub_37EA20(50523);
LABEL_47:
      BUG();
    }
    if ( v30 <= v33 )
      return 1;
    v12 = v30 - v33;
  }
  create_tinfo();
  get_tinfo_size();
  if ( !(unsigned __int8)get_tinfo_details() )
  {
    if ( !under_debugger )
      sub_37EA20(50524);
    goto LABEL_47;
  }
  v13 = *(_BYTE *)(a6 + 88);
  v14 = v13 & 0xF0;
  if ( (v13 & 0xF0) == 0xC0 )
    v14 = *(_DWORD *)(a6 + 28);
  if ( v14 <= 0x10 )
  {
    v14 = getinf();
    v13 = *(_BYTE *)(a6 + 88);
  }
  v15 = v14 == 80;
  v16 = -16;
  v17 = *(_QWORD *)a6;
  if ( v15 )
    v16 = -32;
  *(_DWORD *)(a6 + 28) = 0;
  v42[0] = 0;
  v42[1] = 0;
  v18 = v16 | v13 & 0xF;
  v19 = *(_QWORD *)(a6 + 8);
  *(_BYTE *)(a6 + 88) = v18;
  v41 = v19;
  v20 = v17 + 80 * v19;
  if ( v20 != v17 )
  {
    do
    {
      get_tinfo_size();
      for_all_arglocs();
      v17 += 80;
    }
    while ( v17 != v20 );
    v41 = *(_QWORD *)(a6 + 8);
  }
  if ( v12 <= 0 )
  {
    v26 = v41;
  }
  else
  {
    v21 = 0;
    do
    {
      while ( sub_64030(v42, v21) )
      {
        if ( v12 == ++v21 )
          goto LABEL_23;
      }
      v22 = *(_QWORD *)(a6 + 8);
      v23 = *(_QWORD *)a6;
      if ( *(_QWORD *)(a6 + 16) < (unsigned __int64)(v22 + 1) )
      {
        v34 = qvector_reserve();
        *(_QWORD *)a6 = v34;
        v23 = v34;
        v22 = *(_QWORD *)(a6 + 8);
      }
      v24 = v23 + 80 * v22;
      *(_DWORD *)v24 = 0;
      *(_QWORD *)(v24 + 8) = 0;
      *(_QWORD *)(v24 + 16) = 0;
      *(_QWORD *)(v24 + 40) = 0;
      *(_QWORD *)(v24 + 64) = 0;
      *(_DWORD *)(v24 + 72) = 0;
      *(_OWORD *)(v24 + 24) = 0;
      *(_OWORD *)(v24 + 48) = 0;
      ++*(_QWORD *)(a6 + 8);
      copy_tinfo_t();
      clear_tinfo_t();
      v25 = v21 + 45;
      ++v21;
      *(_DWORD *)v24 = 3;
      *(_DWORD *)(v24 + 8) = v25;
      ++*a7;
    }
    while ( v12 != v21 );
LABEL_23:
    v26 = *(_QWORD *)(a6 + 8);
  }
  v27 = *(int *)(*(_QWORD *)(a1 + 96) + 656LL);
  if ( v26 >= v27 )
  {
    v35 = *(_QWORD *)a6;
    v40 = v26 + 1 - v27;
    v36 = (int)v41 + (int)v27 - ((int)v26 + 1);
    v37 = (_QWORD *)(*(_QWORD *)a6 + 80 * v41);
    v38 = (void *)(*(_QWORD *)a6 + 80 * v36);
    if ( 80 * v41 != 80 * v36 )
    {
      v39 = (_QWORD *)(v35 + 80 * v36);
      do
      {
        clear_tinfo_t();
        if ( v39[5] )
        {
          v39[6] = 0;
          qfree();
        }
        if ( v39[2] )
        {
          v39[3] = 0;
          qfree();
        }
        v39 += 10;
        cleanup_argloc();
      }
      while ( v37 != v39 );
      v35 = *(_QWORD *)a6;
      v26 = *(_QWORD *)(a6 + 8);
    }
    memmove(v38, v37, v35 + 80 * v26 - (_QWORD)v37);
    *(_QWORD *)(a6 + 8) -= 0xCCCCCCCCCCCCCCCDLL * ((__int64)(80 * (v41 - v36)) >> 4);
    *a7 -= v40;
  }
  qfree();
  clear_tinfo_t();
  return 1;
}
