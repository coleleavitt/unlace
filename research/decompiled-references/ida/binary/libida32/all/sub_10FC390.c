__int64 __fastcall sub_10FC390(__int64 *a1, __int64 a2, char a3)
{
  Elf64_Rela *v3; // r13
  int v4; // eax
  _QWORD *v5; // rbp
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r12
  size_t v10; // rax
  bool v11; // dl
  char v12; // di
  int v13; // ecx
  unsigned __int8 *v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // rax
  void **v17; // r12
  unsigned __int64 v18; // rax
  void **v19; // rdx
  void **v20; // r15
  __int64 v21; // rbp
  void **v22; // rbx
  void **v23; // rdi
  void **v24; // rdi
  void **v25; // r15
  __int64 v27; // rdx
  char v28; // di
  unsigned __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // rbx
  __int64 v37; // rbp
  void *v38; // rdi
  __int64 v39; // [rsp+8h] [rbp-C0h]
  _QWORD *v40; // [rsp+10h] [rbp-B8h]
  void **v41; // [rsp+10h] [rbp-B8h]
  unsigned int v42; // [rsp+10h] [rbp-B8h]
  _QWORD *v45; // [rsp+38h] [rbp-90h]
  void *v46; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-80h]
  __int64 v48; // [rsp+50h] [rbp-78h]
  void *v49; // [rsp+60h] [rbp-68h]
  char v50; // [rsp+70h] [rbp-58h] BYREF
  __int16 v51; // [rsp+80h] [rbp-48h]

  v4 = *(_DWORD *)(a2 + 56);
  if ( v4 )
  {
    v5 = (_QWORD *)a2;
    v6 = 0;
    v7 = 0;
    v39 = 8LL * (unsigned int)(v4 - 1) + 8;
    while ( 1 )
    {
      v8 = v5[6];
      v9 = *(_QWORD *)(v8 + v6);
      if ( !v9 )
        break;
      v10 = strlen(*(const char **)(v8 + v6));
      v11 = v10 != 8;
      switch ( v10 )
      {
        case 4uLL:
          if ( *(_DWORD *)v9 != 1668183398 )
          {
            v12 = 1;
            v11 = 1;
            if ( *(_DWORD *)v9 != 1701274725 )
              goto LABEL_69;
            v28 = 1;
            v11 = 1;
            LODWORD(v3) = 4;
            goto LABEL_86;
          }
          v11 = 1;
          LODWORD(v3) = 1;
          goto LABEL_101;
        case 2uLL:
          if ( *(_WORD *)v9 == 25186 )
          {
            v11 = 1;
            LODWORD(v3) = 2;
LABEL_101:
            v28 = 1;
LABEL_86:
            v13 = 1;
            v12 = v28 | 1;
            goto LABEL_70;
          }
          goto LABEL_7;
        case 0xEuLL:
          if ( *(_QWORD *)v9 != 0x7463657269646E69LL
            || *(_DWORD *)(v9 + 8) != 1818321709
            || *(_WORD *)(v9 + 12) != 29548 )
          {
            v12 = 0;
            goto LABEL_12;
          }
          v28 = 0;
          LODWORD(v3) = 8;
          goto LABEL_86;
        case 8uLL:
          if ( *(_QWORD *)v9 != 0x62622D6563617274LL )
          {
LABEL_13:
            if ( *(_QWORD *)v9 != 0x63702D6563617274LL )
            {
              if ( *(_QWORD *)v9 == 0x656E7572702D6F6ELL )
              {
                v11 = 0;
                LOBYTE(v13) = 1;
                LODWORD(v3) = 2048;
                goto LABEL_17;
              }
              LOBYTE(a2) = v10 != 16;
              LOBYTE(v13) = 0;
              v11 = 0;
              goto LABEL_16;
            }
            v11 = 0;
            LODWORD(v3) = 512;
            v13 = 1;
            goto LABEL_79;
          }
          v28 = 1;
          v11 = 0;
          LODWORD(v3) = 16;
          goto LABEL_86;
      }
      v12 = 1;
LABEL_8:
      if ( v10 != 9 )
      {
        if ( v10 == 13 )
        {
          if ( *(_QWORD *)v9 == 0x756F632D74696238LL && *(_DWORD *)(v9 + 8) == 1919251566 && *(_BYTE *)(v9 + 12) == 115 )
          {
            LODWORD(a2) = 1;
            v13 = 1;
            LODWORD(v3) = 256;
          }
          else
          {
            v10 = 13;
            v13 = 0;
            LOBYTE(a2) = 1;
          }
LABEL_78:
          LODWORD(a2) = v13 | a2;
          if ( !(_BYTE)a2 )
          {
            a2 = *(_QWORD *)v9 ^ 0x382D656E696C6E69LL;
            if ( !(a2 | *(_QWORD *)(v9 + 8) ^ 0x6E756F632D746962LL) && *(_DWORD *)(v9 + 16) == 1936876916 )
            {
              LODWORD(v3) = 4096;
              v7 |= 0x1000u;
              goto LABEL_44;
            }
            goto LABEL_17;
          }
          goto LABEL_79;
        }
LABEL_12:
        if ( !v11 )
          goto LABEL_13;
LABEL_69:
        v13 = 0;
        goto LABEL_70;
      }
      if ( *(_QWORD *)v9 == 0x6D632D6563617274LL && *(_BYTE *)(v9 + 8) == 112 )
      {
        v13 = 1;
        LODWORD(v3) = 32;
        v12 = 1;
      }
      else if ( *(_QWORD *)v9 == 0x69642D6563617274LL && *(_BYTE *)(v9 + 8) == 118 )
      {
        v13 = 1;
        LODWORD(v3) = 64;
        v12 = 1;
      }
      else
      {
        if ( *(_QWORD *)v9 != 0x65672D6563617274LL || *(_BYTE *)(v9 + 8) != 112 )
          goto LABEL_12;
        v13 = 1;
        LODWORD(v3) = 128;
        v12 = 1;
      }
LABEL_70:
      LOBYTE(a2) = v10 != 20;
      if ( v12
        || *(_QWORD *)v9 != 0x63702D6563617274LL
        || *(_DWORD *)(v9 + 8) != 1635084077
        || *(_WORD *)(v9 + 12) != 25714 )
      {
        goto LABEL_78;
      }
      LODWORD(v3) = 1024;
      v13 = 1;
LABEL_79:
      LOBYTE(a2) = v10 != 16;
      LODWORD(a2) = v13 | a2;
LABEL_16:
      if ( !(_BYTE)a2 )
      {
        a2 = *(_QWORD *)v9 ^ 0x622D656E696C6E69LL | *(_QWORD *)(v9 + 8) ^ 0x67616C662D6C6F6FLL;
        if ( !a2 )
        {
          LODWORD(v3) = 0x8000;
          v7 |= 0x8000u;
          goto LABEL_44;
        }
        goto LABEL_18;
      }
LABEL_17:
      if ( !((unsigned __int8)v13 | v11) )
      {
        if ( *(_QWORD *)v9 == 0x656C6261742D6370LL )
        {
          LODWORD(v3) = 0x2000;
          v7 |= 0x2000u;
          goto LABEL_44;
        }
        goto LABEL_52;
      }
LABEL_18:
      if ( (_BYTE)v13 )
        goto LABEL_49;
      if ( v10 == 11 )
      {
        if ( *(_QWORD *)v9 == 0x65642D6B63617473LL && *(_WORD *)(v9 + 8) == 29808 && *(_BYTE *)(v9 + 10) == 104 )
        {
          LODWORD(v3) = 0x4000;
        }
        else
        {
          if ( *(_QWORD *)v9 != 0x6F6C2D6563617274LL || *(_WORD *)(v9 + 8) != 25697 || *(_BYTE *)(v9 + 10) != 115 )
            goto LABEL_22;
          LODWORD(v3) = 0x10000;
        }
LABEL_49:
        v7 |= (unsigned int)v3;
        goto LABEL_44;
      }
LABEL_52:
      if ( v10 != 12 )
        goto LABEL_22;
      if ( *(_QWORD *)v9 == 0x74732D6563617274LL && *(_DWORD *)(v9 + 8) == 1936028271 )
      {
        LODWORD(v3) = 0x20000;
        v7 |= 0x20000u;
      }
      else
      {
        if ( *(_QWORD *)v9 != 0x2D6C6F72746E6F63LL || *(_DWORD *)(v9 + 8) != 2003790950 )
        {
LABEL_22:
          if ( a3 )
          {
            sub_FA3370((__int64)&v46, *a1, 0, 497);
            a2 = v5[3];
            sub_AC84E0((unsigned __int8 **)&v46, (_BYTE *)a2, v5[4]);
            v14 = (unsigned __int8 *)v46;
            if ( !v46 )
            {
              v29 = v47;
              v30 = *(_DWORD *)(v47 + 14976);
              if ( v30 )
              {
                v31 = (unsigned int)(v30 - 1);
                *(_DWORD *)(v47 + 14976) = v31;
                v14 = *(unsigned __int8 **)(v29 + 8 * v31 + 14848);
                v32 = *((unsigned int *)v14 + 134);
                *v14 = 0;
                v33 = *((_QWORD *)v14 + 66);
                *((_DWORD *)v14 + 106) = 0;
                v34 = v33 + (v32 << 6);
                if ( v33 != v34 )
                {
                  v42 = v7;
                  v35 = v6;
                  v36 = v34;
                  v45 = v5;
                  v37 = v33;
                  do
                  {
                    while ( 1 )
                    {
                      v36 -= 64;
                      v38 = *(void **)(v36 + 24);
                      if ( v38 == (void *)(v36 + 40) )
                        break;
                      operator delete(v38);
                      if ( v37 == v36 )
                        goto LABEL_116;
                    }
                  }
                  while ( v37 != v36 );
LABEL_116:
                  v6 = v35;
                  v5 = v45;
                  v7 = v42;
                }
                *((_DWORD *)v14 + 134) = 0;
              }
              else
              {
                v14 = (unsigned __int8 *)operator new(0x3A0u);
                *v14 = 0;
                *((_QWORD *)v14 + 12) = v14 + 112;
                *((_QWORD *)v14 + 16) = v14 + 144;
                *((_QWORD *)v14 + 20) = v14 + 176;
                *((_QWORD *)v14 + 24) = v14 + 208;
                *((_QWORD *)v14 + 28) = v14 + 240;
                *((_QWORD *)v14 + 32) = v14 + 272;
                *((_QWORD *)v14 + 36) = v14 + 304;
                *((_QWORD *)v14 + 40) = v14 + 336;
                *((_QWORD *)v14 + 44) = v14 + 368;
                *((_QWORD *)v14 + 48) = v14 + 400;
                *((_QWORD *)v14 + 52) = v14 + 432;
                *((_QWORD *)v14 + 13) = 0;
                v14[112] = 0;
                *((_QWORD *)v14 + 17) = 0;
                v14[144] = 0;
                *((_QWORD *)v14 + 21) = 0;
                v14[176] = 0;
                *((_QWORD *)v14 + 25) = 0;
                v14[208] = 0;
                *((_QWORD *)v14 + 29) = 0;
                v14[240] = 0;
                *((_QWORD *)v14 + 33) = 0;
                v14[272] = 0;
                *((_QWORD *)v14 + 37) = 0;
                v14[304] = 0;
                *((_QWORD *)v14 + 41) = 0;
                v14[336] = 0;
                *((_QWORD *)v14 + 45) = 0;
                v14[368] = 0;
                *((_QWORD *)v14 + 49) = 0;
                v14[400] = 0;
                *((_QWORD *)v14 + 53) = 0x800000000LL;
                *((_QWORD *)v14 + 66) = v14 + 544;
                *((_QWORD *)v14 + 67) = 0x600000000LL;
              }
              v46 = v14;
            }
            v14[*v14 + 1] = 1;
            v15 = v46;
            v16 = *(unsigned __int8 *)v46;
            *(_BYTE *)v46 = v16 + 1;
            v15[v16 + 2] = v9;
            if ( (_BYTE)v51 )
            {
              a2 = (__int64)&v46;
              sub_FA3A50(v48, (__int64)&v46, SHIBYTE(v51));
              v48 = 0;
              v51 = 0;
            }
            if ( v49 != &v50 )
              operator delete(v49);
            v17 = (void **)v46;
            if ( v46 )
            {
              v18 = v47;
              if ( v47 )
              {
                if ( (unsigned __int64)v46 < v47 || (unsigned __int64)v46 > v47 + 14848 )
                {
                  v19 = *((void ***)v46 + 66);
                  v20 = &v19[8 * (unsigned __int64)*((unsigned int *)v46 + 134)];
                  if ( v19 != v20 )
                  {
                    v40 = v5;
                    v21 = v6;
                    v22 = *((void ***)v46 + 66);
                    do
                    {
                      while ( 1 )
                      {
                        v20 -= 8;
                        v23 = (void **)v20[3];
                        if ( v23 == v20 + 5 )
                          break;
                        operator delete(v23);
                        if ( v22 == v20 )
                          goto LABEL_35;
                      }
                    }
                    while ( v22 != v20 );
LABEL_35:
                    v6 = v21;
                    v20 = (void **)v17[66];
                    v5 = v40;
                  }
                  if ( v20 != v17 + 68 )
                    free(v20);
                  v24 = (void **)v17[52];
                  v25 = v17 + 52;
                  if ( v24 != v17 + 54 )
                    free(v24);
                  v41 = v17 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v25 -= 4;
                      if ( *v25 == v25 + 2 )
                        break;
                      operator delete(*v25);
                      if ( v41 == v25 )
                        goto LABEL_43;
                    }
                  }
                  while ( v41 != v25 );
LABEL_43:
                  LODWORD(a2) = 928;
                  operator delete(v17, 0x3A0u);
                }
                else
                {
                  v27 = *(unsigned int *)(v47 + 14976);
                  *(_DWORD *)(v47 + 14976) = v27 + 1;
                  *(_QWORD *)(v18 + 8 * v27 + 14848) = v17;
                }
              }
            }
          }
          goto LABEL_44;
        }
        v3 = &stru_40000;
        v7 |= (unsigned int)&stru_40000;
      }
LABEL_44:
      v6 += 8;
      if ( v6 == v39 )
        return v7;
    }
    v10 = 0;
LABEL_7:
    v12 = 1;
    v11 = 1;
    goto LABEL_8;
  }
  return 0;
}

