__int64 __fastcall sub_8AFDE0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int16 v7; // ax
  __int64 *v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r12d
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned int v18; // eax
  void *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r13
  __int64 v26; // rbx
  void *v27; // rdi
  void *v28; // [rsp+0h] [rbp-168h] BYREF
  unsigned int v29; // [rsp+8h] [rbp-160h]
  char v30; // [rsp+Ch] [rbp-15Ch]
  int v31; // [rsp+10h] [rbp-158h]
  unsigned int v32; // [rsp+20h] [rbp-148h] BYREF
  char v33; // [rsp+24h] [rbp-144h]
  void *v34; // [rsp+28h] [rbp-140h]
  unsigned int v35; // [rsp+30h] [rbp-138h]
  char v36; // [rsp+34h] [rbp-134h]
  int v37; // [rsp+38h] [rbp-130h]
  unsigned int v38; // [rsp+60h] [rbp-108h] BYREF
  char v39; // [rsp+64h] [rbp-104h]
  void *v40; // [rsp+68h] [rbp-100h]
  unsigned int v41; // [rsp+70h] [rbp-F8h]
  char v42; // [rsp+74h] [rbp-F4h]
  int v43; // [rsp+78h] [rbp-F0h]
  __int64 v44; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-C0h]
  __int64 v46; // [rsp+B0h] [rbp-B8h]
  char v47; // [rsp+B8h] [rbp-B0h]
  __int64 v48; // [rsp+C8h] [rbp-A0h]
  void *ptr; // [rsp+D0h] [rbp-98h]
  __int64 v50; // [rsp+D8h] [rbp-90h]
  _BYTE v51[136]; // [rsp+E0h] [rbp-88h] BYREF

  v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    v15 = *a1;
    v13 = 0;
    v47 |= 1u;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v48 = 0;
    ptr = v51;
    v50 = 0x800000000LL;
    v51[65] = 0;
    if ( sub_89E210(v15, a2, (__int64)&v44, 1, a5, a6) )
    {
      v16 = *(_QWORD *)(a2 + 8);
      v17 = *a1;
      v33 &= ~1u;
      v32 = 0;
      v13 = sub_85F440(v17, (_DWORD *)a2, v16, (__int64)&v44, (__int64)&v32, 0);
      if ( (_BYTE)v13 )
      {
        v18 = v35;
        v29 = v35;
        if ( v35 > 0x40 )
        {
          sub_2585B30(&v28);
          v18 = v29;
          v19 = v28;
        }
        else
        {
          v19 = v34;
          v28 = v34;
        }
        v40 = v19;
        v20 = a1[1];
        v41 = v18;
        v39 &= ~1u;
        v30 = v36;
        v31 = v37;
        v29 = 0;
        v42 = v36;
        v43 = v37;
        v38 = 4;
        sub_6A01B0(v20, (__int64)&v38);
        if ( v38 > 1 )
          sub_69F740((__int64)&v38);
        if ( v29 > 0x40 && v28 )
          operator delete[](v28);
      }
      if ( v32 > 1 )
        sub_69F740((__int64)&v32);
    }
    if ( ptr != v51 )
      free(ptr);
    return v13;
  }
  if ( (unsigned int)(unsigned __int8)v7 - 21 <= 0xA )
  {
    v8 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v9 = sub_AC7B80(a2);
    if ( v8 )
    {
      v10 = *v8;
      if ( !*v8 )
      {
        v21 = v8[1];
        v22 = *(_DWORD *)(v21 + 14976);
        if ( v22 )
        {
          v23 = (unsigned int)(v22 - 1);
          *(_DWORD *)(v21 + 14976) = v23;
          v10 = *(_QWORD *)(v21 + 8 * v23 + 14848);
          v24 = *(unsigned int *)(v10 + 536);
          *(_BYTE *)v10 = 0;
          v25 = *(_QWORD *)(v10 + 528);
          *(_DWORD *)(v10 + 424) = 0;
          v26 = v25 + (v24 << 6);
          while ( v25 != v26 )
          {
            while ( 1 )
            {
              v26 -= 64;
              v27 = *(void **)(v26 + 24);
              if ( v27 == (void *)(v26 + 40) )
                break;
              operator delete(v27, *(_QWORD *)(v26 + 40) + 1LL);
              if ( v25 == v26 )
                goto LABEL_32;
            }
          }
LABEL_32:
          *(_DWORD *)(v10 + 536) = 0;
        }
        else
        {
          v10 = operator new(0x3A0u);
          *(_BYTE *)v10 = 0;
          *(_QWORD *)(v10 + 96) = v10 + 112;
          *(_QWORD *)(v10 + 128) = v10 + 144;
          *(_QWORD *)(v10 + 160) = v10 + 176;
          *(_QWORD *)(v10 + 192) = v10 + 208;
          *(_QWORD *)(v10 + 224) = v10 + 240;
          *(_QWORD *)(v10 + 256) = v10 + 272;
          *(_QWORD *)(v10 + 288) = v10 + 304;
          *(_QWORD *)(v10 + 320) = v10 + 336;
          *(_QWORD *)(v10 + 352) = v10 + 368;
          *(_QWORD *)(v10 + 384) = v10 + 400;
          *(_QWORD *)(v10 + 104) = 0;
          *(_BYTE *)(v10 + 112) = 0;
          *(_QWORD *)(v10 + 136) = 0;
          *(_BYTE *)(v10 + 144) = 0;
          *(_QWORD *)(v10 + 168) = 0;
          *(_BYTE *)(v10 + 176) = 0;
          *(_QWORD *)(v10 + 200) = 0;
          *(_BYTE *)(v10 + 208) = 0;
          *(_QWORD *)(v10 + 232) = 0;
          *(_BYTE *)(v10 + 240) = 0;
          *(_QWORD *)(v10 + 264) = 0;
          *(_BYTE *)(v10 + 272) = 0;
          *(_QWORD *)(v10 + 296) = 0;
          *(_BYTE *)(v10 + 304) = 0;
          *(_QWORD *)(v10 + 328) = 0;
          *(_BYTE *)(v10 + 336) = 0;
          *(_QWORD *)(v10 + 360) = 0;
          *(_BYTE *)(v10 + 368) = 0;
          *(_QWORD *)(v10 + 392) = 0;
          *(_BYTE *)(v10 + 400) = 0;
          *(_QWORD *)(v10 + 416) = v10 + 432;
          *(_QWORD *)(v10 + 424) = 0x800000000LL;
          *(_QWORD *)(v10 + 528) = v10 + 544;
          *(_QWORD *)(v10 + 536) = 0x600000000LL;
        }
        *v8 = v10;
      }
      v44 = v9;
      LOBYTE(v45) = 1;
      v11 = *(unsigned int *)(v10 + 424);
      if ( *(unsigned int *)(v10 + 428) < (unsigned __int64)(v11 + 1) )
      {
        sub_25D6060(v10 + 416, v10 + 432, v11 + 1, 12);
        v11 = *(unsigned int *)(v10 + 424);
      }
      v12 = *(_QWORD *)(v10 + 416) + 12 * v11;
      *(_QWORD *)v12 = v44;
      *(_DWORD *)(v12 + 8) = v45;
      ++*(_DWORD *)(v10 + 424);
    }
    return 0;
  }
  if ( (unsigned __int8)v7 != 32 )
    return sub_8AED30(a1, a2);
  sub_857160(*a1, *(_QWORD *)(a2 + 16));
  return sub_8ADEA0(a1, *(_QWORD *)(a2 + 24));
}

