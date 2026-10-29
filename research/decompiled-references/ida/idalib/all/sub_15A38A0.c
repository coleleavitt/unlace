void __fastcall sub_15A38A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rbp
  void *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  char v9; // cl
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r14
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r15
  __int64 v18; // rcx
  char *v19; // rdi
  char v20; // dl
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  _QWORD *v27; // rbp
  _QWORD *v28; // r15
  _QWORD *v29; // r14
  void *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  char *v33; // rdi
  _QWORD *v34; // rbp
  _QWORD *v35; // r12
  _QWORD *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rcx
  _QWORD *v43; // rbx
  _QWORD *v44; // r13
  __int64 v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // r15
  __int64 v48; // rcx
  char *v49; // rdi
  char v50; // al
  char v51; // al
  char v52; // al
  char v53; // al
  char v54; // al
  char v55; // al
  _QWORD *v56; // r12
  _QWORD *v57; // rbp
  _QWORD *v58; // r14
  char *v59; // rdi
  __int64 v60; // [rsp+8h] [rbp-100h]
  __int64 v61; // [rsp+8h] [rbp-100h]
  unsigned __int64 v62; // [rsp+10h] [rbp-F8h]
  int v63; // [rsp+18h] [rbp-F0h]
  int v64; // [rsp+1Ch] [rbp-ECh]
  int v65; // [rsp+20h] [rbp-E8h]
  int v66; // [rsp+24h] [rbp-E4h]
  __int64 v67; // [rsp+28h] [rbp-E0h]
  __int64 v68; // [rsp+30h] [rbp-D8h]
  __int64 v69; // [rsp+38h] [rbp-D0h]
  __int64 v70; // [rsp+40h] [rbp-C8h]
  __int64 v71; // [rsp+48h] [rbp-C0h]
  __int64 v72; // [rsp+50h] [rbp-B8h]
  int v73; // [rsp+58h] [rbp-B0h]
  char v74; // [rsp+5Fh] [rbp-A9h]
  __int64 v75; // [rsp+60h] [rbp-A8h]
  __int64 v76; // [rsp+68h] [rbp-A0h]
  __int64 v77; // [rsp+70h] [rbp-98h] BYREF
  __int64 v78; // [rsp+78h] [rbp-90h]
  __int64 v79; // [rsp+80h] [rbp-88h]
  __int64 v80; // [rsp+88h] [rbp-80h]
  int v81; // [rsp+90h] [rbp-78h]
  void *v82; // [rsp+98h] [rbp-70h]
  _QWORD *v83; // [rsp+A0h] [rbp-68h]
  __int64 v84; // [rsp+A8h] [rbp-60h]
  char v85; // [rsp+B0h] [rbp-58h]
  __int64 v86; // [rsp+B8h] [rbp-50h]
  __int64 v87; // [rsp+C0h] [rbp-48h]
  __int64 v88; // [rsp+C8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v2 = a1 + 96;
    if ( a2 != a1 + 96 )
    {
      v3 = a1;
      v62 = a1 + ((a2 - 192 - a1) & 0xFFFFFFFFFFFFFFE0LL) + 192;
      do
      {
        v4 = v2 + 96;
        if ( (unsigned __int8)sub_15A37B0(v2, v3) )
        {
          v61 = *(_QWORD *)v2;
          v78 = *(_QWORD *)(v2 + 8);
          v63 = *(_DWORD *)(v2 + 16);
          v64 = *(_DWORD *)(v2 + 20);
          v65 = *(_DWORD *)(v2 + 24);
          v66 = *(_DWORD *)(v2 + 28);
          v73 = *(_DWORD *)(v2 + 32);
          v37 = *(_QWORD *)(v2 + 40);
          *(_QWORD *)(v2 + 40) = 0;
          v67 = v37;
          v38 = *(_QWORD *)(v2 + 48);
          *(_QWORD *)(v2 + 48) = 0;
          v68 = v38;
          v39 = *(_QWORD *)(v2 + 56);
          *(_QWORD *)(v2 + 56) = 0;
          v69 = v39;
          v74 = *(_BYTE *)(v2 + 64);
          v70 = *(_QWORD *)(v2 + 72);
          v71 = *(_QWORD *)(v2 + 80);
          v72 = *(_QWORD *)(v2 + 88);
          v40 = 0xAAAAAAAAAAAAAAABLL * ((v2 - v3) >> 5);
          if ( v2 - v3 > 0 )
          {
            v75 = v2 + 96;
            v76 = v3;
            do
            {
              v2 -= 96;
              v41 = *(_QWORD *)v2;
              v42 = *(_QWORD *)(v2 + 40);
              v43 = *(_QWORD **)(v2 + 136);
              v44 = *(_QWORD **)(v2 + 144);
              *(_QWORD *)(v2 + 40) = 0;
              *(_QWORD *)(v2 + 96) = v41;
              v45 = *(_QWORD *)(v2 + 8);
              *(_QWORD *)(v2 + 136) = v42;
              v46 = *(_QWORD *)(v2 + 48);
              v47 = v43;
              *(_QWORD *)(v2 + 104) = v45;
              LODWORD(v45) = *(_DWORD *)(v2 + 16);
              *(_QWORD *)(v2 + 144) = v46;
              v48 = *(_QWORD *)(v2 + 56);
              *(_DWORD *)(v2 + 112) = v45;
              LODWORD(v45) = *(_DWORD *)(v2 + 20);
              *(_QWORD *)(v2 + 48) = 0;
              *(_DWORD *)(v2 + 116) = v45;
              LODWORD(v45) = *(_DWORD *)(v2 + 24);
              *(_QWORD *)(v2 + 152) = v48;
              *(_DWORD *)(v2 + 120) = v45;
              LODWORD(v45) = *(_DWORD *)(v2 + 28);
              *(_QWORD *)(v2 + 56) = 0;
              *(_DWORD *)(v2 + 124) = v45;
              for ( *(_DWORD *)(v2 + 128) = *(_DWORD *)(v2 + 32); v44 != v47; v47 += 8 )
              {
                while ( 1 )
                {
                  v49 = (char *)v47[3];
                  if ( v49 == (char *)(v47 + 5) )
                    break;
                  operator delete(v49);
                  v47 += 8;
                  if ( v47 == v44 )
                    goto LABEL_37;
                }
              }
LABEL_37:
              if ( v43 )
                operator delete(v43);
              v50 = *(_BYTE *)(v2 + 64) & 1 | *(_BYTE *)(v2 + 160) & 0xFE;
              *(_BYTE *)(v2 + 160) = v50;
              v51 = *(_BYTE *)(v2 + 64) & 2 | v50 & 0xFD;
              *(_BYTE *)(v2 + 160) = v51;
              v52 = *(_BYTE *)(v2 + 64) & 4 | v51 & 0xFB;
              *(_BYTE *)(v2 + 160) = v52;
              v53 = *(_BYTE *)(v2 + 64) & 8 | v52 & 0xF7;
              *(_BYTE *)(v2 + 160) = v53;
              v54 = *(_BYTE *)(v2 + 64) & 0x10 | v53 & 0xEF;
              *(_BYTE *)(v2 + 160) = v54;
              v55 = *(_BYTE *)(v2 + 64) & 0x20 | v54 & 0xDF;
              *(_BYTE *)(v2 + 160) = v55;
              *(_BYTE *)(v2 + 160) = *(_BYTE *)(v2 + 64) & 0x40 | v55 & 0xBF;
              *(_QWORD *)(v2 + 168) = *(_QWORD *)(v2 + 72);
              *(_QWORD *)(v2 + 176) = *(_QWORD *)(v2 + 80);
              *(_QWORD *)(v2 + 184) = *(_QWORD *)(v2 + 88);
              --v40;
            }
            while ( v40 );
            v4 = v75;
            v3 = v76;
          }
          v56 = *(_QWORD **)(v3 + 40);
          v57 = *(_QWORD **)(v3 + 48);
          *(_QWORD *)v3 = v61;
          *(_QWORD *)(v3 + 8) = v78;
          *(_DWORD *)(v3 + 16) = v63;
          *(_DWORD *)(v3 + 20) = v64;
          *(_DWORD *)(v3 + 24) = v65;
          *(_DWORD *)(v3 + 28) = v66;
          *(_DWORD *)(v3 + 32) = v73;
          *(_QWORD *)(v3 + 40) = v67;
          *(_QWORD *)(v3 + 48) = v68;
          *(_QWORD *)(v3 + 56) = v69;
          if ( v56 != v57 )
          {
            v58 = v56;
            do
            {
              while ( 1 )
              {
                v59 = (char *)v58[3];
                if ( v59 == (char *)(v58 + 5) )
                  break;
                operator delete(v59);
                v58 += 8;
                if ( v57 == v58 )
                  goto LABEL_45;
              }
              v58 += 8;
            }
            while ( v57 != v58 );
          }
LABEL_45:
          if ( v56 )
            operator delete(v56);
          *(_BYTE *)(v3 + 64) = v74 & 0x7F | *(_BYTE *)(v3 + 64) & 0x80;
          *(_QWORD *)(v3 + 72) = v70;
          *(_QWORD *)(v3 + 80) = v71;
          *(_QWORD *)(v3 + 88) = v72;
        }
        else
        {
          v77 = *(_QWORD *)v2;
          v5 = v2 - 96;
          v60 = v2 + 96;
          v78 = *(_QWORD *)(v2 + 8);
          v79 = *(_QWORD *)(v2 + 16);
          v80 = *(_QWORD *)(v2 + 24);
          v81 = *(_DWORD *)(v2 + 32);
          v6 = *(void **)(v2 + 40);
          *(_QWORD *)(v2 + 40) = 0;
          v82 = v6;
          v7 = *(_QWORD **)(v2 + 48);
          *(_QWORD *)(v2 + 48) = 0;
          v83 = v7;
          v8 = *(_QWORD *)(v2 + 56);
          *(_QWORD *)(v2 + 56) = 0;
          v9 = *(_BYTE *)(v2 + 64);
          v84 = v8;
          v85 = v9 & 0x7F | v85 & 0x80;
          v86 = *(_QWORD *)(v2 + 72);
          v87 = *(_QWORD *)(v2 + 80);
          v88 = *(_QWORD *)(v2 + 88);
          while ( 1 )
          {
            v10 = v5 + 96;
            if ( !(unsigned __int8)sub_15A37B0((__int64)&v77, v5) )
              break;
            v11 = *(_QWORD *)v5;
            v12 = *(_QWORD *)(v5 + 40);
            *(_QWORD *)(v5 + 40) = 0;
            v13 = *(_QWORD **)(v5 + 136);
            v14 = *(_QWORD **)(v5 + 144);
            *(_QWORD *)(v5 + 96) = v11;
            v15 = *(_QWORD *)(v5 + 8);
            *(_QWORD *)(v5 + 136) = v12;
            v16 = *(_QWORD *)(v5 + 48);
            v17 = v13;
            *(_QWORD *)(v5 + 104) = v15;
            LODWORD(v15) = *(_DWORD *)(v5 + 16);
            *(_QWORD *)(v5 + 144) = v16;
            v18 = *(_QWORD *)(v5 + 56);
            *(_DWORD *)(v5 + 112) = v15;
            LODWORD(v15) = *(_DWORD *)(v5 + 20);
            *(_QWORD *)(v5 + 48) = 0;
            *(_DWORD *)(v5 + 116) = v15;
            LODWORD(v15) = *(_DWORD *)(v5 + 24);
            *(_QWORD *)(v5 + 152) = v18;
            *(_DWORD *)(v5 + 120) = v15;
            LODWORD(v15) = *(_DWORD *)(v5 + 28);
            *(_QWORD *)(v5 + 56) = 0;
            *(_DWORD *)(v5 + 124) = v15;
            for ( *(_DWORD *)(v5 + 128) = *(_DWORD *)(v5 + 32); v14 != v17; v17 += 8 )
            {
              while ( 1 )
              {
                v19 = (char *)v17[3];
                if ( v19 == (char *)(v17 + 5) )
                  break;
                operator delete(v19);
                v17 += 8;
                if ( v14 == v17 )
                  goto LABEL_10;
              }
            }
LABEL_10:
            if ( v13 )
              operator delete(v13);
            v20 = *(_BYTE *)(v5 + 64);
            v5 -= 96;
            v21 = v20 & 1 | *(_BYTE *)(v10 + 64) & 0xFE;
            *(_BYTE *)(v10 + 64) = v21;
            v22 = *(_BYTE *)(v5 + 160) & 2 | v21 & 0xFD;
            *(_BYTE *)(v10 + 64) = v22;
            v23 = *(_BYTE *)(v5 + 160) & 4 | v22 & 0xFB;
            *(_BYTE *)(v10 + 64) = v23;
            v24 = *(_BYTE *)(v5 + 160) & 8 | v23 & 0xF7;
            *(_BYTE *)(v10 + 64) = v24;
            v25 = *(_BYTE *)(v5 + 160) & 0x10 | v24 & 0xEF;
            *(_BYTE *)(v10 + 64) = v25;
            v26 = *(_BYTE *)(v5 + 160) & 0x20 | v25 & 0xDF;
            *(_BYTE *)(v10 + 64) = v26;
            *(_BYTE *)(v10 + 64) = *(_BYTE *)(v5 + 160) & 0x40 | v26 & 0xBF;
            *(_QWORD *)(v5 + 264) = *(_QWORD *)(v5 + 168);
            *(_QWORD *)(v5 + 272) = *(_QWORD *)(v5 + 176);
            *(_QWORD *)(v5 + 280) = *(_QWORD *)(v5 + 184);
          }
          v27 = *(_QWORD **)(v5 + 136);
          v28 = *(_QWORD **)(v10 + 48);
          v4 = v60;
          *(_QWORD *)v10 = v77;
          v29 = v27;
          *(_QWORD *)(v10 + 8) = v78;
          *(_QWORD *)(v10 + 16) = v79;
          *(_QWORD *)(v10 + 24) = v80;
          *(_DWORD *)(v10 + 32) = v81;
          v30 = v82;
          v82 = nullptr;
          *(_QWORD *)(v10 + 40) = v30;
          v31 = v83;
          v83 = nullptr;
          *(_QWORD *)(v10 + 48) = v31;
          v32 = v84;
          v84 = 0;
          for ( *(_QWORD *)(v10 + 56) = v32; v28 != v29; v29 += 8 )
          {
            while ( 1 )
            {
              v33 = (char *)v29[3];
              if ( v33 == (char *)(v29 + 5) )
                break;
              operator delete(v33);
              v29 += 8;
              if ( v28 == v29 )
                goto LABEL_18;
            }
          }
LABEL_18:
          if ( v27 )
            operator delete(v27);
          v34 = v82;
          *(_BYTE *)(v10 + 64) = v85 & 0x7F | *(_BYTE *)(v10 + 64) & 0x80;
          *(_QWORD *)(v10 + 72) = v86;
          *(_QWORD *)(v10 + 80) = v87;
          *(_QWORD *)(v10 + 88) = v88;
          v35 = v83;
          if ( v83 != v34 )
          {
            do
            {
              while ( 1 )
              {
                v36 = (_QWORD *)v34[3];
                if ( v36 == v34 + 5 )
                  break;
                operator delete(v36);
                v34 += 8;
                if ( v34 == v35 )
                  goto LABEL_23;
              }
              v34 += 8;
            }
            while ( v35 != v34 );
LABEL_23:
            v34 = v82;
          }
          if ( v34 )
            operator delete(v34);
        }
        v2 = v4;
      }
      while ( v62 != v4 );
    }
  }
}
