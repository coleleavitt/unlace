__int64 __fastcall sub_996D50(_QWORD *a1, int a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  __int64 *v4; // rbx
  unsigned __int8 *v5; // rbp
  __int64 v6; // r15
  _BYTE *v7; // rdx
  __int64 v8; // rax
  unsigned __int8 *v9; // rbp
  _BYTE *v10; // rdx
  __int64 v11; // rax
  unsigned __int8 *v12; // rbp
  _BYTE *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int8 *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // r12
  void *v25; // rdi
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r14
  void *v32; // rdi
  unsigned __int8 *v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r14
  void *v39; // rdi
  unsigned __int8 *v40; // rdx
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r15
  __int64 v45; // r14
  void *v46; // rdi
  __int64 v47; // [rsp+8h] [rbp-50h]
  __int64 v48; // [rsp+8h] [rbp-50h]
  int v49; // [rsp+18h] [rbp-40h]

  v2 = sub_A180F0(*(_QWORD *)(*a1 + 200LL), *(_QWORD *)a1[1]);
  result = sub_A2E130(*a1, v2, 2185, 0);
  if ( result )
  {
    v4 = (__int64 *)result;
    v5 = *(unsigned __int8 **)result;
    v6 = *(unsigned __int8 *)a1[2];
    if ( !*(_QWORD *)result )
    {
      v26 = *(_QWORD *)(result + 8);
      v27 = *(_DWORD *)(v26 + 14976);
      if ( v27 )
      {
        v28 = (unsigned int)(v27 - 1);
        *(_DWORD *)(v26 + 14976) = v28;
        v5 = *(unsigned __int8 **)(v26 + 8 * v28 + 14848);
        v29 = *((unsigned int *)v5 + 134);
        *v5 = 0;
        v30 = *((_QWORD *)v5 + 66);
        *((_DWORD *)v5 + 106) = 0;
        v31 = v30 + (v29 << 6);
        v47 = v30;
        while ( v47 != v31 )
        {
          v31 -= 64;
          v32 = *(void **)(v31 + 24);
          if ( v32 != (void *)(v31 + 40) )
            operator delete(v32, *(_QWORD *)(v31 + 40) + 1LL);
        }
        *((_DWORD *)v5 + 134) = 0;
      }
      else
      {
        v5 = (unsigned __int8 *)operator new(0x3A0u);
        *v5 = 0;
        *((_QWORD *)v5 + 12) = v5 + 112;
        *((_QWORD *)v5 + 16) = v5 + 144;
        *((_QWORD *)v5 + 20) = v5 + 176;
        *((_QWORD *)v5 + 24) = v5 + 208;
        *((_QWORD *)v5 + 28) = v5 + 240;
        *((_QWORD *)v5 + 32) = v5 + 272;
        *((_QWORD *)v5 + 36) = v5 + 304;
        *((_QWORD *)v5 + 40) = v5 + 336;
        *((_QWORD *)v5 + 44) = v5 + 368;
        *((_QWORD *)v5 + 48) = v5 + 400;
        *((_QWORD *)v5 + 13) = 0;
        v5[112] = 0;
        *((_QWORD *)v5 + 17) = 0;
        v5[144] = 0;
        *((_QWORD *)v5 + 21) = 0;
        v5[176] = 0;
        *((_QWORD *)v5 + 25) = 0;
        v5[208] = 0;
        *((_QWORD *)v5 + 29) = 0;
        v5[240] = 0;
        *((_QWORD *)v5 + 33) = 0;
        v5[272] = 0;
        *((_QWORD *)v5 + 37) = 0;
        v5[304] = 0;
        *((_QWORD *)v5 + 41) = 0;
        v5[336] = 0;
        *((_QWORD *)v5 + 45) = 0;
        v5[368] = 0;
        *((_QWORD *)v5 + 49) = 0;
        v5[400] = 0;
        *((_QWORD *)v5 + 52) = v5 + 432;
        *((_QWORD *)v5 + 53) = 0x800000000LL;
        *((_QWORD *)v5 + 66) = v5 + 544;
        *((_QWORD *)v5 + 67) = 0x600000000LL;
      }
      *v4 = (__int64)v5;
    }
    v5[*v5 + 1] = 2;
    v7 = (_BYTE *)*v4;
    v8 = *(unsigned __int8 *)*v4;
    *v7 = v8 + 1;
    *(_QWORD *)&v7[8 * v8 + 16] = v6;
    v9 = (unsigned __int8 *)*v4;
    if ( !*v4 )
    {
      v33 = (unsigned __int8 *)v4[1];
      v34 = *((_DWORD *)v33 + 3744);
      if ( v34 )
      {
        v35 = (unsigned int)(v34 - 1);
        *((_DWORD *)v33 + 3744) = v35;
        v9 = *(unsigned __int8 **)&v33[8 * v35 + 14848];
        v36 = *((unsigned int *)v9 + 134);
        *v9 = 0;
        v37 = *((_QWORD *)v9 + 66);
        *((_DWORD *)v9 + 106) = 0;
        v38 = v37 + (v36 << 6);
        v48 = v37;
        while ( v48 != v38 )
        {
          v38 -= 64;
          v39 = *(void **)(v38 + 24);
          if ( v39 != (void *)(v38 + 40) )
            operator delete(v39, *(_QWORD *)(v38 + 40) + 1LL);
        }
        *((_DWORD *)v9 + 134) = 0;
      }
      else
      {
        v9 = (unsigned __int8 *)operator new(0x3A0u);
        *v9 = 0;
        *((_QWORD *)v9 + 12) = v9 + 112;
        *((_QWORD *)v9 + 16) = v9 + 144;
        *((_QWORD *)v9 + 20) = v9 + 176;
        *((_QWORD *)v9 + 24) = v9 + 208;
        *((_QWORD *)v9 + 28) = v9 + 240;
        *((_QWORD *)v9 + 32) = v9 + 272;
        *((_QWORD *)v9 + 36) = v9 + 304;
        *((_QWORD *)v9 + 40) = v9 + 336;
        *((_QWORD *)v9 + 44) = v9 + 368;
        *((_QWORD *)v9 + 48) = v9 + 400;
        *((_QWORD *)v9 + 13) = 0;
        v9[112] = 0;
        *((_QWORD *)v9 + 17) = 0;
        v9[144] = 0;
        *((_QWORD *)v9 + 21) = 0;
        v9[176] = 0;
        *((_QWORD *)v9 + 25) = 0;
        v9[208] = 0;
        *((_QWORD *)v9 + 29) = 0;
        v9[240] = 0;
        *((_QWORD *)v9 + 33) = 0;
        v9[272] = 0;
        *((_QWORD *)v9 + 37) = 0;
        v9[304] = 0;
        *((_QWORD *)v9 + 41) = 0;
        v9[336] = 0;
        *((_QWORD *)v9 + 45) = 0;
        v9[368] = 0;
        *((_QWORD *)v9 + 49) = 0;
        v9[400] = 0;
        *((_QWORD *)v9 + 52) = v9 + 432;
        *((_QWORD *)v9 + 53) = 0x800000000LL;
        *((_QWORD *)v9 + 66) = v9 + 544;
        *((_QWORD *)v9 + 67) = 0x600000000LL;
      }
      *v4 = (__int64)v9;
    }
    v9[*v9 + 1] = 2;
    v10 = (_BYTE *)*v4;
    v11 = *(unsigned __int8 *)*v4;
    *v10 = v11 + 1;
    *(_QWORD *)&v10[8 * v11 + 16] = a2 == 4;
    v12 = (unsigned __int8 *)*v4;
    if ( !*v4 )
    {
      v40 = (unsigned __int8 *)v4[1];
      v41 = *((_DWORD *)v40 + 3744);
      if ( v41 )
      {
        v42 = (unsigned int)(v41 - 1);
        *((_DWORD *)v40 + 3744) = v42;
        v12 = *(unsigned __int8 **)&v40[8 * v42 + 14848];
        v43 = *((unsigned int *)v12 + 134);
        *v12 = 0;
        v44 = *((_QWORD *)v12 + 66);
        *((_DWORD *)v12 + 106) = 0;
        v45 = v44 + (v43 << 6);
        while ( v44 != v45 )
        {
          while ( 1 )
          {
            v45 -= 64;
            v46 = *(void **)(v45 + 24);
            if ( v46 == (void *)(v45 + 40) )
              break;
            operator delete(v46, *(_QWORD *)(v45 + 40) + 1LL);
            if ( v44 == v45 )
              goto LABEL_36;
          }
        }
LABEL_36:
        *((_DWORD *)v12 + 134) = 0;
      }
      else
      {
        v12 = (unsigned __int8 *)operator new(0x3A0u);
        *v12 = 0;
        *((_QWORD *)v12 + 12) = v12 + 112;
        *((_QWORD *)v12 + 16) = v12 + 144;
        *((_QWORD *)v12 + 20) = v12 + 176;
        *((_QWORD *)v12 + 24) = v12 + 208;
        *((_QWORD *)v12 + 28) = v12 + 240;
        *((_QWORD *)v12 + 32) = v12 + 272;
        *((_QWORD *)v12 + 36) = v12 + 304;
        *((_QWORD *)v12 + 40) = v12 + 336;
        *((_QWORD *)v12 + 44) = v12 + 368;
        *((_QWORD *)v12 + 48) = v12 + 400;
        *((_QWORD *)v12 + 13) = 0;
        v12[112] = 0;
        *((_QWORD *)v12 + 17) = 0;
        v12[144] = 0;
        *((_QWORD *)v12 + 21) = 0;
        v12[176] = 0;
        *((_QWORD *)v12 + 25) = 0;
        v12[208] = 0;
        *((_QWORD *)v12 + 29) = 0;
        v12[240] = 0;
        *((_QWORD *)v12 + 33) = 0;
        v12[272] = 0;
        *((_QWORD *)v12 + 37) = 0;
        v12[304] = 0;
        *((_QWORD *)v12 + 41) = 0;
        v12[336] = 0;
        *((_QWORD *)v12 + 45) = 0;
        v12[368] = 0;
        *((_QWORD *)v12 + 49) = 0;
        v12[400] = 0;
        *((_QWORD *)v12 + 52) = v12 + 432;
        *((_QWORD *)v12 + 53) = 0x800000000LL;
        *((_QWORD *)v12 + 66) = v12 + 544;
        *((_QWORD *)v12 + 67) = 0x600000000LL;
      }
      *v4 = (__int64)v12;
    }
    v12[*v12 + 1] = 2;
    v13 = (_BYTE *)*v4;
    v14 = *(unsigned __int8 *)*v4;
    *v13 = v14 + 1;
    *(_QWORD *)&v13[8 * v14 + 16] = a2;
    v15 = sub_AC7B80(v2);
    v16 = *v4;
    v17 = v15;
    if ( !*v4 )
    {
      v19 = (unsigned __int8 *)v4[1];
      v20 = *((_DWORD *)v19 + 3744);
      if ( v20 )
      {
        v21 = (unsigned int)(v20 - 1);
        *((_DWORD *)v19 + 3744) = v21;
        v16 = *(_QWORD *)&v19[8 * v21 + 14848];
        v22 = *(unsigned int *)(v16 + 536);
        *(_BYTE *)v16 = 0;
        v23 = *(_QWORD *)(v16 + 528);
        *(_DWORD *)(v16 + 424) = 0;
        v24 = v23 + (v22 << 6);
        while ( v23 != v24 )
        {
          while ( 1 )
          {
            v24 -= 64;
            v25 = *(void **)(v24 + 24);
            if ( v25 == (void *)(v24 + 40) )
              break;
            operator delete(v25, *(_QWORD *)(v24 + 40) + 1LL);
            if ( v23 == v24 )
              goto LABEL_15;
          }
        }
LABEL_15:
        *(_DWORD *)(v16 + 536) = 0;
      }
      else
      {
        v16 = operator new(0x3A0u);
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
        *(_QWORD *)(v16 + 416) = v16 + 432;
        *(_QWORD *)(v16 + 424) = 0x800000000LL;
        *(_QWORD *)(v16 + 528) = v16 + 544;
        *(_QWORD *)(v16 + 536) = 0x600000000LL;
      }
      *v4 = v16;
    }
    v18 = *(unsigned int *)(v16 + 424);
    LOBYTE(v49) = 1;
    if ( *(unsigned int *)(v16 + 428) < (unsigned __int64)(v18 + 1) )
    {
      sub_25D6060(v16 + 416, v16 + 432, v18 + 1, 12);
      v18 = *(unsigned int *)(v16 + 424);
    }
    result = *(_QWORD *)(v16 + 416) + 12 * v18;
    *(_QWORD *)result = v17;
    *(_DWORD *)(result + 8) = v49;
    ++*(_DWORD *)(v16 + 424);
  }
  return result;
}

