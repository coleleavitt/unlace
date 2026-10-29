__int64 __fastcall sub_15A4070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // r13
  char *v16; // rdi
  char v17; // dl
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // al
  _QWORD *v24; // r14
  _QWORD *v25; // r13
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rcx
  _QWORD *v32; // r15
  char *v33; // rdi
  char v34; // dl
  char v35; // al
  char v36; // al
  char v37; // al
  char v38; // al
  char v39; // al
  char v40; // al
  char v41; // al
  unsigned __int64 v42; // rbp
  _QWORD *v43; // r14
  _QWORD *v44; // r15
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  _QWORD *v50; // r13
  char *v51; // rdi
  char v52; // dl
  char v53; // al
  char v54; // al
  char v55; // al
  char v56; // al
  char v57; // al
  char v58; // al
  char v59; // al
  _QWORD *v61; // r15
  _QWORD *v62; // r13
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  _QWORD *v68; // r14
  char *v69; // rdi
  char v70; // dl
  char v71; // al
  char v72; // al
  char v73; // al
  char v74; // al
  char v75; // al
  char v76; // al
  unsigned __int64 v77; // [rsp+0h] [rbp-48h]

  v5 = a3;
  v6 = a1;
  if ( a4 != a3 && a2 != a1 )
  {
    do
    {
      if ( (unsigned __int8)sub_15A37B0(v5, v6) )
      {
        v8 = *(_QWORD **)(a5 + 40);
        v9 = *(_QWORD **)(a5 + 48);
        *(_QWORD *)a5 = *(_QWORD *)v5;
        *(_QWORD *)(a5 + 8) = *(_QWORD *)(v5 + 8);
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(v5 + 16);
        *(_DWORD *)(a5 + 20) = *(_DWORD *)(v5 + 20);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(v5 + 24);
        *(_DWORD *)(a5 + 28) = *(_DWORD *)(v5 + 28);
        v10 = *(_DWORD *)(v5 + 32);
        *(_QWORD *)(a5 + 48) = 0;
        *(_QWORD *)(a5 + 56) = 0;
        *(_QWORD *)(a5 + 40) = 0;
        *(_DWORD *)(a5 + 32) = v10;
        *(_QWORD *)(a5 + 40) = *(_QWORD *)(v5 + 40);
        v11 = *(_QWORD *)(v5 + 48);
        *(_QWORD *)(v5 + 40) = 0;
        v12 = *(_QWORD *)(a5 + 48);
        *(_QWORD *)(a5 + 48) = v11;
        v13 = *(_QWORD *)(v5 + 56);
        *(_QWORD *)(v5 + 48) = v12;
        v14 = *(_QWORD *)(a5 + 56);
        *(_QWORD *)(a5 + 56) = v13;
        *(_QWORD *)(v5 + 56) = v14;
        if ( v8 != v9 )
        {
          v15 = v8;
          do
          {
            while ( 1 )
            {
              v16 = (char *)v15[3];
              if ( v16 == (char *)(v15 + 5) )
                break;
              operator delete(v16);
              v15 += 8;
              if ( v15 == v9 )
                goto LABEL_8;
            }
            v15 += 8;
          }
          while ( v9 != v15 );
        }
LABEL_8:
        if ( v8 )
          operator delete(v8);
        v17 = *(_BYTE *)(v5 + 64);
        v5 += 96;
        v18 = v17 & 1 | *(_BYTE *)(a5 + 64) & 0xFE;
        *(_BYTE *)(a5 + 64) = v18;
        v19 = *(_BYTE *)(v5 - 32) & 2 | v18 & 0xFD;
        *(_BYTE *)(a5 + 64) = v19;
        v20 = *(_BYTE *)(v5 - 32) & 4 | v19 & 0xFB;
        *(_BYTE *)(a5 + 64) = v20;
        v21 = *(_BYTE *)(v5 - 32) & 8 | v20 & 0xF7;
        *(_BYTE *)(a5 + 64) = v21;
        v22 = *(_BYTE *)(v5 - 32) & 0x10 | v21 & 0xEF;
        *(_BYTE *)(a5 + 64) = v22;
        v23 = *(_BYTE *)(v5 - 32) & 0x20 | v22 & 0xDF;
        *(_BYTE *)(a5 + 64) = v23;
        *(_BYTE *)(a5 + 64) = *(_BYTE *)(v5 - 32) & 0x40 | v23 & 0xBF;
        *(_QWORD *)(a5 + 72) = *(_QWORD *)(v5 - 24);
        *(_QWORD *)(a5 + 80) = *(_QWORD *)(v5 - 16);
        *(_QWORD *)(a5 + 88) = *(_QWORD *)(v5 - 8);
      }
      else
      {
        v61 = *(_QWORD **)(a5 + 40);
        v62 = *(_QWORD **)(a5 + 48);
        *(_QWORD *)a5 = *(_QWORD *)v6;
        *(_QWORD *)(a5 + 8) = *(_QWORD *)(v6 + 8);
        *(_DWORD *)(a5 + 16) = *(_DWORD *)(v6 + 16);
        *(_DWORD *)(a5 + 20) = *(_DWORD *)(v6 + 20);
        *(_DWORD *)(a5 + 24) = *(_DWORD *)(v6 + 24);
        *(_DWORD *)(a5 + 28) = *(_DWORD *)(v6 + 28);
        v63 = *(_DWORD *)(v6 + 32);
        *(_QWORD *)(a5 + 48) = 0;
        *(_QWORD *)(a5 + 56) = 0;
        *(_QWORD *)(a5 + 40) = 0;
        *(_DWORD *)(a5 + 32) = v63;
        *(_QWORD *)(a5 + 40) = *(_QWORD *)(v6 + 40);
        v64 = *(_QWORD *)(v6 + 48);
        *(_QWORD *)(v6 + 40) = 0;
        v65 = *(_QWORD *)(a5 + 48);
        *(_QWORD *)(a5 + 48) = v64;
        v66 = *(_QWORD *)(v6 + 56);
        *(_QWORD *)(v6 + 48) = v65;
        v67 = *(_QWORD *)(a5 + 56);
        *(_QWORD *)(a5 + 56) = v66;
        *(_QWORD *)(v6 + 56) = v67;
        if ( v61 != v62 )
        {
          v68 = v61;
          do
          {
            while ( 1 )
            {
              v69 = (char *)v68[3];
              if ( v69 == (char *)(v68 + 5) )
                break;
              operator delete(v69);
              v68 += 8;
              if ( v68 == v62 )
                goto LABEL_40;
            }
            v68 += 8;
          }
          while ( v62 != v68 );
        }
LABEL_40:
        if ( v61 )
          operator delete(v61);
        v70 = *(_BYTE *)(v6 + 64);
        v6 += 96;
        v71 = v70 & 1 | *(_BYTE *)(a5 + 64) & 0xFE;
        *(_BYTE *)(a5 + 64) = v71;
        v72 = *(_BYTE *)(v6 - 32) & 2 | v71 & 0xFD;
        *(_BYTE *)(a5 + 64) = v72;
        v73 = *(_BYTE *)(v6 - 32) & 4 | v72 & 0xFB;
        *(_BYTE *)(a5 + 64) = v73;
        v74 = *(_BYTE *)(v6 - 32) & 8 | v73 & 0xF7;
        *(_BYTE *)(a5 + 64) = v74;
        v75 = *(_BYTE *)(v6 - 32) & 0x10 | v74 & 0xEF;
        *(_BYTE *)(a5 + 64) = v75;
        v76 = *(_BYTE *)(v6 - 32) & 0x20 | v75 & 0xDF;
        *(_BYTE *)(a5 + 64) = v76;
        *(_BYTE *)(a5 + 64) = *(_BYTE *)(v6 - 32) & 0x40 | v76 & 0xBF;
        *(_QWORD *)(a5 + 72) = *(_QWORD *)(v6 - 24);
        *(_QWORD *)(a5 + 80) = *(_QWORD *)(v6 - 16);
        *(_QWORD *)(a5 + 88) = *(_QWORD *)(v6 - 8);
      }
      a5 += 96;
    }
    while ( a2 != v6 && a4 != v5 );
  }
  v77 = 0xAAAAAAAAAAAAAAABLL * ((a2 - v6) >> 5);
  if ( a2 - v6 > 0 )
  {
    do
    {
      v24 = *(_QWORD **)(a5 + 40);
      v25 = *(_QWORD **)(a5 + 48);
      *(_QWORD *)a5 = *(_QWORD *)v6;
      *(_QWORD *)(a5 + 8) = *(_QWORD *)(v6 + 8);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v6 + 16);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v6 + 20);
      *(_DWORD *)(a5 + 24) = *(_DWORD *)(v6 + 24);
      *(_DWORD *)(a5 + 28) = *(_DWORD *)(v6 + 28);
      v26 = *(_DWORD *)(v6 + 32);
      *(_QWORD *)(a5 + 48) = 0;
      *(_QWORD *)(a5 + 56) = 0;
      *(_QWORD *)(a5 + 40) = 0;
      v27 = *(_QWORD *)(v6 + 40);
      *(_DWORD *)(a5 + 32) = v26;
      *(_QWORD *)(a5 + 40) = v27;
      v28 = *(_QWORD *)(v6 + 48);
      *(_QWORD *)(v6 + 40) = 0;
      v29 = *(_QWORD *)(a5 + 48);
      *(_QWORD *)(a5 + 48) = v28;
      v30 = *(_QWORD *)(v6 + 56);
      *(_QWORD *)(v6 + 48) = v29;
      v31 = *(_QWORD *)(a5 + 56);
      *(_QWORD *)(a5 + 56) = v30;
      *(_QWORD *)(v6 + 56) = v31;
      if ( v24 != v25 )
      {
        v32 = v24;
        do
        {
          while ( 1 )
          {
            v33 = (char *)v32[3];
            if ( v33 == (char *)(v32 + 5) )
              break;
            operator delete(v33);
            v32 += 8;
            if ( v32 == v25 )
              goto LABEL_18;
          }
          v32 += 8;
        }
        while ( v25 != v32 );
      }
