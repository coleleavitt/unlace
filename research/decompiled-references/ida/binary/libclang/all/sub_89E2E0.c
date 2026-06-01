__int64 __fastcall sub_89E2E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdi
  __int64 *v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // r12
  void *v23; // rdi
  unsigned int v24; // [rsp+0h] [rbp-108h] BYREF
  char v25; // [rsp+4h] [rbp-104h]
  __int64 v26; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B8h]
  char v29; // [rsp+58h] [rbp-B0h]
  __int64 v30; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v32; // [rsp+78h] [rbp-90h]
  _BYTE v33[136]; // [rsp+80h] [rbp-88h] BYREF

  v7 = *(_QWORD *)a1;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    v14 = 0;
    v29 |= 1u;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v30 = 0;
    ptr = v33;
    v32 = 0x800000000LL;
    v33[65] = 0;
    if ( !sub_89E210(v7, a2, (__int64)&v26, 1, a5, a6) )
      goto LABEL_14;
    v15 = *(_QWORD *)(a2 + 8);
    v16 = *(_QWORD *)a1;
    v25 &= ~1u;
    v24 = 0;
    v14 = sub_85F440(v16, (_DWORD *)a2, v15, (__int64)&v26, (__int64)&v24, 0);
    if ( (_BYTE)v14 )
    {
      sub_820FB0(*(unsigned __int64 **)(a1 + 8), (__int64)&v24);
      if ( v24 <= 1 )
        goto LABEL_14;
    }
    else if ( v24 <= 1 )
    {
      goto LABEL_14;
    }
    sub_69F740((__int64)&v24);
LABEL_14:
    if ( ptr != v33 )
      free(ptr);
    return v14;
  }
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
  {
    sub_857160(v7, *(_QWORD *)(a2 + 16));
    return sub_854640((__int64 *)a1, *(_QWORD *)(a2 + 24));
  }
  v9 = (__int64 *)sub_A2E130(v7, a2, 110, 0);
  v10 = sub_AC7B80(a2);
  if ( v9 )
  {
    v11 = *v9;
    if ( !*v9 )
    {
      v17 = v9[1];
      v18 = *(_DWORD *)(v17 + 14976);
      if ( v18 )
      {
        v19 = (unsigned int)(v18 - 1);
        *(_DWORD *)(v17 + 14976) = v19;
        v11 = *(_QWORD *)(v17 + 8 * v19 + 14848);
        v20 = *(unsigned int *)(v11 + 536);
        *(_BYTE *)v11 = 0;
        v21 = *(_QWORD *)(v11 + 528);
        *(_DWORD *)(v11 + 424) = 0;
        v22 = v21 + (v20 << 6);
        while ( v21 != v22 )
        {
          while ( 1 )
          {
            v22 -= 64;
            v23 = *(void **)(v22 + 24);
            if ( v23 == (void *)(v22 + 40) )
              break;
            operator delete(v23, *(_QWORD *)(v22 + 40) + 1LL);
            if ( v21 == v22 )
              goto LABEL_23;
          }
        }
LABEL_23:
        *(_DWORD *)(v11 + 536) = 0;
      }
      else
      {
        v11 = operator new(0x3A0u);
        *(_BYTE *)v11 = 0;
        *(_QWORD *)(v11 + 96) = v11 + 112;
        *(_QWORD *)(v11 + 128) = v11 + 144;
        *(_QWORD *)(v11 + 160) = v11 + 176;
        *(_QWORD *)(v11 + 192) = v11 + 208;
        *(_QWORD *)(v11 + 224) = v11 + 240;
        *(_QWORD *)(v11 + 256) = v11 + 272;
        *(_QWORD *)(v11 + 288) = v11 + 304;
        *(_QWORD *)(v11 + 320) = v11 + 336;
        *(_QWORD *)(v11 + 352) = v11 + 368;
        *(_QWORD *)(v11 + 384) = v11 + 400;
        *(_QWORD *)(v11 + 104) = 0;
        *(_BYTE *)(v11 + 112) = 0;
        *(_QWORD *)(v11 + 136) = 0;
        *(_BYTE *)(v11 + 144) = 0;
        *(_QWORD *)(v11 + 168) = 0;
        *(_BYTE *)(v11 + 176) = 0;
        *(_QWORD *)(v11 + 200) = 0;
        *(_BYTE *)(v11 + 208) = 0;
        *(_QWORD *)(v11 + 232) = 0;
        *(_BYTE *)(v11 + 240) = 0;
        *(_QWORD *)(v11 + 264) = 0;
        *(_BYTE *)(v11 + 272) = 0;
        *(_QWORD *)(v11 + 296) = 0;
        *(_BYTE *)(v11 + 304) = 0;
        *(_QWORD *)(v11 + 328) = 0;
        *(_BYTE *)(v11 + 336) = 0;
        *(_QWORD *)(v11 + 360) = 0;
        *(_BYTE *)(v11 + 368) = 0;
        *(_QWORD *)(v11 + 392) = 0;
        *(_BYTE *)(v11 + 400) = 0;
        *(_QWORD *)(v11 + 416) = v11 + 432;
        *(_QWORD *)(v11 + 424) = 0x800000000LL;
        *(_QWORD *)(v11 + 528) = v11 + 544;
        *(_QWORD *)(v11 + 536) = 0x600000000LL;
      }
      *v9 = v11;
    }
    v26 = v10;
    LOBYTE(v27) = 1;
    v12 = *(unsigned int *)(v11 + 424);
    if ( *(unsigned int *)(v11 + 428) < (unsigned __int64)(v12 + 1) )
    {
      sub_25D6060(v11 + 416, v11 + 432, v12 + 1, 12);
      v12 = *(unsigned int *)(v11 + 424);
    }
    v13 = *(_QWORD *)(v11 + 416) + 12 * v12;
    *(_QWORD *)v13 = v26;
    *(_DWORD *)(v13 + 8) = v27;
    ++*(_DWORD *)(v11 + 424);
  }
  return 0;
}

