__int64 __fastcall sub_17CABB0(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        double a4,
        __int64 a5,
        unsigned __int64 a6)
{
  __int64 *v9; // rsi
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // edx
  unsigned int v15; // eax
  unsigned __int64 v16; // rax
  unsigned int v17; // ebp
  unsigned __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // r15
  void *v39; // rdi
  __int64 v40; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v41; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v43; // [rsp+24h] [rbp-D4h] BYREF
  int v44; // [rsp+2Ch] [rbp-CCh]
  _QWORD v45[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+40h] [rbp-B8h]
  __int64 v47[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v48; // [rsp+A8h] [rbp-50h]
  unsigned int v49; // [rsp+B0h] [rbp-48h]
  char v50; // [rsp+B4h] [rbp-44h]

  v9 = *(__int64 **)(a1 + 248);
  v10 = sub_C0D200(a2, v9, 0, &v41, a6);
  v13 = 0;
  if ( !v10 )
  {
    v15 = sub_C00A40(v41, (__int64)v9, 0, v11, v12);
    sub_168B9F0((__int64)v45, (__int64 *)(a1 + 8), v15, a3, 0);
    v16 = sub_EEC8C0(v41, a1 + 8, a4);
    v17 = v16;
    v18 = HIDWORD(v16);
    if ( v48 )
    {
      v43 = v16;
      LOBYTE(v44) = 1;
      sub_AEC610(v47, (__int64 *)&v43);
    }
    else if ( v50 )
    {
      v21 = sub_168B9E0(v45);
      v24 = v46;
      if ( v46 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
      v42 = v24;
      v25 = sub_1587BC0(v21, &v42, v19, v20, v22, v23);
      v26 = *v25 + 32LL * v49;
      v27 = *(_QWORD *)(v26 + 8);
      if ( v27 )
      {
        v28 = *(unsigned int *)(v27 + 424);
        v29 = *(unsigned int *)(v27 + 428);
        v30 = v28 + 1;
      }
      else
      {
        v32 = *(_QWORD *)(v26 + 16);
        v33 = *(_DWORD *)(v32 + 14976);
        if ( v33 )
        {
          v35 = (unsigned int)(v33 - 1);
          *(_DWORD *)(v32 + 14976) = v35;
          v27 = *(_QWORD *)(v32 + 8 * v35 + 14848);
          v36 = *(unsigned int *)(v27 + 536);
          *(_BYTE *)v27 = 0;
          v37 = *(_QWORD *)(v27 + 528);
          *(_DWORD *)(v27 + 424) = 0;
          v38 = v37 + (v36 << 6);
          if ( v37 == v38 )
          {
            v30 = 1;
            v28 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v38 -= 64;
                v39 = *(void **)(v38 + 24);
                if ( v39 == (void *)(v38 + 40) )
                  break;
                v40 = v37;
                operator delete(v39);
                v37 = v40;
                if ( v40 == v38 )
                  goto LABEL_20;
              }
            }
            while ( v37 != v38 );
LABEL_20:
            v28 = *(unsigned int *)(v27 + 424);
            v30 = v28 + 1;
          }
          *(_DWORD *)(v27 + 536) = 0;
          v29 = *(unsigned int *)(v27 + 428);
        }
        else
        {
          v34 = operator new(0x3A0u);
          v29 = 8;
          v30 = 1;
          v27 = v34;
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
          v28 = 0;
        }
        *(_QWORD *)(v26 + 8) = v27;
      }
      v43 = __PAIR64__(v18, v17);
      LOBYTE(v44) = 1;
      if ( v30 > v29 )
      {
        sub_2237220(v27 + 416, v27 + 432, v30, 12);
        v28 = *(unsigned int *)(v27 + 424);
      }
      v31 = *(_QWORD *)(v27 + 416) + 12 * v28;
      *(_QWORD *)v31 = v43;
      *(_DWORD *)(v31 + 8) = v44;
      ++*(_DWORD *)(v27 + 424);
    }
    sub_15F7200(v45);
    return 1;
  }
  return v13;
}
