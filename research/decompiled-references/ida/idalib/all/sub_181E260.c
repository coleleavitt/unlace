void __fastcall sub_181E260(__int64 *a1, __int64 a2, __int64 a3, int *a4, __int64 *a5)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  unsigned __int8 *v16; // rbp
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbp
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // r14
  __int64 v37; // r13
  unsigned __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // r14
  __int64 v44; // r12
  void *v45; // rdi
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // r15
  __int64 v53; // r12
  void *v54; // rdi
  __int64 v55; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v56; // [rsp+10h] [rbp-D8h] BYREF
  int v57; // [rsp+18h] [rbp-D0h]
  _QWORD v58[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v60; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+48h] [rbp-A0h]
  char v62; // [rsp+98h] [rbp-50h]
  unsigned int v63; // [rsp+A0h] [rbp-48h]
  char v64; // [rsp+A4h] [rbp-44h]

  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  sub_168B9F0((__int64)v58, a1, v8, 0x1BF5u, 0);
  if ( v62 )
  {
    sub_AE9DF0(&v60, a3, 0x10u);
    if ( v62 )
      goto LABEL_7;
    goto LABEL_13;
  }
  if ( v64 )
  {
    v11 = sub_168B9E0(v58);
    v14 = v59;
    if ( v59 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
    v56 = v14;
    v15 = sub_1587BC0(v11, &v56, v9, v10, v12, v13);
    sub_AE9DF0((unsigned __int8 **)(*v15 + 32LL * v63 + 8), a3, 0x10u);
    if ( v62 )
    {
LABEL_7:
      sub_AE9DF0(&v60, *a4, 2u);
      if ( v62 )
        goto LABEL_8;
      goto LABEL_17;
    }
LABEL_13:
    if ( !v64 )
      goto LABEL_3;
    v24 = sub_168B9E0(v58);
    v27 = v59;
    if ( v59 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
    v56 = v27;
    v28 = sub_1587BC0(v24, &v56, v22, v23, v25, v26);
    sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v63 + 8), *a4, 2u);
    if ( v62 )
    {
LABEL_8:
      v16 = v60;
      v17 = *a5;
      if ( v60 )
      {
        v18 = *((unsigned int *)v60 + 106);
        v19 = *((unsigned int *)v60 + 107);
        v20 = v18 + 1;
      }
      else
      {
        v39 = v61;
        v40 = *(_DWORD *)(v61 + 14976);
        if ( v40 )
        {
          v41 = (unsigned int)(v40 - 1);
          *(_DWORD *)(v61 + 14976) = v41;
          v16 = *(unsigned __int8 **)(v39 + 8 * v41 + 14848);
          v42 = *((unsigned int *)v16 + 134);
          *v16 = 0;
          v43 = *((_QWORD *)v16 + 66);
          *((_DWORD *)v16 + 106) = 0;
          v44 = v43 + (v42 << 6);
          if ( v43 == v44 )
          {
            v20 = 1;
            v18 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v44 -= 64;
                v45 = *(void **)(v44 + 24);
                if ( v45 == (void *)(v44 + 40) )
                  break;
                operator delete(v45);
                if ( v43 == v44 )
                  goto LABEL_28;
              }
            }
            while ( v43 != v44 );
LABEL_28:
            v18 = *((unsigned int *)v16 + 106);
            v20 = v18 + 1;
          }
          *((_DWORD *)v16 + 134) = 0;
          v19 = *((unsigned int *)v16 + 107);
        }
        else
        {
          v49 = operator new(0x3A0u);
          v19 = 8;
          v20 = 1;
          v16 = (unsigned __int8 *)v49;
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
          v18 = 0;
        }
        v60 = v16;
      }
      v56 = v17;
      LOBYTE(v57) = 1;
      if ( v20 <= v19 )
        goto LABEL_11;
      goto LABEL_23;
    }
