__int64 __fastcall sub_17B5810(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rax
  char *v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  char *v14; // r14
  __int64 v15; // r12
  __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rbp
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbp
  _BYTE *v22; // rax
  _BYTE *v23; // rsi
  signed __int64 v24; // rcx
  char *v25; // rbp
  char *v26; // r12
  __int64 v27; // r15
  __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbx
  _BYTE *v34; // rax
  _BYTE *v35; // rsi
  signed __int64 v36; // r13
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rbp
  __int64 v46; // r14
  char *v47; // r15
  __int64 v48; // r13
  char *v49; // r12
  __int64 v50; // rbx
  void *v51; // rdi
  void *v52; // r13
  char *v53; // rbx
  int v54; // r12d
  void *v55; // rax
  void *v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rbx
  void *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rbx
  __int64 v62; // r13
  __int64 v63; // rbx
  void *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  char *v67; // rbp
  int v68; // edx
  void *v69; // rdi
  void *v70; // rax
  __int64 v71; // rbp
  void *v72; // rdi
  __int64 v73; // rax
  unsigned __int64 v75; // [rsp+8h] [rbp-70h]
  _BYTE *srcc; // [rsp+10h] [rbp-68h]
  void *srcd; // [rsp+10h] [rbp-68h]
  void *srce; // [rsp+10h] [rbp-68h]
  void *src; // [rsp+10h] [rbp-68h]
  void *srca; // [rsp+10h] [rbp-68h]
  int srcf; // [rsp+10h] [rbp-68h]
  void *srcb; // [rsp+10h] [rbp-68h]
  int srcg; // [rsp+10h] [rbp-68h]
  int srch; // [rsp+10h] [rbp-68h]
  _BYTE *v85; // [rsp+18h] [rbp-60h]
  void *v86; // [rsp+18h] [rbp-60h]
  __int64 v87; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v88[16]; // [rsp+38h] [rbp-40h] BYREF

  v2 = a1;
  if ( *(_BYTE *)(a1 + 120) )
  {
    v25 = *(char **)a2;
    if ( *(_QWORD *)a2 == *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 8) << 6) )
      return v2;
    v75 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 8) << 6);
    while ( 1 )
    {
      v26 = v25;
      if ( !*(_DWORD *)v25 || !*((_DWORD *)v25 + 1) )
        goto LABEL_33;
      v27 = *(_QWORD *)(v2 + 32);
      if ( v27 )
      {
        v28 = *(unsigned int *)(v27 + 536);
        v29 = *(unsigned int *)(v27 + 540);
        v30 = v28 + 1;
        v31 = v28 << 6;
      }
      else
      {
        v37 = *(_QWORD *)(v2 + 40);
        v38 = *(_DWORD *)(v37 + 14976);
        if ( v38 )
        {
          v60 = (unsigned int)(v38 - 1);
          *(_DWORD *)(v37 + 14976) = v60;
          v27 = *(_QWORD *)(v37 + 8 * v60 + 14848);
          v61 = *(unsigned int *)(v27 + 536);
          *(_BYTE *)v27 = 0;
          v62 = *(_QWORD *)(v27 + 528);
          *(_DWORD *)(v27 + 424) = 0;
          v63 = v62 + (v61 << 6);
          while ( v62 != v63 )
          {
            while ( 1 )
            {
              v63 -= 64;
              v64 = *(void **)(v63 + 24);
              if ( v64 == (void *)(v63 + 40) )
                break;
              operator delete(v64);
              if ( v62 == v63 )
                goto LABEL_66;
            }
          }
LABEL_66:
          *(_DWORD *)(v27 + 536) = 0;
          v29 = *(unsigned int *)(v27 + 540);
        }
        else
        {
          v39 = operator new(0x3A0u);
          v29 = 6;
          v27 = v39;
          *(_BYTE *)v39 = 0;
          *(_QWORD *)(v39 + 96) = v39 + 112;
          *(_QWORD *)(v39 + 128) = v39 + 144;
          *(_QWORD *)(v39 + 160) = v39 + 176;
          *(_QWORD *)(v39 + 192) = v39 + 208;
          *(_QWORD *)(v39 + 224) = v39 + 240;
          *(_QWORD *)(v39 + 256) = v39 + 272;
          *(_QWORD *)(v39 + 288) = v39 + 304;
          *(_QWORD *)(v39 + 320) = v39 + 336;
          *(_QWORD *)(v39 + 352) = v39 + 368;
          *(_QWORD *)(v39 + 384) = v39 + 400;
          *(_QWORD *)(v39 + 416) = v39 + 432;
          *(_QWORD *)(v39 + 104) = 0;
          *(_BYTE *)(v39 + 112) = 0;
          *(_QWORD *)(v39 + 136) = 0;
          *(_BYTE *)(v39 + 144) = 0;
          *(_QWORD *)(v39 + 168) = 0;
          *(_BYTE *)(v39 + 176) = 0;
          *(_QWORD *)(v39 + 200) = 0;
          *(_BYTE *)(v39 + 208) = 0;
          *(_QWORD *)(v39 + 232) = 0;
          *(_BYTE *)(v39 + 240) = 0;
          *(_QWORD *)(v39 + 264) = 0;
          *(_BYTE *)(v39 + 272) = 0;
          *(_QWORD *)(v39 + 296) = 0;
          *(_BYTE *)(v39 + 304) = 0;
          *(_QWORD *)(v39 + 328) = 0;
          *(_BYTE *)(v39 + 336) = 0;
          *(_QWORD *)(v39 + 360) = 0;
          *(_BYTE *)(v39 + 368) = 0;
          *(_QWORD *)(v39 + 392) = 0;
          *(_BYTE *)(v39 + 400) = 0;
          *(_QWORD *)(v39 + 424) = 0x800000000LL;
          *(_QWORD *)(v39 + 528) = v39 + 544;
          *(_QWORD *)(v39 + 536) = 0x600000000LL;
        }
        *(_QWORD *)(v2 + 32) = v27;
        v31 = 0;
        v30 = 1;
      }
      v32 = *(_QWORD *)(v27 + 528);
      v33 = v32 + v31;
      if ( v30 > v29 )
      {
        v52 = (void *)(v27 + 544);
        if ( v32 > (unsigned __int64)v25 || v33 <= (unsigned __int64)v25 )
        {
          v58 = sub_2237400(v27 + 528, v27 + 544, v30, 64, v88);
          sub_9EF810((__int64 *)(v27 + 528), v58);
          v59 = *(void **)(v27 + 528);
          if ( v59 == v52 )
          {
            *(_DWORD *)(v27 + 540) = v88[0];
            v66 = *(unsigned int *)(v27 + 536);
            *(_QWORD *)(v27 + 528) = v58;
            v33 = (v66 << 6) + v58;
          }
          else
          {
            srcf = v88[0];
            free(v59);
            *(_QWORD *)(v27 + 528) = v58;
            *(_DWORD *)(v27 + 540) = srcf;
            v33 = ((unsigned __int64)*(unsigned int *)(v27 + 536) << 6) + v58;
          }
        }
        else
        {
          v53 = &v25[-v32];
          srca = (void *)sub_2237400(v27 + 528, v27 + 544, v30, 64, v88);
          sub_9EF810((__int64 *)(v27 + 528), (__int64)srca);
          v54 = v88[0];
          v55 = srca;
          v56 = *(void **)(v27 + 528);
          if ( v56 != v52 )
          {
            free(v56);
            v55 = srca;
          }
          *(_DWORD *)(v27 + 540) = v54;
          v26 = &v53[(_QWORD)v55];
          v57 = *(unsigned int *)(v27 + 536);
          *(_QWORD *)(v27 + 528) = v55;
          v33 = (unsigned __int64)v55 + 64 * v57;
        }
      }
      *(_QWORD *)v33 = *(_QWORD *)v26;
      *(_DWORD *)(v33 + 8) = *((_DWORD *)v26 + 2);
      *(_QWORD *)(v33 + 12) = *(_QWORD *)(v26 + 12);
      *(_DWORD *)(v33 + 20) = *((_DWORD *)v26 + 5);
      v34 = (_BYTE *)(v33 + 40);
      *(_QWORD *)(v33 + 24) = v33 + 40;
      v35 = *((_BYTE **)v26 + 3);
      v36 = *((_QWORD *)v26 + 4);
      if ( &v35[v36] && !v35 )
LABEL_82:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v36 > 0xF )
        break;
      if ( v36 == 1 )
      {
        *(_BYTE *)(v33 + 40) = *v35;
      }
      else if ( v36 )
      {
        goto LABEL_39;
      }
