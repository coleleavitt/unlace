void __fastcall sub_18CA2F0(_QWORD *a1, unsigned int a2, _QWORD *a3, char a4, double a5)
{
  char *v7; // rbx
  _BOOL8 v8; // r14
  char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  char *v19; // rbp
  unsigned __int64 v20; // rax
  char *v21; // r12
  char *v22; // rbx
  char *v23; // rdi
  char *v24; // rdi
  void **v25; // rbx
  void **v26; // r12
  __int64 *v27; // rbx
  int i; // r15d
  int v29; // eax
  char *v30; // r14
  int v31; // eax
  int v32; // eax
  int v33; // r14d
  char *v34; // r15
  int v35; // eax
  unsigned __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  void *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rdx
  __int64 v50; // r14
  void *v51; // rdi
  int v52; // edx
  __int64 v54; // [rsp+10h] [rbp-78h]
  __int64 v55; // [rsp+10h] [rbp-78h]
  __int64 v56; // [rsp+18h] [rbp-70h]
  _QWORD *v57; // [rsp+20h] [rbp-68h] BYREF
  int v58; // [rsp+28h] [rbp-60h]
  char *s; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v60; // [rsp+38h] [rbp-50h]

  if ( !a4 || (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1[33] + 152LL) + 24LL) & 0x10) != 0 )
    {
      v27 = (__int64 *)a1[34];
      for ( i = a2; i < 0; i = v33 )
      {
        v29 = sub_1021B90((__int64)v27, i);
        sub_1022900((__int64)&s, v27, v29, 1);
        v30 = s;
        if ( !s
          || strlen(s) != 15
          || *(_QWORD *)v30 != 0x686374617263733CLL
          || *((_DWORD *)v30 + 2) != 1634759456
          || *((_WORD *)v30 + 6) != 25955
          || v30[14] != 62 )
        {
          v31 = sub_1021B90((__int64)v27, i);
          if ( !v31 )
            break;
          v32 = sub_1021680((__int64)v27, v31);
          if ( !v32 || v32 == 3 )
            break;
          return;
        }
        do
        {
          v33 = i;
          if ( i < 0 )
          {
            if ( (unsigned __int8)sub_1020490((__int64)v27, i, nullptr) )
            {
              v33 = sub_10205A0((__int64)v27, i);
            }
            else
            {
              s = (char *)sub_101FC50((__int64)v27, i);
              v33 = (int)s;
              LODWORD(v60) = v52;
            }
            if ( v33 >= 0 )
              i = v33;
            else
              i = sub_1021B90((__int64)v27, v33);
          }
          sub_1022900((__int64)&s, v27, i, 1);
          v34 = s;
          if ( !s || strlen(s) != 15 )
            break;
          if ( *(_QWORD *)v34 == 0x686374617263733CLL
            && *((_DWORD *)v34 + 2) == 1634759456
            && *((_WORD *)v34 + 6) == 25955 )
          {
            v35 = 0;
            if ( v34[14] == 62 )
              continue;
          }
          v35 = 1;
          i = v33;
        }
        while ( !v35 );
      }
    }
    sub_168B9B0((__int64)&s, (__int64)(a1 + 1), 7252);
    v7 = s;
    v8 = (*(_BYTE *)(a1[29] + 1LL) & 8) != 0;
    if ( !s )
    {
      v39 = v60;
      v40 = *(_DWORD *)(v60 + 14976);
      if ( v40 )
      {
        v42 = (unsigned int)(v40 - 1);
        *(_DWORD *)(v60 + 14976) = v42;
        v7 = *(char **)(v39 + 8 * v42 + 14848);
        v43 = *((unsigned int *)v7 + 134);
        *v7 = 0;
        v44 = *((_QWORD *)v7 + 66);
        *((_DWORD *)v7 + 106) = 0;
        v45 = v44 + (v43 << 6);
        while ( v44 != v45 )
        {
          while ( 1 )
          {
            v45 -= 64;
            v46 = *(void **)(v45 + 24);
            if ( v46 == (void *)(v45 + 40) )
              break;
            v56 = v45;
            v54 = v44;
            operator delete(v46);
            v44 = v54;
            v45 = v56;
            if ( v54 == v56 )
              goto LABEL_62;
          }
        }
LABEL_62:
        *((_DWORD *)v7 + 134) = 0;
      }
      else
      {
        v7 = (char *)operator new(0x3A0u);
        *v7 = 0;
        *((_QWORD *)v7 + 12) = v7 + 112;
        *((_QWORD *)v7 + 16) = v7 + 144;
        *((_QWORD *)v7 + 20) = v7 + 176;
        *((_QWORD *)v7 + 24) = v7 + 208;
        *((_QWORD *)v7 + 28) = v7 + 240;
        *((_QWORD *)v7 + 32) = v7 + 272;
        *((_QWORD *)v7 + 36) = v7 + 304;
        *((_QWORD *)v7 + 40) = v7 + 336;
        *((_QWORD *)v7 + 44) = v7 + 368;
        *((_QWORD *)v7 + 48) = v7 + 400;
        *((_QWORD *)v7 + 52) = v7 + 432;
        *((_QWORD *)v7 + 13) = 0;
        v7[112] = 0;
        *((_QWORD *)v7 + 17) = 0;
        v7[144] = 0;
        *((_QWORD *)v7 + 21) = 0;
        v7[176] = 0;
        *((_QWORD *)v7 + 25) = 0;
        v7[208] = 0;
        *((_QWORD *)v7 + 29) = 0;
        v7[240] = 0;
        *((_QWORD *)v7 + 33) = 0;
        v7[272] = 0;
        *((_QWORD *)v7 + 37) = 0;
        v7[304] = 0;
        *((_QWORD *)v7 + 41) = 0;
        v7[336] = 0;
        *((_QWORD *)v7 + 45) = 0;
        v7[368] = 0;
        *((_QWORD *)v7 + 49) = 0;
        v7[400] = 0;
        *((_QWORD *)v7 + 53) = 0x800000000LL;
        *((_QWORD *)v7 + 66) = v7 + 544;
        *((_QWORD *)v7 + 67) = 0x600000000LL;
      }
      s = v7;
    }
    v7[(unsigned __int8)*v7 + 1] = 3;
    v9 = s;
    v10 = (unsigned __int8)*s;
    *s = v10 + 1;
    *(_QWORD *)&v9[8 * v10 + 16] = v8;
    v11 = sub_EEC8C0((unsigned __int64)a3, (__int64)(a1 + 1), a5);
    v12 = s;
    v13 = v11;
    if ( s )
    {
      v14 = *((unsigned int *)s + 106);
      v15 = *((unsigned int *)s + 107);
      v16 = v14 + 1;
    }
    else
    {
      v36 = v60;
      v37 = *(_DWORD *)(v60 + 14976);
      if ( v37 )
      {
        v47 = (unsigned int)(v37 - 1);
        *(_DWORD *)(v60 + 14976) = v47;
        v12 = *(char **)(v36 + 8 * v47 + 14848);
        v48 = *((unsigned int *)v12 + 134);
        *v12 = 0;
        v49 = *((_QWORD *)v12 + 66);
        *((_DWORD *)v12 + 106) = 0;
        v50 = v49 + (v48 << 6);
        if ( v49 == v50 )
        {
          v16 = 1;
          v14 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v50 -= 64;
              v51 = *(void **)(v50 + 24);
              if ( v51 == (void *)(v50 + 40) )
                break;
              v55 = v49;
              operator delete(v51);
              v49 = v55;
              if ( v55 == v50 )
                goto LABEL_66;
            }
          }
          while ( v49 != v50 );
LABEL_66:
          v14 = *((unsigned int *)v12 + 106);
          v16 = v14 + 1;
        }
        *((_DWORD *)v12 + 134) = 0;
        v15 = *((unsigned int *)v12 + 107);
      }
      else
      {
        v38 = operator new(0x3A0u);
        v15 = 8;
        v16 = 1;
        v12 = (char *)v38;
        *(_BYTE *)v38 = 0;
        *(_QWORD *)(v38 + 96) = v38 + 112;
        *(_QWORD *)(v38 + 128) = v38 + 144;
        *(_QWORD *)(v38 + 160) = v38 + 176;
        *(_QWORD *)(v38 + 192) = v38 + 208;
        *(_QWORD *)(v38 + 224) = v38 + 240;
        *(_QWORD *)(v38 + 256) = v38 + 272;
        *(_QWORD *)(v38 + 288) = v38 + 304;
        *(_QWORD *)(v38 + 320) = v38 + 336;
        *(_QWORD *)(v38 + 352) = v38 + 368;
        *(_QWORD *)(v38 + 384) = v38 + 400;
        *(_QWORD *)(v38 + 416) = v38 + 432;
        *(_QWORD *)(v38 + 104) = 0;
        *(_BYTE *)(v38 + 112) = 0;
        *(_QWORD *)(v38 + 136) = 0;
        *(_BYTE *)(v38 + 144) = 0;
        *(_QWORD *)(v38 + 168) = 0;
        *(_BYTE *)(v38 + 176) = 0;
        *(_QWORD *)(v38 + 200) = 0;
        *(_BYTE *)(v38 + 208) = 0;
        *(_QWORD *)(v38 + 232) = 0;
        *(_BYTE *)(v38 + 240) = 0;
        *(_QWORD *)(v38 + 264) = 0;
        *(_BYTE *)(v38 + 272) = 0;
        *(_QWORD *)(v38 + 296) = 0;
        *(_BYTE *)(v38 + 304) = 0;
        *(_QWORD *)(v38 + 328) = 0;
        *(_BYTE *)(v38 + 336) = 0;
        *(_QWORD *)(v38 + 360) = 0;
        *(_BYTE *)(v38 + 368) = 0;
        *(_QWORD *)(v38 + 392) = 0;
        *(_BYTE *)(v38 + 400) = 0;
        *(_QWORD *)(v38 + 424) = 0x800000000LL;
        *(_QWORD *)(v38 + 528) = v38 + 544;
        *(_QWORD *)(v38 + 536) = 0x600000000LL;
        v14 = 0;
      }
      s = v12;
    }
    v57 = (_QWORD *)v13;
    LOBYTE(v58) = 1;
    if ( v16 > v15 )
    {
      sub_2237220(v12 + 416, v12 + 432, v16, 12);
      v14 = *((unsigned int *)v12 + 106);
    }
    v17 = 0;
    v18 = *((_QWORD *)v12 + 52) + 12 * v14;
    *(_QWORD *)v18 = v57;
    *(_DWORD *)(v18 + 8) = v58;
    ++*((_DWORD *)v12 + 106);
    v57 = a3;
    if ( a3 )
    {
      v17 = 1;
      a3 = &v57;
    }
    sub_18CA280((__int64)a1, a2, a3, v17, (__int64)&s);
    v19 = s;
    if ( s )
    {
      v20 = v60;
      if ( v60 )
      {
        if ( (unsigned __int64)s >= v60 && (unsigned __int64)s <= v60 + 14848 )
        {
          v41 = *(unsigned int *)(v60 + 14976);
          *(_DWORD *)(v60 + 14976) = v41 + 1;
          *(_QWORD *)(v20 + 8 * v41 + 14848) = v19;
        }
        else
        {
          v21 = *((char **)s + 66);
          v22 = &v21[64 * (unsigned __int64)*((unsigned int *)s + 134)];
          if ( v21 != v22 )
          {
            do
            {
              while ( 1 )
              {
                v22 -= 64;
                v23 = *((char **)v22 + 3);
                if ( v23 == v22 + 40 )
                  break;
                operator delete(v23);
                if ( v21 == v22 )
                  goto LABEL_18;
              }
            }
            while ( v21 != v22 );
LABEL_18:
            v22 = *((char **)v19 + 66);
          }
          if ( v22 != v19 + 544 )
            free(v22);
          v24 = *((char **)v19 + 52);
          if ( v24 != v19 + 432 )
            free(v24);
          v25 = (void **)(v19 + 384);
          v26 = (void **)(v19 + 64);
          do
          {
            while ( *v25 != v25 + 2 )
            {
              operator delete(*v25);
              v25 -= 4;
              if ( v26 == v25 )
                goto LABEL_26;
            }
            v25 -= 4;
          }
          while ( v26 != v25 );
LABEL_26:
          operator delete(v19, 0x3A0u);
        }
      }
    }
  }
}
