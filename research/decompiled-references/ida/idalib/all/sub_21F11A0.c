__int64 __fastcall sub_21F11A0(__int64 a1, __int64 a2, unsigned int a3, bool *a4)
{
  unsigned int v7; // r12d
  unsigned int v8; // eax
  __int64 v9; // rdx
  void *v10; // rdx
  bool v11; // zf
  unsigned int v12; // edx
  char v13; // al
  bool v14; // cl
  void *v15; // rsi
  unsigned int v16; // edx
  char v17; // al
  bool v18; // cl
  void *v19; // rsi
  int v20; // eax
  bool v21; // dl
  bool v22; // r12
  void *v23; // rax
  int v25; // eax
  unsigned int v26; // eax
  bool v27; // cc
  int v28; // eax
  int v29; // eax
  bool v30; // [rsp+8h] [rbp-D0h]
  char v31; // [rsp+8h] [rbp-D0h]
  char v32; // [rsp+10h] [rbp-C8h]
  bool v33; // [rsp+1Fh] [rbp-B9h]
  bool v34; // [rsp+1Fh] [rbp-B9h]
  void *v35; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+28h] [rbp-B0h]
  char v37; // [rsp+2Ch] [rbp-ACh]
  void *v38; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+38h] [rbp-A0h]
  char v40; // [rsp+3Ch] [rbp-9Ch]
  void *v41; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v42; // [rsp+48h] [rbp-90h]
  char v43; // [rsp+4Ch] [rbp-8Ch]
  void *v44; // [rsp+50h] [rbp-88h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-80h]
  char v46; // [rsp+5Ch] [rbp-7Ch]
  void *v47; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+68h] [rbp-70h]
  bool v49; // [rsp+6Ch] [rbp-6Ch]
  void *v50; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v51; // [rsp+78h] [rbp-60h]
  void *v52; // [rsp+80h] [rbp-58h] BYREF
  unsigned int v53; // [rsp+88h] [rbp-50h]
  char v54; // [rsp+93h] [rbp-45h]

  v36 = *(_DWORD *)(a2 + 8);
  if ( v36 > 0x40 )
    sub_2205510(&v35);
  else
    v35 = *(void **)a2;
  v7 = 2 * *(unsigned __int16 *)(a2 + 16);
  v37 = *(_BYTE *)(a2 + 12);
  if ( (*(_BYTE *)(a2 + 19) & 0x20) != 0 )
  {
    sub_2206B70(&v52, &v35, v7);
    if ( v36 <= 0x40 )
      goto LABEL_5;
  }
  else
  {
    sub_2206CD0(&v52, &v35, v7);
    if ( v36 <= 0x40 )
      goto LABEL_5;
  }
  if ( v35 )
    operator delete[](v35);
