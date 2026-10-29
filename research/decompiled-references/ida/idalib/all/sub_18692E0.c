_BYTE *__fastcall sub_18692E0(__int64 a1, __int64 a2, _BYTE *a3, signed __int64 a4, unsigned int a5)
{
  _BYTE *result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r14
  unsigned __int8 *v18; // rbp
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rax
  _QWORD *v31; // rax
  char v32; // al
  __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // r14
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r15
  __int64 v44; // rdx
  __int64 v45; // r15
  void *v46; // rdi
  __int64 v47; // [rsp+8h] [rbp-F0h]
  __int64 v48; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+20h] [rbp-D8h] BYREF
  int v50; // [rsp+28h] [rbp-D0h]
  _QWORD v51[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v53; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-A0h]
  char v55; // [rsp+A8h] [rbp-50h]
  unsigned int v56; // [rsp+B0h] [rbp-48h]
  char v57; // [rsp+B4h] [rbp-44h]

  sub_168B9F0((__int64)v51, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), a5, *(_DWORD *)a1, 0);
  if ( v55 )
  {
    sub_AEC220(&v53, a3, a4);
    v32 = v55;
  }
  else
  {
    if ( !v57 )
      goto LABEL_3;
    v29 = sub_168B9E0(v51);
    v30 = v52;
    if ( v52 )
      v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
    v49 = v30;
    v31 = sub_1587BC0(v29, &v49, v25, v26, v27, v28);
    sub_AEC220((unsigned __int8 **)(*v31 + 32LL * v56 + 8), a3, a4);
    v32 = v55;
  }
  if ( v32 )
  {
    v18 = v53;
    if ( !v53 )
    {
      v34 = v54;
      v35 = *(_DWORD *)(v54 + 14976);
      if ( v35 )
      {
        v36 = (unsigned int)(v35 - 1);
        *(_DWORD *)(v54 + 14976) = v36;
        v18 = *(unsigned __int8 **)(v34 + 8 * v36 + 14848);
        v37 = *((unsigned int *)v18 + 134);
        *v18 = 0;
        v38 = *((_QWORD *)v18 + 66);
        *((_DWORD *)v18 + 106) = 0;
        v39 = v38 + (v37 << 6);
        if ( v38 == v39 )
        {
          v23 = 1;
          v24 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v39 -= 64;
              v40 = *(void **)(v39 + 24);
              if ( v40 == (void *)(v39 + 40) )
                break;
              operator delete(v40);
              if ( v38 == v39 )
                goto LABEL_25;
            }
          }
          while ( v38 != v39 );
LABEL_25:
          v24 = *((unsigned int *)v18 + 106);
          v23 = v24 + 1;
        }
        *((_DWORD *)v18 + 134) = 0;
        v22 = *((unsigned int *)v18 + 107);
      }
      else
      {
        v41 = operator new(0x3A0u);
        v22 = 8;
        v23 = 1;
        v18 = (unsigned __int8 *)v41;
        *(_BYTE *)v41 = 0;
        *(_QWORD *)(v41 + 96) = v41 + 112;
        *(_QWORD *)(v41 + 128) = v41 + 144;
        *(_QWORD *)(v41 + 160) = v41 + 176;
        *(_QWORD *)(v41 + 192) = v41 + 208;
        *(_QWORD *)(v41 + 224) = v41 + 240;
        *(_QWORD *)(v41 + 256) = v41 + 272;
        *(_QWORD *)(v41 + 288) = v41 + 304;
        *(_QWORD *)(v41 + 320) = v41 + 336;
        *(_QWORD *)(v41 + 352) = v41 + 368;
        *(_QWORD *)(v41 + 384) = v41 + 400;
        *(_QWORD *)(v41 + 416) = v41 + 432;
        *(_QWORD *)(v41 + 104) = 0;
        *(_BYTE *)(v41 + 112) = 0;
        *(_QWORD *)(v41 + 136) = 0;
        *(_BYTE *)(v41 + 144) = 0;
        *(_QWORD *)(v41 + 168) = 0;
        *(_BYTE *)(v41 + 176) = 0;
        *(_QWORD *)(v41 + 200) = 0;
        *(_BYTE *)(v41 + 208) = 0;
        *(_QWORD *)(v41 + 232) = 0;
        *(_BYTE *)(v41 + 240) = 0;
        *(_QWORD *)(v41 + 264) = 0;
        *(_BYTE *)(v41 + 272) = 0;
        *(_QWORD *)(v41 + 296) = 0;
        *(_BYTE *)(v41 + 304) = 0;
        *(_QWORD *)(v41 + 328) = 0;
        *(_BYTE *)(v41 + 336) = 0;
        *(_QWORD *)(v41 + 360) = 0;
        *(_BYTE *)(v41 + 368) = 0;
        *(_QWORD *)(v41 + 392) = 0;
        *(_BYTE *)(v41 + 400) = 0;
        *(_QWORD *)(v41 + 424) = 0x800000000LL;
        *(_QWORD *)(v41 + 528) = v41 + 544;
        *(_QWORD *)(v41 + 536) = 0x600000000LL;
        v24 = 0;
      }
      v53 = v18;
      goto LABEL_17;
    }
    goto LABEL_16;
  }
