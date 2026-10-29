unsigned int *__fastcall sub_186A7D0(unsigned int **a1)
{
  unsigned int v2; // r13d
  unsigned int *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r15
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // r15
  void *v23; // rdi
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-F8h]
  __int64 v34; // [rsp+0h] [rbp-F8h]
  __int64 v35; // [rsp+8h] [rbp-F0h]
  __int64 v36; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+24h] [rbp-D4h]
  int v38; // [rsp+2Ch] [rbp-CCh]
  _QWORD v39[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+40h] [rbp-B8h]
  __int64 v41; // [rsp+50h] [rbp-A8h]
  __int64 v42; // [rsp+58h] [rbp-A0h]
  char v43; // [rsp+A8h] [rbp-50h]
  unsigned int v44; // [rsp+B0h] [rbp-48h]
  char v45; // [rsp+B4h] [rbp-44h]

  sub_168B9F0((__int64)v39, (__int64 *)a1[1] + 1, **a1, 0xFA2u, 0);
  v2 = **a1;
  if ( v43 )
  {
    v12 = v41;
    if ( !v41 )
    {
      v17 = v42;
      v18 = *(_DWORD *)(v42 + 14976);
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 1);
        *(_DWORD *)(v42 + 14976) = v19;
        v12 = *(_QWORD *)(v17 + 8 * v19 + 14848);
        v20 = *(unsigned int *)(v12 + 536);
        *(_BYTE *)v12 = 0;
        v21 = *(_QWORD *)(v12 + 528);
        *(_DWORD *)(v12 + 424) = 0;
        v22 = v21 + (v20 << 6);
        if ( v21 == v22 )
        {
          v15 = 1;
          v13 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v22 -= 64;
              v23 = *(void **)(v22 + 24);
              if ( v23 == (void *)(v22 + 40) )
                break;
              v33 = v21;
              operator delete(v23);
              v21 = v33;
              if ( v33 == v22 )
                goto LABEL_16;
            }
          }
          while ( v21 != v22 );
