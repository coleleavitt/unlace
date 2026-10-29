__int64 __fastcall sub_1ADF5A0(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned int v6; // edx
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  unsigned __int64 v12; // r14
  unsigned __int8 *v13; // r13
  _BYTE *v14; // rdx
  __int64 v15; // rax
  char v16; // bp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int8 *v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r13
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r14
  unsigned __int8 *v46; // r13
  __int64 v47; // rdx
  int v48; // eax
  unsigned __int8 *v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 v60; // r14
  void *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // r15
  __int64 v65; // r14
  void *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rbp
  __int64 v69; // rdx
  __int64 v70; // rbp
  void *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r15
  __int64 v74; // rdx
  __int64 v75; // r15
  void *v76; // rdi
  __int64 v77; // [rsp+8h] [rbp-F0h]
  __int64 v78; // [rsp+8h] [rbp-F0h]
  __int64 v79; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v80; // [rsp+20h] [rbp-D8h] BYREF
  int v81; // [rsp+28h] [rbp-D0h]
  _QWORD v82[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v83; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v84; // [rsp+50h] [rbp-A8h]
  __int64 v85; // [rsp+58h] [rbp-A0h]
  char v86; // [rsp+A8h] [rbp-50h]
  unsigned int v87; // [rsp+B0h] [rbp-48h]
  char v88; // [rsp+B4h] [rbp-44h]

  result = sub_16EC930(*a1, a2, 1u, a3);
  if ( !(_BYTE)result )
  {
    v5 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 41 )
    {
      if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
      {
        v6 = *(_DWORD *)(a2 + 24);
      }
      else if ( *(char *)(a2 + 2) >= 0
             || (v6 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, a3)) == 0 )
      {
        v6 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a3);
        if ( !v6 )
        {
          v6 = *(_DWORD *)(a2 + 16);
          if ( v6 )
            v6 = sub_EEB7E0(v5, a2, a3);
        }
      }
      v7 = (unsigned __int64 *)a1;
      sub_168B9F0((__int64)v82, a1, v6, 0x123Du, 0);
      v8 = sub_BFBC70(*(_QWORD *)(a2 + 32));
      v9 = v8;
      if ( v8 && (*(_BYTE *)(v8 + 28) & 0x7Fu) - 34 >= 6 )
        v9 = 0;
      if ( v86 )
      {
        v13 = v84;
        if ( !v84 )
        {
          v50 = v85;
          v51 = *(_DWORD *)(v85 + 14976);
          if ( v51 )
          {
            v62 = (unsigned int)(v51 - 1);
            *(_DWORD *)(v85 + 14976) = v62;
            v13 = *(unsigned __int8 **)(v50 + 8 * v62 + 14848);
            v63 = *((unsigned int *)v13 + 134);
            *v13 = 0;
            v64 = *((_QWORD *)v13 + 66);
            *((_DWORD *)v13 + 106) = 0;
            v65 = v64 + (v63 << 6);
            while ( v64 != v65 )
            {
              while ( 1 )
              {
                v65 -= 64;
                v66 = *(void **)(v65 + 24);
                if ( v66 == (void *)(v65 + 40) )
                  break;
                operator delete(v66);
                if ( v64 == v65 )
                  goto LABEL_60;
              }
            }
LABEL_60:
            *((_DWORD *)v13 + 134) = 0;
          }
          else
          {
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
          }
          v84 = v13;
        }
        v13[*v13 + 1] = 10;
        v14 = v84;
      }
      else
      {
        if ( !v88 )
        {
          v10 = sub_EEC8C0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), (__int64)a1, a3);
          v11 = v10;
          v12 = HIDWORD(v10);
          goto LABEL_12;
        }
        v42 = sub_168B9E0(v82);
        v43 = v83;
        if ( v83 )
          v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 32LL))(v83);
        v7 = &v80;
        v80 = v43;
        v44 = sub_1587BC0(v42, (__int64 *)&v80, v38, v39, v40, v41);
        v45 = *v44 + 32LL * v87;
        v46 = *(unsigned __int8 **)(v45 + 8);
        if ( !v46 )
        {
          v55 = *(_QWORD *)(v45 + 16);
          v56 = *(_DWORD *)(v55 + 14976);
          if ( v56 )
          {
            v72 = (unsigned int)(v56 - 1);
            *(_DWORD *)(v55 + 14976) = v72;
            v46 = *(unsigned __int8 **)(v55 + 8 * v72 + 14848);
            v73 = *((unsigned int *)v46 + 134);
            *v46 = 0;
            v74 = *((_QWORD *)v46 + 66);
            *((_DWORD *)v46 + 106) = 0;
            v75 = v74 + (v73 << 6);
            while ( v74 != v75 )
            {
              while ( 1 )
              {
                v75 -= 64;
                v76 = *(void **)(v75 + 24);
                if ( v76 == (void *)(v75 + 40) )
                  break;
                v78 = v74;
                operator delete(v76);
                v74 = v78;
                if ( v78 == v75 )
                  goto LABEL_70;
              }
            }
LABEL_70:
            *((_DWORD *)v46 + 134) = 0;
          }
          else
          {
            v46 = (unsigned __int8 *)operator new(0x3A0u);
            *v46 = 0;
            *((_QWORD *)v46 + 12) = v46 + 112;
            *((_QWORD *)v46 + 16) = v46 + 144;
            *((_QWORD *)v46 + 20) = v46 + 176;
            *((_QWORD *)v46 + 24) = v46 + 208;
            *((_QWORD *)v46 + 28) = v46 + 240;
            *((_QWORD *)v46 + 32) = v46 + 272;
            *((_QWORD *)v46 + 36) = v46 + 304;
            *((_QWORD *)v46 + 40) = v46 + 336;
            *((_QWORD *)v46 + 44) = v46 + 368;
            *((_QWORD *)v46 + 48) = v46 + 400;
            *((_QWORD *)v46 + 52) = v46 + 432;
            *((_QWORD *)v46 + 13) = 0;
            v46[112] = 0;
            *((_QWORD *)v46 + 17) = 0;
            v46[144] = 0;
            *((_QWORD *)v46 + 21) = 0;
            v46[176] = 0;
            *((_QWORD *)v46 + 25) = 0;
            v46[208] = 0;
            *((_QWORD *)v46 + 29) = 0;
            v46[240] = 0;
            *((_QWORD *)v46 + 33) = 0;
            v46[272] = 0;
            *((_QWORD *)v46 + 37) = 0;
            v46[304] = 0;
            *((_QWORD *)v46 + 41) = 0;
            v46[336] = 0;
            *((_QWORD *)v46 + 45) = 0;
            v46[368] = 0;
            *((_QWORD *)v46 + 49) = 0;
            v46[400] = 0;
            *((_QWORD *)v46 + 53) = 0x800000000LL;
            *((_QWORD *)v46 + 66) = v46 + 544;
            *((_QWORD *)v46 + 67) = 0x600000000LL;
          }
          *(_QWORD *)(v45 + 8) = v46;
        }
        v46[*v46 + 1] = 10;
        v14 = *(_BYTE **)(v45 + 8);
      }
      v15 = (unsigned __int8)*v14;
      *v14 = v15 + 1;
      *(_QWORD *)&v14[8 * v15 + 16] = v9;
      v16 = v86;
      v17 = sub_EEC8C0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), (__int64)v7, a3);
      v11 = v17;
      v18 = HIDWORD(v17);
      LODWORD(v12) = HIDWORD(v17);
      if ( v16 )
      {
        v19 = v84;
        if ( v84 )
        {
          v20 = *((unsigned int *)v84 + 106);
          v21 = *((unsigned int *)v84 + 107);
          v22 = v20 + 1;
        }
        else
        {
          v47 = v85;
          v48 = *(_DWORD *)(v85 + 14976);
          if ( v48 )
          {
            v57 = (unsigned int)(v48 - 1);
            *(_DWORD *)(v85 + 14976) = v57;
            v19 = *(unsigned __int8 **)(v47 + 8 * v57 + 14848);
            v58 = *((unsigned int *)v19 + 134);
            *v19 = 0;
            v59 = *((_QWORD *)v19 + 66);
            *((_DWORD *)v19 + 106) = 0;
            v60 = v59 + (v58 << 6);
            while ( v59 != v60 )
            {
              while ( 1 )
              {
                v60 -= 64;
                v61 = *(void **)(v60 + 24);
                if ( v61 == (void *)(v60 + 40) )
                  break;
                operator delete(v61);
                if ( v59 == v60 )
                  goto LABEL_55;
              }
            }
LABEL_55:
            v20 = *((unsigned int *)v19 + 106);
            v21 = *((unsigned int *)v19 + 107);
            *((_DWORD *)v19 + 134) = 0;
            v22 = v20 + 1;
          }
          else
          {
            v49 = (unsigned __int8 *)operator new(0x3A0u);
            v21 = 8;
            v22 = 1;
            v19 = v49;
            *v49 = 0;
            *((_QWORD *)v49 + 12) = v49 + 112;
            *((_QWORD *)v49 + 16) = v49 + 144;
            *((_QWORD *)v49 + 20) = v49 + 176;
            *((_QWORD *)v49 + 24) = v49 + 208;
            *((_QWORD *)v49 + 28) = v49 + 240;
            *((_QWORD *)v49 + 32) = v49 + 272;
            *((_QWORD *)v49 + 36) = v49 + 304;
            *((_QWORD *)v49 + 40) = v49 + 336;
            *((_QWORD *)v49 + 44) = v49 + 368;
            *((_QWORD *)v49 + 48) = v49 + 400;
            *((_QWORD *)v49 + 52) = v49 + 432;
            *((_QWORD *)v49 + 13) = 0;
            v49[112] = 0;
            *((_QWORD *)v49 + 17) = 0;
            v49[144] = 0;
            *((_QWORD *)v49 + 21) = 0;
            v49[176] = 0;
            *((_QWORD *)v49 + 25) = 0;
            v49[208] = 0;
            *((_QWORD *)v49 + 29) = 0;
            v49[240] = 0;
            *((_QWORD *)v49 + 33) = 0;
            v49[272] = 0;
            *((_QWORD *)v49 + 37) = 0;
            v49[304] = 0;
            *((_QWORD *)v49 + 41) = 0;
            v49[336] = 0;
            *((_QWORD *)v49 + 45) = 0;
            v49[368] = 0;
            *((_QWORD *)v49 + 49) = 0;
            v49[400] = 0;
            *((_QWORD *)v49 + 53) = 0x800000000LL;
            *((_QWORD *)v49 + 66) = v49 + 544;
            *((_QWORD *)v49 + 67) = 0x600000000LL;
            v20 = 0;
          }
          v84 = v19;
        }
        v80 = __PAIR64__(v18, v11);
        LOBYTE(v81) = 1;
        if ( v22 > v21 )
        {
          sub_2237220(v19 + 416, v19 + 432, v22, 12);
          v20 = *((unsigned int *)v19 + 106);
        }
        v23 = *((_QWORD *)v19 + 52) + 12 * v20;
        *(_QWORD *)v23 = v80;
        *(_DWORD *)(v23 + 8) = v81;
        ++*((_DWORD *)v19 + 106);
        goto LABEL_13;
      }
