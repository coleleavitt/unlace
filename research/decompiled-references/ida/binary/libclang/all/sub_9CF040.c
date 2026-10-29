__int64 __fastcall sub_9CF040(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned int v15; // eax
  void *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // eax
  void *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r12
  unsigned int v22; // eax
  void *v23; // rdx
  unsigned int v24; // ebp
  void *v25; // r13
  __int64 v27; // [rsp+10h] [rbp-178h]
  __int64 v28; // [rsp+28h] [rbp-160h]
  __int64 v29; // [rsp+28h] [rbp-160h]
  unsigned int v30; // [rsp+30h] [rbp-158h]
  __int64 v31; // [rsp+30h] [rbp-158h]
  void *v32; // [rsp+38h] [rbp-150h]
  void *v33; // [rsp+40h] [rbp-148h]
  void *v34; // [rsp+40h] [rbp-148h]
  unsigned int v35; // [rsp+48h] [rbp-140h]
  unsigned int v36; // [rsp+48h] [rbp-140h]
  void *v37; // [rsp+50h] [rbp-138h]
  void *v38; // [rsp+50h] [rbp-138h]
  unsigned int v39; // [rsp+58h] [rbp-130h]
  unsigned int v40; // [rsp+58h] [rbp-130h]
  void *v41; // [rsp+60h] [rbp-128h] BYREF
  unsigned int v42; // [rsp+68h] [rbp-120h]
  void *v43; // [rsp+70h] [rbp-118h] BYREF
  unsigned int v44; // [rsp+78h] [rbp-110h]
  void *v45; // [rsp+80h] [rbp-108h] BYREF
  unsigned int v46; // [rsp+88h] [rbp-100h]
  _BYTE v47[64]; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v48[24]; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-A0h]
  __int64 v50; // [rsp+F0h] [rbp-98h]
  int v51; // [rsp+100h] [rbp-88h]
  void *v52; // [rsp+110h] [rbp-78h] BYREF
  __int128 v53; // [rsp+118h] [rbp-70h]
  __int64 v54; // [rsp+128h] [rbp-60h]
  __int64 v55; // [rsp+130h] [rbp-58h]
  char v56; // [rsp+138h] [rbp-50h]
  int v57; // [rsp+140h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  v2 = sub_A1A5A0(v1, 56);
  sub_A1C070(v48, v2);
  sub_A1A5E0(v1, 56);
  v3 = *(_QWORD *)(a1 + 184);
  v4 = sub_A1A5A0(v3, 56);
  sub_A1C070(v47, v4);
  sub_A1A5E0(v3, 56);
  v27 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  sub_9C3F30((__int64)&v52, (__int64)v47);
  v5 = sub_8F8520((__int64 *)&v52);
  sub_A1C0C0(&v52);
  sub_9C3DD0((__int64)&v52, (__int64)v47);
  v6 = sub_8F8520((__int64 *)&v52);
  sub_A1C0C0(&v52);
  sub_9C3F30((__int64)&v52, (__int64)v48);
  v7 = sub_8F8520((__int64 *)&v52);
  sub_A1C0C0(&v52);
  if ( v51 == 1 )
  {
    v52 = &dword_0 + 1;
    v57 = 1;
    v55 = v50;
    v53 = 0;
    v54 = v49;
  }
  else if ( v51 == 2 )
  {
    v52 = &dword_0 + 1;
    v57 = 2;
    v54 = v49;
    v55 = 0;
    v56 = 1;
    v53 = 0;
  }
  else
  {
    v8 = v50;
    if ( (_DWORD)v50 == -1 )
    {
      if ( v51 == 3 )
        BUG();
      sub_A1C030(&v52, v49, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v49 + 32) + 12LL));
    }
    else
    {
      v9 = sub_8E5480((__int64)v48);
      v10 = *(unsigned int *)(v9 + 8);
      v11 = v10 + 32;
      if ( *(_QWORD *)(v9 + 32) )
        v11 = v10 + 16;
      sub_A1C030(&v52, v49, v8, v11 + v8);
    }
  }
  v12 = sub_8F8520((__int64 *)&v52);
  sub_A1C0C0(&v52);
  v46 = *(_DWORD *)(v7 + 8);
  if ( v46 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = *(void **)v7;
  v44 = *(_DWORD *)(v5 + 8);
  if ( v44 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = *(void **)v5;
  sub_258C0C0(&v52, &v43, &v45);
  v33 = v52;
  v35 = v53;
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  v46 = *(_DWORD *)(v12 + 8);
  if ( v46 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = *(void **)v12;
  v44 = *(_DWORD *)(v6 + 8);
  if ( v44 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = *(void **)v6;
  sub_258C0C0(&v52, &v43, &v45);
  v37 = v52;
  v39 = v53;
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  sub_9C3F30((__int64)&v52, v27);
  if ( v57 )
    goto LABEL_33;
  v13 = *(_QWORD *)(v54 + 32);
  if ( *(_DWORD *)(v13 + 16) != (_DWORD)v55 && (_DWORD)v55 )
    v13 = *(_QWORD *)(v54 + (unsigned int)v55 + 32);
  if ( !*(_BYTE *)(v13 + 51) || (v14 = (__int64)v52 + v54 + 72, (void *)(unsigned int)v55 != v52) )
LABEL_33:
    v14 = (__int64)v52 + v54 + 40;
  v44 = v39;
  if ( v39 > 0x40 )
  {
    v29 = v14;
    sub_2585B30(&v43);
    v15 = v35;
    v14 = v29;
    v42 = v35;
    if ( v35 <= 0x40 )
      goto LABEL_36;
  }
  else
  {
    v43 = v37;
    v15 = v35;
    v42 = v35;
    if ( v35 <= 0x40 )
    {
LABEL_36:
      v16 = v33;
      v46 = v15;
      v41 = v33;
      goto LABEL_37;
    }
  }
  v31 = v14;
  sub_2585B30(&v41);
  v14 = v31;
  v46 = v42;
  if ( v42 > 0x40 )
  {
    sub_2585B30(&v45);
    v14 = v31;
    goto LABEL_38;
  }
  v16 = v41;
LABEL_37:
  v45 = v16;
LABEL_38:
  v28 = v14;
  sub_25863C0(&v45, &v43);
  v17 = v28;
  v18 = v46;
  v19 = v45;
  if ( *(_DWORD *)(v28 + 8) > 0x40u && *(_QWORD *)v28 )
  {
    v32 = v45;
    v30 = v46;
    operator delete[](*(void **)v28);
    v19 = v32;
    v18 = v30;
    v17 = v28;
  }
  *(_QWORD *)v17 = v19;
  *(_DWORD *)(v17 + 8) = v18;
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  sub_A1C0C0(&v52);
  sub_9C3F30((__int64)&v52, v27);
  sub_A1DB00(&v52);
  sub_A1C0C0(&v52);
  v46 = *(_DWORD *)(v12 + 8);
  if ( v46 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = *(void **)v12;
  v44 = *(_DWORD *)(v5 + 8);
  if ( v44 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = *(void **)v5;
  sub_258C0C0(&v52, &v43, &v45);
  if ( v35 > 0x40 && v33 )
    operator delete[](v33);
  v34 = v52;
  v36 = v53;
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  v46 = *(_DWORD *)(v7 + 8);
  if ( v46 > 0x40 )
    sub_2585B30(&v45);
  else
    v45 = *(void **)v7;
  v44 = *(_DWORD *)(v6 + 8);
  if ( v44 > 0x40 )
    sub_2585B30(&v43);
  else
    v43 = *(void **)v6;
  sub_258C0C0(&v52, &v43, &v45);
  if ( v39 > 0x40 && v37 )
    operator delete[](v37);
  v38 = v52;
  v40 = v53;
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  sub_9C3DD0((__int64)&v52, v27);
  if ( v57 )
    goto LABEL_79;
  v20 = *(_QWORD *)(v54 + 32);
  if ( *(_DWORD *)(v20 + 16) != (_DWORD)v55 && (_DWORD)v55 )
    v20 = *(_QWORD *)(v54 + (unsigned int)v55 + 32);
  if ( !*(_BYTE *)(v20 + 51) || (v21 = (__int64)v52 + v54 + 72, v52 != (void *)(unsigned int)v55) )
LABEL_79:
    v21 = (__int64)v52 + v54 + 40;
  v44 = v40;
  if ( v40 > 0x40 )
  {
    sub_2585B30(&v43);
    v22 = v36;
    v42 = v36;
    if ( v36 <= 0x40 )
      goto LABEL_82;
  }
  else
  {
    v43 = v38;
    v22 = v36;
    v42 = v36;
    if ( v36 <= 0x40 )
    {
LABEL_82:
      v23 = v34;
      v46 = v22;
      v41 = v34;
      goto LABEL_83;
    }
  }
  sub_2585B30(&v41);
  v46 = v42;
  if ( v42 > 0x40 )
  {
    sub_2585B30(&v45);
    goto LABEL_84;
  }
  v23 = v41;
LABEL_83:
  v45 = v23;
LABEL_84:
  sub_2586200(&v45, &v43);
  v24 = v46;
  v25 = v45;
  if ( *(_DWORD *)(v21 + 8) > 0x40u && *(_QWORD *)v21 )
    operator delete[](*(void **)v21);
  *(_QWORD *)v21 = v25;
  *(_DWORD *)(v21 + 8) = v24;
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  sub_A1C0C0(&v52);
  sub_9C3DD0((__int64)&v52, v27);
  sub_A1DB00(&v52);
  sub_A1C0C0(&v52);
  sub_A1DB00(v27);
  if ( v40 > 0x40 && v38 )
    operator delete[](v38);
  if ( v36 > 0x40 && v34 )
    operator delete[](v34);
  sub_A1C0C0(v47);
  return sub_A1C0C0(v48);
}

