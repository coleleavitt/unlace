void __fastcall sub_18508B0(_QWORD *a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rdx
  char *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rbx
  unsigned __int8 **v31; // r14
  unsigned __int64 *v32; // r15
  unsigned __int64 v33; // rax
  char *v34; // rax
  char *v35; // r13
  char *v36; // rax
  char *v37; // rax
  __int64 v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned int v42; // r8d
  unsigned int v43; // esi
  __int64 v44; // rcx
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rdx
  __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rbx
  __int64 v55; // rbp
  __int64 v56; // r14
  unsigned int v57; // r13d
  unsigned __int64 v58; // r15
  void *v59; // rdi
  unsigned __int64 v60; // rax
  bool v61; // zf
  char v62; // al
  __int64 v63; // [rsp+8h] [rbp-110h]
  unsigned __int64 v64; // [rsp+10h] [rbp-108h]
  __int64 v65; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v66; // [rsp+20h] [rbp-F8h]
  _QWORD *v67; // [rsp+28h] [rbp-F0h]
  unsigned int v68; // [rsp+28h] [rbp-F0h]
  unsigned __int8 **v69; // [rsp+38h] [rbp-E0h]
  unsigned __int64 *v70; // [rsp+40h] [rbp-D8h]
  char v71; // [rsp+4Bh] [rbp-CDh]
  unsigned int v72; // [rsp+4Ch] [rbp-CCh] BYREF
  unsigned __int64 v73; // [rsp+50h] [rbp-C8h] BYREF
  char v74; // [rsp+58h] [rbp-C0h]
  unsigned __int64 v75; // [rsp+60h] [rbp-B8h] BYREF
  unsigned __int64 v76; // [rsp+68h] [rbp-B0h]
  void *ptr; // [rsp+80h] [rbp-98h] BYREF
  __int64 v78; // [rsp+88h] [rbp-90h]
  int v79; // [rsp+90h] [rbp-88h]
  char v80; // [rsp+94h] [rbp-84h]
  char v81; // [rsp+98h] [rbp-80h] BYREF

  v4 = a1;
  v72 = a2;
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)(a3 + 8)) )
    return;
  sub_7052B0((__int64 *)(a3[13] + 96LL), a3[13], v5, v6, v7, v8);
  v71 = ((*(_BYTE *)(a3[16] + 1LL) >> 3) ^ 1) & 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1[31] + 17448LL) + 340LL) == 10 )
  {
    v60 = sub_B97300((__int64)a3);
    if ( v60 )
    {
      v61 = !sub_B8C400(v60, 1);
      v62 = v71;
      if ( !v61 )
        v62 = 0;
      v71 = v62;
    }
  }
  v13 = a3[13];
  v78 = 8;
  ptr = &v81;
  v79 = 0;
  v80 = 1;
  sub_7052B0((__int64 *)(v13 + 96), v13, v9, v10, v11, v12);
  v18 = a3[16];
  if ( (*(_BYTE *)(v18 + 24) & 1) != 0 )
    v19 = sub_B96980(v18);
  else
    v19 = *(_QWORD *)(v18 + 24);
  sub_7052B0((__int64 *)(a3[13] + 96LL), a3[13], v14, v15, v16, v17);
  v20 = a3[13];
  v63 = v19 + 24LL * *(unsigned int *)(a3[16] + 16LL);
  sub_7052B0((__int64 *)(v20 + 96), v20, v21, v22, v23, v24);
  v29 = a3[16];
  if ( (*(_BYTE *)(v29 + 24) & 1) != 0 )
    v30 = sub_B96980(v29);
  else
    v30 = *(_QWORD *)(v29 + 24);
  if ( v63 != v30 )
  {
    v31 = (unsigned __int8 **)&v75;
    v32 = &v73;
    while ( 1 )
    {
      v33 = *(_QWORD *)(**(_QWORD **)(v30 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v33 + 8) & 0xF) != 0 )
        v33 = sub_F64F00(**(_QWORD **)(v30 + 16), v20, (__int64)v25, (__int64)v26, v27);
      v34 = (char *)sub_F63270(*(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL), v20, (__int64)v25, (__int64)v26, v27, v28);
      v35 = v34;
      if ( v34 )
      {
        if ( (*(_BYTE *)(v30 + 12) & 1) == 0 )
          goto LABEL_22;
        if ( v71 )
          break;
      }
LABEL_35:
      v30 += 24;
      if ( v63 == v30 )
        goto LABEL_36;
    }
    v20 = (__int64)v34;
    v36 = (char *)sub_1703870((__int64)&ptr, (__int64)v34);
    v25 = ptr;
    if ( v80 )
      v26 = (char *)ptr + 8 * HIDWORD(v78);
    else
      v26 = (char *)ptr + 8 * (unsigned int)v78;
    if ( v36 != v26 && *(_QWORD *)v36 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v37 = v36 + 8;
      do
      {
        v25 = v37;
        if ( v26 == v37 )
          break;
        v37 += 8;
      }
      while ( *v25 >= 0xFFFFFFFFFFFFFFFELL );
    }
