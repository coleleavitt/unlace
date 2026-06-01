void __fastcall sub_21F17D0(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edx
  char v4; // r15
  int v5; // r15d
  bool v6; // r13
  __int16 v7; // bx
  unsigned __int64 v8; // rax
  __int16 v9; // r12
  int v10; // r13d
  int v11; // r12d
  unsigned int v12; // r14d
  int v13; // r13d
  void *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // edx
  void *v18; // rax
  unsigned int v19; // edx
  void *v20; // rax
  void *v21; // rdi
  __int64 v22; // rdx
  unsigned int v23; // r14d
  void *v24; // rbx
  __int64 v25; // rbx
  void *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int16 v31; // si
  __int64 v32; // rsi
  void *v33; // rax
  unsigned __int64 v34; // rax
  void *v35; // rax
  unsigned int v36; // r12d
  void *v37; // rax
  __int64 v38; // rax
  __int16 v39; // r12
  void *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  void *v44; // [rsp+8h] [rbp-C0h]
  unsigned int v45; // [rsp+8h] [rbp-C0h]
  void *v46; // [rsp+8h] [rbp-C0h]
  unsigned int v47; // [rsp+14h] [rbp-B4h]
  void *v48; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+28h] [rbp-A0h]
  bool v50; // [rsp+2Ch] [rbp-9Ch]
  void *v51; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v52; // [rsp+38h] [rbp-90h]
  char v53; // [rsp+3Ch] [rbp-8Ch]
  void *v54; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-80h]
  void *v56; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v57; // [rsp+58h] [rbp-70h]
  void *v58; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v59; // [rsp+68h] [rbp-60h]
  void *v60; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+78h] [rbp-50h]
  bool v62; // [rsp+7Ch] [rbp-4Ch]
  void *v63; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v64; // [rsp+88h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_BYTE *)(a1 + 19);
  v64 = v3;
  v5 = v4 & 0x20;
  v6 = v5 == 0;
  if ( v3 <= 0x40 )
  {
    v7 = *(_WORD *)(a1 + 18);
    v8 = *(_QWORD *)a1;
    v49 = v3;
    v50 = v5 == 0;
    v48 = (void *)v8;
    v9 = (__int16)(8 * v7) >> 3;
    if ( v9 < 0 )
    {
      v10 = *(unsigned __int16 *)(a1 + 16);
      if ( !(_BYTE)v5 )
        goto LABEL_4;
      v32 = 1LL << ((unsigned __int8)v3 - 1);
      goto LABEL_105;
    }
    v61 = v3;
LABEL_60:
    v60 = (void *)v8;
    goto LABEL_61;
  }
  sub_2205510(&v63);
  v31 = *(_WORD *)(a1 + 18);
  v50 = v5 == 0;
  v3 = v64;
  v8 = (unsigned __int64)v63;
  v9 = (__int16)(8 * v31) >> 3;
  v49 = v64;
  v48 = v63;
  if ( v9 < 0 )
  {
    v10 = *(unsigned __int16 *)(a1 + 16);
    if ( !(_BYTE)v5 )
    {
LABEL_4:
      v11 = -v9;
      v12 = v11;
      if ( v10 <= v11 )
      {
LABEL_5:
        v52 = 64;
        v51 = nullptr;
        if ( v10 >= v11 )
          v11 = v10;
        v53 = 0;
        goto LABEL_8;
      }
LABEL_97:
      v64 = v3;
      if ( v3 > 0x40 )
      {
        sub_2205510(&v63);
        v3 = v64;
        if ( v64 > 0x40 )
        {
          sub_220ABD0(&v63, (unsigned int)v11);
          v34 = (unsigned __int64)v63;
LABEL_101:
          v51 = (void *)v34;
          v11 = v10;
          v53 = 1;
          v52 = v64;
          goto LABEL_8;
        }
      }
      else
      {
        v63 = v48;
      }
      v34 = 0;
      if ( v3 != v11 )
        v34 = (unsigned __int64)v63 >> v11;
      goto LABEL_101;
    }
    v32 = 1LL << ((unsigned __int8)v64 - 1);
    if ( v64 > 0x40 )
    {
      if ( (v32 & *((_QWORD *)v63 + ((v64 - 1) >> 6))) == 0 )
      {
        v11 = -v9;
        v12 = v11;
        if ( v10 <= v11 )
          goto LABEL_5;
        v11 = *(unsigned __int16 *)(a1 + 16);
        goto LABEL_92;
      }
      sub_2205510(&v63);
      v3 = v64;
      if ( v64 > 0x40 )
      {
        sub_2205FC0(&v63, &v48);
LABEL_110:
        sub_2205900(&v63);
        v36 = v64;
        v37 = v63;
        if ( v49 > 0x40 && v48 )
        {
          v46 = v63;
          operator delete[](v48);
          v37 = v46;
        }
        v48 = v37;
        v38 = a2[1];
        v49 = v36;
        v50 = 1;
        if ( (unsigned __int64)(v38 + 1) > a2[2] )
        {
          sub_2236E10(a2, a2 + 3, v38 + 1, 1);
          v38 = a2[1];
        }
        *(_BYTE *)(*a2 + v38) = 45;
        v39 = *(_WORD *)(a1 + 18);
        ++a2[1];
        v11 = -((__int16)(8 * v39) >> 3);
        v12 = v11;
        if ( v11 >= v10 )
          goto LABEL_5;
        v3 = v49;
        if ( v50 )
          goto LABEL_97;
        v64 = v49;
        if ( v49 <= 0x40 )
          goto LABEL_118;
        v11 = v10;
LABEL_92:
        sub_2205510(&v63);
        v3 = v64;
        if ( v64 > 0x40 )
        {
          sub_2206EF0(&v63, v12);
          v33 = v63;
          v3 = v64;
LABEL_125:
          v52 = v3;
          v51 = v33;
          v53 = 0;
LABEL_8:
          v13 = v11 + 4;
          sub_2206D90(&v63, &v48, v12);
          sub_2206CD0(&v54, &v63, (unsigned int)(v11 + 4));
          if ( v64 > 0x40 && v63 )
            operator delete[](v63);
          v64 = v12;
          if ( v12 > 0x40 )
          {
            sub_2205470(&v63, -1, 1);
          }
          else
          {
            v14 = (void *)(0xFFFFFFFFFFFFFFFFLL >> -(char)v12);
            if ( !v12 )
              v14 = nullptr;
            v63 = v14;
          }
          sub_2206CD0(&v56, &v63, (unsigned int)v13);
          if ( v64 > 0x40 && v63 )
            operator delete[](v63);
          v59 = v11 + 4;
          if ( v13 > 64 )
            sub_2205470(&v58, 10, 0);
          else
            v58 = byte_9 + 1;
          sub_220BA90((unsigned int)&v51, (_DWORD)a2, 10, (unsigned __int8)v53 ^ 1, 0, 1, 0);
          v15 = a2[1];
          if ( (unsigned __int64)(v15 + 1) > a2[2] )
          {
            sub_2236E10(a2, a2 + 3, v15 + 1, 1);
            v15 = a2[1];
          }
          *(_BYTE *)(*a2 + v15) = 46;
          ++a2[1];
          while ( 1 )
          {
            sub_2209CE0(&v60, &v54, &v58);
            v16 = v61;
            v64 = v61;
            if ( v61 <= 0x40 )
              break;
            sub_2205510(&v63);
            v16 = v64;
            if ( v64 <= 0x40 )
              goto LABEL_25;
            sub_220ABD0(&v63, v12);
LABEL_27:
            sub_220BA90((unsigned int)&v63, (_DWORD)a2, 10, !v50, 0, 1, 0);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            if ( v61 > 0x40 && v60 )
              operator delete[](v60);
            sub_2209CE0(&v63, &v54, &v58);
            v17 = v64;
            if ( v64 > 0x40 )
            {
              sub_2205B60(&v63, &v56);
              v17 = v64;
              v18 = v63;
            }
            else
            {
              v18 = (void *)((unsigned __int64)v56 & (unsigned __int64)v63);
              v63 = (void *)((unsigned __int64)v56 & (unsigned __int64)v63);
            }
            v64 = 0;
            if ( v55 > 0x40 && v54 )
            {
              v47 = v17;
              v44 = v18;
              operator delete[](v54);
              v19 = v47;
              v54 = v44;
              v55 = v47;
              if ( v64 > 0x40 && v63 )
              {
                operator delete[](v63);
                v19 = v55;
              }
              v45 = v19;
              if ( v19 <= 0x40 )
                goto LABEL_41;
LABEL_80:
              if ( v45 - (unsigned int)sub_2206780(&v54) <= 0x40 )
              {
                v20 = *(void **)v54;
                goto LABEL_42;
              }
            }
            else
            {
              v54 = v18;
              v55 = v17;
              v45 = v17;
              if ( v17 > 0x40 )
                goto LABEL_80;
LABEL_41:
              v20 = v54;
LABEL_42:
              if ( !v20 )
              {
                if ( v59 > 0x40 && v58 )
                  operator delete[](v58);
                if ( v57 > 0x40 && v56 )
                  operator delete[](v56);
                if ( v55 > 0x40 && v54 )
                  operator delete[](v54);
                if ( v52 > 0x40 )
                {
                  v21 = v51;
                  if ( v51 )
                    goto LABEL_54;
                }
                goto LABEL_55;
              }
            }
          }
          v63 = v60;
LABEL_25:
          if ( v16 == v12 )
            v63 = nullptr;
          else
            v63 = (void *)((unsigned __int64)v63 >> v12);
          goto LABEL_27;
        }
        v40 = v63;
LABEL_119:
        v41 = 0;
        if ( v3 )
          v41 = (__int64)((_QWORD)v40 << (64 - (unsigned __int8)v3)) >> (64 - (unsigned __int8)v3);
        v11 = v10;
        v42 = v41 >> 63;
        v43 = v41 >> v12;
        if ( v3 == v12 )
          v43 = v42;
        v33 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v3) & v43);
        if ( !v3 )
          v33 = nullptr;
        goto LABEL_125;
      }
      v8 = (unsigned __int64)v63;
