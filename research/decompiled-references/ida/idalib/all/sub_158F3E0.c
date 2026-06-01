__int64 __fastcall sub_158F3E0(__int64 a1, __int64 a2, unsigned int a3, double a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned __int64 v17; // r14
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 v25; // rax
  _QWORD *v26; // rax
  char v27; // cl
  __int64 v28; // rax
  unsigned int v29; // eax
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rdi
  unsigned __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rdx
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rdx
  void *v49; // rdi
  char v50; // [rsp+8h] [rbp-110h]
  __int64 v51; // [rsp+8h] [rbp-110h]
  __int64 v52; // [rsp+8h] [rbp-110h]
  __int64 v53; // [rsp+8h] [rbp-110h]
  __int64 v54; // [rsp+8h] [rbp-110h]
  __int64 v55; // [rsp+10h] [rbp-108h]
  __int64 v56; // [rsp+18h] [rbp-100h]
  __int64 v57; // [rsp+20h] [rbp-F8h]
  unsigned int v58[3]; // [rsp+2Ch] [rbp-ECh] BYREF
  __int64 v59; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v60; // [rsp+40h] [rbp-D8h] BYREF
  int v61; // [rsp+48h] [rbp-D0h]
  _BYTE v62[16]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v64[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v65; // [rsp+C8h] [rbp-50h]
  unsigned int v66; // [rsp+D0h] [rbp-48h]
  char v67; // [rsp+D4h] [rbp-44h]

  v9 = *(_QWORD *)(a1 + 8);
  v58[0] = a3;
  v10 = v9 + 8;
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v11 = *(unsigned int *)(a2 + 24);
  }
  else if ( *(char *)(a2 + 2) >= 0
         || (v42 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a2, a4),
             (v11 = v42) == 0) )
  {
    v29 = sub_EEB7E0(*(_QWORD *)(a2 + 32), a2, a4);
    v11 = v29;
    if ( !v29 )
    {
      if ( *(_DWORD *)(a2 + 16) )
      {
        v30 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
        if ( v30 )
          v11 = (unsigned int)sub_EEB7E0(v30, a2, a4);
      }
    }
  }
  v12 = v10;
  sub_168B9F0(v62, v10, v11, 7502, 0);
  v13 = sub_BFBC70(*(_QWORD *)(a2 + 32));
  v14 = v13;
  if ( v13 && (*(_BYTE *)(v13 + 28) & 0x7Fu) - 34 >= 6 )
    v14 = 0;
  if ( v65 )
  {
    v12 = v14;
    sub_157E260(v64, v14);
    v27 = v65;
  }
  else
  {
    if ( !v67 )
    {
      v15 = sub_EEC8C0(a2, v12, a4);
      v16 = v15;
      v17 = HIDWORD(v15);
      goto LABEL_9;
    }
    v24 = sub_168B9E0(v62);
    v25 = v63;
    if ( v63 )
      v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
    v60 = v25;
    v26 = sub_1587BC0(v24, &v60, v20, v21, v22, v23);
    v12 = v14;
    sub_157E260((unsigned __int8 **)(*v26 + 32LL * v66 + 8), v14);
    v27 = v65;
  }
  v50 = v27;
  v28 = sub_EEC8C0(a2, v12, a4);
  v16 = v28;
  LODWORD(v17) = HIDWORD(v28);
  if ( v50 )
  {
    v12 = (__int64)&v60;
    v60 = v28;
    LOBYTE(v61) = 1;
    sub_AEC610((__int64 *)v64, &v60);
    goto LABEL_10;
  }
LABEL_9:
  if ( v67 )
  {
    v31 = sub_168B9E0(v62);
    v35 = v63;
    if ( v63 )
    {
      v51 = v31;
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 32LL))(v63);
      v31 = v51;
    }
    v59 = v35;
    v36 = sub_1587BC0(v31, &v59, v31, v32, v33, v34);
    v37 = *v36 + 32LL * v66;
    v38 = *(_QWORD *)(v37 + 8);
    if ( v38 )
    {
      v12 = *(unsigned int *)(v38 + 424);
      v39 = *(unsigned int *)(v38 + 428);
      v40 = v12 + 1;
    }
    else
    {
      v43 = *(_QWORD *)(v37 + 16);
      v44 = *(_DWORD *)(v43 + 14976);
      if ( v44 )
      {
        v45 = (unsigned int)(v44 - 1);
        *(_DWORD *)(v43 + 14976) = v45;
        v38 = *(_QWORD *)(v43 + 8 * v45 + 14848);
        v46 = *(unsigned int *)(v38 + 536);
        *(_BYTE *)v38 = 0;
        v47 = *(_QWORD *)(v38 + 528);
        *(_DWORD *)(v38 + 424) = 0;
        v48 = v47 + (v46 << 6);
        if ( v47 == v48 )
        {
          v40 = 1;
          v12 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v48 -= 64;
              v49 = *(void **)(v48 + 24);
              if ( v49 == (void *)(v48 + 40) )
                break;
              v57 = v48;
              v56 = v47;
              v55 = v38;
              v54 = v37;
              operator delete(v49);
              v47 = v56;
              v48 = v57;
              v37 = v54;
              v38 = v55;
              if ( v56 == v57 )
                goto LABEL_42;
            }
          }
          while ( v47 != v48 );
LABEL_42:
          v12 = *(unsigned int *)(v38 + 424);
          v40 = v12 + 1;
        }
        *(_DWORD *)(v38 + 536) = 0;
        v39 = *(unsigned int *)(v38 + 428);
      }
      else
      {
        v52 = v37;
        v38 = operator new(0x3A0u);
        v39 = 8;
        v12 = 0;
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
        *(_QWORD *)(v38 + 536) = 0x600000000LL;
        v37 = v52;
        *(_QWORD *)(v38 + 528) = v38 + 544;
        v40 = 1;
      }
      *(_QWORD *)(v37 + 8) = v38;
    }
    v60 = __PAIR64__(v17, v16);
    LOBYTE(v61) = 1;
    if ( v40 > v39 )
    {
      v53 = v38;
      sub_2237220(v38 + 416, v38 + 432, v40, 12);
      v38 = v53;
      v12 = *(unsigned int *)(v53 + 424);
    }
    v41 = *(_QWORD *)(v38 + 416) + 12 * v12;
    *(_QWORD *)v41 = v60;
    *(_DWORD *)(v41 + 8) = v61;
    ++*(_DWORD *)(v38 + 424);
  }
LABEL_10:
  sub_15F7200(v62);
  result = v58[0];
  if ( v58[0] )
  {
    if ( a6 )
      v60 = sub_EEC8C0(a6, v12, a4);
    else
      v60 = sub_EEC8C0(a2, v12, a4);
    sub_168B9F0(v62, *(_QWORD *)(a1 + 8) + 8LL, (unsigned int)v60, 6442, 0);
    v19 = sub_1588370((__int64)v62, v58);
    sub_15884C0(v19, &v60);
    return sub_15F7200(v62);
  }
  return result;
}