LABEL_18:
      if ( v24 )
        operator delete(v24);
      v34 = *(_BYTE *)(v6 + 64);
      v35 = *(_BYTE *)(a5 + 64);
      v6 += 96;
      a5 += 96;
      v36 = v34 & 1 | v35 & 0xFE;
      *(_BYTE *)(a5 - 32) = v36;
      v37 = *(_BYTE *)(v6 - 32) & 2 | v36 & 0xFD;
      *(_BYTE *)(a5 - 32) = v37;
      v38 = *(_BYTE *)(v6 - 32) & 4 | v37 & 0xFB;
      *(_BYTE *)(a5 - 32) = v38;
      v39 = *(_BYTE *)(v6 - 32) & 8 | v38 & 0xF7;
      *(_BYTE *)(a5 - 32) = v39;
      v40 = *(_BYTE *)(v6 - 32) & 0x10 | v39 & 0xEF;
      *(_BYTE *)(a5 - 32) = v40;
      v41 = *(_BYTE *)(v6 - 32) & 0x20 | v40 & 0xDF;
      *(_BYTE *)(a5 - 32) = v41;
      *(_BYTE *)(a5 - 32) = *(_BYTE *)(v6 - 32) & 0x40 | v41 & 0xBF;
      *(_QWORD *)(a5 - 24) = *(_QWORD *)(v6 - 24);
      *(_QWORD *)(a5 - 16) = *(_QWORD *)(v6 - 16);
      *(_QWORD *)(a5 - 8) = *(_QWORD *)(v6 - 8);
      --v77;
    }
    while ( v77 );
  }
  v42 = 0xAAAAAAAAAAAAAAABLL * ((a4 - v5) >> 5);
  if ( a4 - v5 > 0 )
  {
    do
    {
      v43 = *(_QWORD **)(a5 + 40);
      v44 = *(_QWORD **)(a5 + 48);
      *(_QWORD *)a5 = *(_QWORD *)v5;
      *(_QWORD *)(a5 + 8) = *(_QWORD *)(v5 + 8);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v5 + 16);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v5 + 20);
      *(_DWORD *)(a5 + 24) = *(_DWORD *)(v5 + 24);
      *(_DWORD *)(a5 + 28) = *(_DWORD *)(v5 + 28);
      v45 = *(_DWORD *)(v5 + 32);
      *(_QWORD *)(a5 + 48) = 0;
      *(_QWORD *)(a5 + 56) = 0;
      *(_QWORD *)(a5 + 40) = 0;
      *(_DWORD *)(a5 + 32) = v45;
      *(_QWORD *)(a5 + 40) = *(_QWORD *)(v5 + 40);
      v46 = *(_QWORD *)(v5 + 48);
      *(_QWORD *)(v5 + 40) = 0;
      v47 = *(_QWORD *)(a5 + 48);
      *(_QWORD *)(a5 + 48) = v46;
      v48 = *(_QWORD *)(v5 + 56);
      *(_QWORD *)(v5 + 48) = v47;
      v49 = *(_QWORD *)(a5 + 56);
      *(_QWORD *)(a5 + 56) = v48;
      *(_QWORD *)(v5 + 56) = v49;
      if ( v43 != v44 )
      {
        v50 = v43;
        do
        {
          while ( 1 )
          {
            v51 = (char *)v50[3];
            if ( v51 == (char *)(v50 + 5) )
              break;
            operator delete(v51);
            v50 += 8;
            if ( v50 == v44 )
              goto LABEL_26;
          }
          v50 += 8;
        }
        while ( v44 != v50 );
      }