LABEL_17:
    if ( !v64 )
      goto LABEL_3;
    v31 = sub_168B9E0(v58);
    v34 = v59;
    if ( v59 )
      v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
    v55 = v34;
    v35 = sub_1587BC0(v31, &v55, v29, v30, v32, v33);
    v36 = *a5;
    v37 = *v35 + 32LL * v63;
    v16 = *(unsigned __int8 **)(v37 + 8);
    if ( v16 )
    {
      v18 = *((unsigned int *)v16 + 106);
      v38 = *((unsigned int *)v16 + 107);
      v20 = v18 + 1;
    }
    else
    {
      v46 = *(_QWORD *)(v37 + 16);
      v47 = *(_DWORD *)(v46 + 14976);
      if ( v47 )
      {
        v50 = (unsigned int)(v47 - 1);
        *(_DWORD *)(v46 + 14976) = v50;
        v16 = *(unsigned __int8 **)(v46 + 8 * v50 + 14848);
        v51 = *((unsigned int *)v16 + 134);
        *v16 = 0;
        v52 = *((_QWORD *)v16 + 66);
        *((_DWORD *)v16 + 106) = 0;
        v53 = v52 + (v51 << 6);
        if ( v52 == v53 )
        {
          v20 = 1;
          v18 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v53 -= 64;
              v54 = *(void **)(v53 + 24);
              if ( v54 == (void *)(v53 + 40) )
                break;
              operator delete(v54);
              if ( v52 == v53 )
                goto LABEL_40;
            }
          }
          while ( v52 != v53 );
LABEL_40:
          v18 = *((unsigned int *)v16 + 106);
          v20 = v18 + 1;
        }
        *((_DWORD *)v16 + 134) = 0;
        v38 = *((unsigned int *)v16 + 107);
      }
      else
      {
        v48 = operator new(0x3A0u);
        v38 = 8;
        v20 = 1;
        v16 = (unsigned __int8 *)v48;
        *(_BYTE *)v48 = 0;
        *(_QWORD *)(v48 + 96) = v48 + 112;
        *(_QWORD *)(v48 + 128) = v48 + 144;
        *(_QWORD *)(v48 + 160) = v48 + 176;
        *(_QWORD *)(v48 + 192) = v48 + 208;
        *(_QWORD *)(v48 + 224) = v48 + 240;
        *(_QWORD *)(v48 + 256) = v48 + 272;
        *(_QWORD *)(v48 + 288) = v48 + 304;
        *(_QWORD *)(v48 + 320) = v48 + 336;
        *(_QWORD *)(v48 + 352) = v48 + 368;
        *(_QWORD *)(v48 + 384) = v48 + 400;
        *(_QWORD *)(v48 + 416) = v48 + 432;
        *(_QWORD *)(v48 + 104) = 0;
        *(_BYTE *)(v48 + 112) = 0;
        *(_QWORD *)(v48 + 136) = 0;
        *(_BYTE *)(v48 + 144) = 0;
        *(_QWORD *)(v48 + 168) = 0;
        *(_BYTE *)(v48 + 176) = 0;
        *(_QWORD *)(v48 + 200) = 0;
        *(_BYTE *)(v48 + 208) = 0;
        *(_QWORD *)(v48 + 232) = 0;
        *(_BYTE *)(v48 + 240) = 0;
        *(_QWORD *)(v48 + 264) = 0;
        *(_BYTE *)(v48 + 272) = 0;
        *(_QWORD *)(v48 + 296) = 0;
        *(_BYTE *)(v48 + 304) = 0;
        *(_QWORD *)(v48 + 328) = 0;
        *(_BYTE *)(v48 + 336) = 0;
        *(_QWORD *)(v48 + 360) = 0;
        *(_BYTE *)(v48 + 368) = 0;
        *(_QWORD *)(v48 + 392) = 0;
        *(_BYTE *)(v48 + 400) = 0;
        *(_QWORD *)(v48 + 424) = 0x800000000LL;
        *(_QWORD *)(v48 + 528) = v48 + 544;
        *(_QWORD *)(v48 + 536) = 0x600000000LL;
        v18 = 0;
      }
      *(_QWORD *)(v37 + 8) = v16;
    }
    v56 = v36;
    LOBYTE(v57) = 1;
    if ( v20 <= v38 )
      goto LABEL_11;
LABEL_23:
    sub_2237220(v16 + 416, v16 + 432, v20, 12);
    v18 = *((unsigned int *)v16 + 106);
LABEL_11:
    v21 = *((_QWORD *)v16 + 52) + 12 * v18;
    *(_QWORD *)v21 = v56;
    *(_DWORD *)(v21 + 8) = v57;
    ++*((_DWORD *)v16 + 106);
  }
LABEL_3:
  sub_15F7200(v58);
}
