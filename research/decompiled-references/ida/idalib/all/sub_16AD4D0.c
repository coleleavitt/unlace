void __fastcall sub_16AD4D0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  __int64 *v5; // rsi
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r15
  unsigned __int8 *v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // r15
  void *v34; // rdi
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  void *v43; // rdi
  __int64 v44; // [rsp+0h] [rbp-F8h]
  __int64 v45; // [rsp+0h] [rbp-F8h]
  __int64 v46; // [rsp+8h] [rbp-F0h]
  __int64 v47; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v48; // [rsp+20h] [rbp-D8h] BYREF
  int v49; // [rsp+28h] [rbp-D0h]
  _QWORD v50[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v52; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+58h] [rbp-A0h]
  char v54; // [rsp+A8h] [rbp-50h]
  unsigned int v55; // [rsp+B0h] [rbp-48h]
  char v56; // [rsp+B4h] [rbp-44h]

  v5 = (__int64 *)(a2 + 8);
  sub_168B9F0((__int64)v50, v5, a3, *(_DWORD *)(a1 + 8), 0);
  v7 = sub_EEC8C0(**(_QWORD **)(a1 + 16), (__int64)v5, a5);
  if ( v54 )
  {
    v23 = v52;
    if ( v52 )
    {
LABEL_11:
      v24 = *((unsigned int *)v23 + 106);
      v25 = *((unsigned int *)v23 + 107);
      v26 = v24 + 1;
      goto LABEL_12;
    }
    v28 = v53;
    v29 = *(_DWORD *)(v53 + 14976);
    if ( v29 )
    {
      v30 = (unsigned int)(v29 - 1);
      *(_DWORD *)(v53 + 14976) = v30;
      v23 = *(unsigned __int8 **)(v28 + 8 * v30 + 14848);
      v31 = *((unsigned int *)v23 + 134);
      *v23 = 0;
      v32 = *((_QWORD *)v23 + 66);
      *((_DWORD *)v23 + 106) = 0;
      v33 = v32 + (v31 << 6);
      if ( v32 == v33 )
      {
        v26 = 1;
        v24 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v33 -= 64;
            v34 = *(void **)(v33 + 24);
            if ( v34 == (void *)(v33 + 40) )
              break;
            v44 = v32;
            operator delete(v34);
            v32 = v44;
            if ( v44 == v33 )
              goto LABEL_21;
          }
        }
        while ( v32 != v33 );
LABEL_21:
        v24 = *((unsigned int *)v23 + 106);
        v26 = v24 + 1;
      }
      *((_DWORD *)v23 + 134) = 0;
      v25 = *((unsigned int *)v23 + 107);
    }
    else
    {
      v38 = operator new(0x3A0u);
      v25 = 8;
      v26 = 1;
      v23 = (unsigned __int8 *)v38;
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
      v24 = 0;
    }
    v52 = v23;
  }
  else
  {
    if ( !v56 )
      goto LABEL_3;
    v17 = sub_168B9E0(v50);
    v20 = v51;
    if ( v51 )
      v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
    v47 = v20;
    v21 = sub_1587BC0(v17, &v47, v15, v16, v18, v19);
    v22 = *v21 + 32LL * v55;
    v23 = *(unsigned __int8 **)(v22 + 8);
    if ( v23 )
      goto LABEL_11;
    v35 = *(_QWORD *)(v22 + 16);
    v36 = *(_DWORD *)(v35 + 14976);
    if ( v36 )
    {
      v39 = (unsigned int)(v36 - 1);
      *(_DWORD *)(v35 + 14976) = v39;
      v23 = *(unsigned __int8 **)(v35 + 8 * v39 + 14848);
      v40 = *((unsigned int *)v23 + 134);
      *v23 = 0;
      v41 = *((_QWORD *)v23 + 66);
      *((_DWORD *)v23 + 106) = 0;
      v42 = v41 + (v40 << 6);
      if ( v41 == v42 )
      {
        v26 = 1;
        v24 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v42 -= 64;
            v43 = *(void **)(v42 + 24);
            if ( v43 == (void *)(v42 + 40) )
              break;
            v46 = v42;
            v45 = v41;
            operator delete(v43);
            v41 = v45;
            v42 = v46;
            if ( v45 == v46 )
              goto LABEL_33;
          }
        }
        while ( v41 != v42 );
LABEL_33:
        v24 = *((unsigned int *)v23 + 106);
        v26 = v24 + 1;
      }
      *((_DWORD *)v23 + 134) = 0;
      v25 = *((unsigned int *)v23 + 107);
    }
    else
    {
      v37 = operator new(0x3A0u);
      v25 = 8;
      v26 = 1;
      v23 = (unsigned __int8 *)v37;
      *(_BYTE *)v37 = 0;
      *(_QWORD *)(v37 + 96) = v37 + 112;
      *(_QWORD *)(v37 + 128) = v37 + 144;
      *(_QWORD *)(v37 + 160) = v37 + 176;
      *(_QWORD *)(v37 + 192) = v37 + 208;
      *(_QWORD *)(v37 + 224) = v37 + 240;
      *(_QWORD *)(v37 + 256) = v37 + 272;
      *(_QWORD *)(v37 + 288) = v37 + 304;
      *(_QWORD *)(v37 + 320) = v37 + 336;
      *(_QWORD *)(v37 + 352) = v37 + 368;
      *(_QWORD *)(v37 + 384) = v37 + 400;
      *(_QWORD *)(v37 + 416) = v37 + 432;
      *(_QWORD *)(v37 + 104) = 0;
      *(_BYTE *)(v37 + 112) = 0;
      *(_QWORD *)(v37 + 136) = 0;
      *(_BYTE *)(v37 + 144) = 0;
      *(_QWORD *)(v37 + 168) = 0;
      *(_BYTE *)(v37 + 176) = 0;
      *(_QWORD *)(v37 + 200) = 0;
      *(_BYTE *)(v37 + 208) = 0;
      *(_QWORD *)(v37 + 232) = 0;
      *(_BYTE *)(v37 + 240) = 0;
      *(_QWORD *)(v37 + 264) = 0;
      *(_BYTE *)(v37 + 272) = 0;
      *(_QWORD *)(v37 + 296) = 0;
      *(_BYTE *)(v37 + 304) = 0;
      *(_QWORD *)(v37 + 328) = 0;
      *(_BYTE *)(v37 + 336) = 0;
      *(_QWORD *)(v37 + 360) = 0;
      *(_BYTE *)(v37 + 368) = 0;
      *(_QWORD *)(v37 + 392) = 0;
      *(_BYTE *)(v37 + 400) = 0;
      *(_QWORD *)(v37 + 424) = 0x800000000LL;
      *(_QWORD *)(v37 + 528) = v37 + 544;
      *(_QWORD *)(v37 + 536) = 0x600000000LL;
      v24 = 0;
    }
    *(_QWORD *)(v22 + 8) = v23;
  }
LABEL_12:
  v48 = v7;
  LOBYTE(v49) = 1;
  if ( v26 > v25 )
  {
    sub_2237220(v23 + 416, v23 + 432, v26, 12);
    v24 = *((unsigned int *)v23 + 106);
  }
  v27 = *((_QWORD *)v23 + 52) + 12 * v24;
  *(_QWORD *)v27 = v48;
  *(_DWORD *)(v27 + 8) = v49;
  LOBYTE(v27) = v54;
  ++*((_DWORD *)v23 + 106);
  if ( (_BYTE)v27 )
  {
    sub_AE9DF0(&v52, a4, 8u);
    goto LABEL_4;
  }
LABEL_3:
  if ( v56 )
  {
    v10 = sub_168B9E0(v50);
    v13 = v51;
    if ( v51 )
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 32LL))(v51);
    v48 = v13;
    v14 = sub_1587BC0(v10, &v48, v8, v9, v11, v12);
    sub_AE9DF0((unsigned __int8 **)(*v14 + 32LL * v55 + 8), a4, 8u);
  }
LABEL_4:
  sub_15F7200(v50);
}
