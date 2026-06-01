__int64 __fastcall sub_1E92530(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, double a5)
{
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v9; // ebx
  __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned int v15; // r12d
  unsigned __int8 *v16; // rbp
  _BYTE *v17; // rdx
  __int64 v18; // rax
  unsigned __int8 v19; // bp
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int8 *v22; // rbp
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rbp
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rbp
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // r12
  unsigned __int8 *v49; // rbp
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  unsigned __int8 *v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // r15
  __int64 v63; // r14
  void *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r12
  __int64 v67; // r15
  __int64 v68; // r12
  void *v69; // rdi
  __int64 v70; // rax
  __int64 v71; // r15
  __int64 v72; // rdx
  __int64 v73; // r15
  void *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // r15
  __int64 v77; // rdx
  __int64 v78; // r15
  void *v79; // rdi
  __int64 v80; // [rsp+8h] [rbp-F0h]
  __int64 v81; // [rsp+8h] [rbp-F0h]
  __int64 v82; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v83; // [rsp+20h] [rbp-D8h] BYREF
  int v84; // [rsp+28h] [rbp-D0h]
  _QWORD v85[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v87; // [rsp+50h] [rbp-A8h]
  __int64 v88; // [rsp+58h] [rbp-A0h]
  unsigned __int8 v89; // [rsp+A8h] [rbp-50h]
  unsigned int v90; // [rsp+B0h] [rbp-48h]
  unsigned __int8 v91; // [rsp+B4h] [rbp-44h]

  v6 = *(_QWORD *)(a2 + 8 * (a3 + (unsigned __int64)((*(_BYTE *)(a2 + 2) & 8) != 0)) + 40);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned __int8)(*(_BYTE *)(v7 + 16) - 2) > 4u || (v85[0] = *(_QWORD *)(v7 + 32), !sub_F65EB0(v85)) )
  {
    v11 = a3 + 1;
    v12 = sub_EEB7E0(v6, a2, a5);
    v13 = (unsigned __int64 *)(a1 + 8);
    sub_168B9F0((__int64)v85, (__int64 *)(a1 + 8), v12, 0x1557u, 0);
    if ( v89 )
    {
      v16 = v87;
      if ( !v87 )
      {
        v50 = v88;
        v51 = *(_DWORD *)(v88 + 14976);
        if ( v51 )
        {
          v65 = (unsigned int)(v51 - 1);
          *(_DWORD *)(v88 + 14976) = v65;
          v16 = *(unsigned __int8 **)(v50 + 8 * v65 + 14848);
          v66 = *((unsigned int *)v16 + 134);
          *v16 = 0;
          v67 = *((_QWORD *)v16 + 66);
          *((_DWORD *)v16 + 106) = 0;
          v68 = v67 + (v66 << 6);
          while ( v67 != v68 )
          {
            while ( 1 )
            {
              v68 -= 64;
              v69 = *(void **)(v68 + 24);
              if ( v69 == (void *)(v68 + 40) )
                break;
              operator delete(v69);
              if ( v67 == v68 )
                goto LABEL_52;
            }
          }
LABEL_52:
          *((_DWORD *)v16 + 134) = 0;
        }
        else
        {
          v16 = (unsigned __int8 *)operator new(0x3A0u);
          *v16 = 0;
          *((_QWORD *)v16 + 12) = v16 + 112;
          *((_QWORD *)v16 + 16) = v16 + 144;
          *((_QWORD *)v16 + 20) = v16 + 176;
          *((_QWORD *)v16 + 24) = v16 + 208;
          *((_QWORD *)v16 + 28) = v16 + 240;
          *((_QWORD *)v16 + 32) = v16 + 272;
          *((_QWORD *)v16 + 36) = v16 + 304;
          *((_QWORD *)v16 + 40) = v16 + 336;
          *((_QWORD *)v16 + 44) = v16 + 368;
          *((_QWORD *)v16 + 48) = v16 + 400;
          *((_QWORD *)v16 + 52) = v16 + 432;
          *((_QWORD *)v16 + 13) = 0;
          v16[112] = 0;
          *((_QWORD *)v16 + 17) = 0;
          v16[144] = 0;
          *((_QWORD *)v16 + 21) = 0;
          v16[176] = 0;
          *((_QWORD *)v16 + 25) = 0;
          v16[208] = 0;
          *((_QWORD *)v16 + 29) = 0;
          v16[240] = 0;
          *((_QWORD *)v16 + 33) = 0;
          v16[272] = 0;
          *((_QWORD *)v16 + 37) = 0;
          v16[304] = 0;
          *((_QWORD *)v16 + 41) = 0;
          v16[336] = 0;
          *((_QWORD *)v16 + 45) = 0;
          v16[368] = 0;
          *((_QWORD *)v16 + 49) = 0;
          v16[400] = 0;
          *((_QWORD *)v16 + 53) = 0x800000000LL;
          *((_QWORD *)v16 + 66) = v16 + 544;
          *((_QWORD *)v16 + 67) = 0x600000000LL;
        }
        v87 = v16;
      }
      v16[*v16 + 1] = 3;
      v17 = v87;
    }
    else
    {
      if ( !v91 )
      {
        v14 = sub_EEC8C0(v6, (__int64)v13, a5);
        v15 = v14;
        v6 = HIDWORD(v14);
        goto LABEL_8;
      }
      v43 = sub_168B9E0(v85);
      v46 = v86;
      if ( v86 )
        v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 32LL))(v86);
      v13 = &v83;
      v83 = v46;
      v47 = sub_1587BC0(v43, (__int64 *)&v83, v41, v42, v44, v45);
      v48 = *v47 + 32LL * v90;
      v49 = *(unsigned __int8 **)(v48 + 8);
      if ( !v49 )
      {
        v55 = *(_QWORD *)(v48 + 16);
        v56 = *(_DWORD *)(v55 + 14976);
        if ( v56 )
        {
          v70 = (unsigned int)(v56 - 1);
          *(_DWORD *)(v55 + 14976) = v70;
          v49 = *(unsigned __int8 **)(v55 + 8 * v70 + 14848);
          v71 = *((unsigned int *)v49 + 134);
          *v49 = 0;
          v72 = *((_QWORD *)v49 + 66);
          *((_DWORD *)v49 + 106) = 0;
          v73 = v72 + (v71 << 6);
          while ( v72 != v73 )
          {
            while ( 1 )
            {
              v73 -= 64;
              v74 = *(void **)(v73 + 24);
              if ( v74 == (void *)(v73 + 40) )
                break;
              v80 = v72;
              operator delete(v74);
              v72 = v80;
              if ( v80 == v73 )
                goto LABEL_57;
            }
          }
LABEL_57:
          *((_DWORD *)v49 + 134) = 0;
        }
        else
        {
          v49 = (unsigned __int8 *)operator new(0x3A0u);
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
        }
        *(_QWORD *)(v48 + 8) = v49;
      }
      v49[*v49 + 1] = 3;
      v17 = *(_BYTE **)(v48 + 8);
    }
    v18 = (unsigned __int8)*v17;
    *v17 = v18 + 1;
    *(_QWORD *)&v17[8 * v18 + 16] = v11;
    v19 = v89;
    v20 = sub_EEC8C0(v6, (__int64)v13, a5);
    v15 = v20;
    v21 = HIDWORD(v20);
    LODWORD(v6) = HIDWORD(v20);
    if ( v19 )
    {
      v22 = v87;
      if ( v87 )
      {
        v23 = *((unsigned int *)v87 + 106);
        v24 = *((unsigned int *)v87 + 107);
        v25 = v23 + 1;
      }
      else
      {
        v52 = v88;
        v53 = *(_DWORD *)(v88 + 14976);
        if ( v53 )
        {
          v60 = (unsigned int)(v53 - 1);
          *(_DWORD *)(v88 + 14976) = v60;
          v22 = *(unsigned __int8 **)(v52 + 8 * v60 + 14848);
          v61 = *((unsigned int *)v22 + 134);
          *v22 = 0;
          v62 = *((_QWORD *)v22 + 66);
          *((_DWORD *)v22 + 106) = 0;
          v63 = v62 + (v61 << 6);
          if ( v62 == v63 )
          {
            v25 = 1;
            v23 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v63 -= 64;
                v64 = *(void **)(v63 + 24);
                if ( v64 == (void *)(v63 + 40) )
                  break;
                operator delete(v64);
                if ( v62 == v63 )
                  goto LABEL_44;
              }
            }
            while ( v62 != v63 );
LABEL_44:
            v23 = *((unsigned int *)v22 + 106);
            v25 = v23 + 1;
          }
          *((_DWORD *)v22 + 134) = 0;
          v24 = *((unsigned int *)v22 + 107);
        }
        else
        {
          v54 = (unsigned __int8 *)operator new(0x3A0u);
          v24 = 8;
          v25 = 1;
          v22 = v54;
          *v54 = 0;
          *((_QWORD *)v54 + 12) = v54 + 112;
          *((_QWORD *)v54 + 16) = v54 + 144;
          *((_QWORD *)v54 + 20) = v54 + 176;
          *((_QWORD *)v54 + 24) = v54 + 208;
          *((_QWORD *)v54 + 28) = v54 + 240;
          *((_QWORD *)v54 + 32) = v54 + 272;
          *((_QWORD *)v54 + 36) = v54 + 304;
          *((_QWORD *)v54 + 40) = v54 + 336;
          *((_QWORD *)v54 + 44) = v54 + 368;
          *((_QWORD *)v54 + 48) = v54 + 400;
          *((_QWORD *)v54 + 52) = v54 + 432;
          *((_QWORD *)v54 + 13) = 0;
          v54[112] = 0;
          *((_QWORD *)v54 + 17) = 0;
          v54[144] = 0;
          *((_QWORD *)v54 + 21) = 0;
          v54[176] = 0;
          *((_QWORD *)v54 + 25) = 0;
          v54[208] = 0;
          *((_QWORD *)v54 + 29) = 0;
          v54[240] = 0;
          *((_QWORD *)v54 + 33) = 0;
          v54[272] = 0;
          *((_QWORD *)v54 + 37) = 0;
          v54[304] = 0;
          *((_QWORD *)v54 + 41) = 0;
          v54[336] = 0;
          *((_QWORD *)v54 + 45) = 0;
          v54[368] = 0;
          *((_QWORD *)v54 + 49) = 0;
          v54[400] = 0;
          *((_QWORD *)v54 + 53) = 0x800000000LL;
          *((_QWORD *)v54 + 66) = v54 + 544;
          *((_QWORD *)v54 + 67) = 0x600000000LL;
          v23 = 0;
        }
        v87 = v22;
      }
      v83 = __PAIR64__(v21, v15);
      LOBYTE(v84) = 1;
      if ( v25 > v24 )
      {
        sub_2237220(v22 + 416, v22 + 432, v25, 12);
        v23 = *((unsigned int *)v22 + 106);
      }
      v26 = *((_QWORD *)v22 + 52) + 12 * v23;
      *(_QWORD *)v26 = v83;
      *(_DWORD *)(v26 + 8) = v84;
      v9 = v89;
      ++*((_DWORD *)v22 + 106);
      goto LABEL_9;
    }
