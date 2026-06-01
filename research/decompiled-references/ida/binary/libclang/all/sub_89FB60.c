char __fastcall sub_89FB60(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // r12
  void *v20; // rdi
  int v21; // [rsp+8h] [rbp-30h]

  v7 = a1->m128i_i64[0];
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
    return sub_89E210(v7, a2, a1->m128i_i64[1], 1, a5, a6) != 0;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x20 )
  {
    sub_857160(v7, *(_QWORD *)(a2 + 16));
    return sub_869D30(a1, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v8 = (__int64 *)sub_A2E130(v7, a2, 110, 0);
    v9 = sub_AC7B80(a2);
    if ( v8 )
    {
      v10 = *v8;
      if ( !*v8 )
      {
        v14 = v8[1];
        v15 = *(_DWORD *)(v14 + 14976);
        if ( v15 )
        {
          v16 = (unsigned int)(v15 - 1);
          *(_DWORD *)(v14 + 14976) = v16;
          v10 = *(_QWORD *)(v14 + 8 * v16 + 14848);
          v17 = *(unsigned int *)(v10 + 536);
          *(_BYTE *)v10 = 0;
          v18 = *(_QWORD *)(v10 + 528);
          *(_DWORD *)(v10 + 424) = 0;
          v19 = v18 + (v17 << 6);
          while ( v18 != v19 )
          {
            while ( 1 )
            {
              v19 -= 64;
              v20 = *(void **)(v19 + 24);
              if ( v20 == (void *)(v19 + 40) )
                break;
              operator delete(v20, *(_QWORD *)(v19 + 40) + 1LL);
              if ( v18 == v19 )
                goto LABEL_16;
            }
          }
LABEL_16:
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
      v11 = *(unsigned int *)(v10 + 424);
      LOBYTE(v21) = 1;
      if ( *(unsigned int *)(v10 + 428) < (unsigned __int64)(v11 + 1) )
      {
        sub_25D6060(v10 + 416, v10 + 432, v11 + 1, 12);
        v11 = *(unsigned int *)(v10 + 424);
      }
      v12 = *(_QWORD *)(v10 + 416) + 12 * v11;
      *(_QWORD *)v12 = v9;
      *(_DWORD *)(v12 + 8) = v21;
      ++*(_DWORD *)(v10 + 424);
    }
    return 0;
  }
}