LABEL_22:
    if ( v35[28] >= 0 )
    {
      v20 = *((_QWORD *)v35 + 13);
      sub_7052B0((__int64 *)(v20 + 96), v20, (__int64)v25, (__int64)v26, v27, v28);
      if ( *(char *)(*((_QWORD *)v35 + 16) + 7LL) >= 0 )
      {
        v20 = (__int64)v35;
        v38 = sub_1A69EF0(v4, v35);
        if ( v38 )
        {
          v39 = a3[6];
          if ( v39 )
            v64 = v39 & 0xFFFFFFFFFFFFFFF0LL;
          else
            v64 = sub_A7AA70(v4[31], (__int64)a3, (__int64)v25, (__int64)v26, v27, v28);
          sub_168B9B0((__int64)v31, (__int64)(v4 + 1), 2946);
          v73 = **(_QWORD **)(v30 + 16);
          v40 = sub_6D5440(v32);
          sub_AE9DF0(v31, v40, 8u);
          v41 = v75;
          v42 = *(_DWORD *)v30;
          v43 = *(_DWORD *)(v30 + 4);
          if ( v75 )
          {
            v44 = *(unsigned int *)(v75 + 424);
            v45 = *(unsigned int *)(v75 + 428);
            v46 = v44 + 1;
          }
          else
          {
            v48 = v76;
            v49 = *(_DWORD *)(v76 + 14976);
            if ( v49 )
            {
              v50 = (unsigned int)(v49 - 1);
              *(_DWORD *)(v76 + 14976) = v50;
              v41 = *(_QWORD *)(v48 + 8 * v50 + 14848);
              v51 = *(unsigned int *)(v41 + 536);
              *(_BYTE *)v41 = 0;
              v52 = *(_QWORD *)(v41 + 528);
              *(_DWORD *)(v41 + 424) = 0;
              v53 = v52 + (v51 << 6);
              if ( v52 == v53 )
              {
                v46 = 1;
                v44 = 0;
              }
              else
              {
                v65 = v30;
                v54 = v53;
                v67 = v4;
                v55 = v52;
                v69 = v31;
                v56 = v38;
                v57 = v42;
                v70 = v32;
                v58 = v41;
                do
                {
                  while ( 1 )
                  {
                    v54 -= 64;
                    v59 = *(void **)(v54 + 24);
                    if ( v59 == (void *)(v54 + 40) )
                      break;
                    operator delete(v59);
                    if ( v55 == v54 )
                      goto LABEL_47;
                  }
                }
                while ( v55 != v54 );
LABEL_47:
                v41 = v58;
                v42 = v57;
                v30 = v65;
                v44 = *(unsigned int *)(v58 + 424);
                v38 = v56;
                v4 = v67;
                v31 = v69;
                v32 = v70;
                v46 = v44 + 1;
              }
              *(_DWORD *)(v41 + 536) = 0;
              v45 = *(unsigned int *)(v41 + 428);
            }
            else
            {
              v68 = *(_DWORD *)v30;
              v41 = operator new(0x3A0u);
              v45 = 8;
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
              v42 = v68;
              *(_QWORD *)(v41 + 528) = v41 + 544;
              v46 = 1;
              *(_QWORD *)(v41 + 536) = 0x600000000LL;
              v44 = 0;
            }
            v75 = v41;
          }
          v73 = __PAIR64__(v43, v42);
          v74 = 1;
          if ( v46 > v45 )
          {
            v66 = v41;
            sub_2237220(v41 + 416, v41 + 432, v46, 12);
            v41 = v66;
            v44 = *(unsigned int *)(v66 + 424);
          }
          v47 = *(_QWORD *)(v41 + 416) + 12 * v44;
          *(_QWORD *)v47 = *v32;
          *(_DWORD *)(v47 + 8) = *((_DWORD *)v32 + 2);
          ++*(_DWORD *)(v41 + 424);
          sub_16602B0(v4, *(_DWORD *)v30, v38, (__int64)v31, v64);
          if ( v75 && v76 )
            sub_1580C40(v76, v75);
          sub_1910D40(v4, v72, v38, 1);
          v20 = v38;
          sub_18F5260((_DWORD)v4, v38, (unsigned int)&v72, 1, 0, 0, 0, 0, 0);
        }
      }
    }
    goto LABEL_35;
  }
LABEL_36:
  if ( v71 )
    sub_1850540(v4, v72, (__int64)a3, (__int64)&ptr, v27, v28);
  if ( !v80 )
    free(ptr);
}
