__int64 __fastcall sub_165F300(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, double a5)
{
  unsigned int v5; // ebp
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(void); // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r14
  void *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v25; // rax
  unsigned int v26; // eax
  void **v27; // r12
  unsigned __int64 v28; // rax
  void **v29; // r13
  void **v30; // rbx
  void **v31; // rdi
  void **v32; // rdi
  void **v33; // rbx
  void **v34; // r13
  char v35; // al
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // r14
  unsigned int v39; // r15d
  unsigned int v40; // ebp
  __int64 v41; // [rsp+0h] [rbp-A8h]
  int v43; // [rsp+18h] [rbp-90h]
  char v44[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v45; // [rsp+28h] [rbp-80h]
  __int64 v46; // [rsp+30h] [rbp-78h]
  __int64 v47; // [rsp+38h] [rbp-70h]
  void *v48; // [rsp+40h] [rbp-68h]
  unsigned __int64 v49; // [rsp+48h] [rbp-60h]
  int v50; // [rsp+50h] [rbp-58h]
  char v51; // [rsp+58h] [rbp-50h]
  __int64 v52; // [rsp+60h] [rbp-48h]
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v5 = 0;
  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) == 0 )
    return v5;
  v5 = a3 & 3;
  if ( (a3 & 3) == 0 )
    return v5;
  v7 = *(_QWORD *)(a2 + 64);
  if ( (*(_DWORD *)a2 & 0x100000) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a2 + 64) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v8 + 16) != 42 )
      v8 = sub_F63050(v8, a2, a3, a4);
    v7 = *(_QWORD *)(v8 + 32);
  }
  v47 = v7;
  v46 = sub_C95870(a2, a2, a3, a4);
  v9 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = a1[31] + 2448LL;
  v45 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  v49 = v10;
  v50 = 0;
  v44[0] = a3 & 3 | v44[0] & 0xFC | 4;
  v48 = nullptr;
  if ( (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v35 = sub_B72F20(v9);
    v9 = v45;
    v52 = 0;
    v51 = v35 & 1 | v51 & 0xFC;
    if ( (v44[0] & 4) == 0 )
      goto LABEL_10;
  }
  else
  {
    v51 &= 0xFCu;
    v52 = 0;
  }
  v9 = sub_1654A20(v9);
LABEL_10:
  v53 = v9;
  v11 = *(__int64 (**)(void))(*(_QWORD *)v9 + 32LL);
  if ( (char *)v11 == (char *)sub_A01140 )
    v12 = sub_B70A60(v9);
  else
    v12 = v11();
  v53 = v12;
  v50 = 2941;
  v37 = sub_EEC8C0(a2, a2, a5);
  v38 = v49;
  v39 = v37;
  v40 = HIDWORD(v37);
  v13 = *(_DWORD *)(v49 + 14976);
  if ( v13 )
  {
    v14 = (unsigned int)(v13 - 1);
    *(_DWORD *)(v49 + 14976) = v14;
    v15 = *(_QWORD *)(v38 + 8 * v14 + 14848);
    v16 = *(unsigned int *)(v15 + 536);
    *(_BYTE *)v15 = 0;
    v17 = *(_QWORD *)(v15 + 528);
    *(_DWORD *)(v15 + 424) = 0;
    v18 = v17 + (v16 << 6);
    if ( v17 == v18 )
    {
      v21 = 1;
      v20 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v18 -= 64;
          v19 = *(void **)(v18 + 24);
          if ( v19 == (void *)(v18 + 40) )
            break;
          v41 = v17;
          operator delete(v19);
          v17 = v41;
          if ( v41 == v18 )
            goto LABEL_16;
        }
      }
      while ( v17 != v18 );
LABEL_16:
      v20 = *(unsigned int *)(v15 + 424);
      v21 = v20 + 1;
    }
    *(_DWORD *)(v15 + 536) = 0;
    v22 = *(unsigned int *)(v15 + 428);
  }
  else
  {
    v36 = operator new(0x3A0u);
    v22 = 8;
    v21 = 1;
    v15 = v36;
    *(_BYTE *)v36 = 0;
    *(_QWORD *)(v36 + 96) = v36 + 112;
    *(_QWORD *)(v36 + 128) = v36 + 144;
    *(_QWORD *)(v36 + 160) = v36 + 176;
    *(_QWORD *)(v36 + 192) = v36 + 208;
    *(_QWORD *)(v36 + 224) = v36 + 240;
    *(_QWORD *)(v36 + 256) = v36 + 272;
    *(_QWORD *)(v36 + 288) = v36 + 304;
    *(_QWORD *)(v36 + 320) = v36 + 336;
    *(_QWORD *)(v36 + 352) = v36 + 368;
    *(_QWORD *)(v36 + 384) = v36 + 400;
    *(_QWORD *)(v36 + 416) = v36 + 432;
    *(_QWORD *)(v36 + 104) = 0;
    *(_BYTE *)(v36 + 112) = 0;
    *(_QWORD *)(v36 + 136) = 0;
    *(_BYTE *)(v36 + 144) = 0;
    *(_QWORD *)(v36 + 168) = 0;
    *(_BYTE *)(v36 + 176) = 0;
    *(_QWORD *)(v36 + 200) = 0;
    *(_BYTE *)(v36 + 208) = 0;
    *(_QWORD *)(v36 + 232) = 0;
    *(_BYTE *)(v36 + 240) = 0;
    *(_QWORD *)(v36 + 264) = 0;
    *(_BYTE *)(v36 + 272) = 0;
    *(_QWORD *)(v36 + 296) = 0;
    *(_BYTE *)(v36 + 304) = 0;
    *(_QWORD *)(v36 + 328) = 0;
    *(_BYTE *)(v36 + 336) = 0;
    *(_QWORD *)(v36 + 360) = 0;
    *(_BYTE *)(v36 + 368) = 0;
    *(_QWORD *)(v36 + 392) = 0;
    *(_BYTE *)(v36 + 400) = 0;
    *(_QWORD *)(v36 + 424) = 0x800000000LL;
    *(_QWORD *)(v36 + 528) = v36 + 544;
    *(_QWORD *)(v36 + 536) = 0x600000000LL;
    v20 = 0;
  }
  v48 = (void *)v15;
  LOBYTE(v43) = 1;
  if ( v21 > v22 )
  {
    sub_2237220(v15 + 416, v15 + 432, v21, 12);
    v20 = *(unsigned int *)(v15 + 424);
  }
  v25 = *(_QWORD *)(v15 + 416) + 12 * v20;
  *(_QWORD *)v25 = __PAIR64__(v40, v39);
  *(_DWORD *)(v25 + 8) = v43;
  ++*(_DWORD *)(v15 + 424);
  v26 = sub_165D180(a1, *(_DWORD *)(a2 + 24), (__int64)v44);
  v27 = (void **)v48;
  v5 = v26;
  if ( v48 )
  {
    v28 = v49;
    if ( v49 )
    {
      if ( (unsigned __int64)v48 < v49 || (unsigned __int64)v48 > v49 + 14848 )
      {
        v29 = *((void ***)v48 + 66);
        v30 = &v29[8 * (unsigned __int64)*((unsigned int *)v48 + 134)];
        if ( v29 != v30 )
        {
          do
          {
            while ( 1 )
            {
              v30 -= 8;
              v31 = (void **)v30[3];
              if ( v31 == v30 + 5 )
                break;
              operator delete(v31);
              if ( v29 == v30 )
                goto LABEL_29;
            }
          }
          while ( v29 != v30 );
LABEL_29:
          v30 = (void **)v27[66];
        }
        if ( v30 != v27 + 68 )
          free(v30);
        v32 = (void **)v27[52];
        if ( v32 != v27 + 54 )
          free(v32);
        v33 = v27 + 48;
        v34 = v27 + 8;
        do
        {
          while ( *v33 != v33 + 2 )
          {
            operator delete(*v33);
            v33 -= 4;
            if ( v33 == v34 )
              goto LABEL_37;
          }
          v33 -= 4;
        }
        while ( v33 != v34 );
LABEL_37:
        operator delete(v27, 0x3A0u);
      }
      else
      {
        v23 = *(unsigned int *)(v49 + 14976);
        *(_DWORD *)(v49 + 14976) = v23 + 1;
        *(_QWORD *)(v28 + 8 * v23 + 14848) = v27;
      }
    }
  }
  return v5;
}
