__int64 __fastcall sub_21EDE90(__int64 a1, __int64 a2, unsigned __int16 *a3, _BYTE *a4)
{
  unsigned int v8; // ebx
  unsigned __int16 v9; // si
  char v10; // r13
  int v11; // eax
  int v12; // r8d
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // edx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // ax
  unsigned int v19; // r9d
  int v20; // esi
  __int16 v21; // dx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // r13d
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  _QWORD *v29; // rax
  _QWORD *v30; // rbx
  bool v31; // cl
  unsigned int v32; // eax
  unsigned int v33; // esi
  unsigned __int64 v34; // rdi
  char v35; // al
  unsigned int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned int v39; // ebx
  void *v40; // r14
  int v41; // eax
  bool v42; // al
  int v43; // eax
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rdx
  void *v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rdx
  void *v51; // rdx
  unsigned __int64 v52; // [rsp+8h] [rbp-A0h]
  int v53; // [rsp+8h] [rbp-A0h]
  int v54; // [rsp+8h] [rbp-A0h]
  bool v55; // [rsp+8h] [rbp-A0h]
  unsigned int v56; // [rsp+8h] [rbp-A0h]
  bool v57; // [rsp+8h] [rbp-A0h]
  unsigned int v58; // [rsp+8h] [rbp-A0h]
  unsigned int v59; // [rsp+8h] [rbp-A0h]
  unsigned int v60; // [rsp+8h] [rbp-A0h]
  int v61; // [rsp+10h] [rbp-98h]
  void *v62; // [rsp+10h] [rbp-98h]
  int v63; // [rsp+18h] [rbp-90h]
  int v64; // [rsp+1Ch] [rbp-8Ch]
  void *v65; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v66; // [rsp+28h] [rbp-80h]
  bool v67; // [rsp+2Ch] [rbp-7Ch]
  void *v68; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v69; // [rsp+38h] [rbp-70h]
  void *v70; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v71; // [rsp+48h] [rbp-60h]
  void *v72; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v73; // [rsp+58h] [rbp-50h]
  unsigned __int64 v74; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v75; // [rsp+68h] [rbp-40h]

  v8 = *(_DWORD *)(a2 + 8);
  v66 = v8;
  if ( v8 > 0x40 )
  {
    sub_2205510(&v65);
    v8 = v66;
  }
  else
  {
    v65 = *(void **)a2;
  }
  v9 = a3[1];
  v10 = *(_BYTE *)(a2 + 12);
  LOWORD(v11) = (__int16)(8 * *(_WORD *)(a2 + 18)) >> 3;
  v67 = v10;
  v11 = (__int16)v11;
  v12 = (__int16)(8 * v9) >> 3;
  v13 = (__int16)v11 - v12;
  if ( a4 )
    *a4 = 0;
  if ( v13 > 0 )
  {
    v47 = v8 + v13;
    v61 = (__int16)v11;
    v53 = (__int16)v11 - v12;
    if ( v10 )
    {
      sub_2206CD0(&v74, &v65, v47);
      v8 = v75;
      v48 = (void *)v74;
      v13 = v53;
      v11 = v61;
      v12 = (__int16)(8 * v9) >> 3;
    }
    else
    {
      sub_2206B70(&v74, &v65, v47);
      v8 = v75;
      v48 = (void *)v74;
      v12 = (__int16)(8 * v9) >> 3;
      v11 = v61;
      v13 = v53;
    }
    if ( v66 > 0x40 && v65 )
    {
      v64 = v12;
      v63 = v11;
      v62 = v48;
      v54 = v13;
      operator delete[](v65);
      v12 = v64;
      v11 = v63;
      v48 = v62;
      v13 = v54;
    }
    v65 = v48;
    v66 = v8;
    v67 = v10;
  }
  v14 = v12 - v11;
  v75 = v8;
  if ( !v10 )
  {
    if ( v14 > 0 )
    {
      if ( v8 > 0x40 )
      {
        v58 = v14;
        sub_2205510(&v74);
        v8 = v75;
        v14 = v58;
        if ( v75 > 0x40 )
        {
          sub_2206EF0(&v74, v58);
          v16 = v74;
          v8 = v75;
          v15 = v66;
          goto LABEL_18;
        }
      }
      else
      {
        v74 = (unsigned __int64)v65;
      }
      v16 = 0;
      if ( v8 )
      {
        v45 = (__int64)(v74 << (64 - (unsigned __int8)v8)) >> (64 - (unsigned __int8)v8);
        if ( v8 == v14 )
          v46 = v45 >> 63;
        else
          v46 = v45 >> v14;
        v16 = v46 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v8);
      }
      goto LABEL_80;
    }
LABEL_12:
    if ( v8 <= 0x40 )
    {
      v15 = v8;
      v74 = (unsigned __int64)v65;
LABEL_14:
      v17 = 0;
      if ( v8 != v13 )
        v17 = v74 << v13;
      v16 = (0xFFFFFFFFFFFFFFFFLL >> -(char)v8) & v17;
      if ( !v8 )
        v16 = 0;
      goto LABEL_18;
    }
    v60 = v13;
    sub_2205510(&v74);
    v8 = v75;
    v13 = v60;
    if ( v75 <= 0x40 )
    {
      v15 = v66;
      goto LABEL_14;
    }
    sub_220A130(&v74, v60);
    v16 = v74;
LABEL_80:
    v8 = v75;
    v15 = v66;
    goto LABEL_18;
  }
  if ( v14 <= 0 )
    goto LABEL_12;
  if ( v8 > 0x40 )
  {
    v59 = v14;
    sub_2205510(&v74);
    v8 = v75;
    v14 = v59;
    if ( v75 > 0x40 )
    {
      sub_220ABD0(&v74, v59);
      v16 = v74;
      v8 = v75;
      v15 = v66;
      goto LABEL_18;
    }
  }
  else
  {
    v74 = (unsigned __int64)v65;
  }
  if ( v8 == v14 )
  {
    v8 = v75;
    v15 = v66;
    v16 = 0;
  }
  else
  {
    v8 = v75;
    v15 = v66;
    v16 = v74 >> v14;
  }