LABEL_5:
  v8 = v53;
  v35 = v52;
  v36 = v53;
  if ( v53 <= a3 )
    a3 = v53;
  if ( v53 <= 0x40 || (sub_2205510(&v52), v8 = v53, v53 <= 0x40) )
  {
    v9 = 0;
    if ( v8 != a3 )
      v9 = (_QWORD)v52 << a3;
    v10 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v8) & v9);
    if ( !v8 )
      v10 = nullptr;
  }
  else
  {
    sub_220A130(&v52, a3);
    v10 = v52;
    v8 = v53;
  }
  v39 = v8;
  v11 = (*(_BYTE *)(a2 + 19) & 0x20) == 0;
  v38 = v10;
  v40 = v11;
  sub_21EEC90((__int64)&v52, (unsigned __int16 *)(a2 + 16));
  v12 = v53;
  v13 = v54 & 0x20;
  v51 = v53;
  v14 = (v54 & 0x20) == 0;
  if ( v53 > 0x40 )
  {
    v33 = (v54 & 0x20) == 0;
    v32 = v54 & 0x20;
    sub_2205510(&v50);
    v12 = v51;
    v15 = v50;
    v14 = v33;
    v13 = v32;
  }
  else
  {
    v15 = v52;
  }
  v48 = v12;
  v47 = v15;
  v49 = v14;
  if ( v13 )
  {
    sub_2206DE0(&v50, &v47, v7);
    v43 = 0;
  }
  else
  {
    sub_2206D90(&v50, &v47, v7);
    v43 = 1;
  }
  v42 = v51;
  v41 = v50;
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  if ( v53 > 0x40 && v52 )
    operator delete[](v52);
  sub_21EEEF0((__int64)&v52, (int *)(a2 + 16));
  v16 = v53;
  v17 = v54 & 0x20;
  v51 = v53;
  v18 = (v54 & 0x20) == 0;
  if ( v53 > 0x40 )
  {
    v34 = (v54 & 0x20) == 0;
    v31 = v54 & 0x20;
    sub_2205510(&v50);
    v16 = v51;
    v19 = v50;
    v18 = v34;
    v17 = v31;
  }
  else
  {
    v19 = v52;
  }
  v48 = v16;
  v47 = v19;
  v49 = v18;
  if ( v17 )
  {
    sub_2206DE0(&v50, &v47, v7);
    v46 = 0;
  }
  else
  {
    sub_2206D90(&v50, &v47, v7);
    v46 = 1;
  }
  v45 = v51;
  v44 = v50;
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  if ( v53 > 0x40 && v52 )
    operator delete[](v52);
  if ( (*(_BYTE *)(a2 + 19) & 0x40) != 0 )
  {
    if ( v40 )
    {
      if ( (int)sub_2205DB0(&v38, &v44) >= 0 )
      {
        v20 = sub_2205DB0(&v38, &v41);
        v21 = v20 > 0;
        if ( v20 <= 0 )
          goto LABEL_36;
LABEL_73:
        if ( v39 <= 0x40 && v42 <= 0x40 )
        {
          v39 = v42;
          v38 = v41;
        }
        else
        {
          sub_22056A0(&v38, &v41);
        }
        v21 = 0;
        v40 = v43;
        goto LABEL_36;
      }
    }
    else if ( (int)sub_2205E20(&v38, &v44) >= 0 )
    {
      v29 = sub_2205E20(&v38, &v41);
      v21 = v29 > 0;
      if ( v29 <= 0 )
        goto LABEL_36;
      goto LABEL_73;
    }
    if ( v39 <= 0x40 && v45 <= 0x40 )
    {
      v39 = v45;
      v38 = v44;
    }
    else
    {
      sub_22056A0(&v38, &v44);
    }
    v21 = 0;
    v40 = v46;
  }
  else
  {
    v30 = v40;
    if ( v40 )
    {
      v25 = sub_2205DB0(&v38, &v44);
      v21 = v30;
      if ( v25 >= 0 )
        v21 = (int)sub_2205DB0(&v38, &v41) > 0;
    }
    else
    {
      v28 = sub_2205E20(&v38, &v44);
      v21 = 1;
      if ( v28 >= 0 )
        v21 = (int)sub_2205E20(&v38, &v41) > 0;
    }
  }
LABEL_36:
  if ( a4 )
    *a4 = v21;
  sub_2206DE0(&v50, &v38, *(unsigned __int16 *)(a2 + 16));
  v22 = (*(_BYTE *)(a2 + 19) & 0x20) == 0;
  v53 = v51;
  if ( v51 > 0x40 )
  {
    sub_2205510(&v52);
    v26 = v53;
    v27 = v51 <= 0x40;
    *(_BYTE *)(a1 + 12) = v22;
    *(_DWORD *)(a1 + 8) = v26;
    *(_QWORD *)a1 = v52;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
    if ( !v27 && v50 )
      operator delete[](v50);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v51;
    v23 = v50;
    *(_BYTE *)(a1 + 12) = v22;
    *(_QWORD *)a1 = v23;
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  }
  if ( v45 > 0x40 && v44 )
    operator delete[](v44);
  if ( v42 > 0x40 && v41 )
    operator delete[](v41);
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  if ( v36 > 0x40 && v35 )
    operator delete[](v35);
  return a1;
}
