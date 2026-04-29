__int64 __fastcall sub_19E8C0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // r12d
  __int64 v8; // rax
  __int64 v9; // r15
  bool v10; // cc
  _DWORD *v11; // rsi
  char v12; // al
  __int64 v13; // rdi
  __int64 v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // r14
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  char v38; // [rsp+Fh] [rbp-B1h]
  __int64 *i; // [rsp+10h] [rbp-B0h]
  __int64 v41; // [rsp+18h] [rbp-A8h]
  __int64 v42; // [rsp+18h] [rbp-A8h]
  unsigned int v43; // [rsp+18h] [rbp-A8h]
  __int64 *v45; // [rsp+20h] [rbp-A0h]
  __int64 *v46; // [rsp+20h] [rbp-A0h]
  unsigned int v47; // [rsp+28h] [rbp-98h]
  __int64 v48; // [rsp+28h] [rbp-98h]
  __int64 v49; // [rsp+38h] [rbp-88h] BYREF
  __int64 v50; // [rsp+40h] [rbp-80h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-78h]
  __int64 v52; // [rsp+50h] [rbp-70h] BYREF
  __int128 v53; // [rsp+58h] [rbp-68h]
  __int128 v54; // [rsp+68h] [rbp-58h]
  __int64 v55; // [rsp+78h] [rbp-48h]
  int v56; // [rsp+80h] [rbp-40h]
  unsigned __int64 v57; // [rsp+88h] [rbp-38h]

  v57 = __readfsqword(0x28u);
  if ( !a1[7] )
    return 0;
  if ( !a1[5] )
  {
    if ( a1[11] )
    {
      v47 = *((_DWORD *)a1 + 60);
      if ( v47 )
        goto LABEL_5;
    }
    else
    {
      v6 = *((unsigned __int8 *)a1 + 244);
      if ( !(_BYTE)v6 )
      {
        v47 = *((_DWORD *)a1 + 60);
        if ( !v47 )
          return v6;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v47 = *((_DWORD *)a1 + 60);
  if ( !v47 )
    return 0;
  if ( !a1[11] )
  {
LABEL_14:
    v5 = *a1;
    goto LABEL_15;
  }
LABEL_5:
  v4 = *(_QWORD *)a1[10];
  v5 = *a1;
  v41 = *(_QWORD *)(*(_QWORD *)(*a1 + 480LL) + 112LL);
  if ( (*(_BYTE *)(v4 + 4) & 0x10) != 0 && *(_BYTE *)(v4 + 48) != 4 && *(_DWORD *)(v4 + 68) == v47 )
  {
    v49 = 0;
    v52 = 25;
    goto LABEL_16;
  }
LABEL_15:
  v8 = *(_QWORD *)(v5 + 480);
  v49 = 0;
  v41 = *(_QWORD *)(v8 + 112);
  sub_326800(&v52, v41, v47);
LABEL_16:
  copy_tinfo_t(&v49, &v52);
  clear_tinfo_t(&v52);
  if ( !(_BYTE)v49 )
  {
    v52 = 0;
    v55 = 0;
    v56 = 1;
    v53 = 0;
    v54 = 0;
    v52 = qvector_reserve(&v52, 0, 1, 144);
    v9 = v52 + 144 * v53;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 40) = 0;
    *(_QWORD *)(v9 + 112) = 1;
    *(_DWORD *)(v9 + 120) = -1;
    *(_QWORD *)(v9 + 128) = 0;
    *(_BYTE *)(v9 + 136) = 0;
    *(_OWORD *)v9 = 0;
    *(_OWORD *)(v9 + 24) = 0;
    *(_OWORD *)(v9 + 48) = 0;
    *(_OWORD *)(v9 + 64) = 0;
    *(_QWORD *)&v53 = v53 + 1;
    sub_3269C0(&v50, v41, v47, 0);
    copy_tinfo_t(v9 + 64, &v50);
    clear_tinfo_t(&v50);
    v10 = *(_QWORD *)(v9 + 32) <= 7u;
    *(_QWORD *)v9 = 0;
    v11 = *(_DWORD **)(v9 + 16);
    if ( v10 )
    {
      v30 = qvector_reserve(v9 + 16, v11, 8, 1);
      *(_QWORD *)(v9 + 16) = v30;
      v11 = (_DWORD *)v30;
    }
    *(_QWORD *)(v9 + 24) = 8;
    *v11 = 1818585446;
    *(_DWORD *)((char *)v11 + 3) = 811557996;
    *(_BYTE *)(*(_QWORD *)(v9 + 16) + 7LL) = 0;
    v12 = create_tinfo(&v49, 13, 13, &v52);
    v13 = v52;
    v38 = v12;
    if ( v52 )
    {
      v42 = v53;
      if ( (_QWORD)v53 )
      {
        v14 = 0;
        do
        {
          v15 = (_QWORD *)(v13 + 144 * v14);
          clear_tinfo_t(v15 + 8);
          v16 = v15[5];
          if ( v16 )
          {
            v15[6] = 0;
            qfree(v16);
          }
          v17 = v15[2];
          if ( v17 )
          {
            v15[3] = 0;
            qfree(v17);
          }
          v13 = v52;
          ++v14;
        }
        while ( v42 != v14 );
      }
      *(_QWORD *)&v53 = 0;
      qfree(v13);
    }
    if ( !v38 )
    {
      if ( !under_debugger )
        sub_37CFE0(52553);
      BUG();
    }
  }
  v52 = 0;
  v53 = 0;
  print_tinfo(&v52, 0, 0, 0, 0, &v49, 0, 0);
  if ( !a1[7] || !a1[5] && !a1[11] )
  {
    v50 = 1;
    copy_tinfo_t(&v49, &v50);
    clear_tinfo_t(&v50);
    v43 = -1;
    goto LABEL_32;
  }
  v43 = sub_133580(*(_QWORD **)(*a1 + 64LL), (int)v47, 0);
  if ( v43 != -1 )
  {
LABEL_32:
    v18 = a1[8];
    v19 = *(_QWORD *)(a1[9] + 16LL);
    v20 = a1[5];
    if ( v20 )
    {
      v21 = *(_QWORD *)(v20 + 24);
      LOBYTE(v51) = 5;
      v50 = a2;
      v45 = sub_195F70(v18, v19, &v50, -1, v21, v43, -1, &v49, (__int64)&v52, a3);
      v22 = j__qalloc_or_throw(80);
      v23 = v45[3];
      *(_QWORD *)(v22 + 40) = 0;
      *(_QWORD *)(v22 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 56) = 0;
      *(_QWORD *)(v22 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v22 + 72) = 0;
      sub_32ADE0(v22, v23);
      *(_DWORD *)v22 = 4;
      *(_BYTE *)(v22 + 32) = 10;
      v24 = j__qalloc_or_throw(24);
      LODWORD(v50) = 1;
      v51 = v43;
      HIDWORD(v50) = v47;
      v48 = v24;
      sub_11EE80(v24, (unsigned __int8 *)&v50);
      *(_QWORD *)(v48 + 16) = -1;
      *(_QWORD *)(v22 + 40) = v48;
      sub_1181E0((__int64)&v50);
      *(_DWORD *)(v22 + 36) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 64LL) + 1504LL) + 84LL);
      sub_1205C0(v22 + 64, (unsigned __int8 *)(a1[5] + 64LL));
      sub_9E5A0(v18, (_QWORD *)v22, (__int64)v45);
      v25 = a1[4];
      sub_1189E0(a1[5]);
      v26 = *(_DWORD *)(v25 + 24);
      BYTE1(v26) &= ~2u;
      LOBYTE(v26) = v26 | 0x80;
      *(_DWORD *)(v25 + 24) = v26;
    }
    else
    {
      v31 = a1[8];
      v32 = *(_QWORD *)(a1[7] + 24LL);
      LOBYTE(v51) = 5;
      v50 = a2;
      sub_195F70(v31, v19, &v50, -1, v32, v43, -1, &v49, (__int64)&v52, a3);
      v33 = a1[11];
      if ( v33 )
      {
        v46 = (__int64 *)a1[10];
        for ( i = &v46[v33]; i != v46; ++v46 )
        {
          v34 = *v46;
          v35 = 10;
          if ( *(_DWORD *)(*v46 + 68) == v47 )
            v35 = 4;
          *(_DWORD *)v34 = v35;
          LODWORD(v50) = 1;
          HIDWORD(v50) = v47;
          v51 = v43;
          sub_1205C0(v34 + 32, (unsigned __int8 *)&v50);
          sub_1181E0((__int64)&v50);
          sub_1181E0(v34 + 48);
          if ( (get_tinfo_property(v49, 2) & 0x2F) == 0xD )
            *(_BYTE *)(v34 + 33) |= 2u;
        }
        v36 = a1[14];
        v37 = *(_DWORD *)(v36 + 24);
        BYTE1(v37) &= ~2u;
        LOBYTE(v37) = v37 | 0x80;
        *(_DWORD *)(v36 + 24) = v37;
      }
    }
    v27 = a1[6];
    sub_1189E0(a1[7]);
    v28 = *(_DWORD *)(v27 + 24);
    v6 = 1;
    BYTE1(v28) &= ~2u;
    LOBYTE(v28) = v28 | 0x80;
    *(_DWORD *)(v27 + 24) = v28;
    v29 = *(_DWORD *)(v18 + 24);
    BYTE1(v29) &= ~2u;
    LOBYTE(v29) = v29 | 0x80;
    *(_DWORD *)(v18 + 24) = v29;
    goto LABEL_35;
  }
  v6 = 0;
LABEL_35:
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  clear_tinfo_t(&v49);
  return v6;
}
