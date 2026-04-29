__int64 __fastcall sub_24D0D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  _DWORD *v6; // r15
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax
  int v12; // edx
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // r13
  __int64 v24; // rax
  int v25; // edx
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rbx
  int tinfo_size; // ebp
  __int64 (__fastcall *v40)(__int64, unsigned int); // rax
  char v41; // bl
  __int64 v42; // rax
  int v43; // ebx
  __int64 (__fastcall *v44)(__int64, unsigned int); // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE *v49; // [rsp+10h] [rbp-B8h]
  _QWORD v50[2]; // [rsp+38h] [rbp-90h] BYREF
  __int64 v51; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v52[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v53; // [rsp+60h] [rbp-68h] BYREF
  __int64 v54; // [rsp+70h] [rbp-58h]
  int v55; // [rsp+78h] [rbp-50h]
  __int16 v56; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v57; // [rsp+88h] [rbp-40h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 328);
  v49 = (_BYTE *)a4;
  v6 = *(_DWORD **)(v5 + 112);
  v57 = __readfsqword(0x28u);
  v7 = *(_BYTE *)a2;
  v50[0] = 0;
  if ( v7 != 1 )
  {
LABEL_2:
    if ( v7 == 9
      && *(_BYTE *)a3 == 9
      && (v42 = *(_QWORD *)(a3 + 8),
          v5 = *(_QWORD *)(v4 + 8),
          a4 = *(unsigned int *)(v42 + 16),
          *(_DWORD *)(v5 + 16) == (_DWORD)a4)
      && (a4 = *(_QWORD *)(v5 + 8) + *(int *)(v4 + 4), a4 == *(_QWORD *)(v42 + 8)) )
    {
      sub_123A40((__int64)v52, (unsigned __int8 *)v4, v5, a4);
      HIDWORD(v52[0]) += *(_DWORD *)(a3 + 4);
      if ( *v49 )
      {
        v50[1] = 0;
        v51 = 0;
        v53 = 0;
        copy_tinfo_t();
        v54 = 0;
        copy_tinfo_t();
        v55 = 0;
        v56 = 0;
        clear_tinfo_t();
        clear_tinfo_t();
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        clear_tinfo_t();
        clear_tinfo_t();
      }
      v37 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, (__int64)v52, v50, v50, 0);
      sub_11CDA0((__int64)v52);
    }
    else
    {
      v8 = qalloc_or_throw(40, a2, v5, a4);
      *(_QWORD *)v8 = 0;
      *(_QWORD *)(v8 + 24) = 0;
      *(_DWORD *)(v8 + 32) = 0;
      *(_OWORD *)(v8 + 8) = 0;
      sub_246200((__int64 *)v8, 2u);
      sub_32C270(&v51, v6, *(unsigned int *)(v4 + 4));
      sub_32C270(v52, v6, *(unsigned int *)(a3 + 4));
      v9 = *(_QWORD *)v8;
      *(_QWORD *)&v53 = 0;
      v10 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, v4, &v53, &v51, 0);
      v11 = *(_QWORD *)v10;
      *(_QWORD *)v10 = *(_QWORD *)v9;
      v12 = *(_DWORD *)(v9 + 8);
      *(_QWORD *)v9 = v11;
      LODWORD(v11) = *(_DWORD *)(v10 + 8);
      *(_DWORD *)(v10 + 8) = v12;
      v13 = *(_DWORD *)(v9 + 12);
      *(_DWORD *)(v9 + 8) = v11;
      LODWORD(v11) = *(_DWORD *)(v10 + 12);
      *(_DWORD *)(v10 + 12) = v13;
      v14 = *(_QWORD *)(v9 + 24);
      *(_DWORD *)(v9 + 12) = v11;
      v15 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 24) = v14;
      v16 = *(_QWORD *)(v9 + 32);
      *(_QWORD *)(v9 + 24) = v15;
      v17 = *(_QWORD *)(v10 + 32);
      *(_QWORD *)(v10 + 32) = v16;
      v18 = *(_QWORD *)(v9 + 40);
      *(_QWORD *)(v9 + 32) = v17;
      v19 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 40) = v18;
      v20 = *(_QWORD *)(v9 + 48);
      *(_QWORD *)(v9 + 40) = v19;
      v21 = *(_QWORD *)(v10 + 48);
      *(_QWORD *)(v10 + 48) = v20;
      LODWORD(v20) = *(_DWORD *)(v9 + 56);
      *(_QWORD *)(v9 + 48) = v21;
      LODWORD(v21) = *(_DWORD *)(v10 + 56);
      *(_DWORD *)(v10 + 56) = v20;
      *(_DWORD *)(v9 + 56) = v21;
      if ( v10 )
      {
        sub_255630(v10);
        clear_tinfo_t();
        j__qfree(v10);
      }
      clear_tinfo_t();
      v22 = *(_QWORD *)v8;
      *(_QWORD *)&v53 = 0;
      v23 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, a3, &v53, v52, 0);
      v24 = *(_QWORD *)v23;
      *(_QWORD *)v23 = *(_QWORD *)(v22 + 72);
      v25 = *(_DWORD *)(v22 + 80);
      *(_QWORD *)(v22 + 72) = v24;
      LODWORD(v24) = *(_DWORD *)(v23 + 8);
      *(_DWORD *)(v23 + 8) = v25;
      v26 = *(_DWORD *)(v22 + 84);
      *(_DWORD *)(v22 + 80) = v24;
      LODWORD(v24) = *(_DWORD *)(v23 + 12);
      *(_DWORD *)(v23 + 12) = v26;
      v27 = *(_QWORD *)(v22 + 96);
      *(_DWORD *)(v22 + 84) = v24;
      v28 = *(_QWORD *)(v23 + 24);
      *(_QWORD *)(v23 + 24) = v27;
      v29 = *(_QWORD *)(v22 + 104);
      *(_QWORD *)(v22 + 96) = v28;
      v30 = *(_QWORD *)(v23 + 32);
      *(_QWORD *)(v23 + 32) = v29;
      v31 = *(_QWORD *)(v22 + 112);
      *(_QWORD *)(v22 + 104) = v30;
      v32 = *(_QWORD *)(v23 + 40);
      *(_QWORD *)(v23 + 40) = v31;
      v33 = *(_QWORD *)(v22 + 120);
      *(_QWORD *)(v22 + 112) = v32;
      v34 = *(_QWORD *)(v23 + 48);
      *(_QWORD *)(v23 + 48) = v33;
      LODWORD(v33) = *(_DWORD *)(v22 + 128);
      *(_QWORD *)(v22 + 120) = v34;
      LODWORD(v34) = *(_DWORD *)(v23 + 56);
      *(_DWORD *)(v23 + 56) = v33;
      *(_DWORD *)(v22 + 128) = v34;
      if ( v23 )
      {
        sub_255630(v23);
        clear_tinfo_t();
        j__qfree(v23);
      }
      clear_tinfo_t();
      v35 = *(_QWORD *)(*(_QWORD *)v8 + 64LL);
      *(_QWORD *)(*(_QWORD *)v8 + 64LL) = v51;
      v51 = v35;
      v36 = *(_QWORD *)(*(_QWORD *)v8 + 136LL);
      *(_QWORD *)(*(_QWORD *)v8 + 136LL) = v52[0];
      v52[0] = v36;
      if ( *v49 )
      {
        sub_32C540(&v53, v6, v49);
      }
      else
      {
        *(_QWORD *)&v53 = 0;
        copy_tinfo_t();
      }
      v37 = sub_F1640((__int64)&v53, v8, (__int64)"MK_FP");
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    goto LABEL_11;
  }
  a2 = *(unsigned int *)(a2 + 8);
  v40 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 256LL);
  if ( v40 == sub_183350 )
  {
    v41 = *(_BYTE *)(v5 + 129);
    a4 = (unsigned int)v6[21];
    if ( *(_DWORD *)(a3 + 4) != (_DWORD)a4 )
      goto LABEL_18;
LABEL_35:
    if ( (_DWORD)a2 != v6[13] && (_DWORD)a2 != v6[14] && (_DWORD)a2 != v6[16] )
      goto LABEL_21;
    if ( (~v41 & 3) != 0 )
    {
      LOBYTE(v43) = 0;
      goto LABEL_29;
    }
    v43 = v41 & 8;
    if ( !v43 )
      goto LABEL_29;
    goto LABEL_28;
  }
  a2 = (unsigned int)v40((__int64)v6, a2);
  a4 = (unsigned int)v6[21];
  v41 = *(_BYTE *)(*(_QWORD *)(a1 + 328) + 129LL);
  if ( *(_DWORD *)(a3 + 4) == (_DWORD)a4 )
  {
    v44 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v6 + 256LL);
    if ( v44 != sub_183350 )
      a2 = (unsigned int)v44((__int64)v6, a2);
    goto LABEL_35;
  }
