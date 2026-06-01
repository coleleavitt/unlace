__int64 __fastcall sub_89E6E0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int16 v7; // ax
  __int64 *v8; // rbp
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // r12d
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rbx
  bool v20; // cc
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rbx
  void *v28; // rdi
  unsigned int v29; // [rsp+0h] [rbp-108h] BYREF
  char v30; // [rsp+4h] [rbp-104h]
  __int64 v31; // [rsp+8h] [rbp-100h] BYREF
  unsigned int v32; // [rsp+10h] [rbp-F8h]
  char v33; // [rsp+14h] [rbp-F4h]
  __int64 v34; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+48h] [rbp-C0h]
  __int64 v38; // [rsp+50h] [rbp-B8h]
  char v39; // [rsp+58h] [rbp-B0h]
  __int64 v40; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v42; // [rsp+78h] [rbp-90h]
  _BYTE v43[136]; // [rsp+80h] [rbp-88h] BYREF

  v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    v15 = a1->m128i_i64[0];
    v13 = 0;
    v39 |= 1u;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v40 = 0;
    ptr = v43;
    v42 = 0x800000000LL;
    v43[65] = 0;
    if ( sub_89E210(v15, a2, (__int64)&v36, 1, a5, a6) )
    {
      v16 = *(_QWORD *)(a2 + 8);
      v17 = a1->m128i_i64[0];
      v30 &= ~1u;
      v29 = 0;
      v13 = sub_85F440(v17, (_DWORD *)a2, v16, (__int64)&v36, (__int64)&v29, 0);
      if ( (_BYTE)v13 )
      {
        v19 = a1->m128i_i64[1];
        if ( v29 == 6 )
        {
          *(_BYTE *)v19 = 0;
          sub_834130((__int64 *)(v19 + 40), &v31, v18);
          sub_834130((__int64 *)(v19 + 64), &v35, v21);
        }
        else
        {
          v20 = *(_DWORD *)(v19 + 16) <= 0x40u;
          *(_BYTE *)v19 = 1;
          if ( v20 && v32 <= 0x40 )
          {
            *(_QWORD *)(v19 + 8) = v31;
            *(_DWORD *)(v19 + 16) = v32;
          }
          else
          {
            sub_2585EA0(v19 + 8, &v31);
          }
          v20 = *(_DWORD *)(v19 + 32) <= 0x40u;
          *(_BYTE *)(v19 + 20) = v33;
          if ( v20 && (unsigned int)v35 <= 0x40 )
          {
            *(_QWORD *)(v19 + 24) = v34;
            *(_DWORD *)(v19 + 32) = v35;
          }
          else
          {
            sub_2585EA0(v19 + 24, &v34);
          }
          *(_BYTE *)(v19 + 36) = BYTE4(v35);
        }
      }
      if ( v29 > 1 )
        sub_69F740((__int64)&v29);
    }
    if ( ptr != v43 )
      free(ptr);
    return v13;
  }
  if ( (unsigned int)(unsigned __int8)v7 - 21 <= 0xA )
  {
    v8 = (__int64 *)sub_A2E130(a1->m128i_i64[0], a2, 110, 0);
    v9 = sub_AC7B80(a2);
    if ( v8 )
    {
      v10 = *v8;
      if ( !*v8 )
      {
        v22 = v8[1];
        v23 = *(_DWORD *)(v22 + 14976);
        if ( v23 )
        {
          v24 = (unsigned int)(v23 - 1);
          *(_DWORD *)(v22 + 14976) = v24;
          v10 = *(_QWORD *)(v22 + 8 * v24 + 14848);
          v25 = *(unsigned int *)(v10 + 536);
          *(_BYTE *)v10 = 0;
          v26 = *(_QWORD *)(v10 + 528);
          *(_DWORD *)(v10 + 424) = 0;
          v27 = v26 + (v25 << 6);
          while ( v26 != v27 )
          {
            while ( 1 )
            {
              v27 -= 64;
              v28 = *(void **)(v27 + 24);
              if ( v28 == (void *)(v27 + 40) )
                break;
              operator delete(v28, *(_QWORD *)(v27 + 40) + 1LL);
              if ( v26 == v27 )
                goto LABEL_33;
            }
          }
LABEL_33:
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
      v36 = v9;
      LOBYTE(v37) = 1;
      v11 = *(unsigned int *)(v10 + 424);
      if ( *(unsigned int *)(v10 + 428) < (unsigned __int64)(v11 + 1) )
      {
        sub_25D6060(v10 + 416, v10 + 432, v11 + 1, 12);
        v11 = *(unsigned int *)(v10 + 424);
      }
      v12 = *(_QWORD *)(v10 + 416) + 12 * v11;
      *(_QWORD *)v12 = v36;
      *(_DWORD *)(v12 + 8) = v37;
      ++*(_DWORD *)(v10 + 424);
    }
    return 0;
  }
  if ( (unsigned __int8)v7 != 32 )
    return sub_884620(a1, a2);
  sub_857160(a1->m128i_i64[0], *(_QWORD *)(a2 + 16));
  return sub_8811F0(a1, *(_QWORD *)(a2 + 24));
}

