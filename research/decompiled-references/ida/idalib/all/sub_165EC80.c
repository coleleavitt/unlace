__int64 __fastcall sub_165EC80(_QWORD *a1, unsigned __int64 a2, __int64 a3, double a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 (__fastcall *v9)(unsigned __int64); // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r14
  void *v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  void **v23; // r12
  unsigned __int64 v24; // rax
  void **v25; // r13
  void **v26; // rbx
  void **v27; // rdi
  void **v28; // rdi
  void **v29; // rbx
  void **v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  unsigned int v35; // r15d
  unsigned int v36; // ebp
  __int64 v37; // [rsp+0h] [rbp-A8h]
  int v38; // [rsp+18h] [rbp-90h]
  char v39[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-80h]
  __int64 v41; // [rsp+30h] [rbp-78h]
  __int64 v42; // [rsp+38h] [rbp-70h]
  void *v43; // [rsp+40h] [rbp-68h]
  unsigned __int64 v44; // [rsp+48h] [rbp-60h]
  int v45; // [rsp+50h] [rbp-58h]
  char v46; // [rsp+58h] [rbp-50h]
  __int64 v47; // [rsp+60h] [rbp-48h]
  __int64 v48; // [rsp+68h] [rbp-40h]

  v4 = 0;
  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) != 0 )
  {
    if ( *(_QWORD *)(a2 + 56) )
    {
      v4 = a3 & 3;
      if ( (a3 & 3) != 0 )
      {
        v41 = *(_QWORD *)(a2 + 56);
        v40 = a3 & 0xFFFFFFFFFFFFFFF8LL;
        v45 = 0;
        v46 &= 0xFCu;
        v39[0] = v4 | v39[0] & 0xFC | 4;
        v7 = a1[31];
        v42 = 0;
        v43 = nullptr;
        v44 = v7 + 2448;
        v47 = 0;
        v8 = sub_1654A20(a3 & 0xFFFFFFFFFFFFFFF8LL);
        v9 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 32LL);
        if ( v9 == sub_A01140 )
          v10 = sub_B70A60(v8);
        else
          v10 = v9(v8);
        v48 = v10;
        v45 = 2941;
        v33 = sub_EEC8C0(a2, a2, a4);
        v34 = v44;
        v35 = v33;
        v36 = HIDWORD(v33);
        v11 = *(_DWORD *)(v44 + 14976);
        if ( v11 )
        {
          v12 = (unsigned int)(v11 - 1);
          *(_DWORD *)(v44 + 14976) = v12;
          v13 = *(_QWORD *)(v34 + 8 * v12 + 14848);
          v14 = *(unsigned int *)(v13 + 536);
          *(_BYTE *)v13 = 0;
          v15 = *(_QWORD *)(v13 + 528);
          *(_DWORD *)(v13 + 424) = 0;
          v16 = v15 + (v14 << 6);
          if ( v15 == v16 )
          {
            v19 = 1;
            v18 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v16 -= 64;
                v17 = *(void **)(v16 + 24);
                if ( v17 == (void *)(v16 + 40) )
                  break;
                v37 = v15;
                operator delete(v17);
                v15 = v37;
                if ( v37 == v16 )
                  goto LABEL_11;
              }
            }
            while ( v15 != v16 );
LABEL_11:
            v18 = *(unsigned int *)(v13 + 424);
            v19 = v18 + 1;
          }
          *(_DWORD *)(v13 + 536) = 0;
          v20 = *(unsigned int *)(v13 + 428);
        }
        else
        {
          v32 = operator new(0x3A0u);
          v20 = 8;
          v19 = 1;
          v13 = v32;
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
        v43 = (void *)v13;
        LOBYTE(v38) = 1;
        if ( v19 > v20 )
        {
          sub_2237220(v13 + 416, v13 + 432, v19, 12);
          v18 = *(unsigned int *)(v13 + 424);
        }
        v21 = *(_QWORD *)(v13 + 416) + 12 * v18;
        *(_QWORD *)v21 = __PAIR64__(v36, v35);
        *(_DWORD *)(v21 + 8) = v38;
        ++*(_DWORD *)(v13 + 424);
        v22 = sub_165D180(a1, *(_DWORD *)(a2 + 24), (__int64)v39);
        v23 = (void **)v43;
        v4 = v22;
        if ( v43 )
        {
          v24 = v44;
          if ( v44 )
          {
            if ( (unsigned __int64)v43 < v44 || (unsigned __int64)v43 > v44 + 14848 )
            {
              v25 = *((void ***)v43 + 66);
              v26 = &v25[8 * (unsigned __int64)*((unsigned int *)v43 + 134)];
              if ( v25 != v26 )
              {
                do
                {
                  while ( 1 )
                  {
                    v26 -= 8;
                    v27 = (void **)v26[3];
                    if ( v27 == v26 + 5 )
                      break;
                    operator delete(v27);
                    if ( v25 == v26 )
                      goto LABEL_21;
                  }
                }
                while ( v25 != v26 );
LABEL_21:
                v26 = (void **)v23[66];
              }
              if ( v26 != v23 + 68 )
                free(v26);
              v28 = (void **)v23[52];
              if ( v28 != v23 + 54 )
                free(v28);
              v29 = v23 + 48;
              v30 = v23 + 8;
              do
              {
                while ( *v29 != v29 + 2 )
                {
                  operator delete(*v29);
                  v29 -= 4;
                  if ( v29 == v30 )
                    goto LABEL_29;
                }
                v29 -= 4;
              }
              while ( v29 != v30 );
LABEL_29:
              operator delete(v23, 0x3A0u);
            }
            else
            {
              v31 = *(unsigned int *)(v44 + 14976);
              *(_DWORD *)(v44 + 14976) = v31 + 1;
              *(_QWORD *)(v24 + 8 * v31 + 14848) = v23;
            }
          }
        }
      }
    }
  }
  return v4;
}
