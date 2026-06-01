__int64 __fastcall sub_18E4600(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned int v6; // eax
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // r14
  void *v28; // rdi
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // r15
  void *v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-F0h]
  __int64 v39; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v40; // [rsp+24h] [rbp-D4h]
  int v41; // [rsp+2Ch] [rbp-CCh]
  _QWORD v42[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-B8h]
  __int64 v44; // [rsp+50h] [rbp-A8h]
  __int64 v45; // [rsp+58h] [rbp-A0h]
  char v46; // [rsp+A8h] [rbp-50h]
  unsigned int v47; // [rsp+B0h] [rbp-48h]
  char v48; // [rsp+B4h] [rbp-44h]

  v6 = sub_C00A40(a2, a2, a3, a4, a5);
  sub_168B9F0((__int64)v42, (__int64 *)(a1 + 8), v6, 0x1504u, 0);
  v7 = sub_EEC8C0(a2, a1 + 8, a6);
  if ( v46 )
  {
    v17 = v44;
    if ( !v44 )
    {
      v22 = v45;
      v23 = *(_DWORD *)(v45 + 14976);
      if ( v23 )
      {
        v24 = (unsigned int)(v23 - 1);
        *(_DWORD *)(v45 + 14976) = v24;
        v17 = *(_QWORD *)(v22 + 8 * v24 + 14848);
        v25 = *(unsigned int *)(v17 + 536);
        *(_BYTE *)v17 = 0;
        v26 = *(_QWORD *)(v17 + 528);
        *(_DWORD *)(v17 + 424) = 0;
        v27 = v26 + (v25 << 6);
        if ( v26 == v27 )
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
              v27 -= 64;
              v28 = *(void **)(v27 + 24);
              if ( v28 == (void *)(v27 + 40) )
                break;
              operator delete(v28);
              if ( v26 == v27 )
                goto LABEL_16;
            }
          }
          while ( v26 != v27 );
LABEL_16:
          v18 = *(unsigned int *)(v17 + 424);
          v20 = v18 + 1;
        }
        *(_DWORD *)(v17 + 536) = 0;
        v19 = *(unsigned int *)(v17 + 428);
      }
      else
      {
        v32 = operator new(0x3A0u);
        v19 = 8;
        v20 = 1;
        v17 = v32;
        *(_BYTE *)v32 = 0;
        *(_QWORD *)(v32 + 96) = v32 + 112;
        *(_QWORD *)(v32 + 128) = v32 + 144;
        *(_QWORD *)(v32 + 160) = v32 + 176;
        *(_QWORD *)(v32 + 192) = v32 + 208;
        *(_QWORD *)(v32 + 224) = v32 + 240;
        *(_QWORD *)(v32 + 256) = v32 + 272;
        *(_QWORD *)(v32 + 288) = v32 + 304;
        *(_QWORD *)(v32 + 320) = v32 + 336;
        *(_QWORD *)(v32 + 352) = v32 + 368;
        *(_QWORD *)(v32 + 384) = v32 + 400;
        *(_QWORD *)(v32 + 416) = v32 + 432;
        *(_QWORD *)(v32 + 104) = 0;
        *(_BYTE *)(v32 + 112) = 0;
        *(_QWORD *)(v32 + 136) = 0;
        *(_BYTE *)(v32 + 144) = 0;
        *(_QWORD *)(v32 + 168) = 0;
        *(_BYTE *)(v32 + 176) = 0;
        *(_QWORD *)(v32 + 200) = 0;
        *(_BYTE *)(v32 + 208) = 0;
        *(_QWORD *)(v32 + 232) = 0;
        *(_BYTE *)(v32 + 240) = 0;
        *(_QWORD *)(v32 + 264) = 0;
        *(_BYTE *)(v32 + 272) = 0;
        *(_QWORD *)(v32 + 296) = 0;
        *(_BYTE *)(v32 + 304) = 0;
        *(_QWORD *)(v32 + 328) = 0;
        *(_BYTE *)(v32 + 336) = 0;
        *(_QWORD *)(v32 + 360) = 0;
        *(_BYTE *)(v32 + 368) = 0;
        *(_QWORD *)(v32 + 392) = 0;
        *(_BYTE *)(v32 + 400) = 0;
        *(_QWORD *)(v32 + 424) = 0x800000000LL;
        *(_QWORD *)(v32 + 528) = v32 + 544;
        *(_QWORD *)(v32 + 536) = 0x600000000LL;
        v18 = 0;
      }
      v44 = v17;
      goto LABEL_8;
    }
  }
  else
  {
    if ( !v48 )
      goto LABEL_3;
    v11 = sub_168B9E0(v42);
    v14 = v43;
    if ( v43 )
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 32LL))(v43);
    v39 = v14;
    v15 = sub_1587BC0(v11, &v39, v9, v10, v12, v13);
    v16 = *v15 + 32LL * v47;
    v17 = *(_QWORD *)(v16 + 8);
    if ( !v17 )
    {
      v29 = *(_QWORD *)(v16 + 16);
      v30 = *(_DWORD *)(v29 + 14976);
      if ( v30 )
      {
        v33 = (unsigned int)(v30 - 1);
        *(_DWORD *)(v29 + 14976) = v33;
        v17 = *(_QWORD *)(v29 + 8 * v33 + 14848);
        v34 = *(unsigned int *)(v17 + 536);
        *(_BYTE *)v17 = 0;
        v35 = *(_QWORD *)(v17 + 528);
        *(_DWORD *)(v17 + 424) = 0;
        v36 = v35 + (v34 << 6);
        if ( v35 == v36 )
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
              v36 -= 64;
              v37 = *(void **)(v36 + 24);
              if ( v37 == (void *)(v36 + 40) )
                break;
              v38 = v35;
              operator delete(v37);
              v35 = v38;
              if ( v38 == v36 )
                goto LABEL_28;
            }
          }
          while ( v35 != v36 );