LABEL_32:
      *(_QWORD *)(v33 + 32) = v36;
      v34[v36] = 0;
      *(_BYTE *)(v33 + 56) = v26[56];
      ++*(_DWORD *)(v27 + 536);
LABEL_33:
      v25 += 64;
      if ( (char *)v75 == v25 )
        return v2;
    }
    if ( v36 < 0 )
LABEL_81:
      std::__throw_length_error("basic_string::_M_create");
    srcc = *((_BYTE **)v26 + 3);
    v34 = (_BYTE *)operator new(v36 + 1);
    *(_QWORD *)(v33 + 40) = v36;
    v35 = srcc;
    *(_QWORD *)(v33 + 24) = v34;
LABEL_39:
    memcpy(v34, v35, v36);
    v34 = *(_BYTE **)(v33 + 24);
    goto LABEL_32;
  }
  if ( *(_BYTE *)(a1 + 132) )
  {
    v6 = sub_168B9E0((_QWORD *)a1);
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)(a1 + 16));
    v87 = v9;
    v10 = sub_1587BC0(v6, &v87, v4, v5, v7, v8);
    v11 = *(char **)a2;
    v12 = *v10 + 32LL * *(unsigned int *)(a1 + 128);
    v13 = *(_QWORD *)a2 + ((unsigned __int64)*(unsigned int *)(a2 + 8) << 6);
    if ( *(_QWORD *)a2 != v13 )
    {
      while ( 1 )
      {
        v14 = v11;
        if ( !*(_DWORD *)v11 || !*((_DWORD *)v11 + 1) )
          goto LABEL_18;
        v15 = *(_QWORD *)(v12 + 8);
        if ( v15 )
        {
          v16 = *(unsigned int *)(v15 + 536);
          v17 = *(unsigned int *)(v15 + 540);
          v18 = v16 + 1;
          v19 = v16 << 6;
        }
        else
        {
          v40 = *(_QWORD *)(v12 + 16);
          v41 = *(_DWORD *)(v40 + 14976);
          if ( v41 )
          {
            v42 = (unsigned int)(v41 - 1);
            *(_DWORD *)(v40 + 14976) = v42;
            v15 = *(_QWORD *)(v40 + 8 * v42 + 14848);
            v43 = *(unsigned int *)(v15 + 536);
            v44 = *(_QWORD *)(v15 + 528);
            *(_BYTE *)v15 = 0;
            *(_DWORD *)(v15 + 424) = 0;
            v45 = v44 + (v43 << 6);
            if ( v44 != v45 )
            {
              src = (void *)v13;
              v46 = v12;
              v47 = v11;
              v48 = v15;
              v49 = v11;
              v50 = v44;
              do
              {
                while ( 1 )
                {
                  v45 -= 64;
                  v51 = *(void **)(v45 + 24);
                  if ( v51 == (void *)(v45 + 40) )
                    break;
                  operator delete(v51);
                  if ( v50 == v45 )
                    goto LABEL_53;
                }
              }
              while ( v50 != v45 );
LABEL_53:
              v11 = v49;
              v15 = v48;
              v12 = v46;
              v14 = v47;
              v13 = (unsigned __int64)src;
            }
            *(_DWORD *)(v15 + 536) = 0;
            v17 = *(unsigned int *)(v15 + 540);
          }
          else
          {
            v65 = operator new(0x3A0u);
            v17 = 6;
            v15 = v65;
            *(_BYTE *)v65 = 0;
            *(_QWORD *)(v65 + 96) = v65 + 112;
            *(_QWORD *)(v65 + 128) = v65 + 144;
            *(_QWORD *)(v65 + 160) = v65 + 176;
            *(_QWORD *)(v65 + 192) = v65 + 208;
            *(_QWORD *)(v65 + 224) = v65 + 240;
            *(_QWORD *)(v65 + 256) = v65 + 272;
            *(_QWORD *)(v65 + 288) = v65 + 304;
            *(_QWORD *)(v65 + 320) = v65 + 336;
            *(_QWORD *)(v65 + 352) = v65 + 368;
            *(_QWORD *)(v65 + 384) = v65 + 400;
            *(_QWORD *)(v65 + 416) = v65 + 432;
            *(_QWORD *)(v65 + 104) = 0;
            *(_BYTE *)(v65 + 112) = 0;
            *(_QWORD *)(v65 + 136) = 0;
            *(_BYTE *)(v65 + 144) = 0;
            *(_QWORD *)(v65 + 168) = 0;
            *(_BYTE *)(v65 + 176) = 0;
            *(_QWORD *)(v65 + 200) = 0;
            *(_BYTE *)(v65 + 208) = 0;
            *(_QWORD *)(v65 + 232) = 0;
            *(_BYTE *)(v65 + 240) = 0;
            *(_QWORD *)(v65 + 264) = 0;
            *(_BYTE *)(v65 + 272) = 0;
            *(_QWORD *)(v65 + 296) = 0;
            *(_BYTE *)(v65 + 304) = 0;
            *(_QWORD *)(v65 + 328) = 0;
            *(_BYTE *)(v65 + 336) = 0;
            *(_QWORD *)(v65 + 360) = 0;
            *(_BYTE *)(v65 + 368) = 0;
            *(_QWORD *)(v65 + 392) = 0;
            *(_BYTE *)(v65 + 400) = 0;
            *(_QWORD *)(v65 + 424) = 0x800000000LL;
            *(_QWORD *)(v65 + 528) = v65 + 544;
            *(_QWORD *)(v65 + 536) = 0x600000000LL;
          }
          *(_QWORD *)(v12 + 8) = v15;
          v19 = 0;
          v18 = 1;
        }
        v20 = *(_QWORD *)(v15 + 528);
        v21 = v20 + v19;
        if ( v18 > v17 )
        {
          if ( v20 > (unsigned __int64)v11 || v21 <= (unsigned __int64)v11 )
          {
            v71 = sub_2237400(v15 + 528, v15 + 544, v18, 64, v88);
            sub_9EF810((__int64 *)(v15 + 528), v71);
            v72 = *(void **)(v15 + 528);
            if ( v72 == (void *)(v15 + 544) )
            {
              *(_DWORD *)(v15 + 540) = v88[0];
              v73 = *(unsigned int *)(v15 + 536);
              *(_QWORD *)(v15 + 528) = v71;
              v21 = (v73 << 6) + v71;
            }
            else
            {
              srch = v88[0];
              free(v72);
              *(_QWORD *)(v15 + 528) = v71;
              *(_DWORD *)(v15 + 540) = srch;
              v21 = ((unsigned __int64)*(unsigned int *)(v15 + 536) << 6) + v71;
            }
          }
          else
          {
            v67 = &v11[-v20];
            srcb = (void *)sub_2237400(v15 + 528, v15 + 544, v18, 64, v88);
            sub_9EF810((__int64 *)(v15 + 528), (__int64)srcb);
            v68 = v88[0];
            v69 = *(void **)(v15 + 528);
            v70 = srcb;
            if ( v69 == (void *)(v15 + 544) )
            {
              *(_QWORD *)(v15 + 528) = srcb;
              *(_DWORD *)(v15 + 540) = v68;
            }
            else
            {
              v86 = srcb;
              srcg = v88[0];
              free(v69);
              v70 = v86;
              *(_QWORD *)(v15 + 528) = v86;
              *(_DWORD *)(v15 + 540) = srcg;
            }
            v14 = &v67[(_QWORD)v70];
            v21 = (unsigned __int64)v70 + 64 * (unsigned __int64)*(unsigned int *)(v15 + 536);
          }
        }
        *(_QWORD *)v21 = *(_QWORD *)v14;
        *(_DWORD *)(v21 + 8) = *((_DWORD *)v14 + 2);
        *(_QWORD *)(v21 + 12) = *(_QWORD *)(v14 + 12);
        *(_DWORD *)(v21 + 20) = *((_DWORD *)v14 + 5);
        v22 = (_BYTE *)(v21 + 40);
        *(_QWORD *)(v21 + 24) = v21 + 40;
        v23 = *((_BYTE **)v14 + 3);
        v24 = *((_QWORD *)v14 + 4);
        if ( &v23[v24] && !v23 )
          goto LABEL_82;
        if ( (unsigned __int64)v24 > 0xF )
          break;
        if ( v24 == 1 )
        {
          *(_BYTE *)(v21 + 40) = *v23;
        }
        else if ( v24 )
        {
          goto LABEL_44;
        }
LABEL_17:
        *(_QWORD *)(v21 + 32) = v24;
        v22[v24] = 0;
        *(_BYTE *)(v21 + 56) = v14[56];
        ++*(_DWORD *)(v15 + 536);
LABEL_18:
        v11 += 64;
        if ( (char *)v13 == v11 )
          return a1;
      }
      v85 = *((_BYTE **)v14 + 3);
      if ( v24 < 0 )
        goto LABEL_81;
      srcd = *((void **)v14 + 4);
      v22 = (_BYTE *)operator new(v24 + 1);
      v24 = (signed __int64)srcd;
      v23 = v85;
      *(_QWORD *)(v21 + 24) = v22;
      *(_QWORD *)(v21 + 40) = srcd;
LABEL_44:
      srce = (void *)v24;
      memcpy(v22, v23, v24);
      v22 = *(_BYTE **)(v21 + 24);
      v24 = (signed __int64)srce;
      goto LABEL_17;
    }
  }
  return v2;
}
