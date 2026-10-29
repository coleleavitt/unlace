__int64 __fastcall sub_21EE7D0(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  bool v4; // r15
  void *v5; // rdx
  unsigned int v6; // eax
  bool v7; // zf
  bool v8; // r13
  void *v9; // rdx
  char v10; // al
  int v11; // esi
  __int16 v12; // ax
  int v13; // edx
  int v14; // r12d
  int v15; // eax
  int v16; // edx
  int v17; // esi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // eax
  void *v22; // rdx
  unsigned int v23; // edx
  void *v24; // rsi
  char v25; // al
  __int16 v26; // cx
  unsigned int v27; // esi
  int v28; // ecx
  unsigned int v29; // edi
  __int64 v30; // rax
  void *v31; // rax
  __int16 v32; // bx
  unsigned int v33; // eax
  unsigned int v34; // ebx
  unsigned int v35; // edi
  __int64 v36; // rdx
  void *v37; // rdx
  void *v38; // r12
  unsigned int v39; // ebp
  int v40; // eax
  unsigned int v41; // ebx
  unsigned __int64 v43; // rsi
  __int64 v44; // rax
  int v45; // eax
  unsigned int v46; // [rsp+0h] [rbp-88h]
  unsigned int v47; // [rsp+0h] [rbp-88h]
  unsigned int v48; // [rsp+0h] [rbp-88h]
  char v49; // [rsp+7h] [rbp-81h]
  unsigned int v50; // [rsp+10h] [rbp-78h]
  bool v51; // [rsp+10h] [rbp-78h]
  void *v52; // [rsp+18h] [rbp-70h]
  char v53; // [rsp+18h] [rbp-70h]
  void *v54; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v55; // [rsp+28h] [rbp-60h]
  bool v56; // [rsp+2Ch] [rbp-5Ch]
  void *v57; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v58; // [rsp+38h] [rbp-50h]
  bool v59; // [rsp+3Ch] [rbp-4Ch]
  void *v60; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 8);
  v4 = (*(_BYTE *)(a1 + 19) & 0x20) == 0;
  v61 = v3;
  if ( v3 > 0x40 )
  {
    sub_2205510(&v60);
    v3 = v61;
    v5 = v60;
  }
  else
  {
    v5 = *(void **)a1;
  }
  v55 = v3;
  v6 = *(_DWORD *)(a2 + 8);
  v7 = (*(_BYTE *)(a2 + 19) & 0x20) == 0;
  v54 = v5;
  v56 = v4;
  v8 = v7;
  v61 = v6;
  if ( v6 > 0x40 )
  {
    sub_2205510(&v60);
    v6 = v61;
    v9 = v60;
    v4 = v56;
  }
  else
  {
    v9 = *(void **)a2;
  }
  v58 = v6;
  v10 = *(_BYTE *)(a1 + 12);
  v57 = v9;
  v11 = *(unsigned __int16 *)(a2 + 16);
  v49 = v10;
  v12 = *(_WORD *)(a2 + 18);
  v59 = v8;
  v13 = (__int16)(8 * v12) >> 3;
  v14 = v13;
  v15 = (__int16)(8 * *(_WORD *)(a1 + 18)) >> 3;
  if ( v15 <= v13 )
    v14 = (__int16)(8 * *(_WORD *)(a1 + 18)) >> 3;
  v16 = v11 + v13;
  v17 = v15 + *(unsigned __int16 *)(a1 + 16);
  v18 = v17 - 1;
  if ( v17 < v16 )
    v18 = v16 - 1;
  v19 = v18 - v14;
  v20 = (unsigned int)(v19 + 1);
  v46 = v19 + 1;
  if ( v4 )
    sub_2206D90(&v60, &v54, v20);
  else
    sub_2206DE0(&v60, &v54, v20);
  v21 = v61;
  v22 = v60;
  if ( v55 > 0x40 && v54 )
  {
    v52 = v60;
    v50 = v61;
    operator delete[](v54);
    v22 = v52;
    v21 = v50;
  }
  v55 = v21;
  v56 = v4;
  v54 = v22;
  v51 = v59;
  if ( v59 )
  {
    sub_2206D90(&v60, &v57, v46);
    v23 = v61;
    v24 = v60;
    v25 = v51;
  }
  else
  {
    sub_2206DE0(&v60, &v57, v46);
    v23 = v61;
    v24 = v60;
    v25 = 0;
  }
  if ( v58 > 0x40 && v57 )
  {
    v53 = v25;
    v47 = v23;
    operator delete[](v57);
    v25 = v53;
    v23 = v47;
  }
  v26 = *(_WORD *)(a1 + 18);
  v57 = v24;
  v27 = v55;
  v58 = v23;
  v59 = v25;
  v61 = v55;
  v28 = ((__int16)(8 * v26) >> 3) - v14;
  if ( v55 > 0x40 )
  {
    v48 = v28;
    sub_2205510(&v60);
    v27 = v61;
    v28 = v48;
    if ( v61 > 0x40 )
    {
      sub_220A130(&v60, v48);
      v29 = v55;
      goto LABEL_26;
    }
    v29 = v55;
  }
  else
  {
    v29 = v55;
    v60 = v54;
  }
  v30 = 0;
  if ( v28 != v27 )
    v30 = (_QWORD)v60 << v28;
  v31 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v27) & v30);
  if ( !v27 )
    v31 = nullptr;
  v60 = v31;