LABEL_18:
  if ( v6[13] == (_DWORD)a2 )
  {
    if ( (v41 & 3) != 2 )
    {
      v45 = sub_CFF70();
      LOBYTE(v43) = v45 + 4;
      if ( !v45 )
        LOBYTE(v43) = 8;
      goto LABEL_29;
    }
LABEL_28:
    LOBYTE(v43) = 0;
    goto LABEL_29;
  }
  if ( v6[16] == (_DWORD)a2 )
  {
    v47 = sub_CFF70();
    LOBYTE(v43) = v47 + 2;
    if ( !v47 )
      LOBYTE(v43) = 6;
  }
  else
  {
    if ( v6[14] != (_DWORD)a2 )
    {
LABEL_21:
      v7 = *(_BYTE *)v4;
      goto LABEL_2;
    }
    v46 = sub_CFF70();
    LOBYTE(v43) = v46 + 3;
    if ( !v46 )
      LOBYTE(v43) = 7;
  }
LABEL_29:
  if ( *v49 )
  {
    v51 = 0;
    v52[0] = 0;
    v53 = 0;
    copy_tinfo_t();
    v54 = 0;
    copy_tinfo_t();
    v56 = (unsigned __int8)v43;
    v55 = 0;
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  v37 = sub_249AF0(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, a3, v50, v50, 0);
LABEL_11:
  if ( (unsigned __int8)*(_QWORD *)v49 )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size != (unsigned int)get_tinfo_property() )
      sub_246B40(v37, *(_QWORD *)(a1 + 328), v50);
  }
  clear_tinfo_t();
  return v37;
}
