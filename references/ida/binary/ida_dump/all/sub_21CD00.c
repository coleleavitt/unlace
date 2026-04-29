unsigned __int64 __fastcall sub_21CD00(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdi
  int tinfo_size; // eax
  int v7; // edx
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13; // eax
  char v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r13
  _QWORD *v19; // rbp
  unsigned int v20; // r14d
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+8h] [rbp-B0h]
  __int64 v26; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v27; // [rsp+18h] [rbp-A0h]
  __int64 v28; // [rsp+28h] [rbp-90h]
  __int64 v29; // [rsp+30h] [rbp-88h]
  __int64 v30; // [rsp+38h] [rbp-80h]
  __int128 v31; // [rsp+40h] [rbp-78h]
  __int64 v32; // [rsp+50h] [rbp-68h]
  __int128 v33; // [rsp+58h] [rbp-60h]
  char v34; // [rsp+68h] [rbp-50h]
  unsigned __int64 v35; // [rsp+78h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_4DF770;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 88) = a2 + 432;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  v3 = *(_DWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = v3;
  v4 = *(_QWORD *)(a2 + 328);
  *(_BYTE *)(a1 + 152) = 0;
  v24 = 0;
  v25 = 0;
  if ( (_BYTE)v4 )
  {
    sub_21C5F0(a1, (__int64)&v24);
  }
  else
  {
    v5 = a2;
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 944) + 68LL) & 1) == 0 )
    {
LABEL_3:
      if ( (*(_BYTE *)(v5 + 4) & 0x30) == 0 )
        goto LABEL_4;
      sub_13D280((_QWORD *)v5, 0);
      copy_tinfo_t();
      if ( (_DWORD)v24 || !(unsigned __int8)*(_QWORD *)(a1 + 136) )
        goto LABEL_4;
      goto LABEL_13;
    }
    v10 = *(_QWORD *)(a2 + 40);
    v11 = *(_QWORD *)(v5 + 1496);
    v26 = 0;
    if ( (unsigned __int8)sub_3810A0(v11, v10, &v26, 2) )
      sub_21C5F0(a1, (__int64)&v24);
    clear_tinfo_t();
  }
  if ( !(unsigned __int8)*(_QWORD *)(a1 + 136) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    goto LABEL_3;
  }
  if ( (_DWORD)v24 )
    goto LABEL_4;
LABEL_13:
  v12 = *(_DWORD *)(a1 + 148);
  if ( v12 <= 0x10 )
    v12 = getinf();
  if ( v12 == 176 )
  {
    if ( (unsigned __int64)getinf() <= 0x397 )
    {
      if ( !(unsigned __int8)getinf_flag() )
        goto LABEL_4;
      netnode_check();
      v20 = netnode_altval();
      if ( v20 <= 0x74 )
        goto LABEL_4;
      v21 = *(_DWORD *)(get_ph() + 4);
      if ( v21 )
      {
        v22 = (unsigned int)(v21 - 13);
        if ( (unsigned int)v22 > 0x3B )
          goto LABEL_4;
        v23 = 0x800000000000005LL;
        if ( !_bittest64(&v23, v22) || v20 == 117 )
          goto LABEL_4;
      }
    }
  }
  else if ( v12 == 256 )
  {
    goto LABEL_4;
  }
  v13 = *(_DWORD *)(a1 + 148);
  v26 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v32 = 0;
  v27 = 0;
  v31 = 0;
  v33 = 0;
  if ( (v13 & 0xFFFFFF0F) != 0 || v13 == 192 )
  {
    HIDWORD(v28) = v13;
    LOBYTE(v13) = -64;
  }
  v34 = v13;
  copy_tinfo_t();
  v14 = calc_retloc();
  if ( v14 )
  {
    v15 = v31;
    *(_QWORD *)&v31 = v25;
    v25 = v15;
    LODWORD(v15) = v30;
    LODWORD(v30) = v24;
    LODWORD(v24) = v15;
  }
  if ( v32 )
  {
    *(_QWORD *)&v33 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v16 = v26;
  if ( v26 )
  {
    v17 = v27;
    if ( (_QWORD)v27 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + 80 * v18);
        clear_tinfo_t();
        if ( v19[5] )
        {
          v19[6] = 0;
          qfree();
        }
        if ( v19[2] )
        {
          v19[3] = 0;
          qfree();
        }
        ++v18;
        cleanup_argloc();
        v16 = v26;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v27 = 0;
    qfree();
  }
  if ( !v14 )
  {
    if ( !under_debugger )
      sub_383060(51886);
    BUG();
  }
LABEL_4:
  tinfo_size = get_tinfo_size();
  *(_DWORD *)(a1 + 144) = tinfo_size;
  v7 = tinfo_size;
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v8 + 320) && (_DWORD)v24 )
  {
    sub_1C5FB0((__int64)&v26, (__int64)&v24, v7, *(_QWORD *)(v8 + 136) + *(int *)(v8 + 116));
    copy_argloc();
    cleanup_argloc();
  }
  cleanup_argloc();
  return v35 - __readfsqword(0x28u);
}
