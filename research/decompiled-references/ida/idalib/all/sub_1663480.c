__int64 __fastcall sub_1663480(_QWORD *a1, __int64 a2, __int64 a3, double a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 (__fastcall *v13)(unsigned __int64); // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r14
  void *v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
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
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // r14
  unsigned int v40; // r15d
  unsigned int v41; // ebp
  __int64 v42; // [rsp+0h] [rbp-A8h]
  int v44; // [rsp+18h] [rbp-90h]
  char v45[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v46; // [rsp+28h] [rbp-80h]
  __int64 v47; // [rsp+30h] [rbp-78h]
  __int64 v48; // [rsp+38h] [rbp-70h]
  void *v49; // [rsp+40h] [rbp-68h]
  unsigned __int64 v50; // [rsp+48h] [rbp-60h]
  int v51; // [rsp+50h] [rbp-58h]
  char v52; // [rsp+58h] [rbp-50h]
  __int64 v53; // [rsp+60h] [rbp-48h]
  __int64 v54; // [rsp+68h] [rbp-40h]

  v4 = 0;
  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) != 0 )
  {
    if ( (a3 & 3) == 3 || (a3 & 3) == 0 )
    {
      return 0;
    }
    else
    {
      v8 = sub_BFB9F0(a2);
      v9 = *(_WORD *)v8 & 0x1FF;
      if ( v9 == 4 )
      {
        v8 = sub_BFB9F0(*(_QWORD *)(v8 + 16));
        v9 = *(_WORD *)v8 & 0x1FF;
      }
      if ( v9 == 24 )
        v10 = *(_QWORD *)(v8 + 56);
      else
        v10 = sub_C95870(v8, a2, v6, v7);
      v47 = v10;
      v11 = a1[31];
      v51 = 0;
      v46 = a3 & 0xFFFFFFFFFFFFFFF8LL;
      v50 = v11 + 2448;
      v52 &= 0xFCu;
      v45[0] = a3 & 3 | v45[0] & 0xFC | 4;
      v48 = 0;
      v49 = nullptr;
      v53 = 0;
      v12 = sub_1654A20(a3 & 0xFFFFFFFFFFFFFFF8LL);
      v13 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 32LL);
      if ( v13 == sub_A01140 )
        v14 = sub_B70A60(v12);
      else
        v14 = v13(v12);
      v54 = v14;
      v51 = 2941;
      v38 = sub_EEC8C0(v8, a2, a4);
      v39 = v50;
      v40 = v38;
      v41 = HIDWORD(v38);
      v15 = *(_DWORD *)(v50 + 14976);
      if ( v15 )
      {
        v16 = (unsigned int)(v15 - 1);
        *(_DWORD *)(v50 + 14976) = v16;
        v17 = *(_QWORD *)(v39 + 8 * v16 + 14848);
        v18 = *(unsigned int *)(v17 + 536);
        *(_BYTE *)v17 = 0;
        v19 = *(_QWORD *)(v17 + 528);
        *(_DWORD *)(v17 + 424) = 0;
        v20 = v19 + (v18 << 6);
        if ( v19 == v20 )
        {
          v23 = 1;
          v22 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v20 -= 64;
              v21 = *(void **)(v20 + 24);
              if ( v21 == (void *)(v20 + 40) )
                break;
              v42 = v19;
              operator delete(v21);
              v19 = v42;
              if ( v42 == v20 )
                goto LABEL_14;
            }
          }
          while ( v19 != v20 );
LABEL_14:
          v22 = *(unsigned int *)(v17 + 424);
          v23 = v22 + 1;
        }
        *(_DWORD *)(v17 + 536) = 0;
        v24 = *(unsigned int *)(v17 + 428);
      }
      else
      {
        v37 = operator new(0x3A0u);
        v24 = 8;
        v23 = 1;
        v17 = v37;
        *(_BYTE *)v37 = 0;
        *(_QWORD *)(v37 + 96) = v37 + 112;
        *(_QWORD *)(v37 + 128) = v37 + 144;
        *(_QWORD *)(v37 + 160) = v37 + 176;
        *(_QWORD *)(v37 + 192) = v37 + 208;
        *(_QWORD *)(v37 + 224) = v37 + 240;
        *(_QWORD *)(v37 + 256) = v37 + 272;
        *(_QWORD *)(v37 + 288) = v37 + 304;
        *(_QWORD *)(v37 + 320) = v37 + 336;
        *(_QWORD *)(v37 + 352) = v37 + 368;
        *(_QWORD *)(v37 + 384) = v37 + 400;
        *(_QWORD *)(v37 + 416) = v37 + 432;
        *(_QWORD *)(v37 + 104) = 0;
        *(_BYTE *)(v37 + 112) = 0;
        *(_QWORD *)(v37 + 136) = 0;
        *(_BYTE *)(v37 + 144) = 0;
        *(_QWORD *)(v37 + 168) = 0;
        *(_BYTE *)(v37 + 176) = 0;
        *(_QWORD *)(v37 + 200) = 0;
        *(_BYTE *)(v37 + 208) = 0;
        *(_QWORD *)(v37 + 232) = 0;
        *(_BYTE *)(v37 + 240) = 0;
        *(_QWORD *)(v37 + 264) = 0;
        *(_BYTE *)(v37 + 272) = 0;
        *(_QWORD *)(v37 + 296) = 0;
        *(_BYTE *)(v37 + 304) = 0;
        *(_QWORD *)(v37 + 328) = 0;
        *(_BYTE *)(v37 + 336) = 0;
        *(_QWORD *)(v37 + 360) = 0;
        *(_BYTE *)(v37 + 368) = 0;
        *(_QWORD *)(v37 + 392) = 0;
        *(_BYTE *)(v37 + 400) = 0;
        *(_QWORD *)(v37 + 424) = 0x800000000LL;
        *(_QWORD *)(v37 + 528) = v37 + 544;
        *(_QWORD *)(v37 + 536) = 0x600000000LL;
        v22 = 0;
      }
      v49 = (void *)v17;
      LOBYTE(v44) = 1;
      if ( v23 > v24 )
      {
        sub_2237220(v17 + 416, v17 + 432, v23, 12);
        v22 = *(unsigned int *)(v17 + 424);
      }
      v25 = *(_QWORD *)(v17 + 416) + 12 * v22;
      *(_QWORD *)v25 = __PAIR64__(v41, v40);
      *(_DWORD *)(v25 + 8) = v44;
      ++*(_DWORD *)(v17 + 424);
      v26 = sub_165D180(a1, *(_DWORD *)(v8 + 24), (__int64)v45);
      v27 = (void **)v49;
      v4 = v26;
      if ( v49 )
      {
        v28 = v50;
        if ( v50 )
        {
          if ( (unsigned __int64)v49 < v50 || (unsigned __int64)v49 > v50 + 14848 )
          {
            v29 = *((void ***)v49 + 66);
            v30 = &v29[8 * (unsigned __int64)*((unsigned int *)v49 + 134)];
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
                    goto LABEL_24;
                }
              }
              while ( v29 != v30 );
LABEL_24:
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
                  goto LABEL_32;
              }
              v33 -= 4;
            }
            while ( v34 != v33 );
LABEL_32:
            operator delete(v27, 0x3A0u);
          }
          else
          {
            v36 = *(unsigned int *)(v50 + 14976);
            *(_DWORD *)(v50 + 14976) = v36 + 1;
            *(_QWORD *)(v28 + 8 * v36 + 14848) = v27;
          }
        }
      }
    }
  }
  return v4;
}