LABEL_18:
  if ( v15 > 0x40 && v65 )
  {
    v52 = v16;
    operator delete[](v65);
    v16 = v52;
  }
  v65 = (void *)v16;
  v18 = a3[1];
  v19 = v8;
  v20 = *(_DWORD *)a3;
  v66 = v8;
  v21 = 8 * v18;
  v22 = *a3;
  v67 = v10;
  v69 = v8;
  v23 = v21 >> 3;
  v24 = v23 + v22 - ((v20 & 0xA0000000) != 0);
  if ( v24 < 0 )
    v24 = 0;
  v25 = v24 - v23;
  if ( v25 <= v8 )
    v19 = v25;
  if ( v8 <= 0x40 )
  {
    v68 = nullptr;
    if ( v25 >= v8 )
    {
      v26 = v19;
      goto LABEL_31;
    }
    v26 = v8;
    v27 = 0;
    goto LABEL_28;
  }
  v56 = v19;
  sub_2205470(&v68, 0, 0);
  LOBYTE(v8) = v69;
  LOBYTE(v19) = v56;
  if ( v56 != v69 )
  {
    if ( v69 <= 0x40 )
    {
      v27 = (unsigned __int64)v68;
      v26 = v66;
LABEL_28:
      v68 = (void *)(v27 | (0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v19 + 64 - (unsigned __int8)v8) << v19));
      goto LABEL_29;
    }
    sub_2205F20(&v68, v56, v69);
  }
  v26 = v66;
LABEL_29:
  v75 = v26;
  if ( v26 <= 0x40 )
  {
    v20 = *(_DWORD *)a3;
LABEL_31:
    v28 = (unsigned __int64)v65;
LABEL_32:
    v29 = v68;
    v71 = v26;
    v30 = (_QWORD *)((unsigned __int64)v68 & v28);
    v70 = v30;
    goto LABEL_33;
  }
  sub_2205510(&v74);
  v26 = v75;
  if ( v75 <= 0x40 )
  {
    v28 = v74;
    v20 = *(_DWORD *)a3;
    goto LABEL_32;
  }
  sub_2205B60(&v74, &v68);
  v26 = v75;
  v30 = (_QWORD *)v74;
  v71 = v75;
  v70 = (void *)v74;
  if ( v75 <= 0x40 )
  {
    v29 = v68;
    v20 = *(_DWORD *)a3;
LABEL_33:
    v31 = v67;
    if ( v30 == v29 )
      goto LABEL_49;
    goto LABEL_34;
  }
  v35 = sub_2205D70(&v70, &v68);
  v31 = v67;
  if ( v35 )
  {
LABEL_48:
    v20 = *(_DWORD *)a3;
    goto LABEL_49;
  }
  v57 = v67;
  v49 = sub_2206780(&v70);
  v31 = v57;
  if ( v26 - v49 > 0x40 )
  {
    v20 = *(_DWORD *)a3;
    goto LABEL_35;
  }
  v30 = (_QWORD *)*v30;
  v20 = *(_DWORD *)a3;
LABEL_34:
  if ( !v30 )
    goto LABEL_49;
