void __fastcall sub_1A8E3C0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int8 *v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r15
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // r14
  __int64 v38; // r13
  unsigned __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // r12
  __int64 v44; // r14
  __int64 v45; // r12
  void *v46; // rdi
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // r15
  __int64 v54; // r12
  void *v55; // rdi
  __int64 v56; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v57; // [rsp+10h] [rbp-D8h] BYREF
  int v58; // [rsp+18h] [rbp-D0h]
  _QWORD v59[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v61; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+48h] [rbp-A0h]
  char v63; // [rsp+98h] [rbp-50h]
  unsigned int v64; // [rsp+A0h] [rbp-48h]
  char v65; // [rsp+A4h] [rbp-44h]

  v8 = sub_C00A40(a2, a2, a3, a4, a5);
  v9 = a1 + 8;
  sub_168B9F0((__int64)v59, (__int64 *)(a1 + 8), v8, 0x1969u, 0);
  if ( v63 )
  {
    v9 = *(_QWORD *)a3;
    sub_AE9DF0(&v61, *(_QWORD *)a3, 0xAu);
  }
  else if ( v65 )
  {
    v27 = sub_168B9E0(v59);
    v28 = v60;
    if ( v60 )
      v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
    v57 = v28;
    v29 = sub_1587BC0(v27, &v57, v23, v24, v25, v26);
    v9 = *(_QWORD *)a3;
    sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v64 + 8), *(_QWORD *)a3, 0xAu);
  }
  v57 = sub_EEC8C0(a2, v9, a6);
  sub_1587DB0((__int64)v59, &v57);
  sub_15F7200(v59);
  sub_168B9F0((__int64)v59, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 16), 0x1699u, 0);
  if ( v63 )
  {
    sub_AE9DF0(&v61, *(unsigned __int8 *)(a3 + 20), 2u);
    if ( v63 )
      goto LABEL_9;
    goto LABEL_17;
  }
  if ( v65 )
  {
    v12 = sub_168B9E0(v59);
    v15 = v60;
    if ( v60 )
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
    v57 = v15;
    v16 = sub_1587BC0(v12, &v57, v10, v11, v13, v14);
    sub_AE9DF0((unsigned __int8 **)(*v16 + 32LL * v64 + 8), *(unsigned __int8 *)(a3 + 20), 2u);
    if ( v63 )
    {
LABEL_9:
      v17 = v61;
      v18 = *(_QWORD *)(a3 + 8);
      if ( v61 )
      {
        v19 = *((unsigned int *)v61 + 106);
        v20 = *((unsigned int *)v61 + 107);
        v21 = v19 + 1;
      }
      else
      {
        v40 = v62;
        v41 = *(_DWORD *)(v62 + 14976);
        if ( v41 )
        {
          v42 = (unsigned int)(v41 - 1);
          *(_DWORD *)(v62 + 14976) = v42;
          v17 = *(unsigned __int8 **)(v40 + 8 * v42 + 14848);
          v43 = *((unsigned int *)v17 + 134);
          *v17 = 0;
          v44 = *((_QWORD *)v17 + 66);
          *((_DWORD *)v17 + 106) = 0;
          v45 = v44 + (v43 << 6);
          if ( v44 == v45 )
          {
            v21 = 1;
            v19 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v45 -= 64;
                v46 = *(void **)(v45 + 24);
                if ( v46 == (void *)(v45 + 40) )
                  break;
                operator delete(v46);
                if ( v44 == v45 )
                  goto LABEL_29;
              }
            }
            while ( v44 != v45 );
LABEL_29:
            v19 = *((unsigned int *)v17 + 106);
            v21 = v19 + 1;
          }
          *((_DWORD *)v17 + 134) = 0;
          v20 = *((unsigned int *)v17 + 107);
        }
        else
        {
          v50 = operator new(0x3A0u);
          v20 = 8;
          v21 = 1;
          v17 = (unsigned __int8 *)v50;
          *(_BYTE *)v50 = 0;
          *(_QWORD *)(v50 + 96) = v50 + 112;
          *(_QWORD *)(v50 + 128) = v50 + 144;
          *(_QWORD *)(v50 + 160) = v50 + 176;
          *(_QWORD *)(v50 + 192) = v50 + 208;
          *(_QWORD *)(v50 + 224) = v50 + 240;
          *(_QWORD *)(v50 + 256) = v50 + 272;
          *(_QWORD *)(v50 + 288) = v50 + 304;
          *(_QWORD *)(v50 + 320) = v50 + 336;
          *(_QWORD *)(v50 + 352) = v50 + 368;
          *(_QWORD *)(v50 + 384) = v50 + 400;
          *(_QWORD *)(v50 + 416) = v50 + 432;
          *(_QWORD *)(v50 + 104) = 0;
          *(_BYTE *)(v50 + 112) = 0;
          *(_QWORD *)(v50 + 136) = 0;
          *(_BYTE *)(v50 + 144) = 0;
          *(_QWORD *)(v50 + 168) = 0;
          *(_BYTE *)(v50 + 176) = 0;
          *(_QWORD *)(v50 + 200) = 0;
          *(_BYTE *)(v50 + 208) = 0;
          *(_QWORD *)(v50 + 232) = 0;
          *(_BYTE *)(v50 + 240) = 0;
          *(_QWORD *)(v50 + 264) = 0;
          *(_BYTE *)(v50 + 272) = 0;
          *(_QWORD *)(v50 + 296) = 0;
          *(_BYTE *)(v50 + 304) = 0;
          *(_QWORD *)(v50 + 328) = 0;
          *(_BYTE *)(v50 + 336) = 0;
          *(_QWORD *)(v50 + 360) = 0;
          *(_BYTE *)(v50 + 368) = 0;
          *(_QWORD *)(v50 + 392) = 0;
          *(_BYTE *)(v50 + 400) = 0;
          *(_QWORD *)(v50 + 424) = 0x800000000LL;
          *(_QWORD *)(v50 + 528) = v50 + 544;
          *(_QWORD *)(v50 + 536) = 0x600000000LL;
          v19 = 0;
        }
        v61 = v17;
      }
      v57 = v18;
      LOBYTE(v58) = 1;
      if ( v21 <= v20 )
        goto LABEL_12;
      goto LABEL_23;
    }