LABEL_26:
  if ( v29 > 0x40 && v54 )
    operator delete[](v54);
  v32 = *(_WORD *)(a2 + 18);
  v54 = v60;
  v55 = v61;
  v33 = v58;
  v34 = ((__int16)(8 * v32) >> 3) - v14;
  v61 = v58;
  if ( v58 > 0x40 )
  {
    sub_2205510(&v60);
    v33 = v61;
    if ( v61 > 0x40 )
    {
      sub_220A130(&v60, v34);
      v35 = v58;
      goto LABEL_36;
    }
    v35 = v58;
  }
  else
  {
    v35 = v58;
    v60 = v57;
  }
  v36 = 0;
  if ( v34 != v33 )
    v36 = (_QWORD)v60 << v34;
  v37 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v33) & v36);
  if ( !v33 )
    v37 = nullptr;
  v60 = v37;
LABEL_36:
  if ( v35 > 0x40 && v57 )
    operator delete[](v57);
  v38 = v60;
  v39 = v61;
  v57 = v60;
  v58 = v61;
  if ( v49 )
  {
    if ( v8 )
    {
LABEL_60:
      v40 = sub_2205DB0(&v54, &v57);
LABEL_42:
      v41 = -(v40 != 0);
      if ( v40 > 0 )
        v41 = 1;
      goto LABEL_44;
    }
  }
  else if ( !v8 )
  {
    v40 = sub_2205E20(&v54, &v57);
    goto LABEL_42;
  }
  if ( v49 != 1 && v8 )
  {
    v43 = (unsigned __int64)v54;
    if ( v55 > 0x40 )
      v43 = *((_QWORD *)v54 + ((v55 - 1) >> 6));
    v41 = -1;
    if ( (v43 & (1LL << ((unsigned __int8)v55 - 1))) != 0 )
    {
LABEL_44:
      if ( v39 <= 0x40 )
        goto LABEL_47;
      goto LABEL_45;
    }
    goto LABEL_60;
  }
  v44 = 1LL << ((unsigned __int8)v61 - 1);
  if ( v61 <= 0x40 )
  {
    v41 = 1;
    if ( (v44 & (unsigned __int64)v60) != 0 )
      goto LABEL_47;
    v45 = sub_2205DB0(&v54, &v57);
    if ( v45 > 0 )
      goto LABEL_47;
    goto LABEL_73;
  }
  if ( (v44 & *((_QWORD *)v60 + ((v61 - 1) >> 6))) == 0 )
  {
    v45 = sub_2205DB0(&v54, &v57);
    if ( v45 <= 0 )
    {
LABEL_73:
      v41 = -(v45 != 0);
      goto LABEL_44;
    }
  }
  v41 = 1;
LABEL_45:
  if ( v38 )
    operator delete[](v38);
LABEL_47:
  if ( v55 > 0x40 && v54 )
    operator delete[](v54);
  return v41;
}
