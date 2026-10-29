void __fastcall sub_1C5F160(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rax
  void **v7; // r14
  _QWORD *v8; // r13
  __int64 v9; // r15
  _QWORD *v10; // rax
  _WORD *v11; // rsi
  char v12; // al
  unsigned __int8 *v13; // rax
  __int64 v14; // rcx
  unsigned __int8 *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int8 *v25; // rax
  _BYTE *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // rbx
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // rsi
  _QWORD *v43; // r12
  __int64 v44; // rbp
  __int64 v45; // r14
  __int64 v46; // rbx
  void *v47; // rdi
  __int64 v49; // [rsp+28h] [rbp-130h]
  __int64 v50; // [rsp+28h] [rbp-130h]
  __int64 v51; // [rsp+28h] [rbp-130h]
  __int64 v52; // [rsp+28h] [rbp-130h]
  __int64 v53; // [rsp+28h] [rbp-130h]
  __int64 v54; // [rsp+30h] [rbp-128h]
  unsigned __int8 *v55; // [rsp+30h] [rbp-128h]
  __int64 v56; // [rsp+30h] [rbp-128h]
  unsigned __int8 *v57; // [rsp+38h] [rbp-120h]
  void **v58; // [rsp+40h] [rbp-118h]
  void **v59; // [rsp+48h] [rbp-110h]
  __int64 v60; // [rsp+58h] [rbp-100h] BYREF
  void *v61; // [rsp+60h] [rbp-F8h] BYREF
  unsigned int v62; // [rsp+68h] [rbp-F0h]
  void *v63[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v64; // [rsp+80h] [rbp-D8h]
  void *v65; // [rsp+90h] [rbp-C8h] BYREF
  unsigned int v66; // [rsp+98h] [rbp-C0h]
  char v67; // [rsp+9Ch] [rbp-BCh]
  __int64 v68; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v69; // [rsp+B0h] [rbp-A8h]
  __int64 v70; // [rsp+B8h] [rbp-A0h]
  char v71; // [rsp+108h] [rbp-50h]
  unsigned int v72; // [rsp+110h] [rbp-48h]
  char v73; // [rsp+114h] [rbp-44h]

  v3 = (__int64)&a2[a3];
  v4 = sub_1C5ED00(a2, v3);
  if ( v4 != (_QWORD *)v3 )
  {
    v5 = v4;
    v6 = *v4;
    v64 = 0;
    *(_OWORD *)v63 = 0;
    v7 = v63;
    if ( (**(_WORD **)(v6 + 40) & 0x1FF) == 0x3D )
    {
      v7 = v63;
      v8 = v5;
      v9 = *(_QWORD *)(v6 + 40);
      while ( 1 )
      {
        v10 = sub_1C5ED00(v5 + 1, v3);
        v5 = v10;
        if ( v10 == (_QWORD *)v3 )
          goto LABEL_16;
        v11 = *(_WORD **)(*v10 + 40LL);
        if ( (*v11 & 0x1FF) != 0x3D )
          goto LABEL_16;
        sub_BF7A50((__int64)&v61, (__int64)v11);
        if ( (_BYTE)v64 )
          goto LABEL_7;
        sub_BF7A50((__int64)&v65, v9);
        if ( !(_BYTE)v64 )
          break;
        if ( LODWORD(v63[1]) <= 0x40 || !v63[0] )
        {
          v63[0] = v65;
          LODWORD(v63[1]) = v66;
          BYTE4(v63[1]) = v67;
LABEL_7:
          if ( LODWORD(v63[1]) > 0x40 )
          {
LABEL_8:
            v12 = sub_2205D70(v7, &v61);
            goto LABEL_9;
          }
LABEL_20:
          v12 = v63[0] == v61;
LABEL_9:
          if ( v12 )
            goto LABEL_13;
          goto LABEL_10;
        }
        operator delete[](v63[0]);
        v63[0] = v65;
        LODWORD(v63[1]) = v66;
        BYTE4(v63[1]) = v67;
        if ( (_BYTE)v64 )
          goto LABEL_7;
LABEL_10:
        sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), *(_DWORD *)(*v5 + 24LL), 0x1017u, 0);
        if ( v71 )
        {
          v13 = v69;
          v14 = *v8;
          if ( !v69 )
          {
            v28 = v70;
            v29 = *(_DWORD *)(v70 + 14976);
            if ( v29 )
            {
              v32 = (unsigned int)(v29 - 1);
              *(_DWORD *)(v70 + 14976) = v32;
              v13 = *(unsigned __int8 **)(v28 + 8 * v32 + 14848);
              v33 = *((unsigned int *)v13 + 134);
              *v13 = 0;
              v34 = *((_QWORD *)v13 + 66);
              *((_DWORD *)v13 + 106) = 0;
              v35 = v34 + (v33 << 6);
              if ( v34 != v35 )
              {
                v58 = v7;
                v36 = v3;
                v37 = v35;
                do
                {
                  while ( 1 )
                  {
                    v37 -= 64;
                    v38 = *(void **)(v37 + 24);
                    if ( v38 == (void *)(v37 + 40) )
                      break;
                    v55 = v13;
                    v52 = v14;
                    operator delete(v38);
                    v14 = v52;
                    v13 = v55;
                    if ( v34 == v37 )
                      goto LABEL_42;
                  }
                }
                while ( v34 != v37 );
LABEL_42:
                v3 = v36;
                v7 = v58;
              }
              *((_DWORD *)v13 + 134) = 0;
            }
            else
            {
              v50 = *v8;
              v13 = (unsigned __int8 *)operator new(0x3A0u);
              *v13 = 0;
              *((_QWORD *)v13 + 12) = v13 + 112;
              *((_QWORD *)v13 + 16) = v13 + 144;
              *((_QWORD *)v13 + 20) = v13 + 176;
              *((_QWORD *)v13 + 24) = v13 + 208;
              *((_QWORD *)v13 + 28) = v13 + 240;
              *((_QWORD *)v13 + 32) = v13 + 272;
              *((_QWORD *)v13 + 36) = v13 + 304;
              *((_QWORD *)v13 + 40) = v13 + 336;
              *((_QWORD *)v13 + 44) = v13 + 368;
              *((_QWORD *)v13 + 48) = v13 + 400;
              *((_QWORD *)v13 + 52) = v13 + 432;
              *((_QWORD *)v13 + 13) = 0;
              v13[112] = 0;
              *((_QWORD *)v13 + 17) = 0;
              v13[144] = 0;
              *((_QWORD *)v13 + 21) = 0;
              v13[176] = 0;
              *((_QWORD *)v13 + 25) = 0;
              v13[208] = 0;
              *((_QWORD *)v13 + 29) = 0;
              v13[240] = 0;
              *((_QWORD *)v13 + 33) = 0;
              v13[272] = 0;
              *((_QWORD *)v13 + 37) = 0;
              v13[304] = 0;
              *((_QWORD *)v13 + 41) = 0;
              v13[336] = 0;
              *((_QWORD *)v13 + 45) = 0;
              v13[368] = 0;
              *((_QWORD *)v13 + 49) = 0;
              v13[400] = 0;
              *((_QWORD *)v13 + 53) = 0x800000000LL;
              *((_QWORD *)v13 + 66) = v13 + 544;
              *((_QWORD *)v13 + 67) = 0x600000000LL;
              v14 = v50;
            }
            v69 = v13;
          }
          v13[*v13 + 1] = 14;
          v15 = v69;
          v16 = *v69;
          *v69 = v16 + 1;
          *(_QWORD *)&v15[8 * v16 + 16] = v14;
        }
        else if ( v73 )
        {
          v17 = sub_168B9E0(&v65);
          v21 = v68;
          if ( v68 )
          {
            v49 = v17;
            v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 32LL))(v68);
            v17 = v49;
          }
          v60 = v21;
          v22 = sub_1587BC0(v17, &v60, v17, v18, v19, v20);
          v23 = *v8;
          v24 = *v22 + 32LL * v72;
          v25 = *(unsigned __int8 **)(v24 + 8);
          if ( !v25 )
          {
            v30 = *(_QWORD *)(v24 + 16);
            v31 = *(_DWORD *)(v30 + 14976);
            if ( v31 )
            {
              v39 = (unsigned int)(v31 - 1);
              *(_DWORD *)(v30 + 14976) = v39;
              v25 = *(unsigned __int8 **)(v30 + 8 * v39 + 14848);
              v40 = *((unsigned int *)v25 + 134);
              *v25 = 0;
              v41 = *((_QWORD *)v25 + 66);
              *((_DWORD *)v25 + 106) = 0;
              v42 = v41 + (v40 << 6);
              if ( v41 != v42 )
              {
                v43 = v5;
                v44 = v41;
                v59 = v7;
                v45 = v3;
                v46 = v42;
                do
                {
                  while ( 1 )
                  {
                    v46 -= 64;
                    v47 = *(void **)(v46 + 24);
                    if ( v47 == (void *)(v46 + 40) )
                      break;
                    v57 = v25;
                    v56 = v23;
                    v53 = v24;
                    operator delete(v47);
                    v24 = v53;
                    v23 = v56;
                    v25 = v57;
                    if ( v44 == v46 )
                      goto LABEL_50;
                  }
                }
                while ( v44 != v46 );
LABEL_50:
                v5 = v43;
                v3 = v45;
                v7 = v59;
              }
              *((_DWORD *)v25 + 134) = 0;
            }
            else
            {
              v54 = *v8;
              v51 = v24;
              v25 = (unsigned __int8 *)operator new(0x3A0u);
              *v25 = 0;
              *((_QWORD *)v25 + 12) = v25 + 112;
              *((_QWORD *)v25 + 16) = v25 + 144;
              *((_QWORD *)v25 + 20) = v25 + 176;
              *((_QWORD *)v25 + 24) = v25 + 208;
              *((_QWORD *)v25 + 28) = v25 + 240;
              *((_QWORD *)v25 + 32) = v25 + 272;
              *((_QWORD *)v25 + 36) = v25 + 304;
              *((_QWORD *)v25 + 40) = v25 + 336;
              *((_QWORD *)v25 + 44) = v25 + 368;
              *((_QWORD *)v25 + 48) = v25 + 400;
              *((_QWORD *)v25 + 52) = v25 + 432;
              *((_QWORD *)v25 + 13) = 0;
              v25[112] = 0;
              *((_QWORD *)v25 + 17) = 0;
              v25[144] = 0;
              *((_QWORD *)v25 + 21) = 0;
              v25[176] = 0;
              *((_QWORD *)v25 + 25) = 0;
              v25[208] = 0;
              *((_QWORD *)v25 + 29) = 0;
              v25[240] = 0;
              *((_QWORD *)v25 + 33) = 0;
              v25[272] = 0;
              *((_QWORD *)v25 + 37) = 0;
              v25[304] = 0;
              *((_QWORD *)v25 + 41) = 0;
              v25[336] = 0;
              *((_QWORD *)v25 + 45) = 0;
              v25[368] = 0;
              *((_QWORD *)v25 + 49) = 0;
              v25[400] = 0;
              *((_QWORD *)v25 + 53) = 0x800000000LL;
              v24 = v51;
              *((_QWORD *)v25 + 66) = v25 + 544;
              *((_QWORD *)v25 + 67) = 0x600000000LL;
              v23 = v54;
            }
            *(_QWORD *)(v24 + 8) = v25;
          }
          v25[*v25 + 1] = 14;
          v26 = *(_BYTE **)(v24 + 8);
          v27 = (unsigned __int8)*v26;
          *v26 = v27 + 1;
          *(_QWORD *)&v26[8 * v27 + 16] = v23;
        }
        sub_15F7200(&v65);
        sub_168B9F0((__int64)&v65, (__int64 *)(a1 + 8), *(_DWORD *)(*v8 + 24LL), 0x1889u, 0);
        sub_15F7200(&v65);
LABEL_13:
        if ( v62 > 0x40 )
        {
          if ( v61 )
            operator delete[](v61);
        }
      }
      LOBYTE(v64) = 1;
      LODWORD(v63[1]) = v66;
      v63[0] = v65;
      BYTE4(v63[1]) = v67;
      if ( v66 > 0x40 )
        goto LABEL_8;
      goto LABEL_20;
    }
LABEL_16:
    sub_98E4B0((__int64)v7);
  }
}
