__int64 __fastcall sub_CE7FF0(__int64 a1, __int64 a2, char a3)
{
  unsigned int v4; // ebx
  bool v5; // r14
  unsigned int v6; // eax
  void *v7; // rdi
  unsigned int v8; // eax
  char v9; // bp
  unsigned int v10; // ebx
  char v12; // al
  unsigned __int64 v13; // rdx
  int v14; // eax
  void *v15; // rdi
  unsigned int v16; // ebx
  bool v17; // dl
  void *v18; // r13
  unsigned __int64 v19; // [rsp+8h] [rbp-150h]
  bool v20; // [rsp+8h] [rbp-150h]
  int v22; // [rsp+28h] [rbp-130h]
  int v23; // [rsp+28h] [rbp-130h]
  int v24; // [rsp+28h] [rbp-130h]
  __int64 v25; // [rsp+28h] [rbp-130h]
  void *v26; // [rsp+30h] [rbp-128h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-120h]
  void *v28; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-110h]
  char v30; // [rsp+4Ch] [rbp-10Ch]
  int v31; // [rsp+50h] [rbp-108h]
  void *v32; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-F0h]
  char v34; // [rsp+6Ch] [rbp-ECh]
  unsigned int v35; // [rsp+70h] [rbp-E8h]
  void *v36; // [rsp+80h] [rbp-D8h] BYREF
  unsigned int v37; // [rsp+88h] [rbp-D0h]
  unsigned int v38; // [rsp+90h] [rbp-C8h]
  void *v39; // [rsp+A0h] [rbp-B8h] BYREF
  unsigned int v40; // [rsp+A8h] [rbp-B0h]
  char v41; // [rsp+ACh] [rbp-ACh]
  unsigned int v42; // [rsp+B0h] [rbp-A8h]
  void *v43; // [rsp+C0h] [rbp-98h] BYREF
  unsigned int v44; // [rsp+C8h] [rbp-90h]
  char v45; // [rsp+CCh] [rbp-8Ch]
  int v46; // [rsp+D0h] [rbp-88h]
  void *v47; // [rsp+E0h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+E8h] [rbp-70h]
  bool v49; // [rsp+ECh] [rbp-6Ch]
  unsigned int v50; // [rsp+F0h] [rbp-68h]
  void *v51; // [rsp+100h] [rbp-58h] BYREF
  unsigned int v52; // [rsp+108h] [rbp-50h]
  bool v53; // [rsp+10Ch] [rbp-4Ch]
  unsigned int v54; // [rsp+110h] [rbp-48h]

  sub_CE7240((__int64)&v28, *(_QWORD *)(a1 + 176));
  sub_CE7240((__int64)&v32, *(_QWORD *)(a1 + 176));
  v4 = (unsigned __int16)v35 - 1 - (v35 >> 31);
  sub_CD4C20((__int64)&v51, (__int64 *)&v28);
  if ( v53 )
  {
    if ( v52 > 0x40 && v51 )
      operator delete[](v51);
  }
  else
  {
    v5 = sub_CCCAE0((__int64 *)&v51);
    if ( v52 > 0x40 && v51 )
      operator delete[](v51);
    if ( v5 )
    {
      v6 = sub_DFC980(*(_QWORD *)(a1 + 400));
      v47 = (void *)sub_E0FDF0(a1, v6, 2444, 0);
      sub_CD4C20((__int64)&v51, (__int64 *)&v28);
      if ( v47 )
        sub_CD4D00((unsigned __int8 ***)&v47, (__int64)&v51);
      if ( v52 > 0x40 && v51 )
        operator delete[](v51);
      v19 = v4;
      goto LABEL_10;
    }
  }
  sub_CD4C20((__int64)&v47, (__int64 *)&v28);
  sub_CD4C20((__int64)&v43, (__int64 *)&v28);
  v19 = v4;
  v12 = sub_9C8900((__int64)&v43, v4);
  v13 = v4;
  if ( !v12 )
  {
    if ( v44 <= 0x40 )
      v13 = (unsigned int)v43;
    else
      v13 = *(unsigned int *)v43;
  }
  v52 = 64;
  v51 = (void *)v13;
  v53 = 0;
  v14 = sub_96A590((__int64 *)&v47, (__int64 *)&v51);
  if ( v52 > 0x40 && v51 )
  {
    v22 = v14;
    operator delete[](v51);
    v14 = v22;
  }
  if ( v44 > 0x40 && v43 )
  {
    v23 = v14;
    operator delete[](v43);
    v14 = v23;
  }
  if ( v48 > 0x40 && v47 )
  {
    v24 = v14;
    operator delete[](v47);
    v14 = v24;
  }
  if ( v14 )
  {
    v25 = sub_DFB220(*(_QWORD *)(a1 + 400));
    v47 = (void *)sub_E0FF50(a1, v25, 2422, 0);
    sub_CD4C20((__int64)&v51, (__int64 *)&v28);
    if ( v47 )
    {
      sub_CD4D00((unsigned __int8 ***)&v47, (__int64)&v51);
      if ( v47 )
      {
        sub_AC60B0((unsigned __int8 **)v47, *(_QWORD *)(v25 + 8), 8u);
        if ( v47 )
          sub_AC60B0((unsigned __int8 **)v47, v4, 3u);
      }
    }
    if ( v52 > 0x40 && v51 )
      operator delete[](v51);
  }
