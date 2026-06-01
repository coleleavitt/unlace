__int64 __fastcall sub_21EFB00(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  unsigned int v7; // eax
  bool v8; // r13
  void *v9; // rdx
  unsigned int v10; // eax
  bool v11; // r13
  void *v12; // rdx
  unsigned int v13; // ebp
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // eax
  void *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // rsi
  void *v25; // rdx
  unsigned int v26; // edx
  char v27; // al
  bool v28; // cl
  void *v29; // rsi
  unsigned int v30; // eax
  char v31; // r14
  bool v32; // dl
  void *v33; // rcx
  bool v34; // r14
  bool v35; // al
  int v36; // edx
  bool v37; // bp
  void *v38; // rax
  unsigned int v40; // eax
  bool v41; // cc
  char v42; // [rsp+0h] [rbp-128h]
  unsigned int v43; // [rsp+0h] [rbp-128h]
  unsigned int v44; // [rsp+0h] [rbp-128h]
  unsigned int v45; // [rsp+0h] [rbp-128h]
  bool v46; // [rsp+8h] [rbp-120h]
  bool v47; // [rsp+8h] [rbp-120h]
  bool v48; // [rsp+1Bh] [rbp-10Dh] BYREF
  int v49; // [rsp+1Ch] [rbp-10Ch] BYREF
  void *v50; // [rsp+20h] [rbp-108h] BYREF
  unsigned int v51; // [rsp+28h] [rbp-100h]
  bool v52; // [rsp+2Ch] [rbp-FCh]
  void *v53; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v54; // [rsp+38h] [rbp-F0h]
  bool v55; // [rsp+3Ch] [rbp-ECh]
  void *v56; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-E0h]
  bool v58; // [rsp+4Ch] [rbp-DCh]
  void *v59; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v60; // [rsp+58h] [rbp-D0h]
  char v61; // [rsp+5Ch] [rbp-CCh]
  void *v62; // [rsp+60h] [rbp-C8h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-C0h]
  char v64; // [rsp+6Ch] [rbp-BCh]
  void *v65; // [rsp+70h] [rbp-B8h] BYREF
  unsigned int v66; // [rsp+78h] [rbp-B0h]
  bool v67; // [rsp+7Ch] [rbp-ACh]
  void *v68; // [rsp+80h] [rbp-A8h] BYREF
  unsigned int v69; // [rsp+88h] [rbp-A0h]
  void *v70; // [rsp+90h] [rbp-98h] BYREF
  unsigned int v71; // [rsp+98h] [rbp-90h]
  char v72; // [rsp+A3h] [rbp-85h]
  void *v73; // [rsp+B0h] [rbp-78h] BYREF
  unsigned int v74; // [rsp+B8h] [rbp-70h]
  char v75; // [rsp+C3h] [rbp-65h]
  void *v76; // [rsp+D0h] [rbp-58h] BYREF
  unsigned int v77; // [rsp+D8h] [rbp-50h]
  char v78; // [rsp+E3h] [rbp-45h]

  LODWORD(v76) = *(_DWORD *)(a3 + 16);
  v49 = sub_21EF420((unsigned __int16 *)(a2 + 16), (unsigned int *)&v76);
  sub_21EDE90((__int64)&v70, a2, (unsigned __int16 *)&v49, nullptr);
  sub_21EDE90((__int64)&v73, a3, (unsigned __int16 *)&v49, nullptr);
  v7 = v71;
  v8 = (v72 & 0x20) == 0;
  v77 = v71;
  if ( v71 > 0x40 )
  {
    sub_2205510(&v76);
    v7 = v77;
    v9 = v76;
  }
  else
  {
    v9 = v70;
  }
  v51 = v7;
  v10 = v74;
  v52 = v8;
  v50 = v9;
  v11 = (v75 & 0x20) == 0;
  v77 = v74;
  if ( v74 > 0x40 )
  {
    sub_2205510(&v76);
    v10 = v77;
    v12 = v76;
  }
  else
  {
    v12 = v73;
  }
  v54 = v10;
  v53 = v12;
  v13 = 2 * (unsigned __int16)v49;
  v55 = v11;
  v48 = 0;
  if ( (v49 & 0x20000000) != 0 )
  {
    sub_2206B70(&v76, &v50, v13);
    if ( v51 > 0x40 && v50 )
      operator delete[](v50);
    v50 = v76;
    v51 = v77;
    sub_2206B70(&v76, &v53, v13);
    if ( v54 > 0x40 )
    {
LABEL_8:
      if ( v53 )
        operator delete[](v53);
    }
  }
  else
  {
    sub_2206CD0(&v76, &v50, v13);
    if ( v51 > 0x40 && v50 )
      operator delete[](v50);
    v50 = v76;
    v51 = v77;
    sub_2206CD0(&v76, &v53, v13);
    if ( v54 > 0x40 )
      goto LABEL_8;
  }
  v58 = 0;
  v57 = 1;
  v53 = v76;
  v56 = nullptr;
  v54 = v77;
  if ( (v49 & 0x20000000) != 0 )
  {
    sub_2209E20(&v68, &v50, &v53, &v48);
    v14 = (__int16)(8 * HIWORD(v49)) >> 3;
    if ( v14 < 0 )
    {
      v15 = v69;
      v16 = -v14;
      v77 = v69;
      if ( v69 > 0x40 )
      {
        v44 = -v14;
        sub_2205510(&v76);
        v15 = v77;
        v16 = v44;
        if ( v77 > 0x40 )
        {
          sub_2206EF0(&v76, v44);
          goto LABEL_38;
        }
      }
      else
      {
        v76 = v68;
      }
      v17 = nullptr;
      if ( v15 )
      {
        v18 = (__int64)((_QWORD)v76 << (64 - (unsigned __int8)v15)) >> (64 - (unsigned __int8)v15);
        if ( v16 == v15 )
        {
          v19 = v18 >> 63;
          v20 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v16;
        }
        else
        {
          v19 = v18 >> v16;
          v20 = 0xFFFFFFFFFFFFFFFFLL >> -(char)v15;
        }
        v17 = (void *)(v19 & v20);
      }
      v76 = v17;
      goto LABEL_38;
    }
LABEL_31:
    v23 = v69;
    v77 = v69;
    if ( v69 > 0x40 )
    {
      v45 = v14;
      sub_2205510(&v76);
      v23 = v77;
      v14 = v45;
      if ( v77 > 0x40 )
      {
        sub_220A130(&v76, v45);
        goto LABEL_38;
      }
    }
    else
    {
      v76 = v68;
    }
    v24 = 0;
    if ( v14 != v23 )
      v24 = (_QWORD)v76 << v14;
    v25 = (void *)(v24 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v23));
    if ( !v23 )
      v25 = nullptr;
    v76 = v25;
    goto LABEL_38;
  }
  sub_220B260(&v68, &v50, &v53, &v48);
  v14 = (__int16)(8 * HIWORD(v49)) >> 3;
  if ( v14 >= 0 )
    goto LABEL_31;
  v21 = v69;
  v22 = -v14;
  v77 = v69;
  if ( v69 > 0x40 )
  {
    v43 = v22;
    sub_2205510(&v76);
    v21 = v77;
    v22 = v43;
    if ( v77 > 0x40 )
    {
      sub_220ABD0(&v76, v43);
      goto LABEL_38;
    }
  }
  else
  {
    v76 = v68;
  }
  if ( v22 == v21 )
    v76 = nullptr;
  else
    v76 = (void *)((unsigned __int64)v76 >> v22);