LABEL_17:
    if ( !v65 )
      goto LABEL_5;
    v32 = sub_168B9E0(v59);
    v35 = v60;
    if ( v60 )
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 32LL))(v60);
    v56 = v35;
    v36 = sub_1587BC0(v32, &v56, v30, v31, v33, v34);
    v37 = *(_QWORD *)(a3 + 8);
    v38 = *v36 + 32LL * v64;
    v17 = *(unsigned __int8 **)(v38 + 8);
    if ( v17 )
    {
      v19 = *((unsigned int *)v17 + 106);
      v39 = *((unsigned int *)v17 + 107);
      v21 = v19 + 1;
    }
    else
    {
      v47 = *(_QWORD *)(v38 + 16);
      v48 = *(_DWORD *)(v47 + 14976);
      if ( v48 )
      {
        v51 = (unsigned int)(v48 - 1);
        *(_DWORD *)(v47 + 14976) = v51;
        v17 = *(unsigned __int8 **)(v47 + 8 * v51 + 14848);
        v52 = *((unsigned int *)v17 + 134);
        *v17 = 0;
        v53 = *((_QWORD *)v17 + 66);
        *((_DWORD *)v17 + 106) = 0;
        v54 = v53 + (v52 << 6);
        if ( v53 == v54 )
        {
          v21 = 1;
          v19 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v54 -= 64;
              v55 = *(void **)(v54 + 24);
              if ( v55 == (void *)(v54 + 40) )
                break;
              operator delete(v55);
              if ( v53 == v54 )
                goto LABEL_41;
            }
          }
          while ( v53 != v54 );
LABEL_41:
          v19 = *((unsigned int *)v17 + 106);
          v21 = v19 + 1;
        }
        *((_DWORD *)v17 + 134) = 0;
        v39 = *((unsigned int *)v17 + 107);
      }
      else
      {
        v49 = operator new(0x3A0u);
        v39 = 8;
        v21 = 1;
        v17 = (unsigned __int8 *)v49;
        *(_BYTE *)v49 = 0;
        *(_QWORD *)(v49 + 96) = v49 + 112;
        *(_QWORD *)(v49 + 128) = v49 + 144;
        *(_QWORD *)(v49 + 160) = v49 + 176;
        *(_QWORD *)(v49 + 192) = v49 + 208;
        *(_QWORD *)(v49 + 224) = v49 + 240;
        *(_QWORD *)(v49 + 256) = v49 + 272;
        *(_QWORD *)(v49 + 288) = v49 + 304;
        *(_QWORD *)(v49 + 320) = v49 + 336;
        *(_QWORD *)(v49 + 352) = v49 + 368;
        *(_QWORD *)(v49 + 384) = v49 + 400;
        *(_QWORD *)(v49 + 416) = v49 + 432;
        *(_QWORD *)(v49 + 104) = 0;
        *(_BYTE *)(v49 + 112) = 0;
        *(_QWORD *)(v49 + 136) = 0;
        *(_BYTE *)(v49 + 144) = 0;
        *(_QWORD *)(v49 + 168) = 0;
        *(_BYTE *)(v49 + 176) = 0;
        *(_QWORD *)(v49 + 200) = 0;
        *(_BYTE *)(v49 + 208) = 0;
        *(_QWORD *)(v49 + 232) = 0;
        *(_BYTE *)(v49 + 240) = 0;
        *(_QWORD *)(v49 + 264) = 0;
        *(_BYTE *)(v49 + 272) = 0;
        *(_QWORD *)(v49 + 296) = 0;
        *(_BYTE *)(v49 + 304) = 0;
        *(_QWORD *)(v49 + 328) = 0;
        *(_BYTE *)(v49 + 336) = 0;
        *(_QWORD *)(v49 + 360) = 0;
        *(_BYTE *)(v49 + 368) = 0;
        *(_QWORD *)(v49 + 392) = 0;
        *(_BYTE *)(v49 + 400) = 0;
        *(_QWORD *)(v49 + 424) = 0x800000000LL;
        *(_QWORD *)(v49 + 528) = v49 + 544;
        *(_QWORD *)(v49 + 536) = 0x600000000LL;
        v19 = 0;
      }
      *(_QWORD *)(v38 + 8) = v17;
    }
    v57 = v37;
    LOBYTE(v58) = 1;
    if ( v21 <= v39 )
      goto LABEL_12;
LABEL_23:
    sub_2237220(v17 + 416, v17 + 432, v21, 12);
    v19 = *((unsigned int *)v17 + 106);
LABEL_12:
    v22 = *((_QWORD *)v17 + 52) + 12 * v19;
    *(_QWORD *)v22 = v57;
    *(_DWORD *)(v22 + 8) = v58;
    ++*((_DWORD *)v17 + 106);
  }
LABEL_5:
  sub_15F7200(v59);
}