LABEL_12:
      if ( v88 )
      {
        v26 = sub_168B9E0(v82);
        v29 = v83;
        if ( v83 )
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v83 + 32LL))(v83);
        v79 = v29;
        v30 = sub_1587BC0(v26, &v79, v24, v25, v27, v28);
        v31 = *v30 + 32LL * v87;
        v32 = *(_QWORD *)(v31 + 8);
        v33 = v31;
        if ( v32 )
        {
          v34 = *(unsigned int *)(v32 + 424);
          v35 = *(unsigned int *)(v32 + 428);
          v36 = v34 + 1;
        }
        else
        {
          v52 = *(_QWORD *)(v31 + 16);
          v53 = *(_DWORD *)(v52 + 14976);
          if ( v53 )
          {
            v67 = (unsigned int)(v53 - 1);
            *(_DWORD *)(v52 + 14976) = v67;
            v32 = *(_QWORD *)(v52 + 8 * v67 + 14848);
            v68 = *(unsigned int *)(v32 + 536);
            *(_BYTE *)v32 = 0;
            v69 = *(_QWORD *)(v32 + 528);
            *(_DWORD *)(v32 + 424) = 0;
            v70 = v69 + (v68 << 6);
            while ( v69 != v70 )
            {
              while ( 1 )
              {
                v70 -= 64;
                v71 = *(void **)(v70 + 24);
                if ( v71 == (void *)(v70 + 40) )
                  break;
                v77 = v69;
                operator delete(v71);
                v69 = v77;
                if ( v77 == v70 )
                  goto LABEL_65;
              }
            }
LABEL_65:
            v34 = *(unsigned int *)(v32 + 424);
            v35 = *(unsigned int *)(v32 + 428);
            *(_DWORD *)(v32 + 536) = 0;
            v36 = v34 + 1;
          }
          else
          {
            v54 = operator new(0x3A0u);
            v35 = 8;
            v36 = 1;
            v32 = v54;
            *(_BYTE *)v54 = 0;
            *(_QWORD *)(v54 + 96) = v54 + 112;
            *(_QWORD *)(v54 + 128) = v54 + 144;
            *(_QWORD *)(v54 + 160) = v54 + 176;
            *(_QWORD *)(v54 + 192) = v54 + 208;
            *(_QWORD *)(v54 + 224) = v54 + 240;
            *(_QWORD *)(v54 + 256) = v54 + 272;
            *(_QWORD *)(v54 + 288) = v54 + 304;
            *(_QWORD *)(v54 + 320) = v54 + 336;
            *(_QWORD *)(v54 + 352) = v54 + 368;
            *(_QWORD *)(v54 + 384) = v54 + 400;
            *(_QWORD *)(v54 + 416) = v54 + 432;
            *(_QWORD *)(v54 + 104) = 0;
            *(_BYTE *)(v54 + 112) = 0;
            *(_QWORD *)(v54 + 136) = 0;
            *(_BYTE *)(v54 + 144) = 0;
            *(_QWORD *)(v54 + 168) = 0;
            *(_BYTE *)(v54 + 176) = 0;
            *(_QWORD *)(v54 + 200) = 0;
            *(_BYTE *)(v54 + 208) = 0;
            *(_QWORD *)(v54 + 232) = 0;
            *(_BYTE *)(v54 + 240) = 0;
            *(_QWORD *)(v54 + 264) = 0;
            *(_BYTE *)(v54 + 272) = 0;
            *(_QWORD *)(v54 + 296) = 0;
            *(_BYTE *)(v54 + 304) = 0;
            *(_QWORD *)(v54 + 328) = 0;
            *(_BYTE *)(v54 + 336) = 0;
            *(_QWORD *)(v54 + 360) = 0;
            *(_BYTE *)(v54 + 368) = 0;
            *(_QWORD *)(v54 + 392) = 0;
            *(_BYTE *)(v54 + 400) = 0;
            *(_QWORD *)(v54 + 424) = 0x800000000LL;
            *(_QWORD *)(v54 + 528) = v54 + 544;
            *(_QWORD *)(v54 + 536) = 0x600000000LL;
            v34 = 0;
          }
          *(_QWORD *)(v33 + 8) = v32;
        }
        v80 = __PAIR64__(v12, v11);
        LOBYTE(v81) = 1;
        if ( v36 > v35 )
        {
          sub_2237220(v32 + 416, v32 + 432, v36, 12);
          v34 = *(unsigned int *)(v32 + 424);
        }
        v37 = *(_QWORD *)(v32 + 416) + 12 * v34;
        *(_QWORD *)v37 = v80;
        *(_DWORD *)(v37 + 8) = v81;
        ++*(_DWORD *)(v32 + 424);
      }
LABEL_13:
      sub_15F7200(v82);
      return 1;
    }
  }
  return result;
}
