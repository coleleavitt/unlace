__int64 __fastcall sub_18E61D0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  __int64 *v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // r13d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // r14
  void *v31; // rdi
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r15
  __int64 v38; // rdx
  __int64 v39; // r15
  void *v40; // rdi
  __int64 v41; // [rsp+8h] [rbp-F0h]
  __int64 v42; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v43; // [rsp+24h] [rbp-D4h]
  int v44; // [rsp+2Ch] [rbp-CCh]
  _QWORD v45[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-B8h]
  __int64 v47; // [rsp+50h] [rbp-A8h]
  __int64 v48; // [rsp+58h] [rbp-A0h]
  char v49; // [rsp+A8h] [rbp-50h]
  unsigned int v50; // [rsp+B0h] [rbp-48h]
  char v51; // [rsp+B4h] [rbp-44h]

  v6 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  v7 = sub_C00A40(a2, a2, a3, a4, a5);
  sub_168B9F0((__int64)v45, v6, v7, 0x102Bu, 0);
  v8 = sub_EEB7E0(*(_QWORD *)(a1 + 8), (__int64)v6, a6);
  v9 = *(_DWORD *)(a1 + 16);
  v10 = v8;
  if ( v49 )
  {
    v20 = v47;
    if ( !v47 )
    {
      v25 = v48;
      v26 = *(_DWORD *)(v48 + 14976);
      if ( v26 )
      {
        v27 = (unsigned int)(v26 - 1);
        *(_DWORD *)(v48 + 14976) = v27;
        v20 = *(_QWORD *)(v25 + 8 * v27 + 14848);
        v28 = *(unsigned int *)(v20 + 536);
        *(_BYTE *)v20 = 0;
        v29 = *(_QWORD *)(v20 + 528);
        *(_DWORD *)(v20 + 424) = 0;
        v30 = v29 + (v28 << 6);
        if ( v29 == v30 )
        {
          v23 = 1;
          v21 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v30 -= 64;
              v31 = *(void **)(v30 + 24);
              if ( v31 == (void *)(v30 + 40) )
                break;
              operator delete(v31);
              if ( v29 == v30 )
                goto LABEL_16;
            }
          }
          while ( v29 != v30 );
LABEL_16:
          v21 = *(unsigned int *)(v20 + 424);
          v23 = v21 + 1;
        }
        *(_DWORD *)(v20 + 536) = 0;
        v22 = *(unsigned int *)(v20 + 428);
      }
      else
      {
        v35 = operator new(0x3A0u);
        v22 = 8;
        v23 = 1;
        v20 = v35;
        *(_BYTE *)v35 = 0;
        *(_QWORD *)(v35 + 96) = v35 + 112;
        *(_QWORD *)(v35 + 128) = v35 + 144;
        *(_QWORD *)(v35 + 160) = v35 + 176;
        *(_QWORD *)(v35 + 192) = v35 + 208;
        *(_QWORD *)(v35 + 224) = v35 + 240;
        *(_QWORD *)(v35 + 256) = v35 + 272;
        *(_QWORD *)(v35 + 288) = v35 + 304;
        *(_QWORD *)(v35 + 320) = v35 + 336;
        *(_QWORD *)(v35 + 352) = v35 + 368;
        *(_QWORD *)(v35 + 384) = v35 + 400;
        *(_QWORD *)(v35 + 416) = v35 + 432;
        *(_QWORD *)(v35 + 104) = 0;
        *(_BYTE *)(v35 + 112) = 0;
        *(_QWORD *)(v35 + 136) = 0;
        *(_BYTE *)(v35 + 144) = 0;
        *(_QWORD *)(v35 + 168) = 0;
        *(_BYTE *)(v35 + 176) = 0;
        *(_QWORD *)(v35 + 200) = 0;
        *(_BYTE *)(v35 + 208) = 0;
        *(_QWORD *)(v35 + 232) = 0;
        *(_BYTE *)(v35 + 240) = 0;
        *(_QWORD *)(v35 + 264) = 0;
        *(_BYTE *)(v35 + 272) = 0;
        *(_QWORD *)(v35 + 296) = 0;
        *(_BYTE *)(v35 + 304) = 0;
        *(_QWORD *)(v35 + 328) = 0;
        *(_BYTE *)(v35 + 336) = 0;
        *(_QWORD *)(v35 + 360) = 0;
        *(_BYTE *)(v35 + 368) = 0;
        *(_QWORD *)(v35 + 392) = 0;
        *(_BYTE *)(v35 + 400) = 0;
        *(_QWORD *)(v35 + 424) = 0x800000000LL;
        *(_QWORD *)(v35 + 528) = v35 + 544;
        *(_QWORD *)(v35 + 536) = 0x600000000LL;
        v21 = 0;
      }
      v47 = v20;
      goto LABEL_8;
    }
  }
  else
  {
    if ( !v51 )
      goto LABEL_3;
    v14 = sub_168B9E0(v45);
    v17 = v46;
    if ( v46 )
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
    v42 = v17;
    v18 = sub_1587BC0(v14, &v42, v12, v13, v15, v16);
    v19 = *v18 + 32LL * v50;
    v20 = *(_QWORD *)(v19 + 8);
    if ( !v20 )
    {
      v32 = *(_QWORD *)(v19 + 16);
      v33 = *(_DWORD *)(v32 + 14976);
      if ( v33 )
      {
        v36 = (unsigned int)(v33 - 1);
        *(_DWORD *)(v32 + 14976) = v36;
        v20 = *(_QWORD *)(v32 + 8 * v36 + 14848);
        v37 = *(unsigned int *)(v20 + 536);
        *(_BYTE *)v20 = 0;
        v38 = *(_QWORD *)(v20 + 528);
        *(_DWORD *)(v20 + 424) = 0;
        v39 = v38 + (v37 << 6);
        if ( v38 == v39 )
        {
          v23 = 1;
          v21 = 0;
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
              v41 = v38;
              operator delete(v40);
              v38 = v41;
              if ( v41 == v39 )
                goto LABEL_28;
            }
          }
          while ( v38 != v39 );
LABEL_28:
          v21 = *(unsigned int *)(v20 + 424);
          v23 = v21 + 1;
        }
        *(_DWORD *)(v20 + 536) = 0;
        v22 = *(unsigned int *)(v20 + 428);
      }
      else
      {
        v34 = operator new(0x3A0u);
        v22 = 8;
        v23 = 1;
        v20 = v34;
        *(_BYTE *)v34 = 0;
        *(_QWORD *)(v34 + 96) = v34 + 112;
        *(_QWORD *)(v34 + 128) = v34 + 144;
        *(_QWORD *)(v34 + 160) = v34 + 176;
        *(_QWORD *)(v34 + 192) = v34 + 208;
        *(_QWORD *)(v34 + 224) = v34 + 240;
        *(_QWORD *)(v34 + 256) = v34 + 272;
        *(_QWORD *)(v34 + 288) = v34 + 304;
        *(_QWORD *)(v34 + 320) = v34 + 336;
        *(_QWORD *)(v34 + 352) = v34 + 368;
        *(_QWORD *)(v34 + 384) = v34 + 400;
        *(_QWORD *)(v34 + 416) = v34 + 432;
        *(_QWORD *)(v34 + 104) = 0;
        *(_BYTE *)(v34 + 112) = 0;
        *(_QWORD *)(v34 + 136) = 0;
        *(_BYTE *)(v34 + 144) = 0;
        *(_QWORD *)(v34 + 168) = 0;
        *(_BYTE *)(v34 + 176) = 0;
        *(_QWORD *)(v34 + 200) = 0;
        *(_BYTE *)(v34 + 208) = 0;
        *(_QWORD *)(v34 + 232) = 0;
        *(_BYTE *)(v34 + 240) = 0;
        *(_QWORD *)(v34 + 264) = 0;
        *(_BYTE *)(v34 + 272) = 0;
        *(_QWORD *)(v34 + 296) = 0;
        *(_BYTE *)(v34 + 304) = 0;
        *(_QWORD *)(v34 + 328) = 0;
        *(_BYTE *)(v34 + 336) = 0;
        *(_QWORD *)(v34 + 360) = 0;
        *(_BYTE *)(v34 + 368) = 0;
        *(_QWORD *)(v34 + 392) = 0;
        *(_BYTE *)(v34 + 400) = 0;
        *(_QWORD *)(v34 + 424) = 0x800000000LL;
        *(_QWORD *)(v34 + 528) = v34 + 544;
        *(_QWORD *)(v34 + 536) = 0x600000000LL;
        v21 = 0;
      }
      *(_QWORD *)(v19 + 8) = v20;
      goto LABEL_8;
    }
  }
  v21 = *(unsigned int *)(v20 + 424);
  v22 = *(unsigned int *)(v20 + 428);
  v23 = v21 + 1;
LABEL_8:
  v43 = __PAIR64__(v9, v10);
  LOBYTE(v44) = 1;
  if ( v23 > v22 )
  {
    sub_2237220(v20 + 416, v20 + 432, v23, 12);
    v21 = *(unsigned int *)(v20 + 424);
  }
  v24 = *(_QWORD *)(v20 + 416) + 12 * v21;
  *(_QWORD *)v24 = v43;
  *(_DWORD *)(v24 + 8) = v44;
  ++*(_DWORD *)(v20 + 424);
LABEL_3:
  sub_15F7200(v45);
  return 1;
}