LABEL_38:
  if ( v57 > 0x40 && v56 )
    operator delete[](v56);
  v56 = v76;
  v57 = v77;
  if ( v69 > 0x40 && v68 )
    operator delete[](v68);
  v58 = (v49 & 0x20000000) == 0;
  sub_21EEC90((__int64)&v76, (unsigned __int16 *)&v49);
  v26 = v77;
  v27 = v78 & 0x20;
  v69 = v77;
  v28 = (v78 & 0x20) == 0;
  if ( v77 > 0x40 )
  {
    v47 = (v78 & 0x20) == 0;
    v42 = v78 & 0x20;
    sub_2205510(&v68);
    v26 = v69;
    v28 = v47;
    v29 = v68;
    v27 = v42;
  }
  else
  {
    v29 = v76;
  }
  v66 = v26;
  v65 = v29;
  v67 = v28;
  if ( v27 )
  {
    sub_2206DE0(&v68, &v65, v13);
    v61 = 0;
  }
  else
  {
    sub_2206D90(&v68, &v65, v13);
    v61 = 1;
  }
  v60 = v69;
  v59 = v68;
  if ( v66 > 0x40 && v65 )
    operator delete[](v65);
  if ( v77 > 0x40 && v76 )
    operator delete[](v76);
  sub_21EEEF0((__int64)&v76, &v49);
  v30 = v77;
  v31 = v78 & 0x20;
  v32 = (v78 & 0x20) == 0;
  v69 = v77;
  if ( v77 > 0x40 )
  {
    v46 = (v78 & 0x20) == 0;
    sub_2205510(&v68);
    v30 = v69;
    v32 = v46;
    v33 = v68;
  }
  else
  {
    v33 = v76;
  }
  v67 = v32;
  v66 = v30;
  v65 = v33;
  if ( v31 )
  {
    sub_2206DE0(&v68, &v65, v13);
    v64 = 0;
  }
  else
  {
    sub_2206D90(&v68, &v65, v13);
    v64 = 1;
  }
  v63 = v69;
  v62 = v68;
  if ( v66 > 0x40 && v65 )
    operator delete[](v65);
  if ( v77 > 0x40 && v76 )
    operator delete[](v76);
  v34 = v58;
  if ( (v49 & 0x40000000) != 0 )
  {
    if ( v58 )
    {
      if ( (int)sub_2205DB0(&v56, &v62) >= 0 )
      {
        v35 = (int)sub_2205DB0(&v56, &v59) > 0;
        goto LABEL_109;
      }
    }
    else if ( (int)sub_2205E20(&v56, &v62) >= 0 )
    {
      v35 = (int)sub_2205E20(&v56, &v59) > 0;
LABEL_109:
      if ( v35 )
      {
        if ( v57 <= 0x40 && v60 <= 0x40 )
        {
          v57 = v60;
          v56 = v59;
        }
        else
        {
          sub_22056A0(&v56, &v59);
        }
        v58 = v61;
      }
      goto LABEL_73;
    }
    if ( v57 <= 0x40 && v63 <= 0x40 )
    {
      v57 = v63;
      v56 = v62;
    }
    else
    {
      sub_22056A0(&v56, &v62);
    }
    v58 = v64;
    goto LABEL_73;
  }
  if ( v58 )
  {
    if ( (int)sub_2205DB0(&v56, &v62) >= 0 )
      v34 = (int)sub_2205DB0(&v56, &v59) > 0;
  }
  else
  {
    v34 = 1;
    if ( (int)sub_2205E20(&v56, &v62) >= 0 )
      v34 = (int)sub_2205E20(&v56, &v59) > 0;
  }
  v48 = v34;
