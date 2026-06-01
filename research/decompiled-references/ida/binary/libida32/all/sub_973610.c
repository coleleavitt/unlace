__int64 __fastcall sub_973610(_QWORD *a1, __int64 a2)
{
  char v3; // al
  unsigned int v4; // edx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  bool v13; // r12
  int v14; // eax
  bool v15; // al
  _BOOL4 v16; // eax
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // r15
  unsigned int v20; // r12d
  char *v21; // rax
  unsigned int v22; // ebx
  char v23; // r13
  __int64 v24; // r14
  _WORD *v25; // rax
  void *v26; // rcx
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  char *v29; // rax
  _WORD *v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // r12
  int v35; // r15d
  int v36; // r13d
  __int64 v37; // rdi
  char v38; // al
  unsigned __int64 v39; // rdx
  unsigned int v40; // eax
  unsigned int v41; // eax
  unsigned int v42; // edx
  void *v43; // rax
  char v44; // r12
  unsigned __int16 v45; // ax
  char v46; // r15
  __int64 v47; // rdi
  _BOOL4 v48; // ebx
  void *v49; // rdx
  unsigned int v50; // edx
  unsigned int v51; // eax
  void *v52; // [rsp+8h] [rbp-100h]
  void *v53; // [rsp+8h] [rbp-100h]
  void *v54; // [rsp+10h] [rbp-F8h] BYREF
  unsigned int v55; // [rsp+18h] [rbp-F0h]
  void *v56; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v57; // [rsp+28h] [rbp-E0h]
  void *v58; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v59; // [rsp+38h] [rbp-D0h]
  void *v60; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v61; // [rsp+48h] [rbp-C0h]
  char v62; // [rsp+50h] [rbp-B8h]
  void *v63; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v64; // [rsp+68h] [rbp-A0h]
  char v65; // [rsp+6Ch] [rbp-9Ch]
  char v66; // [rsp+70h] [rbp-98h]
  void *v67; // [rsp+80h] [rbp-88h] BYREF
  __int64 v68; // [rsp+88h] [rbp-80h]
  unsigned int v69; // [rsp+90h] [rbp-78h] BYREF
  char v70; // [rsp+94h] [rbp-74h]
  __int64 v71[14]; // [rsp+98h] [rbp-70h] BYREF

  if ( ((*(_WORD *)a2 + 394) & 0x1FFu) > 1 )
  {
LABEL_2:
    v3 = sub_C19B10(a2, &v67, *a1, 0);
    v4 = -1;
    if ( v3 )
      return (unsigned __int8)v67;
    return v4;
  }
  v6 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(v6 - 19) <= 1 )
  {
    v12 = sub_974040(a1, *(_QWORD *)(a2 + 16));
    if ( v12 >= 0 )
    {
      v13 = v12 == 1;
      v4 = v12 == 1;
      if ( (v12 == 1) == (((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 20) )
        return v4;
      v14 = sub_974040(a1, *(_QWORD *)(a2 + 24));
      if ( v14 >= 0 )
      {
        v15 = v14 == 1;
        v4 = v15 && v13;
        v16 = v15 || v13;
        if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x14 )
          return v16;
        return v4;
      }
      return (unsigned int)-1;
    }
    v17 = sub_974040(a1, *(_QWORD *)(a2 + 24));
    if ( v17 < 0 )
    {
      v33 = sub_972080(a1, a2);
      if ( v33 < 0 )
        return (unsigned int)-1;
      LOBYTE(v4) = v33 == 1;
    }
    else
    {
      LOBYTE(v4) = v17 == 1;
      if ( (v17 == 1) != (((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 20) )
        return (unsigned int)-1;
    }
    return (unsigned __int8)v4;
  }
  if ( (unsigned int)(v6 - 14) <= 1 )
  {
    v18 = sub_BD7CB0(*(_QWORD *)(a2 + 16));
    v19 = sub_BD7CB0(*(_QWORD *)(a2 + 24));
    sub_970ED0((__int64)&v60, a1, v18);
    if ( !v62 )
    {
      sub_970ED0((__int64)&v67, a1, v19);
      if ( v62 )
      {
        if ( (_BYTE)v69 )
        {
          if ( v61 > 0x40 && v60 )
            operator delete[](v60);
          v60 = v67;
          v31 = v68;
          LODWORD(v68) = 0;
          v61 = v31;
        }
        else
        {
          v62 = 0;
          if ( v61 > 0x40 && v60 )
            operator delete[](v60);
        }
      }
      else if ( (_BYTE)v69 )
      {
        v32 = v68;
        v62 = 1;
        LODWORD(v68) = 0;
        v61 = v32;
        v60 = v67;
      }
      sub_9735E0((__int64)&v67);
      if ( !v62 )
        goto LABEL_46;
      v19 = v18;
    }
    if ( ((*(_WORD *)v19 + 394) & 0x1FFu) <= 1 && ((*(_WORD *)(v19 + 2) >> 3) & 0x3D) == 0x10 )
    {
      v34 = sub_BD7CB0(*(_QWORD *)(v19 + 16));
      v52 = (void *)sub_BD7CB0(*(_QWORD *)(v19 + 24));
      sub_970ED0((__int64)&v63, a1, v34);
      if ( !v66 )
      {
        sub_970ED0((__int64)&v67, a1, (__int64)v52);
        if ( v66 )
        {
          if ( (_BYTE)v69 )
          {
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v67;
            v40 = v68;
            LODWORD(v68) = 0;
            v64 = v40;
          }
          else
          {
            v66 = 0;
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
          }
        }
        else if ( (_BYTE)v69 )
        {
          v41 = v68;
          v66 = 1;
          LODWORD(v68) = 0;
          v64 = v41;
          v63 = v67;
        }
        sub_9735E0((__int64)&v67);
        if ( !v66 )
        {
          sub_9735E0((__int64)&v63);
          sub_9735E0((__int64)&v60);
          goto LABEL_2;
        }
      }
      if ( ((*(_WORD *)(v19 + 2) >> 3) & 0x3F) != 0x10 )
      {
        if ( ((*(_WORD *)(v19 + 2) >> 3) & 0x3F) != 0x12 )
        {
LABEL_64:
          sub_9735E0((__int64)&v63);
          goto LABEL_46;
        }
        v44 = 0;
        goto LABEL_121;
      }
      v59 = v64;
      if ( v64 > 0x40 )
      {
        sub_21E17D0(&v58);
        if ( v59 > 0x40 )
        {
          sub_21E1E20(&v58, &v60);
          v50 = v59;
          v43 = v58;
          v59 = 0;
          LODWORD(v68) = v50;
          v67 = v58;
          if ( v50 > 0x40 )
          {
            v44 = sub_21E2030(&v67, &v60);
            goto LABEL_108;
          }
LABEL_107:
          v44 = v60 == v43;
LABEL_108:
          if ( !v44 )
          {
            v46 = 1;
            goto LABEL_110;
          }
          v45 = *(_WORD *)(v19 + 2);
          v46 = 0;
          if ( ((v45 >> 3) & 0x3F) != 0x12 )
            goto LABEL_110;
LABEL_121:
          v55 = v64;
          if ( v64 > 0x40 )
          {
            sub_21E17D0(&v54);
            if ( v55 > 0x40 )
            {
              sub_21E1ED0(&v54, &v60);
              v51 = v55;
              v49 = v54;
              v55 = 0;
              v57 = v51;
              v56 = v54;
              if ( v51 > 0x40 )
              {
                v53 = v54;
                v46 = sub_21E2030(&v56, &v60) ^ 1;
                if ( v53 )
                  operator delete[](v53);
LABEL_125:
                if ( v55 > 0x40 && v54 )
                  operator delete[](v54);
                if ( !v44 )
                {
LABEL_116:
                  if ( v46 )
                  {
                    v47 = *(_QWORD *)(a1[41] + 48LL);
                    if ( v47 )
                      (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)v47 + 32LL))(
                        v47,
                        a2,
                        ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 14);
                    v48 = ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 14;
                    sub_9735E0((__int64)&v63);
                    sub_9735E0((__int64)&v60);
                    return v48;
                  }
                  goto LABEL_64;
                }
LABEL_110:
                if ( (unsigned int)v68 > 0x40 && v67 )
                  operator delete[](v67);
                if ( v59 > 0x40 && v58 )
                  operator delete[](v58);
                goto LABEL_116;
              }
LABEL_124:
              v46 = v60 != v49;
              goto LABEL_125;
            }
          }
          else
          {
            v54 = v63;
          }
          v49 = (void *)((unsigned __int64)v60 | (unsigned __int64)v54);
          v55 = 0;
          v54 = (void *)((unsigned __int64)v60 | (unsigned __int64)v54);
          goto LABEL_124;
        }
      }
      else
      {
        v58 = v63;
      }
      v42 = v59;
      v59 = 0;
      v43 = (void *)((unsigned __int64)v60 & (unsigned __int64)v58);
      v58 = v43;
      LODWORD(v68) = v42;
      v67 = v43;
      goto LABEL_107;
    }
    if ( !(unsigned __int8)sub_BDB5C0(v19, 1) )
    {
LABEL_46:
      sub_9735E0((__int64)&v60);
      goto LABEL_2;
    }
    v20 = v61;
    if ( v61 > 0x40 )
    {
      if ( v20 - (unsigned int)sub_21E2A40(&v60) > 0x40 )
      {
LABEL_30:
        if ( !sub_971760((__int64)&v60, nullptr) )
        {
          v22 = ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 14;
          sub_9735E0((__int64)&v60);
          return v22;
        }
        goto LABEL_46;
      }
      v21 = *(char **)v60;
    }
    else
    {
      v21 = (char *)v60;
    }
    if ( v21 == (_BYTE *)&dword_0 + 1 )
      goto LABEL_46;
    goto LABEL_30;
  }
  if ( (unsigned int)(v6 - 10) <= 3 )
  {
    v23 = 1;
    v24 = sub_BD7CB0(*(_QWORD *)(a2 + 16));
    v25 = (_WORD *)sub_BD7CB0(*(_QWORD *)(a2 + 24));
    if ( (*(_WORD *)v24 & 0x1FF) != 0x34 )
    {
      if ( (*v25 & 0x1FF) != 0x34 )
        goto LABEL_2;
      v30 = (_WORD *)v24;
      v23 = 0;
      v24 = (__int64)v25;
      v25 = v30;
    }
    if ( !(unsigned __int8)sub_BDB5C0(v25, 1) )
      goto LABEL_2;
    v26 = *(void **)(v24 + 16);
    v27 = *(unsigned int *)(v24 + 24);
    v28 = (unsigned __int64)(v27 + 63) >> 6;
    if ( v28 > 1 )
    {
      sub_21E18D0(&v67, v27, v28, v26);
    }
    else
    {
      LODWORD(v68) = *(_DWORD *)(v24 + 24);
      if ( (unsigned int)v27 <= 0x40 )
      {
        v67 = v26;
        goto LABEL_38;
      }
      sub_21E1730(&v67, v26, 0);
    }
    v35 = v68;
    if ( (unsigned int)v68 > 0x40 )
    {
      if ( v35 - (unsigned int)sub_21E2A40(&v67) > 0x40 )
      {
LABEL_40:
        if ( sub_971760((__int64)&v67, nullptr) )
          goto LABEL_41;
        v38 = sub_F41620(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL));
        if ( !v38 )
        {
          v39 = (unsigned __int64)v67;
          if ( (unsigned int)v68 > 0x40 )
            v39 = *((_QWORD *)v67 + ((unsigned int)(v68 - 1) >> 6));
          v38 = (v39 & (1LL << ((unsigned __int8)v68 - 1))) == 0;
        }
        if ( (((unsigned __int8)(*(_WORD *)(a2 + 2) >> 3) + 53) & 0x3D) != 0 )
          v22 = (unsigned __int8)(v23 ^ v38);
        else
          v22 = v38 == v23;
        if ( (unsigned int)v68 > 0x40 && v67 )
        {
          operator delete[](v67);
          return v22;
        }
        return v22;
      }
      v29 = *(char **)v67;
LABEL_39:
      if ( v29 == (_BYTE *)&dword_0 + 1 )
      {
LABEL_41:
        if ( (unsigned int)v68 > 0x40 && v67 )
          operator delete[](v67);
        goto LABEL_2;
      }
      goto LABEL_40;
    }
LABEL_38:
    v29 = (char *)v67;
    goto LABEL_39;
  }
  if ( v6 != 18 )
    goto LABEL_2;
  v7 = sub_BD7DA0(*(_QWORD *)(a2 + 16));
  v8 = sub_9706F0(v7);
  v9 = sub_BD7DA0(*(_QWORD *)(a2 + 24));
  v10 = sub_9706F0(v9);
  if ( (v8 != 0) != (v10 == 0) )
    goto LABEL_2;
  v11 = *a1;
  v68 = 0;
  v69 = 0;
  if ( !v8 )
    v8 = v10;
  v70 &= ~1u;
  LOWORD(v67) = 0;
  if ( !(unsigned __int8)sub_C1B4E0(v8, &v67, v11, 0, 0) )
    goto LABEL_13;
  v64 = 64;
  v63 = nullptr;
  v65 = 0;
  v36 = sub_96A590(v71, (__int64 *)&v63);
  if ( v64 > 0x40 && v63 )
    operator delete[](v63);
  if ( !v36 )
  {
LABEL_13:
    if ( v69 > 1 )
      sub_A2BBA0(&v69);
    goto LABEL_2;
  }
  v37 = *(_QWORD *)(a1[41] + 48LL);
  if ( v37 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v37 + 40LL))(v37, a2);
  if ( v69 > 1 )
    sub_A2BBA0(&v69);
  return 1;
}

