__int64 __fastcall sub_180D980(__int64 a1, int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // r14d
  __int64 v12; // r12
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  int v17; // r13d
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r12
  void *v26; // rdi
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 v34; // r13
  void *v35; // rdi
  __int64 v36; // [rsp+8h] [rbp-50h] BYREF
  __int64 v37; // [rsp+14h] [rbp-44h]
  int v38; // [rsp+1Ch] [rbp-3Ch]

  if ( *(_BYTE *)(a1 + 120) )
  {
    v13 = *(_QWORD *)(a1 + 32);
    v17 = *a2;
    if ( v13 )
    {
      v14 = *(unsigned int *)(v13 + 424);
      v18 = *(unsigned int *)(v13 + 428);
      v16 = v14 + 1;
    }
    else
    {
      v20 = *(_QWORD *)(a1 + 40);
      v21 = *(_DWORD *)(v20 + 14976);
      if ( v21 )
      {
        v22 = (unsigned int)(v21 - 1);
        *(_DWORD *)(v20 + 14976) = v22;
        v13 = *(_QWORD *)(v20 + 8 * v22 + 14848);
        v23 = *(unsigned int *)(v13 + 536);
        *(_BYTE *)v13 = 0;
        v24 = *(_QWORD *)(v13 + 528);
        *(_DWORD *)(v13 + 424) = 0;
        v25 = v24 + (v23 << 6);
        if ( v24 == v25 )
        {
          v16 = 1;
          v14 = 0;
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
                goto LABEL_18;
            }
          }
          while ( v24 != v25 );
LABEL_18:
          v14 = *(unsigned int *)(v13 + 424);
          v16 = v14 + 1;
        }
        *(_DWORD *)(v13 + 536) = 0;
        v18 = *(unsigned int *)(v13 + 428);
      }
      else
      {
        v30 = operator new(0x3A0u);
        v18 = 8;
        v16 = 1;
        v13 = v30;
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
        v14 = 0;
      }
      *(_QWORD *)(a1 + 32) = v13;
    }
    LODWORD(v37) = v17;
    HIDWORD(v37) = v17;
    LOBYTE(v38) = 1;
    if ( v16 <= v18 )
      goto LABEL_13;
LABEL_9:
    sub_2237220(v13 + 416, v13 + 432, v16, 12);
    v14 = *(unsigned int *)(v13 + 424);
LABEL_13:
    v19 = *(_QWORD *)(v13 + 416) + 12 * v14;
    *(_QWORD *)v19 = v37;
    *(_DWORD *)(v19 + 8) = v38;
    ++*(_DWORD *)(v13 + 424);
    return a1;
  }
  if ( *(_BYTE *)(a1 + 132) )
  {
    v8 = sub_168B9E0((_QWORD *)a1);
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 32LL))(*(_QWORD *)(a1 + 16));
    v36 = v9;
    v10 = sub_1587BC0(v8, &v36, v4, v5, v6, v7);
    v11 = *a2;
    v12 = *v10 + 32LL * *(unsigned int *)(a1 + 128);
    v13 = *(_QWORD *)(v12 + 8);
    if ( v13 )
    {
      v14 = *(unsigned int *)(v13 + 424);
      v15 = *(unsigned int *)(v13 + 428);
      v16 = v14 + 1;
    }
    else
    {
      v27 = *(_QWORD *)(v12 + 16);
      v28 = *(_DWORD *)(v27 + 14976);
      if ( v28 )
      {
        v31 = (unsigned int)(v28 - 1);
        *(_DWORD *)(v27 + 14976) = v31;
        v13 = *(_QWORD *)(v27 + 8 * v31 + 14848);
        v32 = *(unsigned int *)(v13 + 536);
        *(_BYTE *)v13 = 0;
        v33 = *(_QWORD *)(v13 + 528);
        *(_DWORD *)(v13 + 424) = 0;
        v34 = v33 + (v32 << 6);
        if ( v33 == v34 )
        {
          v16 = 1;
          v14 = 0;
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
              operator delete(v35);
              if ( v33 == v34 )
                goto LABEL_30;
            }
          }
          while ( v33 != v34 );
LABEL_30:
          v14 = *(unsigned int *)(v13 + 424);
          v16 = v14 + 1;
        }
        *(_DWORD *)(v13 + 536) = 0;
        v15 = *(unsigned int *)(v13 + 428);
      }
      else
      {
        v29 = operator new(0x3A0u);
        v15 = 8;
        v16 = 1;
        v13 = v29;
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
        v14 = 0;
      }
      *(_QWORD *)(v12 + 8) = v13;
    }
    LODWORD(v37) = v11;
    HIDWORD(v37) = v11;
    LOBYTE(v38) = 1;
    if ( v16 <= v15 )
      goto LABEL_13;
    goto LABEL_9;
  }
  return a1;
}
