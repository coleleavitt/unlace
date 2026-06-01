__int64 __fastcall sub_8B7C50(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // r12
  void *v25; // rdi
  unsigned int v26; // [rsp+0h] [rbp-108h] BYREF
  char v27; // [rsp+4h] [rbp-104h]
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h]
  char v31; // [rsp+58h] [rbp-B0h]
  __int64 v32; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v34; // [rsp+78h] [rbp-90h]
  _BYTE v35[136]; // [rsp+80h] [rbp-88h] BYREF

  v7 = *a1;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    v16 = 0;
    v31 |= 1u;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v32 = 0;
    ptr = v35;
    v34 = 0x800000000LL;
    v35[65] = 0;
    if ( sub_89E210(v7, a2, (__int64)&v28, 1, a5, a6) )
    {
      v17 = *(_QWORD *)(a2 + 8);
      v18 = *a1;
      v27 &= ~1u;
      v26 = 0;
      v16 = sub_85F440(v18, (_DWORD *)a2, v17, (__int64)&v28, (__int64)&v26, 0);
      if ( v26 > 1 )
        sub_69F740((__int64)&v26);
    }
    if ( ptr != v35 )
      free(ptr);
  }
  else
  {
    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
    {
      sub_857160(v7, *(_QWORD *)(a2 + 16));
      return sub_8B6C50(a1, *(_QWORD *)(a2 + 24), v8, v9);
    }
    v11 = (__int64 *)sub_A2E130(v7, a2, 110, 0);
    v12 = sub_AC7B80(a2);
    if ( v11 )
    {
      v13 = *v11;
      if ( !*v11 )
      {
        v19 = v11[1];
        v20 = *(_DWORD *)(v19 + 14976);
        if ( v20 )
        {
          v21 = (unsigned int)(v20 - 1);
          *(_DWORD *)(v19 + 14976) = v21;
          v13 = *(_QWORD *)(v19 + 8 * v21 + 14848);
          v22 = *(unsigned int *)(v13 + 536);
          *(_BYTE *)v13 = 0;
          v23 = *(_QWORD *)(v13 + 528);
          *(_DWORD *)(v13 + 424) = 0;
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
                goto LABEL_21;
            }
          }
LABEL_21:
          *(_DWORD *)(v13 + 536) = 0;
        }
        else
        {
          v13 = operator new(0x3A0u);
          *(_BYTE *)v13 = 0;
          *(_QWORD *)(v13 + 96) = v13 + 112;
          *(_QWORD *)(v13 + 128) = v13 + 144;
          *(_QWORD *)(v13 + 160) = v13 + 176;
          *(_QWORD *)(v13 + 192) = v13 + 208;
          *(_QWORD *)(v13 + 224) = v13 + 240;
          *(_QWORD *)(v13 + 256) = v13 + 272;
          *(_QWORD *)(v13 + 288) = v13 + 304;
          *(_QWORD *)(v13 + 320) = v13 + 336;
          *(_QWORD *)(v13 + 352) = v13 + 368;
          *(_QWORD *)(v13 + 384) = v13 + 400;
          *(_QWORD *)(v13 + 104) = 0;
          *(_BYTE *)(v13 + 112) = 0;
          *(_QWORD *)(v13 + 136) = 0;
          *(_BYTE *)(v13 + 144) = 0;
          *(_QWORD *)(v13 + 168) = 0;
          *(_BYTE *)(v13 + 176) = 0;
          *(_QWORD *)(v13 + 200) = 0;
          *(_BYTE *)(v13 + 208) = 0;
          *(_QWORD *)(v13 + 232) = 0;
          *(_BYTE *)(v13 + 240) = 0;
          *(_QWORD *)(v13 + 264) = 0;
          *(_BYTE *)(v13 + 272) = 0;
          *(_QWORD *)(v13 + 296) = 0;
          *(_BYTE *)(v13 + 304) = 0;
          *(_QWORD *)(v13 + 328) = 0;
          *(_BYTE *)(v13 + 336) = 0;
          *(_QWORD *)(v13 + 360) = 0;
          *(_BYTE *)(v13 + 368) = 0;
          *(_QWORD *)(v13 + 392) = 0;
          *(_BYTE *)(v13 + 400) = 0;
          *(_QWORD *)(v13 + 416) = v13 + 432;
          *(_QWORD *)(v13 + 424) = 0x800000000LL;
          *(_QWORD *)(v13 + 528) = v13 + 544;
          *(_QWORD *)(v13 + 536) = 0x600000000LL;
        }
        *v11 = v13;
      }
      v28 = v12;
      LOBYTE(v29) = 1;
      v14 = *(unsigned int *)(v13 + 424);
      if ( *(unsigned int *)(v13 + 428) < (unsigned __int64)(v14 + 1) )
      {
        sub_25D6060(v13 + 416, v13 + 432, v14 + 1, 12);
        v14 = *(unsigned int *)(v13 + 424);
      }
      v15 = *(_QWORD *)(v13 + 416) + 12 * v14;
      *(_QWORD *)v15 = v28;
      *(_DWORD *)(v15 + 8) = v29;
      ++*(_DWORD *)(v13 + 424);
    }
    return 0;
  }
  return v16;
}

