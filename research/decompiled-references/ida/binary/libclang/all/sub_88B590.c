__int64 __fastcall sub_88B590(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v15; // r13d
  unsigned __int64 *v16; // rax
  _WORD *v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rbx
  void *v26; // rdi
  int v27; // [rsp+8h] [rbp-30h]

  v6 = a3;
  v7 = *(_QWORD **)(*a1 + 16);
  if ( (a3 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
    v6 = *(_QWORD *)(a2 + 8);
  v8 = sub_6D9A50(v7, v6);
  if ( !v8 || (unsigned __int8)(*(_BYTE *)(v8 + 16) - 2) > 1u )
  {
    v9 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v10 = sub_AC7B80(a2);
    if ( v9 )
    {
      v11 = *v9;
      if ( !*v9 )
      {
        v20 = v9[1];
        v21 = *(_DWORD *)(v20 + 14976);
        if ( v21 )
        {
          v22 = (unsigned int)(v21 - 1);
          *(_DWORD *)(v20 + 14976) = v22;
          v11 = *(_QWORD *)(v20 + 8 * v22 + 14848);
          v23 = *(unsigned int *)(v11 + 536);
          v24 = *(_QWORD *)(v11 + 528);
          *(_BYTE *)v11 = 0;
          *(_DWORD *)(v11 + 424) = 0;
          v25 = v24 + (v23 << 6);
          while ( v24 != v25 )
          {
            while ( 1 )
            {
              v25 -= 64;
              v26 = *(void **)(v25 + 24);
              if ( v26 == (void *)(v25 + 40) )
                break;
              operator delete(v26, *(_QWORD *)(v25 + 40) + 1LL);
              if ( v24 == v25 )
                goto LABEL_24;
            }
          }
LABEL_24:
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
      v12 = *(unsigned int *)(v11 + 424);
      LOBYTE(v27) = 1;
      if ( *(unsigned int *)(v11 + 428) < (unsigned __int64)(v12 + 1) )
      {
        sub_25D6060(v11 + 416, v11 + 432, v12 + 1, 12);
        v12 = *(unsigned int *)(v11 + 424);
      }
      v13 = *(_QWORD *)(v11 + 416) + 12 * v12;
      *(_QWORD *)v13 = v10;
      *(_DWORD *)(v13 + 8) = v27;
      ++*(_DWORD *)(v11 + 424);
    }
    return 0;
  }
  v15 = sub_80FAB0((_QWORD *)a2);
  v16 = *(unsigned __int64 **)(a2 + 16);
  if ( (_BYTE)v15 )
  {
    v17 = (_WORD *)sub_80F310(*v16);
    if ( (*v17 & 0x1FF) != 0xA )
    {
      sub_826FF0(*a1, a2, 110);
      return 0;
    }
    sub_8247C0(*a1, (__int64)v17, a1[2], a3);
    return v15;
  }
  else
  {
    v18 = *(_QWORD *)(a2 + 56);
    v19 = 0;
    if ( v18 && (v18 & 2) == 0 )
      v19 = v18 & 0xFFFFFFFFFFFFFFFCLL;
    return sub_88A620(
             a1,
             a2,
             *(unsigned __int64 **)(a2 + 16),
             (unsigned int)((__int64)(*(_QWORD *)(a2 + 24) - (_QWORD)v16) >> 3),
             v19,
             a3);
  }
}