LABEL_73:
  if ( a4 )
    *a4 = v48;
  sub_2206DE0(&v68, &v56, (unsigned __int16)v49);
  v36 = v49;
  v77 = v69;
  v37 = (v49 & 0x20000000) == 0;
  if ( v69 > 0x40 )
  {
    sub_2205510(&v76);
    v40 = v77;
    *(_BYTE *)(a1 + 12) = v37;
    v41 = v69 <= 0x40;
    *(_DWORD *)(a1 + 8) = v40;
    *(_QWORD *)a1 = v76;
    *(_DWORD *)(a1 + 16) = v49;
    if ( !v41 && v68 )
      operator delete[](v68);
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v69;
    v38 = v68;
    *(_BYTE *)(a1 + 12) = v37;
    *(_QWORD *)a1 = v38;
    *(_DWORD *)(a1 + 16) = v36;
  }
  if ( v63 > 0x40 && v62 )
    operator delete[](v62);
  if ( v60 > 0x40 && v59 )
    operator delete[](v59);
  if ( v57 > 0x40 && v56 )
    operator delete[](v56);
  if ( v54 > 0x40 && v53 )
    operator delete[](v53);
  if ( v51 > 0x40 && v50 )
    operator delete[](v50);
  if ( v74 > 0x40 && v73 )
    operator delete[](v73);
  if ( v71 > 0x40 && v70 )
    operator delete[](v70);
  return a1;
}
