__int64 __fastcall sub_14A7FA0(__int64 a1, __int64 a2, char a3, int a4)
{
  int *v5; // r12
  __int64 v6; // rbx
  char *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // rbp
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rdi
  __int64 result; // rax
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int8 *v20; // rbp
  __int64 v21; // rcx
  unsigned __int8 *v22; // rdx
  __int64 v23; // rax
  unsigned __int8 *v24; // rbp
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // r15d
  int *v43; // r13
  unsigned __int8 *v44; // r12
  __int64 v45; // rbp
  __int64 v46; // r14
  __int64 v47; // rbx
  void *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r15
  __int64 v54; // rbx
  int *v55; // r14
  __int64 v56; // r12
  void *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rbx
  int *v64; // r14
  __int64 v65; // r12
  void *v66; // rdi
  __int64 v69; // [rsp+18h] [rbp-F0h]
  __int64 v70; // [rsp+18h] [rbp-F0h]
  char *v71; // [rsp+20h] [rbp-E8h]
  char *v72; // [rsp+28h] [rbp-E0h]
  char *v73; // [rsp+28h] [rbp-E0h]
  __int64 v74; // [rsp+30h] [rbp-D8h] BYREF
  int v75; // [rsp+38h] [rbp-D0h]
  int v76; // [rsp+40h] [rbp-C8h] BYREF
  int v77; // [rsp+44h] [rbp-C4h]
  char v78; // [rsp+48h] [rbp-C0h]
  __int64 v79; // [rsp+4Ch] [rbp-BCh]
  char v80; // [rsp+54h] [rbp-B4h]
  void *v81; // [rsp+58h] [rbp-B0h]
  __int64 v82; // [rsp+60h] [rbp-A8h]
  char v83; // [rsp+68h] [rbp-A0h] BYREF
  char v84; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v85; // [rsp+80h] [rbp-88h] BYREF
  __int64 v86; // [rsp+88h] [rbp-80h]

  v5 = (int *)(a1 + 16);
  v6 = a1;
  v7 = &v83;
  while ( 1 )
  {
    result = sub_14A7DC0((_QWORD *)v6, (__int64)v5);
    v16 = result;
    if ( !(_DWORD)result )
      return result;
    v17 = *(unsigned int *)(v6 + 16);
    if ( a4 )
    {
      sub_1564820(&v85, v6, v17, 22);
      v19 = sub_15AFC10(v16);
      v20 = v85;
      v21 = v19;
      if ( !v85 )
      {
        v31 = v86;
        v32 = *(_DWORD *)(v86 + 14976);
        if ( v32 )
        {
          v49 = (unsigned int)(v32 - 1);
          *(_DWORD *)(v86 + 14976) = v49;
          v20 = *(unsigned __int8 **)(v31 + 8 * v49 + 14848);
          v50 = *((unsigned int *)v20 + 134);
          *v20 = 0;
          v51 = *((_QWORD *)v20 + 66);
          *((_DWORD *)v20 + 106) = 0;
          v52 = v51 + (v50 << 6);
          if ( v51 != v52 )
          {
            v53 = v6;
            v54 = v52;
            v72 = v7;
            v55 = v5;
            v56 = v21;
            do
            {
              while ( 1 )
              {
                v54 -= 64;
                v57 = *(void **)(v54 + 24);
                if ( v57 == (void *)(v54 + 40) )
                  break;
                operator delete(v57);
                if ( v51 == v54 )
                  goto LABEL_52;
              }
            }
            while ( v51 != v54 );
LABEL_52:
            v21 = v56;
            v5 = v55;
            v6 = v53;
            v7 = v72;
          }
          *((_DWORD *)v20 + 134) = 0;
        }
        else
        {
          v69 = v21;
          v20 = (unsigned __int8 *)operator new(0x3A0u);
          *v20 = 0;
          *((_QWORD *)v20 + 12) = v20 + 112;
          *((_QWORD *)v20 + 16) = v20 + 144;
          *((_QWORD *)v20 + 20) = v20 + 176;
          *((_QWORD *)v20 + 24) = v20 + 208;
          *((_QWORD *)v20 + 28) = v20 + 240;
          *((_QWORD *)v20 + 32) = v20 + 272;
          *((_QWORD *)v20 + 36) = v20 + 304;
          *((_QWORD *)v20 + 40) = v20 + 336;
          *((_QWORD *)v20 + 44) = v20 + 368;
          *((_QWORD *)v20 + 48) = v20 + 400;
          *((_QWORD *)v20 + 52) = v20 + 432;
          *((_QWORD *)v20 + 13) = 0;
          v20[112] = 0;
          *((_QWORD *)v20 + 17) = 0;
          v20[144] = 0;
          *((_QWORD *)v20 + 21) = 0;
          v20[176] = 0;
          *((_QWORD *)v20 + 25) = 0;
          v20[208] = 0;
          *((_QWORD *)v20 + 29) = 0;
          v20[240] = 0;
          *((_QWORD *)v20 + 33) = 0;
          v20[272] = 0;
          *((_QWORD *)v20 + 37) = 0;
          v20[304] = 0;
          *((_QWORD *)v20 + 41) = 0;
          v20[336] = 0;
          *((_QWORD *)v20 + 45) = 0;
          v20[368] = 0;
          *((_QWORD *)v20 + 49) = 0;
          v20[400] = 0;
          *((_QWORD *)v20 + 53) = 0x800000000LL;
          v21 = v69;
          *((_QWORD *)v20 + 66) = v20 + 544;
          *((_QWORD *)v20 + 67) = 0x600000000LL;
        }
        v85 = v20;
      }
      v20[*v20 + 1] = 1;
      v22 = v85;
      v23 = *v85;
      *v85 = v23 + 1;
      *(_QWORD *)&v22[8 * v23 + 16] = v21;
      LODWORD(v23) = *(_DWORD *)(v6 + 16);
      v79 = 0;
      v80 = 0;
      v81 = v7;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v76 = v23;
      v77 = v23;
      v78 = 1;
      if ( (_DWORD)v23 )
        sub_14A2370((__int64 *)&v85, (unsigned __int64)&v76);
      v24 = v85;
      if ( v85 )
      {
        v25 = *((unsigned int *)v85 + 106);
        v26 = *((unsigned int *)v85 + 107);
        v27 = v25 + 1;
      }
      else
      {
        v33 = v86;
        v34 = *(_DWORD *)(v86 + 14976);
        if ( v34 )
        {
          v38 = (unsigned int)(v34 - 1);
          *(_DWORD *)(v86 + 14976) = v38;
          v24 = *(unsigned __int8 **)(v33 + 8 * v38 + 14848);
          v39 = *((unsigned int *)v24 + 134);
          *v24 = 0;
          v40 = *((_QWORD *)v24 + 66);
          *((_DWORD *)v24 + 106) = 0;
          v41 = v40 + (v39 << 6);
          if ( v40 == v41 )
          {
            v27 = 1;
            v25 = 0;
          }
          else
          {
            v42 = a4;
            v43 = v5;
            v44 = v24;
            v71 = v7;
            v45 = v40;
            v46 = v6;
            v47 = v41;
            do
            {
              while ( 1 )
              {
                v47 -= 64;
                v48 = *(void **)(v47 + 24);
                if ( v48 == (void *)(v47 + 40) )
                  break;
                operator delete(v48);
                if ( v45 == v47 )
                  goto LABEL_44;
              }
            }
            while ( v45 != v47 );
LABEL_44:
            v24 = v44;
            v6 = v46;
            v5 = v43;
            v7 = v71;
            v25 = *((unsigned int *)v24 + 106);
            a4 = v42;
            v27 = v25 + 1;
          }
          *((_DWORD *)v24 + 134) = 0;
          v26 = *((unsigned int *)v24 + 107);
        }
        else
        {
          v35 = operator new(0x3A0u);
          v26 = 8;
          v27 = 1;
          v24 = (unsigned __int8 *)v35;
          *(_BYTE *)v35 = 0;
          *(_QWORD *)(v35 + 96) = v35 + 112;
          *(_QWORD *)(v35 + 128) = v35 + 144;
          *(_QWORD *)(v35 + 160) = v35 + 176;
          *(_QWORD *)(v35 + 192) = v35 + 208;
          *(_QWORD *)(v35 + 224) = v35 + 240;
          *(_QWORD *)(v35 + 256) = v35 + 272;
          *(_QWORD *)(v35 + 288) = v35 + 304;
          *(_QWORD *)(v35 + 320) = v35 + 336;
          *(_QWORD *)(v35 + 352) = v35 + 368;
          *(_QWORD *)(v35 + 384) = v35 + 400;
          *(_QWORD *)(v35 + 416) = v35 + 432;
          *(_QWORD *)(v35 + 104) = 0;
          *(_BYTE *)(v35 + 112) = 0;
          *(_QWORD *)(v35 + 136) = 0;
          *(_BYTE *)(v35 + 144) = 0;
          *(_QWORD *)(v35 + 168) = 0;
          *(_BYTE *)(v35 + 176) = 0;
          *(_QWORD *)(v35 + 200) = 0;
          *(_BYTE *)(v35 + 208) = 0;
          *(_QWORD *)(v35 + 232) = 0;
          *(_BYTE *)(v35 + 240) = 0;
          *(_QWORD *)(v35 + 264) = 0;
          *(_BYTE *)(v35 + 272) = 0;
          *(_QWORD *)(v35 + 296) = 0;
          *(_BYTE *)(v35 + 304) = 0;
          *(_QWORD *)(v35 + 328) = 0;
          *(_BYTE *)(v35 + 336) = 0;
          *(_QWORD *)(v35 + 360) = 0;
          *(_BYTE *)(v35 + 368) = 0;
          *(_QWORD *)(v35 + 392) = 0;
          *(_BYTE *)(v35 + 400) = 0;
          *(_QWORD *)(v35 + 424) = 0x800000000LL;
          *(_QWORD *)(v35 + 528) = v35 + 544;
          *(_QWORD *)(v35 + 536) = 0x600000000LL;
          v25 = 0;
        }
        v85 = v24;
      }
      LODWORD(v74) = a4;
      HIDWORD(v74) = a4;
      LOBYTE(v75) = 1;
      if ( v26 < v27 )
      {
        sub_2237220(v24 + 416, v24 + 432, v27, 12);
        v25 = *((unsigned int *)v24 + 106);
      }
      v28 = *((_QWORD *)v24 + 52) + 12 * v25;
      *(_QWORD *)v28 = v74;
      *(_DWORD *)(v28 + 8) = v75;
      ++*((_DWORD *)v24 + 106);
      if ( v81 != v7 )
        operator delete(v81);
      goto LABEL_7;
    }
    v74 = 0;
    if ( (unsigned __int8)sub_15AFB40(a2, (unsigned int)result, v17, &v74) )
    {
      sub_1564820(&v85, v6, *(unsigned int *)(v6 + 16), 1594);
      sub_149E970(&v85, v74);
      v29 = *(_DWORD *)(v6 + 16);
      v80 = 0;
      v79 = 0;
      v81 = v7;
      v82 = 0;
      v83 = 0;
      v84 = 0;
      v76 = v29;
      v77 = v29;
      v78 = 1;
      if ( v29 )
      {
        sub_14A2370((__int64 *)&v85, (unsigned __int64)&v76);
        if ( v81 != v7 )
          operator delete(v81);
      }
      sub_AEA040((__int64)&v85);
    }
    v18 = *(unsigned int *)(v6 + 16);
    if ( !a3 )
    {
      v8 = 2007;
      if ( v16 != 4 )
      {
LABEL_3:
        if ( v16 == 16 )
        {
          v8 = 2005;
        }
        else
        {
          v8 = 2026;
          if ( v16 != 8 )
          {
            sub_1564820(
              &v85,
              v6,
              v18,
              (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 56LL) + 1LL) & 0x10) == 0 ? 2014 : 2126);
            v9 = sub_15AFC10(v16);
            v10 = v85;
            v11 = v9;
            if ( !v85 )
            {
              v36 = v86;
              v37 = *(_DWORD *)(v86 + 14976);
              if ( v37 )
              {
                v58 = (unsigned int)(v37 - 1);
                *(_DWORD *)(v86 + 14976) = v58;
                v10 = *(unsigned __int8 **)(v36 + 8 * v58 + 14848);
                v59 = *((unsigned int *)v10 + 134);
                *v10 = 0;
                v60 = *((_QWORD *)v10 + 66);
                *((_DWORD *)v10 + 106) = 0;
                v61 = v60 + (v59 << 6);
                if ( v60 != v61 )
                {
                  v62 = v6;
                  v63 = v61;
                  v73 = v7;
                  v64 = v5;
                  v65 = v11;
                  do
                  {
                    while ( 1 )
                    {
                      v63 -= 64;
                      v66 = *(void **)(v63 + 24);
                      if ( v66 == (void *)(v63 + 40) )
                        break;
                      operator delete(v66);
                      if ( v60 == v63 )
                        goto LABEL_60;
                    }
                  }
                  while ( v60 != v63 );
LABEL_60:
                  v11 = v65;
                  v5 = v64;
                  v6 = v62;
                  a4 = 0;
                  v7 = v73;
                }
                *((_DWORD *)v10 + 134) = 0;
              }
              else
              {
                v70 = v11;
                v10 = (unsigned __int8 *)operator new(0x3A0u);
                *v10 = 0;
                *((_QWORD *)v10 + 12) = v10 + 112;
                *((_QWORD *)v10 + 16) = v10 + 144;
                *((_QWORD *)v10 + 20) = v10 + 176;
                *((_QWORD *)v10 + 24) = v10 + 208;
                *((_QWORD *)v10 + 28) = v10 + 240;
                *((_QWORD *)v10 + 32) = v10 + 272;
                *((_QWORD *)v10 + 36) = v10 + 304;
                *((_QWORD *)v10 + 40) = v10 + 336;
                *((_QWORD *)v10 + 44) = v10 + 368;
                *((_QWORD *)v10 + 48) = v10 + 400;
                *((_QWORD *)v10 + 52) = v10 + 432;
                *((_QWORD *)v10 + 13) = 0;
                v10[112] = 0;
                *((_QWORD *)v10 + 17) = 0;
                v10[144] = 0;
                *((_QWORD *)v10 + 21) = 0;
                v10[176] = 0;
                *((_QWORD *)v10 + 25) = 0;
                v10[208] = 0;
                *((_QWORD *)v10 + 29) = 0;
                v10[240] = 0;
                *((_QWORD *)v10 + 33) = 0;
                v10[272] = 0;
                *((_QWORD *)v10 + 37) = 0;
                v10[304] = 0;
                *((_QWORD *)v10 + 41) = 0;
                v10[336] = 0;
                *((_QWORD *)v10 + 45) = 0;
                v10[368] = 0;
                *((_QWORD *)v10 + 49) = 0;
                v10[400] = 0;
                *((_QWORD *)v10 + 53) = 0x800000000LL;
                v11 = v70;
                *((_QWORD *)v10 + 66) = v10 + 544;
                *((_QWORD *)v10 + 67) = 0x600000000LL;
              }
              v85 = v10;
            }
            v10[*v10 + 1] = 1;
            v12 = v85;
            v13 = *v85;
            *v85 = v13 + 1;
            *(_QWORD *)&v12[8 * v13 + 16] = v11;
LABEL_7:
            sub_AEA040((__int64)&v85);
            goto LABEL_8;
          }
        }
      }
      sub_1564820(&v85, v6, v18, v8);
      sub_AEA040((__int64)&v85);
      goto LABEL_8;
    }
    if ( ((v16 - 2) & 0xFFFFFFFD) != 0 )
      goto LABEL_3;
    sub_1564820(&v85, v6, v18, 1832);
    v30 = sub_15AFC10(v16);
    sub_149E970(&v85, v30);
    sub_AEA040((__int64)&v85);
LABEL_8:
    v14 = *(__int64 **)(v6 + 8);
    *(_DWORD *)(v6 + 40) = *(_DWORD *)(v6 + 16);
    sub_14634E0(v14, v5);
  }
}
