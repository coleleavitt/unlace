unsigned __int64 __fastcall sub_21D0C0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rsi
  int tinfo_size; // eax
  int v8; // edx
  __int64 v9; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // eax
  int v14; // eax
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r13
  _QWORD *v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned int v25; // r14d
  int v26; // eax
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+8h] [rbp-B0h]
  __int64 v31; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+18h] [rbp-A0h]
  __int64 v33; // [rsp+28h] [rbp-90h]
  __int64 v34; // [rsp+30h] [rbp-88h] BYREF
  __int64 v35; // [rsp+38h] [rbp-80h] BYREF
  __int128 v36; // [rsp+40h] [rbp-78h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  __int128 v38; // [rsp+58h] [rbp-60h]
  char v39; // [rsp+68h] [rbp-50h]
  unsigned __int64 v40; // [rsp+78h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &off_4D9E30;
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
  v29 = 0;
  v30 = 0;
  if ( (_BYTE)v4 )
  {
    sub_21C9B0(a1, (int *)&v29, v4);
  }
  else
  {
    v5 = a2;
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 944) + 68LL) & 1) == 0 )
      goto LABEL_3;
    v11 = *(_QWORD *)(a2 + 40);
    v12 = *(_QWORD *)(v5 + 1496);
    v31 = 0;
    if ( (unsigned __int8)sub_3815E0(v12, v11, &v31, 2) )
      sub_21C9B0(a1, (int *)&v29, v31);
    clear_tinfo_t(&v31);
  }
  v6 = *(_QWORD *)(a1 + 136);
  if ( (_BYTE)v6 )
  {
    if ( (_DWORD)v29 )
      goto LABEL_5;
    goto LABEL_14;
  }
  v5 = *(_QWORD *)(a1 + 16);
LABEL_3:
  if ( (*(_BYTE *)(v5 + 4) & 0x30) == 0 )
  {
LABEL_4:
    v6 = *(_QWORD *)(a1 + 136);
    goto LABEL_5;
  }
  v23 = sub_13CCC0((_QWORD *)v5, 0);
  copy_tinfo_t(a1 + 136, v23 + 80);
  v6 = *(_QWORD *)(a1 + 136);
  if ( !(_DWORD)v29 && (_BYTE)v6 )
  {
LABEL_14:
    v13 = *(_DWORD *)(a1 + 148);
    if ( v13 <= 0x10 )
      v13 = getinf(99);
    if ( v13 == 176 )
    {
      if ( (unsigned __int64)getinf(88) <= 0x397 )
      {
        if ( !(unsigned __int8)getinf_flag(3, 4) )
          goto LABEL_4;
        netnode_check(&v31, "$ golang", 0, 0);
        v24 = v31;
        v25 = netnode_altval(v31, 0, 65);
        if ( v25 <= 0x74 )
          goto LABEL_4;
        v26 = *(_DWORD *)(get_ph(v24) + 4);
        if ( v26 )
        {
          v27 = (unsigned int)(v26 - 13);
          if ( (unsigned int)v27 > 0x3B )
            goto LABEL_4;
          v28 = 0x800000000000005LL;
          if ( !_bittest64(&v28, v27) || v25 == 117 )
            goto LABEL_4;
        }
      }
    }
    else if ( v13 == 256 )
    {
      goto LABEL_4;
    }
    v14 = *(_DWORD *)(a1 + 148);
    v31 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v37 = 0;
    v32 = 0;
    v36 = 0;
    v38 = 0;
    if ( (v14 & 0xFFFFFF0F) != 0 || v14 == 192 )
    {
      HIDWORD(v33) = v14;
      LOBYTE(v14) = -64;
    }
    v39 = v14;
    copy_tinfo_t(&v34, a1 + 136);
    v15 = calc_retloc(&v31);
    if ( v15 )
    {
      v16 = v36;
      *(_QWORD *)&v36 = v30;
      v30 = v16;
      LODWORD(v16) = v35;
      LODWORD(v35) = v29;
      LODWORD(v29) = v16;
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    cleanup_argloc(&v35);
    clear_tinfo_t(&v34);
    v17 = v31;
    if ( v31 )
    {
      v18 = v32;
      if ( (_QWORD)v32 )
      {
        v19 = 0;
        do
        {
          v20 = (_QWORD *)(v17 + 80 * v19);
          clear_tinfo_t(v20 + 8);
          v21 = v20[5];
          if ( v21 )
          {
            v20[6] = 0;
            qfree(v21);
          }
          v22 = v20[2];
          if ( v22 )
          {
            v20[3] = 0;
            qfree(v22);
          }
          ++v19;
          cleanup_argloc(v20);
          v17 = v31;
        }
        while ( v18 != v19 );
      }
      *(_QWORD *)&v32 = 0;
      qfree(v17);
    }
    if ( !v15 )
    {
      if ( !under_debugger )
        sub_3835A0(51886);
      BUG();
    }
    goto LABEL_4;
  }
LABEL_5:
  tinfo_size = get_tinfo_size(0, v6, 0);
  *(_DWORD *)(a1 + 144) = tinfo_size;
  v8 = tinfo_size;
  v9 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v9 + 320) && (_DWORD)v29 )
  {
    sub_1C59F0((__int64)&v31, (__int64)&v29, v8, *(_QWORD *)(v9 + 136) + *(int *)(v9 + 116));
    copy_argloc(a1 + 120, &v31);
    cleanup_argloc(&v31);
  }
  cleanup_argloc(&v29);
  return v40 - __readfsqword(0x28u);
}