LABEL_26:
      if ( v43 )
        operator delete(v43);
      v52 = *(_BYTE *)(v5 + 64);
      v53 = *(_BYTE *)(a5 + 64);
      v5 += 96;
      a5 += 96;
      v54 = v52 & 1 | v53 & 0xFE;
      *(_BYTE *)(a5 - 32) = v54;
      v55 = *(_BYTE *)(v5 - 32) & 2 | v54 & 0xFD;
      *(_BYTE *)(a5 - 32) = v55;
      v56 = *(_BYTE *)(v5 - 32) & 4 | v55 & 0xFB;
      *(_BYTE *)(a5 - 32) = v56;
      v57 = *(_BYTE *)(v5 - 32) & 8 | v56 & 0xF7;
      *(_BYTE *)(a5 - 32) = v57;
      v58 = *(_BYTE *)(v5 - 32) & 0x10 | v57 & 0xEF;
      *(_BYTE *)(a5 - 32) = v58;
      v59 = *(_BYTE *)(v5 - 32) & 0x20 | v58 & 0xDF;
      *(_BYTE *)(a5 - 32) = v59;
      *(_BYTE *)(a5 - 32) = *(_BYTE *)(v5 - 32) & 0x40 | v59 & 0xBF;
      *(_QWORD *)(a5 - 24) = *(_QWORD *)(v5 - 24);
      *(_QWORD *)(a5 - 16) = *(_QWORD *)(v5 - 16);
      *(_QWORD *)(a5 - 8) = *(_QWORD *)(v5 - 8);
      --v42;
    }
    while ( v42 );
  }
  return a5;
}
