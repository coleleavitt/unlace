__int64 __fastcall sub_86CA80(__int64 *a1, __int64 a2)
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
  __int64 v18; // rax
  __m128i *v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 v27; // rbx
  void *v28; // rdi
  __int64 *v29; // rdx
  __int64 *v30; // r15
  __int64 v31; // rsi
  __int64 *v32; // [rsp+0h] [rbp-118h]
  __int64 *v33; // [rsp+0h] [rbp-118h]
  __int64 *v34; // [rsp+8h] [rbp-110h]
  __m128i v35; // [rsp+10h] [rbp-108h] BYREF
  char v36; // [rsp+20h] [rbp-F8h]
  __m128i v37; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-B8h]
  char v39; // [rsp+68h] [rbp-B0h]
  __int64 v40; // [rsp+78h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-98h]
  __int64 v42; // [rsp+88h] [rbp-90h]
  _BYTE v43[136]; // [rsp+90h] [rbp-88h] BYREF

  v4 = sub_A2CB40(*a1);
  v5 = *a1;
  if ( (*(_BYTE *)(v4 + 1) & 0x20) != 0 || *(_DWORD *)(v5 + 48) && (*(_BYTE *)(v5 + 962) || *(_BYTE *)(v5 + 963)) )
  {
    v13 = *(_QWORD *)(a2 + 16);
    v35.m128i_i64[0] = *a1;
    v39 |= 1u;
    v37 = 0u;
    v38 = 0;
    v40 = 0;
    ptr = v43;
    v42 = 0x800000000LL;
    v43[65] = 0;
    v35.m128i_i64[1] = (__int64)&v37;
    v36 = 0;
    v11 = sub_869D30(&v35, v13);
    if ( !(_BYTE)v11 )
      goto LABEL_13;
    v15 = *(_BYTE *)(a2 + 2);
    v16 = *a1;
    v35.m128i_i8[4] &= ~1u;
    v35.m128i_i32[0] = 0;
    v11 = sub_84D690(
            v16,
            (_DWORD *)a2,
            &v37,
            *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
            ((v15 >> 3) & 0x1D) == 0,
            (__int64)&v35);
    if ( !(_BYTE)v11 )
      goto LABEL_16;
    v18 = sub_2575D20(v16, a2, v17);
    v19 = (__m128i *)a1[1];
    v20 = v18;
    if ( v19->m128i_i64[0] == v18 )
    {
      if ( v35.m128i_i64[1] == v18 )
      {
        sub_257D030(v19, &v35.m128i_u64[1]);
        goto LABEL_16;
      }
      v21 = &v35.m128i_i64[1];
      if ( v19 == (__m128i *)&v35.m128i_u64[1] )
        goto LABEL_16;
      v29 = (__int64 *)v19->m128i_i64[1];
      if ( v29 )
      {
        v30 = &v29[3 * *(v29 - 1)];
        if ( v29 == v30 )
        {
          v31 = 0;
        }
        else
        {
          do
          {
            v30 -= 3;
            v34 = v21;
            v32 = v29;
            sub_5FF3B0(v30);
            v29 = v32;
            v21 = v34;
          }
          while ( v32 != v30 );
          v31 = 24 * *(v32 - 1);
        }
        v33 = v21;
        operator delete[](v29 - 1, v31 + 8);
        v21 = v33;
      }
      v19->m128i_i64[1] = 0;
    }
    else
    {
      if ( v35.m128i_i64[1] != v18 )
      {
        sub_2576220(v19, &v35.m128i_u64[1]);
        goto LABEL_16;
      }
      if ( v19 == (__m128i *)&v35.m128i_u64[1] )
      {
LABEL_16:
        if ( v35.m128i_i32[0] > 1u )
        {
          sub_69F740((__int64)&v35);
          v14 = ptr;
          if ( ptr == v43 )
            return v11;
          goto LABEL_14;
        }
LABEL_13:
        v14 = ptr;
        if ( ptr == v43 )
          return v11;
LABEL_14:
        free(v14);
        return v11;
      }
      sub_25769A0(v19);
      v21 = &v35.m128i_i64[1];
    }
    if ( v20 == v35.m128i_i64[1] )
      sub_257CF50(v19, v21);
    else
      sub_25768A0(v19, v21);
    goto LABEL_16;
  }
  v6 = (__int64 *)sub_A2E130(v5, a2, 110, 0);
  v7 = sub_AC7B80(a2);
  if ( v6 )
  {
    v8 = *v6;
    if ( !*v6 )
    {
      v22 = v6[1];
      v23 = *(_DWORD *)(v22 + 14976);
      if ( v23 )
      {
        v24 = (unsigned int)(v23 - 1);
        *(_DWORD *)(v22 + 14976) = v24;
        v8 = *(_QWORD *)(v22 + 8 * v24 + 14848);
        v25 = *(unsigned int *)(v8 + 536);
        *(_BYTE *)v8 = 0;
        v26 = *(_QWORD *)(v8 + 528);
        *(_DWORD *)(v8 + 424) = 0;
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
              goto LABEL_31;
          }
        }
LABEL_31:
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
    v37.m128i_i64[0] = v7;
    v37.m128i_i8[8] = 1;
    v9 = *(unsigned int *)(v8 + 424);
    if ( *(unsigned int *)(v8 + 428) < (unsigned __int64)(v9 + 1) )
    {
      sub_25D6060(v8 + 416, v8 + 432, v9 + 1, 12);
      v9 = *(unsigned int *)(v8 + 424);
    }
    v10 = *(_QWORD *)(v8 + 416) + 12 * v9;
    *(_QWORD *)v10 = v37.m128i_i64[0];
    *(_DWORD *)(v10 + 8) = v37.m128i_i32[2];
    ++*(_DWORD *)(v8 + 424);
  }
  return 0;
}

