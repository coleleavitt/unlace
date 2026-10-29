__int64 __fastcall sub_1661D40(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  unsigned int v6; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // rdi
  __int64 (__fastcall *v13)(unsigned __int64); // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  void **v23; // rbp
  unsigned __int64 v24; // rax
  void **v25; // r12
  void **v26; // rbx
  void **v27; // rdi
  void **v28; // rdi
  void **v29; // rbx
  void **v30; // r12
  __int64 v31; // rdx
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // r15
  __int64 v36; // r14
  void *v37; // rdi
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

  if ( (*(_BYTE *)(a1[29] + 46LL) & 0x20) != 0 && a4 )
  {
    v6 = a5 & 3;
    if ( (a5 & 3) != 0 )
    {
      v40 = a5 & 0xFFFFFFFFFFFFFFF8LL;
      v41 = a4;
      v45 = 0;
      v39[0] = v6 | v39[0] & 0xFC | 4;
      v11 = a1[31];
      v42 = 0;
      v46 &= 0xFCu;
      v43 = nullptr;
      v44 = v11 + 2448;
      v47 = 0;
      v12 = sub_1654A20(a5 & 0xFFFFFFFFFFFFFFF8LL);
      v13 = *(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 32LL);
      if ( v13 == sub_A01140 )
        v14 = sub_B70A60(v12);
      else
        v14 = v13(v12);
      v48 = v14;
      if ( a6 )
      {
        v45 = 2941;
        v15 = v44;
        v32 = *(_DWORD *)(v44 + 14976);
        if ( v32 )
        {
          v33 = (unsigned int)(v32 - 1);
          *(_DWORD *)(v44 + 14976) = v33;
          v19 = *(_QWORD *)(v15 + 8 * v33 + 14848);
          v34 = *(unsigned int *)(v19 + 536);
          v35 = *(_QWORD *)(v19 + 528);
          *(_BYTE *)v19 = 0;
          *(_DWORD *)(v19 + 424) = 0;
          v36 = v35 + (v34 << 6);
          if ( v35 == v36 )
          {
            v18 = 1;
            v20 = 0;
          }
          else
          {
            do
            {
              while ( 1 )
              {
                v36 -= 64;
                v37 = *(void **)(v36 + 24);
                if ( v37 == (void *)(v36 + 40) )
                  break;
                operator delete(v37);
                if ( v35 == v36 )
                  goto LABEL_39;
              }
            }
            while ( v35 != v36 );
LABEL_39:
            v20 = *(unsigned int *)(v19 + 424);
            v18 = v20 + 1;
          }
          *(_DWORD *)(v19 + 536) = 0;
          v17 = *(unsigned int *)(v19 + 428);
        }
        else
        {
          v16 = operator new(0x3A0u);
          v17 = 8;
          v18 = 1;
          v19 = v16;
          *(_BYTE *)v16 = 0;
          *(_QWORD *)(v16 + 96) = v16 + 112;
          *(_QWORD *)(v16 + 128) = v16 + 144;
          *(_QWORD *)(v16 + 160) = v16 + 176;
          *(_QWORD *)(v16 + 192) = v16 + 208;
          *(_QWORD *)(v16 + 224) = v16 + 240;
          *(_QWORD *)(v16 + 256) = v16 + 272;
          *(_QWORD *)(v16 + 288) = v16 + 304;
          *(_QWORD *)(v16 + 320) = v16 + 336;
          *(_QWORD *)(v16 + 352) = v16 + 368;
          *(_QWORD *)(v16 + 384) = v16 + 400;
          *(_QWORD *)(v16 + 416) = v16 + 432;
          *(_QWORD *)(v16 + 104) = 0;
          *(_BYTE *)(v16 + 112) = 0;
          *(_QWORD *)(v16 + 136) = 0;
          *(_BYTE *)(v16 + 144) = 0;
          *(_QWORD *)(v16 + 168) = 0;
          *(_BYTE *)(v16 + 176) = 0;
          *(_QWORD *)(v16 + 200) = 0;
          *(_BYTE *)(v16 + 208) = 0;
          *(_QWORD *)(v16 + 232) = 0;
          *(_BYTE *)(v16 + 240) = 0;
          *(_QWORD *)(v16 + 264) = 0;
          *(_BYTE *)(v16 + 272) = 0;
          *(_QWORD *)(v16 + 296) = 0;
          *(_BYTE *)(v16 + 304) = 0;
          *(_QWORD *)(v16 + 328) = 0;
          *(_BYTE *)(v16 + 336) = 0;
          *(_QWORD *)(v16 + 360) = 0;
          *(_BYTE *)(v16 + 368) = 0;
          *(_QWORD *)(v16 + 392) = 0;
          *(_BYTE *)(v16 + 400) = 0;
          *(_QWORD *)(v16 + 424) = 0x800000000LL;
          *(_QWORD *)(v16 + 528) = v16 + 544;
          *(_QWORD *)(v16 + 536) = 0x600000000LL;
          v20 = 0;
        }
        v43 = (void *)v19;
        LOBYTE(v38) = 1;
        if ( v18 > v17 )
        {
          sub_2237220(v19 + 416, v19 + 432, v18, 12);
          v20 = *(unsigned int *)(v19 + 424);
        }
        v21 = *(_QWORD *)(v19 + 416) + 12 * v20;
        *(_QWORD *)v21 = a3;
        *(_DWORD *)(v21 + 8) = v38;
        ++*(_DWORD *)(v19 + 424);
      }
      v22 = sub_165D180(a1, a2, (__int64)v39);
      v23 = (void **)v43;
      v6 = v22;
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
                    goto LABEL_19;
                }
              }
              while ( v25 != v26 );
LABEL_19:
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
                  goto LABEL_27;
              }
              v29 -= 4;
            }
            while ( v29 != v30 );
LABEL_27:
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
  else
  {
    return 0;
  }
  return v6;
}
