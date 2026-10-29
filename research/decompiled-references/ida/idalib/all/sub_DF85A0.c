__int64 __fastcall sub_DF85A0(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  bool v5; // r14
  unsigned int v6; // eax
  unsigned __int64 v7; // r15
  void *v8; // rdi
  unsigned int v9; // ebp
  void *v10; // r13
  bool v11; // bl
  char v12; // bp
  unsigned int v13; // ebx
  char v15; // al
  unsigned __int64 v16; // rdx
  int v17; // eax
  void *v18; // rdi
  unsigned int v19; // ebx
  bool v20; // r13
  void *v21; // rbp
  int v23; // [rsp+28h] [rbp-130h]
  int v24; // [rsp+28h] [rbp-130h]
  int v25; // [rsp+28h] [rbp-130h]
  __int64 v26; // [rsp+28h] [rbp-130h]
  void *v27; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-120h]
  void *v29; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-110h]
  char v31; // [rsp+4Ch] [rbp-10Ch]
  int v32; // [rsp+50h] [rbp-108h]
  void *v33; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v34; // [rsp+68h] [rbp-F0h]
  char v35; // [rsp+6Ch] [rbp-ECh]
  unsigned int v36; // [rsp+70h] [rbp-E8h]
  void *v37; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v38; // [rsp+88h] [rbp-D0h]
  bool v39; // [rsp+8Ch] [rbp-CCh]
  unsigned int v40; // [rsp+90h] [rbp-C8h]
  void *v41; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+A8h] [rbp-B0h]
  char v43; // [rsp+ACh] [rbp-ACh]
  unsigned int v44; // [rsp+B0h] [rbp-A8h]
  void *v45; // [rsp+C0h] [rbp-98h] BYREF
  unsigned int v46; // [rsp+C8h] [rbp-90h]
  char v47; // [rsp+CCh] [rbp-8Ch]
  int v48; // [rsp+D0h] [rbp-88h]
  void *v49; // [rsp+E0h] [rbp-78h] BYREF
  unsigned int v50; // [rsp+E8h] [rbp-70h]
  bool v51; // [rsp+ECh] [rbp-6Ch]
  unsigned int v52; // [rsp+F0h] [rbp-68h]
  void *v53; // [rsp+100h] [rbp-58h] BYREF
  unsigned int v54; // [rsp+108h] [rbp-50h]
  char v55; // [rsp+10Ch] [rbp-4Ch]
  unsigned int v56; // [rsp+110h] [rbp-48h]

  sub_D0AF80((__int64)&v29, *(_QWORD *)(a1 + 176));
  sub_D0AF80((__int64)&v33, *(_QWORD *)(a1 + 176));
  v4 = (unsigned __int16)v36 - 1 - (v36 >> 31);
  sub_CF8960((__int64)&v53, (__int64 *)&v29);
  if ( v55 )
  {
    if ( v54 > 0x40 && v53 )
      operator delete[](v53);
  }
  else
  {
    v5 = sub_DB0590((__int64 *)&v53);
    if ( v54 > 0x40 && v53 )
      operator delete[](v53);
    if ( v5 )
    {
      v6 = sub_E206C0(*(_QWORD *)(a1 + 400));
      v49 = (void *)sub_E33B30(a1, v6, 2444, 0);
      sub_CF8960((__int64)&v53, (__int64 *)&v29);
      if ( v49 )
        sub_DC15C0((unsigned __int8 ***)&v49, (__int64)&v53);
      if ( v54 > 0x40 && v53 )
        operator delete[](v53);
      v7 = v4;
      goto LABEL_10;
    }
  }
  v7 = v4;
  sub_CF8960((__int64)&v49, (__int64 *)&v29);
  sub_CF8960((__int64)&v45, (__int64 *)&v29);
  v15 = sub_9EC640((__int64)&v45, v4);
  v16 = v4;
  if ( !v15 )
  {
    if ( v46 <= 0x40 )
      v16 = (unsigned int)v45;
    else
      v16 = *(unsigned int *)v45;
  }
  v54 = 64;
  v53 = (void *)v16;
  v55 = 0;
  v17 = sub_98E2D0((__int64 *)&v49, (__int64 *)&v53);
  if ( v54 > 0x40 && v53 )
  {
    v23 = v17;
    operator delete[](v53);
    v17 = v23;
  }
  if ( v46 > 0x40 && v45 )
  {
    v24 = v17;
    operator delete[](v45);
    v17 = v24;
  }
  if ( v50 > 0x40 && v49 )
  {
    v25 = v17;
    operator delete[](v49);
    v17 = v25;
  }
  if ( v17 )
  {
    v26 = sub_E1EF60(*(_QWORD *)(a1 + 400));
    v49 = (void *)sub_E33C90(a1, v26, 2422, 0);
    sub_CF8960((__int64)&v53, (__int64 *)&v29);
    if ( v49 )
    {
      sub_DC15C0((unsigned __int8 ***)&v49, (__int64)&v53);
      if ( v49 )
      {
        sub_AE9DF0((unsigned __int8 **)v49, *(_QWORD *)(v26 + 8), 8u);
        if ( v49 )
          sub_AE9DF0((unsigned __int8 **)v49, v4, 3u);
      }
    }
    if ( v54 > 0x40 && v53 )
      operator delete[](v53);
  }