LABEL_10:
  sub_CDABE0((__int64)&v36);
  v44 = v29;
  if ( !a3 )
  {
    if ( v29 > 0x40 )
      sub_21E17D0(&v43);
    else
      v43 = v28;
    v45 = v30;
    v46 = v31;
    v40 = v33;
    if ( v33 > 0x40 )
      sub_21E17D0(&v39);
    else
      v39 = v32;
    v41 = v34;
    v42 = v35;
    sub_CD4C20((__int64)&v51, (__int64 *)&v43);
    if ( sub_9C8900((__int64)&v51, v19) )
    {
      if ( v52 <= 0x40 )
        goto LABEL_78;
      v15 = v51;
      if ( !v51 )
        goto LABEL_78;
    }
    else
    {
      v15 = v51;
      v4 = (unsigned int)v51;
      if ( v52 <= 0x40 )
      {
LABEL_78:
        sub_CD4A30((__int64)&v26, (__int64)&v39, v4);
        v16 = v27;
        v52 = v27;
        v17 = (v42 & 0x20000000) == 0;
        if ( v27 > 0x40 )
        {
          v20 = (v42 & 0x20000000) == 0;
          sub_21E17D0(&v51);
          v16 = v52;
          v18 = v51;
          v50 = v42;
          v17 = v20;
          if ( v27 > 0x40 && v26 )
          {
            operator delete[](v26);
            v17 = v20;
          }
        }
        else
        {
          v50 = v42;
          v18 = v26;
        }
        v52 = v16;
        v51 = v18;
        v53 = v17;
        v54 = v50;
        sub_BF5070((__int64)&v36, (__int64)&v51);
        v38 = v54;
        if ( v52 > 0x40 && v51 )
          operator delete[](v51);
        if ( v40 > 0x40 && v39 )
          operator delete[](v39);
        if ( v44 > 0x40 && v43 )
          operator delete[](v43);
        goto LABEL_34;
      }
      v4 = *(_DWORD *)v51;
    }
    operator delete[](v15);
    goto LABEL_78;
  }
  if ( v29 > 0x40 )
    sub_21E17D0(&v43);
  else
    v43 = v28;
  v45 = v30;
  v46 = v31;
  v40 = v33;
  if ( v33 > 0x40 )
    sub_21E17D0(&v39);
  else
    v39 = v32;
  v41 = v34;
  v42 = v35;
  sub_CD4C20((__int64)&v51, (__int64 *)&v43);
  if ( sub_9C8900((__int64)&v51, v19) )
  {
    if ( v52 > 0x40 )
    {
      v7 = v51;
      if ( v51 )
        goto LABEL_18;
    }
  }
  else
  {
    v7 = v51;
    v4 = (unsigned int)v51;
    if ( v52 > 0x40 )
    {
      v4 = *(_DWORD *)v51;
LABEL_18:
      operator delete[](v7);
    }
  }
  sub_21CD460(&v47, &v39, v4, &v26);
  v8 = v48;
  v48 = 0;
  v52 = v8;
  v51 = v47;
  v53 = v49;
  v54 = v50;
  sub_BF5070((__int64)&v36, (__int64)&v51);
  v38 = v54;
  if ( v52 > 0x40 && v51 )
    operator delete[](v51);
  if ( v48 > 0x40 && v47 )
    operator delete[](v47);
  v9 = (char)v26;
  if ( (_BYTE)v26 )
    v9 = sub_DD4460(a1, a2, &v36) ^ 1;
  if ( v40 > 0x40 && v39 )
    operator delete[](v39);
  if ( v44 > 0x40 && v43 )
    operator delete[](v43);
  v10 = 0;
  if ( !v9 )
  {
LABEL_34:
    v10 = 1;
    sub_CE7D50(*(_QWORD *)(a1 + 176), (__int64)&v36);
  }
  if ( v37 > 0x40 && v36 )
    operator delete[](v36);
  if ( v33 > 0x40 && v32 )
    operator delete[](v32);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  return v10;
}