LABEL_35:
  if ( (v20 & 0x40000000) != 0 )
  {
    v32 = v69;
    if ( !v31 )
    {
      v33 = v66;
      v34 = (unsigned __int64)v65;
      if ( v66 > 0x40 )
        v34 = *((_QWORD *)v65 + ((v66 - 1) >> 6));
      if ( (v34 & (1LL << ((unsigned __int8)v66 - 1))) != 0 )
      {
        v75 = v69;
        if ( v69 > 0x40 )
        {
          sub_2205510(&v74);
          v33 = v66;
        }
        else
        {
          v74 = (unsigned __int64)v68;
        }
        if ( v33 > 0x40 && v65 )
        {
          operator delete[](v65);
          v65 = (void *)v74;
          v66 = v75;
        }
        else
        {
          v26 = v71;
          v65 = (void *)v74;
          v66 = v75;
        }
LABEL_115:
        v31 = v67;
        goto LABEL_48;
      }
    }
    v73 = v69;
    if ( v69 > 0x40 )
    {
      sub_2205510(&v72);
      v32 = v73;
      if ( v73 > 0x40 )
      {
        sub_2205FC0(&v72, &v68);
        v51 = v72;
        v32 = v73;
LABEL_113:
        v75 = v32;
        v74 = (unsigned __int64)v51;
        v73 = 0;
        if ( v66 > 0x40 )
        {
          if ( v65 )
          {
            operator delete[](v65);
            v65 = (void *)v74;
            v66 = v75;
            if ( v73 > 0x40 && v72 )
            {
              operator delete[](v72);
              v26 = v71;
            }
          }
          else
          {
            v65 = v51;
            v66 = v32;
          }
        }
        else
        {
          v65 = v51;
          v26 = v71;
          v66 = v32;
        }
        goto LABEL_115;
      }
      v50 = (unsigned __int64)v72;
    }
    else
    {
      v50 = (unsigned __int64)v68;
    }
    v51 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v32) & ~v50);
    if ( !v32 )
      v51 = nullptr;
    v72 = v51;
    goto LABEL_113;
  }
  if ( a4 )
  {
    *a4 = 1;
    v26 = v71;
  }
LABEL_49:
  if ( (v20 & 0x20000000) != 0 )
  {
LABEL_71:
    v38 = *a3;
    if ( !v31 )
      goto LABEL_54;
LABEL_72:
    sub_2206D90(&v74, &v65, v38);
    v39 = v75;
    v40 = (void *)v74;
    goto LABEL_55;
  }
  if ( v31 )
  {
    v38 = *a3;
    goto LABEL_72;
  }
  v36 = v66;
  v37 = 1LL << ((unsigned __int8)v66 - 1);
  if ( v66 > 0x40 )
  {
    if ( (*((_QWORD *)v65 + ((v66 - 1) >> 6)) & v37) == 0 )
      goto LABEL_53;
    goto LABEL_100;
  }
  if ( ((unsigned __int64)v65 & v37) != 0 )
  {
LABEL_100:
    if ( (v20 & 0x40000000) == 0 )
    {
      if ( a4 )
        *a4 = 1;
      goto LABEL_53;
    }
    if ( v66 <= 0x40 )
    {
      v65 = nullptr;
      goto LABEL_53;
    }
    *(_QWORD *)v65 = 0;
    memset((char *)v65 + 8, 0, 8 * ((unsigned int)(((unsigned __int64)v36 + 63) >> 6) + 0x1FFFFFFF));
    v31 = v67;
    goto LABEL_71;
  }
LABEL_53:
  v38 = *a3;
LABEL_54:
  sub_2206DE0(&v74, &v65, v38);
  v39 = v75;
  v40 = (void *)v74;
LABEL_55:
  if ( v66 > 0x40 && v65 )
    operator delete[](v65);
  v41 = *(_DWORD *)a3;
  v65 = v40;
  v66 = v39;
  v75 = v39;
  v67 = (v41 & 0x20000000) == 0;
  v42 = v67;
  if ( v39 > 0x40 )
  {
    v55 = v67;
    sub_2205510(&v74);
    v39 = v75;
    v40 = (void *)v74;
    v42 = v55;
  }
  *(_QWORD *)a1 = v40;
  *(_BYTE *)(a1 + 12) = v42;
  v43 = *(_DWORD *)a3;
  *(_DWORD *)(a1 + 8) = v39;
  *(_DWORD *)(a1 + 16) = v43;
  if ( v26 > 0x40 && v70 )
    operator delete[](v70);
  if ( v69 > 0x40 && v68 )
    operator delete[](v68);
  if ( v66 > 0x40 && v65 )
    operator delete[](v65);
  return a1;
}