LABEL_8:
    v9 = v91;
    if ( v91 )
    {
      v29 = sub_168B9E0(v85);
      v32 = v86;
      if ( v86 )
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 32LL))(v86);
      v82 = v32;
      v33 = sub_1587BC0(v29, &v82, v27, v28, v30, v31);
      v34 = *v33 + 32LL * v90;
      v35 = *(_QWORD *)(v34 + 8);
      v36 = v34;
      if ( v35 )
      {
        v37 = *(unsigned int *)(v35 + 424);
        v38 = *(unsigned int *)(v35 + 428);
        v39 = v37 + 1;
      }
      else
      {
        v57 = *(_QWORD *)(v34 + 16);
        v58 = *(_DWORD *)(v57 + 14976);
        if ( v58 )
        {
          v75 = (unsigned int)(v58 - 1);
          *(_DWORD *)(v57 + 14976) = v75;
          v35 = *(_QWORD *)(v57 + 8 * v75 + 14848);
          v76 = *(unsigned int *)(v35 + 536);
          *(_BYTE *)v35 = 0;
          v77 = *(_QWORD *)(v35 + 528);
          *(_DWORD *)(v35 + 424) = 0;
          v78 = v77 + (v76 << 6);
          if ( v77 == v78 )
          {
            v39 = 1;
            v37 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v78 -= 64;
                v79 = *(void **)(v78 + 24);
                if ( v79 == (void *)(v78 + 40) )
                  break;
                v81 = v77;
                operator delete(v79);
                v77 = v81;
                if ( v81 == v78 )
                  goto LABEL_61;
              }
            }
            while ( v77 != v78 );
LABEL_61:
            v37 = *(unsigned int *)(v35 + 424);
            v39 = v37 + 1;
          }
          *(_DWORD *)(v35 + 536) = 0;
          v38 = *(unsigned int *)(v35 + 428);
        }
        else
        {
          v59 = operator new(0x3A0u);
          v38 = 8;
          v39 = 1;
          v35 = v59;
          *(_BYTE *)v59 = 0;
          *(_QWORD *)(v59 + 96) = v59 + 112;
          *(_QWORD *)(v59 + 128) = v59 + 144;
          *(_QWORD *)(v59 + 160) = v59 + 176;
          *(_QWORD *)(v59 + 192) = v59 + 208;
          *(_QWORD *)(v59 + 224) = v59 + 240;
          *(_QWORD *)(v59 + 256) = v59 + 272;
          *(_QWORD *)(v59 + 288) = v59 + 304;
          *(_QWORD *)(v59 + 320) = v59 + 336;
          *(_QWORD *)(v59 + 352) = v59 + 368;
          *(_QWORD *)(v59 + 384) = v59 + 400;
          *(_QWORD *)(v59 + 416) = v59 + 432;
          *(_QWORD *)(v59 + 104) = 0;
          *(_BYTE *)(v59 + 112) = 0;
          *(_QWORD *)(v59 + 136) = 0;
          *(_BYTE *)(v59 + 144) = 0;
          *(_QWORD *)(v59 + 168) = 0;
          *(_BYTE *)(v59 + 176) = 0;
          *(_QWORD *)(v59 + 200) = 0;
          *(_BYTE *)(v59 + 208) = 0;
          *(_QWORD *)(v59 + 232) = 0;
          *(_BYTE *)(v59 + 240) = 0;
          *(_QWORD *)(v59 + 264) = 0;
          *(_BYTE *)(v59 + 272) = 0;
          *(_QWORD *)(v59 + 296) = 0;
          *(_BYTE *)(v59 + 304) = 0;
          *(_QWORD *)(v59 + 328) = 0;
          *(_BYTE *)(v59 + 336) = 0;
          *(_QWORD *)(v59 + 360) = 0;
          *(_BYTE *)(v59 + 368) = 0;
          *(_QWORD *)(v59 + 392) = 0;
          *(_BYTE *)(v59 + 400) = 0;
          *(_QWORD *)(v59 + 424) = 0x800000000LL;
          *(_QWORD *)(v59 + 528) = v59 + 544;
          *(_QWORD *)(v59 + 536) = 0x600000000LL;
          v37 = 0;
        }
        *(_QWORD *)(v36 + 8) = v35;
      }
      v83 = __PAIR64__(v6, v15);
      LOBYTE(v84) = 1;
      if ( v39 > v38 )
      {
        sub_2237220(v35 + 416, v35 + 432, v39, 12);
        v37 = *(unsigned int *)(v35 + 424);
      }
      v40 = *(_QWORD *)(v35 + 416) + 12 * v37;
      *(_QWORD *)v40 = v83;
      *(_DWORD *)(v40 + 8) = v84;
      ++*(_DWORD *)(v35 + 424);
      v9 = v89;
    }
LABEL_9:
    sub_15F7200(v85);
    return v9;
  }
  v9 = 0;
  *a4 = *(_QWORD *)(v7 + 32);
  return v9;
}
