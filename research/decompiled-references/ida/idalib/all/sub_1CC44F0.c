__int64 __fastcall sub_1CC44F0(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r14
  void *v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rdx
  __int64 v34; // r15
  void *v35; // rdi
  __int64 v36; // [rsp+8h] [rbp-F0h]
  __int64 v37; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+24h] [rbp-D4h]
  int v39; // [rsp+2Ch] [rbp-CCh]
  _QWORD v40[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-B8h]
  __int64 v42; // [rsp+50h] [rbp-A8h]
  __int64 v43; // [rsp+58h] [rbp-A0h]
  char v44; // [rsp+A8h] [rbp-50h]
  unsigned int v45; // [rsp+B0h] [rbp-48h]
  char v46; // [rsp+B4h] [rbp-44h]

  v3 = *a1;
  v4 = sub_EEB7E0(a2, a2, a3);
  sub_168B9F0((__int64)v40, (__int64 *)(v3 + 8), v4, 0x1106u, 0);
  v5 = sub_EEC8C0(a2, v3 + 8, a3);
  if ( v44 )
  {
    v15 = v42;
    if ( !v42 )
    {
      v20 = v43;
      v21 = *(_DWORD *)(v43 + 14976);
      if ( v21 )
      {
        v22 = (unsigned int)(v21 - 1);
        *(_DWORD *)(v43 + 14976) = v22;
        v15 = *(_QWORD *)(v20 + 8 * v22 + 14848);
        v23 = *(unsigned int *)(v15 + 536);
        *(_BYTE *)v15 = 0;
        v24 = *(_QWORD *)(v15 + 528);
        *(_DWORD *)(v15 + 424) = 0;
        v25 = v24 + (v23 << 6);
        if ( v24 == v25 )
        {
          v18 = 1;
          v16 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v25 -= 64;
              v26 = *(void **)(v25 + 24);
              if ( v26 == (void *)(v25 + 40) )
                break;
              operator delete(v26);
              if ( v24 == v25 )
                goto LABEL_16;
            }
          }
          while ( v24 != v25 );
LABEL_16:
          v16 = *(unsigned int *)(v15 + 424);
          v18 = v16 + 1;
        }
        *(_DWORD *)(v15 + 536) = 0;
        v17 = *(unsigned int *)(v15 + 428);
      }
      else
      {
        v30 = operator new(0x3A0u);
        v17 = 8;
        v18 = 1;
        v15 = v30;
        *(_BYTE *)v30 = 0;
        *(_QWORD *)(v30 + 96) = v30 + 112;
        *(_QWORD *)(v30 + 128) = v30 + 144;
        *(_QWORD *)(v30 + 160) = v30 + 176;
        *(_QWORD *)(v30 + 192) = v30 + 208;
        *(_QWORD *)(v30 + 224) = v30 + 240;
        *(_QWORD *)(v30 + 256) = v30 + 272;
        *(_QWORD *)(v30 + 288) = v30 + 304;
        *(_QWORD *)(v30 + 320) = v30 + 336;
        *(_QWORD *)(v30 + 352) = v30 + 368;
        *(_QWORD *)(v30 + 384) = v30 + 400;
        *(_QWORD *)(v30 + 416) = v30 + 432;
        *(_QWORD *)(v30 + 104) = 0;
        *(_BYTE *)(v30 + 112) = 0;
        *(_QWORD *)(v30 + 136) = 0;
        *(_BYTE *)(v30 + 144) = 0;
        *(_QWORD *)(v30 + 168) = 0;
        *(_BYTE *)(v30 + 176) = 0;
        *(_QWORD *)(v30 + 200) = 0;
        *(_BYTE *)(v30 + 208) = 0;
        *(_QWORD *)(v30 + 232) = 0;
        *(_BYTE *)(v30 + 240) = 0;
        *(_QWORD *)(v30 + 264) = 0;
        *(_BYTE *)(v30 + 272) = 0;
        *(_QWORD *)(v30 + 296) = 0;
        *(_BYTE *)(v30 + 304) = 0;
        *(_QWORD *)(v30 + 328) = 0;
        *(_BYTE *)(v30 + 336) = 0;
        *(_QWORD *)(v30 + 360) = 0;
        *(_BYTE *)(v30 + 368) = 0;
        *(_QWORD *)(v30 + 392) = 0;
        *(_BYTE *)(v30 + 400) = 0;
        *(_QWORD *)(v30 + 424) = 0x800000000LL;
        *(_QWORD *)(v30 + 528) = v30 + 544;
        *(_QWORD *)(v30 + 536) = 0x600000000LL;
        v16 = 0;
      }
      v42 = v15;
      goto LABEL_8;
    }
  }
  else
  {
    if ( !v46 )
      goto LABEL_3;
    v9 = sub_168B9E0(v40);
    v12 = v41;
    if ( v41 )
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
    v37 = v12;
    v13 = sub_1587BC0(v9, &v37, v7, v8, v10, v11);
    v14 = *v13 + 32LL * v45;
    v15 = *(_QWORD *)(v14 + 8);
    if ( !v15 )
    {
      v27 = *(_QWORD *)(v14 + 16);
      v28 = *(_DWORD *)(v27 + 14976);
      if ( v28 )
      {
        v31 = (unsigned int)(v28 - 1);
        *(_DWORD *)(v27 + 14976) = v31;
        v15 = *(_QWORD *)(v27 + 8 * v31 + 14848);
        v32 = *(unsigned int *)(v15 + 536);
        *(_BYTE *)v15 = 0;
        v33 = *(_QWORD *)(v15 + 528);
        *(_DWORD *)(v15 + 424) = 0;
        v34 = v33 + (v32 << 6);
        if ( v33 == v34 )
        {
          v18 = 1;
          v16 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v34 -= 64;
              v35 = *(void **)(v34 + 24);
              if ( v35 == (void *)(v34 + 40) )
                break;
              v36 = v33;
              operator delete(v35);
              v33 = v36;
              if ( v36 == v34 )
                goto LABEL_28;
            }
          }
          while ( v33 != v34 );
LABEL_28:
          v16 = *(unsigned int *)(v15 + 424);
          v18 = v16 + 1;
        }
        *(_DWORD *)(v15 + 536) = 0;
        v17 = *(unsigned int *)(v15 + 428);
      }
      else
      {
        v29 = operator new(0x3A0u);
        v17 = 8;
        v18 = 1;
        v15 = v29;
        *(_BYTE *)v29 = 0;
        *(_QWORD *)(v29 + 96) = v29 + 112;
        *(_QWORD *)(v29 + 128) = v29 + 144;
        *(_QWORD *)(v29 + 160) = v29 + 176;
        *(_QWORD *)(v29 + 192) = v29 + 208;
        *(_QWORD *)(v29 + 224) = v29 + 240;
        *(_QWORD *)(v29 + 256) = v29 + 272;
        *(_QWORD *)(v29 + 288) = v29 + 304;
        *(_QWORD *)(v29 + 320) = v29 + 336;
        *(_QWORD *)(v29 + 352) = v29 + 368;
        *(_QWORD *)(v29 + 384) = v29 + 400;
        *(_QWORD *)(v29 + 416) = v29 + 432;
        *(_QWORD *)(v29 + 104) = 0;
        *(_BYTE *)(v29 + 112) = 0;
        *(_QWORD *)(v29 + 136) = 0;
        *(_BYTE *)(v29 + 144) = 0;
        *(_QWORD *)(v29 + 168) = 0;
        *(_BYTE *)(v29 + 176) = 0;
        *(_QWORD *)(v29 + 200) = 0;
        *(_BYTE *)(v29 + 208) = 0;
        *(_QWORD *)(v29 + 232) = 0;
        *(_BYTE *)(v29 + 240) = 0;
        *(_QWORD *)(v29 + 264) = 0;
        *(_BYTE *)(v29 + 272) = 0;
        *(_QWORD *)(v29 + 296) = 0;
        *(_BYTE *)(v29 + 304) = 0;
        *(_QWORD *)(v29 + 328) = 0;
        *(_BYTE *)(v29 + 336) = 0;
        *(_QWORD *)(v29 + 360) = 0;
        *(_BYTE *)(v29 + 368) = 0;
        *(_QWORD *)(v29 + 392) = 0;
        *(_BYTE *)(v29 + 400) = 0;
        *(_QWORD *)(v29 + 424) = 0x800000000LL;
        *(_QWORD *)(v29 + 528) = v29 + 544;
        *(_QWORD *)(v29 + 536) = 0x600000000LL;
        v16 = 0;
      }
      *(_QWORD *)(v14 + 8) = v15;
      goto LABEL_8;
    }
  }
  v16 = *(unsigned int *)(v15 + 424);
  v17 = *(unsigned int *)(v15 + 428);
  v18 = v16 + 1;
LABEL_8:
  v38 = v5;
  LOBYTE(v39) = 1;
  if ( v18 > v17 )
  {
    sub_2237220(v15 + 416, v15 + 432, v18, 12);
    v16 = *(unsigned int *)(v15 + 424);
  }
  v19 = *(_QWORD *)(v15 + 416) + 12 * v16;
  *(_QWORD *)v19 = v38;
  *(_DWORD *)(v19 + 8) = v39;
  ++*(_DWORD *)(v15 + 424);
LABEL_3:
  sub_15F7200(v40);
  return 1;
}
