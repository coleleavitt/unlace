__int64 __fastcall sub_889BE0(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int16 v5; // ax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  unsigned int v9; // r12d
  __int64 v10; // r13
  __int64 *v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r13
  _WORD *v17; // r15
  _WORD *v18; // rax
  __int64 v19; // rdx
  unsigned int *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // r12
  void *v31; // rdi
  _WORD *v32; // [rsp+0h] [rbp-98h]
  int v33; // [rsp+18h] [rbp-80h]
  unsigned int v34; // [rsp+20h] [rbp-78h] BYREF
  char v35; // [rsp+24h] [rbp-74h]

  v5 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) > 8 )
  {
    if ( (_BYTE)v5 == 20 )
      return sub_887F40(a1, *(_QWORD *)(a2 + 16), a3, a4);
    return sub_889670(a1, a2, a3, a4);
  }
  if ( (unsigned __int8)v5 <= 6u )
    return sub_889670(a1, a2, a3, a4);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = *a1;
  v34 = 0;
  v35 &= ~1u;
  v9 = sub_856400((__int64)&v34, v8, v7);
  if ( (_BYTE)v9 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    if ( v34 == 10 )
    {
      v16 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      v17 = sub_80C750((_WORD *)a2);
      v18 = sub_80C750((_WORD *)a2);
      v19 = *(unsigned int *)(a2 + 4);
      v20 = &v34;
      v32 = &v18[4 * v19];
      if ( v17 != v32 )
      {
        while ( 1 )
        {
          v21 = *(_QWORD *)(**(_QWORD **)(*(_QWORD *)v17 + 16LL) & 0xFFFFFFFFFFFFFFF0LL);
          v22 = *(_QWORD *)(v21 + 8);
          if ( (v22 & 7) != 0 || (v22 & 8) != 0 )
            v21 = sub_B0CF30(**(_QWORD **)(*(_QWORD *)v17 + 16LL), v8);
          v17 += 4;
          v23 = sub_B0E910(*(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL));
          v24 = sub_84C340(v16, v23);
          v8 = 7LL * v24;
          v20 = (unsigned int *)(*((_QWORD *)v20 + 1) + 56LL * v24);
          if ( v32 == v17 )
            break;
          v16 = v23;
        }
      }
      sub_6A63E0(a1[2], (__int64)v20);
      goto LABEL_14;
    }
    v11 = (__int64 *)sub_A2E130(*a1, *(_QWORD *)(a2 + 16), 110, 0);
    v12 = sub_AC7B80(v10);
    if ( v11 )
    {
      v13 = *v11;
      if ( !*v11 )
      {
        v25 = v11[1];
        v26 = *(_DWORD *)(v25 + 14976);
        if ( v26 )
        {
          v27 = (unsigned int)(v26 - 1);
          *(_DWORD *)(v25 + 14976) = v27;
          v13 = *(_QWORD *)(v25 + 8 * v27 + 14848);
          v28 = *(unsigned int *)(v13 + 536);
          *(_BYTE *)v13 = 0;
          v29 = *(_QWORD *)(v13 + 528);
          *(_DWORD *)(v13 + 424) = 0;
          v30 = v29 + (v28 << 6);
          while ( v29 != v30 )
          {
            while ( 1 )
            {
              v30 -= 64;
              v31 = *(void **)(v30 + 24);
              if ( v31 == (void *)(v30 + 40) )
                break;
              operator delete(v31, *(_QWORD *)(v30 + 40) + 1LL);
              if ( v29 == v30 )
                goto LABEL_30;
            }
          }
LABEL_30:
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
      v14 = *(unsigned int *)(v13 + 424);
      LOBYTE(v33) = 1;
      if ( *(unsigned int *)(v13 + 428) < (unsigned __int64)(v14 + 1) )
      {
        sub_25D6060(v13 + 416, v13 + 432, v14 + 1, 12);
        v14 = *(unsigned int *)(v13 + 424);
      }
      v15 = *(_QWORD *)(v13 + 416) + 12 * v14;
      *(_QWORD *)v15 = v12;
      *(_DWORD *)(v15 + 8) = v33;
      ++*(_DWORD *)(v13 + 424);
    }
  }
  v9 = 0;
LABEL_14:
  if ( v34 > 1 )
    sub_69F740((__int64)&v34);
  return v9;
}