LABEL_10:
  sub_CFE920((__int64)&v37);
  v46 = v30;
  if ( !a3 )
  {
    if ( v30 > 0x40 )
      sub_2205510(&v45);
    else
      v45 = v29;
    v47 = v31;
    v48 = v32;
    v42 = v34;
    if ( v34 > 0x40 )
      sub_2205510(&v41);
    else
      v41 = v33;
    v43 = v35;
    v44 = v36;
    sub_CF8960((__int64)&v53, (__int64 *)&v45);
    if ( sub_9EC640((__int64)&v53, v7) )
    {
      if ( v54 <= 0x40 )
        goto LABEL_78;
      v18 = v53;
      if ( !v53 )
        goto LABEL_78;
    }
    else
    {
      v18 = v53;
      v4 = (unsigned int)v53;
      if ( v54 <= 0x40 )
      {
LABEL_78:
        sub_CF8770((__int64)&v27, (__int64)&v41, v4);
        v19 = v28;
        v54 = v28;
        v20 = (v44 & 0x20000000) == 0;
        if ( v28 > 0x40 )
        {
          sub_2205510(&v53);
          v19 = v54;
          v21 = v53;
          v52 = v44;
          if ( v28 > 0x40 && v27 )
            operator delete[](v27);
        }
        else
        {
          v52 = v44;
          v21 = v27;
        }
        v56 = v52;
        if ( v38 > 0x40 && v37 )
          operator delete[](v37);
        v37 = v21;
        v38 = v19;
        v39 = v20;
        v40 = v56;
        if ( v42 > 0x40 && v41 )
          operator delete[](v41);
        if ( v46 > 0x40 && v45 )
          operator delete[](v45);
        goto LABEL_29;
      }
      v4 = *(_DWORD *)v53;
    }
    operator delete[](v18);
    goto LABEL_78;
  }
  if ( v30 > 0x40 )
    sub_2205510(&v45);
  else
    v45 = v29;
  v47 = v31;
  v48 = v32;
  v42 = v34;
  if ( v34 > 0x40 )
    sub_2205510(&v41);
  else
    v41 = v33;
  v43 = v35;
  v44 = v36;
  sub_CF8960((__int64)&v53, (__int64 *)&v45);
  if ( sub_9EC640((__int64)&v53, v7) )
  {
    if ( v54 > 0x40 )
    {
      v8 = v53;
      if ( v53 )
        goto LABEL_18;
    }
  }
  else
  {
    v8 = v53;
    v4 = (unsigned int)v53;
    if ( v54 > 0x40 )
    {
      v4 = *(_DWORD *)v53;
LABEL_18:
      operator delete[](v8);
    }
  }
  sub_21F11A0(&v49, &v41, v4, &v27);
  v9 = v50;
  v10 = v49;
  v50 = 0;
  v11 = v51;
  v56 = v52;
  if ( v38 > 0x40 && v37 )
  {
    operator delete[](v37);
    v37 = v10;
    v38 = v9;
    v39 = v11;
    v40 = v56;
    if ( v50 > 0x40 && v49 )
    {
      operator delete[](v49);
      v12 = (char)v27;
      if ( (_BYTE)v27 )
        goto LABEL_24;
      goto LABEL_67;
    }
  }
  else
  {
    v37 = v49;
    v38 = v9;
    v39 = v51;
    v40 = v52;
  }
  v12 = (char)v27;
  if ( (_BYTE)v27 )
  {
LABEL_24:
    v12 = sub_DF81A0(a1, a2, (__int64)&v37) ^ 1;
    if ( v42 <= 0x40 )
      goto LABEL_25;
    goto LABEL_68;
  }
LABEL_67:
  if ( v42 <= 0x40 )
    goto LABEL_25;
LABEL_68:
  if ( v41 )
    operator delete[](v41);
LABEL_25:
  if ( v46 > 0x40 && v45 )
    operator delete[](v45);
  v13 = 0;
  if ( !v12 )
  {
LABEL_29:
    v13 = 1;
    sub_D0BA90(*(_QWORD *)(a1 + 176), (__int64)&v37);
  }
  if ( v38 > 0x40 && v37 )
    operator delete[](v37);
  if ( v34 > 0x40 && v33 )
    operator delete[](v33);
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  return v13;
}
