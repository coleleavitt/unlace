__int64 __fastcall sub_86BA90(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // r12
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v13; // rsi
  void *v14; // rdi
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rbp
  void *v22; // rdi
  __m128i v23; // [rsp+0h] [rbp-108h] BYREF
  char v24; // [rsp+10h] [rbp-F8h]
  __m128i v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h]
  char v27; // [rsp+58h] [rbp-B0h]
  __int64 v28; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v30; // [rsp+78h] [rbp-90h]
  _BYTE v31[136]; // [rsp+80h] [rbp-88h] BYREF

  v4 = sub_A2CB40(*a1);
  v5 = *a1;
  if ( (*(_BYTE *)(v4 + 1) & 0x20) != 0 || *(_DWORD *)(v5 + 48) && (*(_BYTE *)(v5 + 962) || *(_BYTE *)(v5 + 963)) )
  {
    v13 = *(_QWORD *)(a2 + 16);
    v23.m128i_i64[0] = *a1;
    v27 |= 1u;
    v25 = 0u;
    v26 = 0;
    v28 = 0;
    ptr = v31;
    v30 = 0x800000000LL;
    v31[65] = 0;
    v23.m128i_i64[1] = (__int64)&v25;
    v24 = 0;
    v11 = sub_869D30(&v23, v13);
    if ( !(_BYTE)v11 )
      goto LABEL_13;
    v15 = *(_BYTE *)(a2 + 2);
    v23.m128i_i8[4] &= ~1u;
    v23.m128i_i32[0] = 0;
    v11 = sub_84D690(
            *a1,
            (_DWORD *)a2,
            &v25,
            *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
            ((v15 >> 3) & 0x1D) == 0,
            (__int64)&v23);
    if ( (_BYTE)v11 )
    {
      sub_6A63E0(a1[1], (__int64)&v23);
      if ( v23.m128i_i32[0] > 1u )
      {
LABEL_17:
        sub_69F740((__int64)&v23);
        v14 = ptr;
        if ( ptr == v31 )
          return v11;
        goto LABEL_14;
      }
    }
    else if ( v23.m128i_i32[0] > 1u )
    {
      goto LABEL_17;
    }
LABEL_13:
    v14 = ptr;
    if ( ptr == v31 )
      return v11;
LABEL_14:
    free(v14);
    return v11;
  }
  v6 = (__int64 *)sub_A2E130(v5, a2, 110, 0);
  v7 = sub_AC7B80(a2);
  if ( v6 )
  {
    v8 = *v6;
    if ( !*v6 )
    {
      v16 = v6[1];
      v17 = *(_DWORD *)(v16 + 14976);
      if ( v17 )
      {
        v18 = (unsigned int)(v17 - 1);
        *(_DWORD *)(v16 + 14976) = v18;
        v8 = *(_QWORD *)(v16 + 8 * v18 + 14848);
        v19 = *(unsigned int *)(v8 + 536);
        *(_BYTE *)v8 = 0;
        v20 = *(_QWORD *)(v8 + 528);
        *(_DWORD *)(v8 + 424) = 0;
        v21 = v20 + (v19 << 6);
        while ( v20 != v21 )
        {
          while ( 1 )
          {
            v21 -= 64;
            v22 = *(void **)(v21 + 24);
            if ( v22 == (void *)(v21 + 40) )
              break;
            operator delete(v22, *(_QWORD *)(v21 + 40) + 1LL);
            if ( v20 == v21 )
              goto LABEL_26;
          }
        }
LABEL_26:
        *(_DWORD *)(v8 + 536) = 0;
      }
      else
      {
        v8 = operator new(0x3A0u);
        *(_BYTE *)v8 = 0;
        *(_QWORD *)(v8 + 96) = v8 + 112;
        *(_QWORD *)(v8 + 128) = v8 + 144;
        *(_QWORD *)(v8 + 160) = v8 + 176;
        *(_QWORD *)(v8 + 192) = v8 + 208;
        *(_QWORD *)(v8 + 224) = v8 + 240;
        *(_QWORD *)(v8 + 256) = v8 + 272;
        *(_QWORD *)(v8 + 288) = v8 + 304;
        *(_QWORD *)(v8 + 320) = v8 + 336;
        *(_QWORD *)(v8 + 352) = v8 + 368;
        *(_QWORD *)(v8 + 384) = v8 + 400;
        *(_QWORD *)(v8 + 104) = 0;
        *(_BYTE *)(v8 + 112) = 0;
        *(_QWORD *)(v8 + 136) = 0;
        *(_BYTE *)(v8 + 144) = 0;
        *(_QWORD *)(v8 + 168) = 0;
        *(_BYTE *)(v8 + 176) = 0;
        *(_QWORD *)(v8 + 200) = 0;
        *(_BYTE *)(v8 + 208) = 0;
        *(_QWORD *)(v8 + 232) = 0;
        *(_BYTE *)(v8 + 240) = 0;
        *(_QWORD *)(v8 + 264) = 0;
        *(_BYTE *)(v8 + 272) = 0;
        *(_QWORD *)(v8 + 296) = 0;
        *(_BYTE *)(v8 + 304) = 0;
        *(_QWORD *)(v8 + 328) = 0;
        *(_BYTE *)(v8 + 336) = 0;
        *(_QWORD *)(v8 + 360) = 0;
        *(_BYTE *)(v8 + 368) = 0;
        *(_QWORD *)(v8 + 392) = 0;
        *(_BYTE *)(v8 + 400) = 0;
        *(_QWORD *)(v8 + 416) = v8 + 432;
        *(_QWORD *)(v8 + 424) = 0x800000000LL;
        *(_QWORD *)(v8 + 528) = v8 + 544;
        *(_QWORD *)(v8 + 536) = 0x600000000LL;
      }
      *v6 = v8;
    }
    v25.m128i_i64[0] = v7;
    v25.m128i_i8[8] = 1;
    v9 = *(unsigned int *)(v8 + 424);
    if ( *(unsigned int *)(v8 + 428) < (unsigned __int64)(v9 + 1) )
    {
      sub_25D6060(v8 + 416, v8 + 432, v9 + 1, 12);
      v9 = *(unsigned int *)(v8 + 424);
    }
    v10 = *(_QWORD *)(v8 + 416) + 12 * v9;
    *(_QWORD *)v10 = v25.m128i_i64[0];
    *(_DWORD *)(v10 + 8) = v25.m128i_i32[2];
    ++*(_DWORD *)(v8 + 424);
  }
  return 0;
}