LABEL_28:
          v18 = *(unsigned int *)(v17 + 424);
          v20 = v18 + 1;
        }
        *(_DWORD *)(v17 + 536) = 0;
        v19 = *(unsigned int *)(v17 + 428);
      }
      else
      {
        v31 = operator new(0x3A0u);
        v19 = 8;
        v20 = 1;
        v17 = v31;
        *(_BYTE *)v31 = 0;
        *(_QWORD *)(v31 + 96) = v31 + 112;
        *(_QWORD *)(v31 + 128) = v31 + 144;
        *(_QWORD *)(v31 + 160) = v31 + 176;
        *(_QWORD *)(v31 + 192) = v31 + 208;
        *(_QWORD *)(v31 + 224) = v31 + 240;
        *(_QWORD *)(v31 + 256) = v31 + 272;
        *(_QWORD *)(v31 + 288) = v31 + 304;
        *(_QWORD *)(v31 + 320) = v31 + 336;
        *(_QWORD *)(v31 + 352) = v31 + 368;
        *(_QWORD *)(v31 + 384) = v31 + 400;
        *(_QWORD *)(v31 + 416) = v31 + 432;
        *(_QWORD *)(v31 + 104) = 0;
        *(_BYTE *)(v31 + 112) = 0;
        *(_QWORD *)(v31 + 136) = 0;
        *(_BYTE *)(v31 + 144) = 0;
        *(_QWORD *)(v31 + 168) = 0;
        *(_BYTE *)(v31 + 176) = 0;
        *(_QWORD *)(v31 + 200) = 0;
        *(_BYTE *)(v31 + 208) = 0;
        *(_QWORD *)(v31 + 232) = 0;
        *(_BYTE *)(v31 + 240) = 0;
        *(_QWORD *)(v31 + 264) = 0;
        *(_BYTE *)(v31 + 272) = 0;
        *(_QWORD *)(v31 + 296) = 0;
        *(_BYTE *)(v31 + 304) = 0;
        *(_QWORD *)(v31 + 328) = 0;
        *(_BYTE *)(v31 + 336) = 0;
        *(_QWORD *)(v31 + 360) = 0;
        *(_BYTE *)(v31 + 368) = 0;
        *(_QWORD *)(v31 + 392) = 0;
        *(_BYTE *)(v31 + 400) = 0;
        *(_QWORD *)(v31 + 424) = 0x800000000LL;
        *(_QWORD *)(v31 + 528) = v31 + 544;
        *(_QWORD *)(v31 + 536) = 0x600000000LL;
        v18 = 0;
      }
      *(_QWORD *)(v16 + 8) = v17;
      goto LABEL_8;
    }
  }
  v18 = *(unsigned int *)(v17 + 424);
  v19 = *(unsigned int *)(v17 + 428);
  v20 = v18 + 1;
LABEL_8:
  v40 = v7;
  LOBYTE(v41) = 1;
  if ( v20 > v19 )
  {
    sub_2237220(v17 + 416, v17 + 432, v20, 12);
    v18 = *(unsigned int *)(v17 + 424);
  }
  v21 = *(_QWORD *)(v17 + 416) + 12 * v18;
  *(_QWORD *)v21 = v40;
  *(_DWORD *)(v21 + 8) = v41;
  ++*(_DWORD *)(v17 + 424);
LABEL_3:
  sub_15F7200(v42);
  return 1;
}