LABEL_16:
          v13 = *(unsigned int *)(v12 + 424);
          v15 = v13 + 1;
        }
        *(_DWORD *)(v12 + 536) = 0;
        v14 = *(unsigned int *)(v12 + 428);
      }
      else
      {
        v27 = operator new(0x3A0u);
        v14 = 8;
        v15 = 1;
        v12 = v27;
        *(_BYTE *)v27 = 0;
        *(_QWORD *)(v27 + 96) = v27 + 112;
        *(_QWORD *)(v27 + 128) = v27 + 144;
        *(_QWORD *)(v27 + 160) = v27 + 176;
        *(_QWORD *)(v27 + 192) = v27 + 208;
        *(_QWORD *)(v27 + 224) = v27 + 240;
        *(_QWORD *)(v27 + 256) = v27 + 272;
        *(_QWORD *)(v27 + 288) = v27 + 304;
        *(_QWORD *)(v27 + 320) = v27 + 336;
        *(_QWORD *)(v27 + 352) = v27 + 368;
        *(_QWORD *)(v27 + 384) = v27 + 400;
        *(_QWORD *)(v27 + 416) = v27 + 432;
        *(_QWORD *)(v27 + 104) = 0;
        *(_BYTE *)(v27 + 112) = 0;
        *(_QWORD *)(v27 + 136) = 0;
        *(_BYTE *)(v27 + 144) = 0;
        *(_QWORD *)(v27 + 168) = 0;
        *(_BYTE *)(v27 + 176) = 0;
        *(_QWORD *)(v27 + 200) = 0;
        *(_BYTE *)(v27 + 208) = 0;
        *(_QWORD *)(v27 + 232) = 0;
        *(_BYTE *)(v27 + 240) = 0;
        *(_QWORD *)(v27 + 264) = 0;
        *(_BYTE *)(v27 + 272) = 0;
        *(_QWORD *)(v27 + 296) = 0;
        *(_BYTE *)(v27 + 304) = 0;
        *(_QWORD *)(v27 + 328) = 0;
        *(_BYTE *)(v27 + 336) = 0;
        *(_QWORD *)(v27 + 360) = 0;
        *(_BYTE *)(v27 + 368) = 0;
        *(_QWORD *)(v27 + 392) = 0;
        *(_BYTE *)(v27 + 400) = 0;
        *(_QWORD *)(v27 + 424) = 0x800000000LL;
        *(_QWORD *)(v27 + 528) = v27 + 544;
        *(_QWORD *)(v27 + 536) = 0x600000000LL;
        v13 = 0;
      }
      v41 = v12;
      goto LABEL_8;
    }
  }
  else
  {
    if ( !v45 )
      goto LABEL_3;
    v6 = sub_168B9E0(v39);
    v9 = v40;
    if ( v40 )
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 32LL))(v40);
    v36 = v9;
    v10 = sub_1587BC0(v6, &v36, v4, v5, v7, v8);
    v11 = *v10 + 32LL * v44;
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
    {
      v24 = *(_QWORD *)(v11 + 16);
      v25 = *(_DWORD *)(v24 + 14976);
      if ( v25 )
      {
        v28 = (unsigned int)(v25 - 1);
        *(_DWORD *)(v24 + 14976) = v28;
        v12 = *(_QWORD *)(v24 + 8 * v28 + 14848);
        v29 = *(unsigned int *)(v12 + 536);
        *(_BYTE *)v12 = 0;
        v30 = *(_QWORD *)(v12 + 528);
        *(_DWORD *)(v12 + 424) = 0;
        v31 = v30 + (v29 << 6);
        if ( v30 == v31 )
        {
          v15 = 1;
          v13 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v31 -= 64;
              v32 = *(void **)(v31 + 24);
              if ( v32 == (void *)(v31 + 40) )
                break;
              v35 = v31;
              v34 = v30;
              operator delete(v32);
              v30 = v34;
              v31 = v35;
              if ( v34 == v35 )
                goto LABEL_28;
            }
          }
          while ( v30 != v31 );
LABEL_28:
          v13 = *(unsigned int *)(v12 + 424);
          v15 = v13 + 1;
        }
        *(_DWORD *)(v12 + 536) = 0;
        v14 = *(unsigned int *)(v12 + 428);
      }
      else
      {
        v26 = operator new(0x3A0u);
        v14 = 8;
        v15 = 1;
        v12 = v26;
        *(_BYTE *)v26 = 0;
        *(_QWORD *)(v26 + 96) = v26 + 112;
        *(_QWORD *)(v26 + 128) = v26 + 144;
        *(_QWORD *)(v26 + 160) = v26 + 176;
        *(_QWORD *)(v26 + 192) = v26 + 208;
        *(_QWORD *)(v26 + 224) = v26 + 240;
        *(_QWORD *)(v26 + 256) = v26 + 272;
        *(_QWORD *)(v26 + 288) = v26 + 304;
        *(_QWORD *)(v26 + 320) = v26 + 336;
        *(_QWORD *)(v26 + 352) = v26 + 368;
        *(_QWORD *)(v26 + 384) = v26 + 400;
        *(_QWORD *)(v26 + 416) = v26 + 432;
        *(_QWORD *)(v26 + 104) = 0;
        *(_BYTE *)(v26 + 112) = 0;
        *(_QWORD *)(v26 + 136) = 0;
        *(_BYTE *)(v26 + 144) = 0;
        *(_QWORD *)(v26 + 168) = 0;
        *(_BYTE *)(v26 + 176) = 0;
        *(_QWORD *)(v26 + 200) = 0;
        *(_BYTE *)(v26 + 208) = 0;
        *(_QWORD *)(v26 + 232) = 0;
        *(_BYTE *)(v26 + 240) = 0;
        *(_QWORD *)(v26 + 264) = 0;
        *(_BYTE *)(v26 + 272) = 0;
        *(_QWORD *)(v26 + 296) = 0;
        *(_BYTE *)(v26 + 304) = 0;
        *(_QWORD *)(v26 + 328) = 0;
        *(_BYTE *)(v26 + 336) = 0;
        *(_QWORD *)(v26 + 360) = 0;
        *(_BYTE *)(v26 + 368) = 0;
        *(_QWORD *)(v26 + 392) = 0;
        *(_BYTE *)(v26 + 400) = 0;
        *(_QWORD *)(v26 + 424) = 0x800000000LL;
        *(_QWORD *)(v26 + 528) = v26 + 544;
        *(_QWORD *)(v26 + 536) = 0x600000000LL;
        v13 = 0;
      }
      *(_QWORD *)(v11 + 8) = v12;
      goto LABEL_8;
    }
  }
  v13 = *(unsigned int *)(v12 + 424);
  v14 = *(unsigned int *)(v12 + 428);
  v15 = v13 + 1;
LABEL_8:
  LODWORD(v37) = v2;
  HIDWORD(v37) = v2 + 6;
  LOBYTE(v38) = 1;
  if ( v15 > v14 )
  {
    sub_2237220(v12 + 416, v12 + 432, v15, 12);
    v13 = *(unsigned int *)(v12 + 424);
  }
  v16 = *(_QWORD *)(v12 + 416) + 12 * v13;
  *(_QWORD *)v16 = v37;
  *(_DWORD *)(v16 + 8) = v38;
  ++*(_DWORD *)(v12 + 424);
LABEL_3:
  sub_15F7200(v39);
  result = a1[2];
  *(_BYTE *)result = 0;
  return result;
}