LABEL_3:
  if ( !v57 )
    goto LABEL_4;
  v12 = sub_168B9E0(v51);
  v15 = v52;
  if ( v52 )
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
  v48 = v15;
  v16 = sub_1587BC0(v12, &v48, v10, v11, v13, v14);
  v17 = *v16 + 32LL * v56;
  v18 = *(unsigned __int8 **)(v17 + 8);
  if ( !v18 )
  {
    v19 = *(_QWORD *)(v17 + 16);
    v20 = *(_DWORD *)(v19 + 14976);
    if ( v20 )
    {
      v42 = (unsigned int)(v20 - 1);
      *(_DWORD *)(v19 + 14976) = v42;
      v18 = *(unsigned __int8 **)(v19 + 8 * v42 + 14848);
      v43 = *((unsigned int *)v18 + 134);
      *v18 = 0;
      v44 = *((_QWORD *)v18 + 66);
      *((_DWORD *)v18 + 106) = 0;
      v45 = v44 + (v43 << 6);
      if ( v44 == v45 )
      {
        v23 = 1;
        v24 = 0;
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
            v47 = v44;
            operator delete(v46);
            v44 = v47;
            if ( v47 == v45 )
              goto LABEL_34;
          }
        }
        while ( v44 != v45 );
LABEL_34:
        v24 = *((unsigned int *)v18 + 106);
        v23 = v24 + 1;
      }
      *((_DWORD *)v18 + 134) = 0;
      v22 = *((unsigned int *)v18 + 107);
    }
    else
    {
      v21 = operator new(0x3A0u);
      v22 = 8;
      v23 = 1;
      v18 = (unsigned __int8 *)v21;
      *(_BYTE *)v21 = 0;
      *(_QWORD *)(v21 + 96) = v21 + 112;
      *(_QWORD *)(v21 + 128) = v21 + 144;
      *(_QWORD *)(v21 + 160) = v21 + 176;
      *(_QWORD *)(v21 + 192) = v21 + 208;
      *(_QWORD *)(v21 + 224) = v21 + 240;
      *(_QWORD *)(v21 + 256) = v21 + 272;
      *(_QWORD *)(v21 + 288) = v21 + 304;
      *(_QWORD *)(v21 + 320) = v21 + 336;
      *(_QWORD *)(v21 + 352) = v21 + 368;
      *(_QWORD *)(v21 + 384) = v21 + 400;
      *(_QWORD *)(v21 + 416) = v21 + 432;
      *(_QWORD *)(v21 + 104) = 0;
      *(_BYTE *)(v21 + 112) = 0;
      *(_QWORD *)(v21 + 136) = 0;
      *(_BYTE *)(v21 + 144) = 0;
      *(_QWORD *)(v21 + 168) = 0;
      *(_BYTE *)(v21 + 176) = 0;
      *(_QWORD *)(v21 + 200) = 0;
      *(_BYTE *)(v21 + 208) = 0;
      *(_QWORD *)(v21 + 232) = 0;
      *(_BYTE *)(v21 + 240) = 0;
      *(_QWORD *)(v21 + 264) = 0;
      *(_BYTE *)(v21 + 272) = 0;
      *(_QWORD *)(v21 + 296) = 0;
      *(_BYTE *)(v21 + 304) = 0;
      *(_QWORD *)(v21 + 328) = 0;
      *(_BYTE *)(v21 + 336) = 0;
      *(_QWORD *)(v21 + 360) = 0;
      *(_BYTE *)(v21 + 368) = 0;
      *(_QWORD *)(v21 + 392) = 0;
      *(_BYTE *)(v21 + 400) = 0;
      *(_QWORD *)(v21 + 424) = 0x800000000LL;
      *(_QWORD *)(v21 + 528) = v21 + 544;
      *(_QWORD *)(v21 + 536) = 0x600000000LL;
      v24 = 0;
    }
    *(_QWORD *)(v17 + 8) = v18;
    goto LABEL_17;
  }
LABEL_16:
  v24 = *((unsigned int *)v18 + 106);
  v22 = *((unsigned int *)v18 + 107);
  v23 = v24 + 1;
LABEL_17:
  LODWORD(v49) = a5;
  HIDWORD(v49) = a5;
  LOBYTE(v50) = 1;
  if ( v23 > v22 )
  {
    sub_2237220(v18 + 416, v18 + 432, v23, 12);
    v24 = *((unsigned int *)v18 + 106);
  }
  v33 = *((_QWORD *)v18 + 52) + 12 * v24;
  *(_QWORD *)v33 = v49;
  *(_DWORD *)(v33 + 8) = v50;
  ++*((_DWORD *)v18 + 106);
LABEL_4:
  sub_15F7200(v51);
  result = *(_BYTE **)(a1 + 16);
  *result = 1;
  return result;
}
