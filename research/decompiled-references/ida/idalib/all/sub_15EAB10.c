__int64 __fastcall sub_15EAB10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // r13d
  __int64 v9; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // r14
  void *v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // r14
  void *v38; // rdi
  bool v39; // [rsp+7h] [rbp-E1h] BYREF
  __int64 v40; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v41; // [rsp+14h] [rbp-D4h]
  int v42; // [rsp+1Ch] [rbp-CCh]
  _BYTE v43[200]; // [rsp+20h] [rbp-C8h] BYREF

  sub_168B9F0(v43, a2 + 8, *(unsigned int *)(a3 + 24), 3189, 0);
  v6 = sub_15DD120((__int64)v43, a3);
  v39 = (*(_BYTE *)(a3 + 35) & 2) != 0;
  v7 = sub_1588420(v6, (unsigned __int8 *)&v39);
  v8 = *(_DWORD *)(a4 + 24);
  v9 = v7;
  if ( *(_BYTE *)(v7 + 120) )
  {
    v18 = *(_QWORD *)(v7 + 32);
    if ( !v18 )
    {
      v23 = *(_QWORD *)(v7 + 40);
      v24 = *(_DWORD *)(v23 + 14976);
      if ( v24 )
      {
        v25 = (unsigned int)(v24 - 1);
        *(_DWORD *)(v23 + 14976) = v25;
        v18 = *(_QWORD *)(v23 + 8 * v25 + 14848);
        v26 = *(unsigned int *)(v18 + 536);
        *(_BYTE *)v18 = 0;
        v27 = *(_QWORD *)(v18 + 528);
        *(_DWORD *)(v18 + 424) = 0;
        v28 = v27 + (v26 << 6);
        if ( v27 == v28 )
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
              v28 -= 64;
              v29 = *(void **)(v28 + 24);
              if ( v29 == (void *)(v28 + 40) )
                break;
              operator delete(v29);
              if ( v27 == v28 )
                goto LABEL_16;
            }
          }
          while ( v27 != v28 );
LABEL_16:
          v19 = *(unsigned int *)(v18 + 424);
          v21 = v19 + 1;
        }
        *(_DWORD *)(v18 + 536) = 0;
        v20 = *(unsigned int *)(v18 + 428);
      }
      else
      {
        v33 = operator new(0x3A0u);
        v20 = 8;
        v21 = 1;
        v18 = v33;
        *(_BYTE *)v33 = 0;
        *(_QWORD *)(v33 + 96) = v33 + 112;
        *(_QWORD *)(v33 + 128) = v33 + 144;
        *(_QWORD *)(v33 + 160) = v33 + 176;
        *(_QWORD *)(v33 + 192) = v33 + 208;
        *(_QWORD *)(v33 + 224) = v33 + 240;
        *(_QWORD *)(v33 + 256) = v33 + 272;
        *(_QWORD *)(v33 + 288) = v33 + 304;
        *(_QWORD *)(v33 + 320) = v33 + 336;
        *(_QWORD *)(v33 + 352) = v33 + 368;
        *(_QWORD *)(v33 + 384) = v33 + 400;
        *(_QWORD *)(v33 + 416) = v33 + 432;
        *(_QWORD *)(v33 + 104) = 0;
        *(_BYTE *)(v33 + 112) = 0;
        *(_QWORD *)(v33 + 136) = 0;
        *(_BYTE *)(v33 + 144) = 0;
        *(_QWORD *)(v33 + 168) = 0;
        *(_BYTE *)(v33 + 176) = 0;
        *(_QWORD *)(v33 + 200) = 0;
        *(_BYTE *)(v33 + 208) = 0;
        *(_QWORD *)(v33 + 232) = 0;
        *(_BYTE *)(v33 + 240) = 0;
        *(_QWORD *)(v33 + 264) = 0;
        *(_BYTE *)(v33 + 272) = 0;
        *(_QWORD *)(v33 + 296) = 0;
        *(_BYTE *)(v33 + 304) = 0;
        *(_QWORD *)(v33 + 328) = 0;
        *(_BYTE *)(v33 + 336) = 0;
        *(_QWORD *)(v33 + 360) = 0;
        *(_BYTE *)(v33 + 368) = 0;
        *(_QWORD *)(v33 + 392) = 0;
        *(_BYTE *)(v33 + 400) = 0;
        *(_QWORD *)(v33 + 424) = 0x800000000LL;
        *(_QWORD *)(v33 + 528) = v33 + 544;
        *(_QWORD *)(v33 + 536) = 0x600000000LL;
        v19 = 0;
      }
      *(_QWORD *)(v9 + 32) = v18;
      goto LABEL_8;
    }
  }
  else
  {
    if ( !*(_BYTE *)(v7 + 132) )
      goto LABEL_3;
    v13 = sub_168B9E0(v7);
    v16 = *(_QWORD *)(v9 + 16);
    if ( v16 )
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 32LL))(*(_QWORD *)(v9 + 16));
    v40 = v16;
    v17 = *sub_1587BC0(v13, &v40, v11, v12, v14, v15) + 32LL * *(unsigned int *)(v9 + 128);
    v18 = *(_QWORD *)(v17 + 8);
    if ( !v18 )
    {
      v30 = *(_QWORD *)(v17 + 16);
      v31 = *(_DWORD *)(v30 + 14976);
      if ( v31 )
      {
        v34 = (unsigned int)(v31 - 1);
        *(_DWORD *)(v30 + 14976) = v34;
        v18 = *(_QWORD *)(v30 + 8 * v34 + 14848);
        v35 = *(unsigned int *)(v18 + 536);
        *(_BYTE *)v18 = 0;
        v36 = *(_QWORD *)(v18 + 528);
        *(_DWORD *)(v18 + 424) = 0;
        v37 = v36 + (v35 << 6);
        if ( v36 == v37 )
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
              v37 -= 64;
              v38 = *(void **)(v37 + 24);
              if ( v38 == (void *)(v37 + 40) )
                break;
              operator delete(v38);
              if ( v36 == v37 )
                goto LABEL_28;
            }
          }
          while ( v36 != v37 );
LABEL_28:
          v19 = *(unsigned int *)(v18 + 424);
          v21 = v19 + 1;
        }
        *(_DWORD *)(v18 + 536) = 0;
        v20 = *(unsigned int *)(v18 + 428);
      }
      else
      {
        v32 = operator new(0x3A0u);
        v20 = 8;
        v21 = 1;
        v18 = v32;
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
        v19 = 0;
      }
      *(_QWORD *)(v17 + 8) = v18;
      goto LABEL_8;
    }
  }
  v19 = *(unsigned int *)(v18 + 424);
  v20 = *(unsigned int *)(v18 + 428);
  v21 = v19 + 1;
LABEL_8:
  LODWORD(v41) = v8;
  HIDWORD(v41) = v8;
  LOBYTE(v42) = 1;
  if ( v21 > v20 )
  {
    sub_2237220(v18 + 416, v18 + 432, v21, 12);
    v19 = *(unsigned int *)(v18 + 424);
  }
  v22 = *(_QWORD *)(v18 + 416) + 12 * v19;
  *(_QWORD *)v22 = v41;
  *(_DWORD *)(v22 + 8) = v42;
  ++*(_DWORD *)(v18 + 424);
LABEL_3:
  sub_15F7200(v43);
  return 0;
}