LABEL_107:
      v35 = (void *)((0xFFFFFFFFFFFFFFFFLL >> -(char)v3) & ~v8);
      if ( !v3 )
        v35 = nullptr;
      v63 = v35;
      goto LABEL_110;
    }
LABEL_105:
    if ( (v8 & v32) == 0 )
    {
      v11 = -v9;
      v12 = v11;
      if ( v11 >= v10 )
        goto LABEL_5;
LABEL_118:
      v40 = v48;
      goto LABEL_119;
    }
    v64 = v3;
    goto LABEL_107;
  }
  v61 = v64;
  if ( v64 <= 0x40 )
    goto LABEL_60;
  sub_2205510(&v60);
  v3 = v61;
  v6 = v50;
LABEL_61:
  v62 = v6;
  v22 = v9 + v3;
  if ( v6 )
    sub_2206CD0(&v63, &v60, v22);
  else
    sub_2206B70(&v63, &v60, v22);
  v23 = v64;
  v24 = v63;
  if ( v61 > 0x40 && v60 )
    operator delete[](v60);
  v60 = v24;
  v61 = v23;
  v62 = v6;
  if ( v23 > 0x40 )
  {
    sub_220A130(&v60, (unsigned int)v9);
    v6 = v62;
  }
  else
  {
    v25 = (_QWORD)v24 << v9;
    if ( v9 == v23 )
      v25 = 0;
    v26 = (void *)(v25 & (0xFFFFFFFFFFFFFFFFLL >> -(char)v23));
    if ( !v23 )
      v26 = nullptr;
    v60 = v26;
  }
  sub_220BA90((unsigned int)&v60, (_DWORD)a2, 10, !v6, 0, 1, 0);
  v27 = a2[1];
  if ( (unsigned __int64)(v27 + 1) > a2[2] )
  {
    sub_2236E10(a2, a2 + 3, v27 + 1, 1);
    v27 = a2[1];
  }
  *(_BYTE *)(*a2 + v27) = 46;
  v28 = a2[1];
  v29 = v28 + 1;
  v30 = v28 + 2;
  a2[1] = v29;
  if ( v30 > a2[2] )
  {
    sub_2236E10(a2, a2 + 3, v30, 1);
    v29 = a2[1];
  }
  *(_BYTE *)(*a2 + v29) = 48;
  ++a2[1];
  if ( v61 > 0x40 )
  {
    v21 = v60;
    if ( v60 )
LABEL_54:
      operator delete[](v21);
  }
LABEL_55:
  if ( v49 > 0x40 )
  {
    if ( v48 )
      operator delete[](v48);
  }
}
