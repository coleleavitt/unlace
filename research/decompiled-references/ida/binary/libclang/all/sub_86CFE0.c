__int64 __fastcall sub_86CFE0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v13; // rsi
  void *v14; // rdi
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rbx
  bool v19; // cc
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rbx
  void *v26; // rdi
  __int64 v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-108h] BYREF
  unsigned int v29; // [rsp+10h] [rbp-F8h]
  char v30; // [rsp+14h] [rbp-F4h]
  __int64 v31; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v32; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v33; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h]
  char v35; // [rsp+58h] [rbp-B0h]
  __int64 v36; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v38; // [rsp+78h] [rbp-90h]
  _BYTE v39[136]; // [rsp+80h] [rbp-88h] BYREF

  v4 = sub_A2CB40(*a1);
  v5 = *a1;
  if ( (*(_BYTE *)(v4 + 1) & 0x20) != 0 || *(_DWORD *)(v5 + 48) && (*(_BYTE *)(v5 + 962) || *(_BYTE *)(v5 + 963)) )
  {
    v13 = *(_QWORD *)(a2 + 16);
    v28.m128i_i64[0] = *a1;
    v35 |= 1u;
    v33 = 0u;
    v34 = 0;
    v36 = 0;
    ptr = v39;
    v38 = 0x800000000LL;
    v39[65] = 0;
    v28.m128i_i64[1] = (__int64)&v33;
    LOBYTE(v29) = 0;
    v11 = sub_869D30(&v28, v13);
    if ( !(_BYTE)v11 )
      goto LABEL_13;
    v15 = *(_BYTE *)(a2 + 2);
    v16 = *a1;
    v28.m128i_i8[4] &= ~1u;
    v28.m128i_i32[0] = 0;
    v11 = sub_84D690(
            v16,
            (_DWORD *)a2,
            &v33,
            *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
            ((v15 >> 3) & 0x1D) == 0,
            (__int64)&v28);
    if ( (_BYTE)v11 )
    {
      v18 = a1[1];
      if ( v28.m128i_i32[0] == 6 )
      {
        *(_BYTE *)v18 = 0;
        sub_834130((__int64 *)(v18 + 40), &v28.m128i_i64[1], v17);
        sub_834130((__int64 *)(v18 + 64), &v32, v27);
      }
      else
      {
        v19 = *(_DWORD *)(v18 + 16) <= 0x40u;
        *(_BYTE *)v18 = 1;
        if ( v19 && v29 <= 0x40 )
        {
          *(_QWORD *)(v18 + 8) = v28.m128i_i64[1];
          *(_DWORD *)(v18 + 16) = v29;
        }
        else
        {
          sub_2585EA0(v18 + 8, &v28.m128i_u64[1]);
        }
        v19 = *(_DWORD *)(v18 + 32) <= 0x40u;
        *(_BYTE *)(v18 + 20) = v30;
        if ( v19 && (unsigned int)v32 <= 0x40 )
        {
          *(_QWORD *)(v18 + 24) = v31;
          *(_DWORD *)(v18 + 32) = v32;
        }
        else
        {
          sub_2585EA0(v18 + 24, &v31);
        }
        *(_BYTE *)(v18 + 36) = BYTE4(v32);
      }
    }
    if ( v28.m128i_i32[0] > 1u )
    {
      sub_69F740((__int64)&v28);
      v14 = ptr;
      if ( ptr == v39 )
        return v11;
    }
    else
    {
LABEL_13:
      v14 = ptr;
      if ( ptr == v39 )
        return v11;
    }
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
      v20 = v6[1];
      v21 = *(_DWORD *)(v20 + 14976);
      if ( v21 )
      {
        v22 = (unsigned int)(v21 - 1);
        *(_DWORD *)(v20 + 14976) = v22;
        v8 = *(_QWORD *)(v20 + 8 * v22 + 14848);
        v23 = *(unsigned int *)(v8 + 536);
        *(_BYTE *)v8 = 0;
        v24 = *(_QWORD *)(v8 + 528);
        *(_DWORD *)(v8 + 424) = 0;
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
              goto LABEL_32;
          }
        }
LABEL_32:
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
    v33.m128i_i64[0] = v7;
    v33.m128i_i8[8] = 1;
    v9 = *(unsigned int *)(v8 + 424);
    if ( *(unsigned int *)(v8 + 428) < (unsigned __int64)(v9 + 1) )
    {
      sub_25D6060(v8 + 416, v8 + 432, v9 + 1, 12);
      v9 = *(unsigned int *)(v8 + 424);
    }
    v10 = *(_QWORD *)(v8 + 416) + 12 * v9;
    *(_QWORD *)v10 = v33.m128i_i64[0];
    *(_DWORD *)(v10 + 8) = v33.m128i_i32[2];
    ++*(_DWORD *)(v8 + 424);
  }
  return 0;
}

