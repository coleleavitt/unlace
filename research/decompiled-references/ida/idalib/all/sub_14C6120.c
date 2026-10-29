__int64 __fastcall sub_14C6120(__int64 a1, int a2, __int64 a3, __m128i a4, __m128 a5)
{
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // rbx
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r14
  void *v24; // rdi
  __int64 v25; // [rsp+8h] [rbp-A0h]
  unsigned int v26; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+14h] [rbp-94h]
  int v28; // [rsp+1Ch] [rbp-8Ch]
  __int64 v29; // [rsp+20h] [rbp-88h] BYREF
  __int64 v30; // [rsp+28h] [rbp-80h]
  __int64 v31; // [rsp+30h] [rbp-78h]

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = *(_DWORD *)(a1 + 40);
  v26 = 0;
  LODWORD(v29) = 0;
  v30 = 0;
  v31 = 0;
  v7 = sub_14ADBA0(a1, a2, (int *)&v29, v6, &v26, a3, a4, a5, 3u);
  if ( !v7 )
    return 0;
  v8 = v7;
  v9 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 2LL) & 1) == 0);
  LOBYTE(v9) = v9 & 0x60;
  sub_1564820(&v29, a1, v6, (unsigned int)(v9 + 2098));
  v10 = v29;
  v11 = v26;
  if ( v29 )
  {
    v12 = *(unsigned int *)(v29 + 424);
    v13 = *(unsigned int *)(v29 + 428);
    v14 = v12 + 1;
  }
  else
  {
    v17 = v30;
    v18 = *(_DWORD *)(v30 + 14976);
    if ( v18 )
    {
      v20 = (unsigned int)(v18 - 1);
      *(_DWORD *)(v30 + 14976) = v20;
      v10 = *(_QWORD *)(v17 + 8 * v20 + 14848);
      v21 = *(unsigned int *)(v10 + 536);
      *(_BYTE *)v10 = 0;
      v22 = *(_QWORD *)(v10 + 528);
      *(_DWORD *)(v10 + 424) = 0;
      v23 = v22 + (v21 << 6);
      if ( v22 == v23 )
      {
        v14 = 1;
        v12 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v23 -= 64;
            v24 = *(void **)(v23 + 24);
            if ( v24 == (void *)(v23 + 40) )
              break;
            v25 = v22;
            operator delete(v24);
            v22 = v25;
            if ( v25 == v23 )
              goto LABEL_14;
          }
        }
        while ( v22 != v23 );
LABEL_14:
        v12 = *(unsigned int *)(v10 + 424);
        v14 = v12 + 1;
      }
      *(_DWORD *)(v10 + 536) = 0;
      v13 = *(unsigned int *)(v10 + 428);
    }
    else
    {
      v19 = operator new(0x3A0u);
      v13 = 8;
      v14 = 1;
      v10 = v19;
      *(_BYTE *)v19 = 0;
      *(_QWORD *)(v19 + 96) = v19 + 112;
      *(_QWORD *)(v19 + 128) = v19 + 144;
      *(_QWORD *)(v19 + 160) = v19 + 176;
      *(_QWORD *)(v19 + 192) = v19 + 208;
      *(_QWORD *)(v19 + 224) = v19 + 240;
      *(_QWORD *)(v19 + 256) = v19 + 272;
      *(_QWORD *)(v19 + 288) = v19 + 304;
      *(_QWORD *)(v19 + 320) = v19 + 336;
      *(_QWORD *)(v19 + 352) = v19 + 368;
      *(_QWORD *)(v19 + 384) = v19 + 400;
      *(_QWORD *)(v19 + 416) = v19 + 432;
      *(_QWORD *)(v19 + 104) = 0;
      *(_BYTE *)(v19 + 112) = 0;
      *(_QWORD *)(v19 + 136) = 0;
      *(_BYTE *)(v19 + 144) = 0;
      *(_QWORD *)(v19 + 168) = 0;
      *(_BYTE *)(v19 + 176) = 0;
      *(_QWORD *)(v19 + 200) = 0;
      *(_BYTE *)(v19 + 208) = 0;
      *(_QWORD *)(v19 + 232) = 0;
      *(_BYTE *)(v19 + 240) = 0;
      *(_QWORD *)(v19 + 264) = 0;
      *(_BYTE *)(v19 + 272) = 0;
      *(_QWORD *)(v19 + 296) = 0;
      *(_BYTE *)(v19 + 304) = 0;
      *(_QWORD *)(v19 + 328) = 0;
      *(_BYTE *)(v19 + 336) = 0;
      *(_QWORD *)(v19 + 360) = 0;
      *(_BYTE *)(v19 + 368) = 0;
      *(_QWORD *)(v19 + 392) = 0;
      *(_BYTE *)(v19 + 400) = 0;
      *(_QWORD *)(v19 + 424) = 0x800000000LL;
      *(_QWORD *)(v19 + 528) = v19 + 544;
      *(_QWORD *)(v19 + 536) = 0x600000000LL;
      v12 = 0;
    }
    v29 = v10;
  }
  v27 = __PAIR64__(v11, v6);
  LOBYTE(v28) = 1;
  if ( v14 > v13 )
  {
    sub_2237220(v10 + 416, v10 + 432, v14, 12);
    v12 = *(unsigned int *)(v10 + 424);
  }
  v15 = *(_QWORD *)(v10 + 416) + 12 * v12;
  *(_QWORD *)v15 = v27;
  *(_DWORD *)(v15 + 8) = v28;
  ++*(_DWORD *)(v10 + 424);
  sub_AEA040((__int64)&v29);
  return v8;
}
