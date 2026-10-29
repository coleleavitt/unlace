__int64 __fastcall sub_86D4B0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v13; // rsi
  void *v14; // rdi
  unsigned __int8 v15; // al
  __int64 v16; // rdi
  unsigned int v17; // eax
  void *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // rbx
  void *v26; // rdi
  void *v27; // [rsp+10h] [rbp-168h] BYREF
  unsigned int v28; // [rsp+18h] [rbp-160h]
  char v29; // [rsp+1Ch] [rbp-15Ch]
  int v30; // [rsp+20h] [rbp-158h]
  unsigned int v31; // [rsp+30h] [rbp-148h] BYREF
  char v32; // [rsp+34h] [rbp-144h]
  void *v33; // [rsp+38h] [rbp-140h]
  unsigned int v34; // [rsp+40h] [rbp-138h]
  char v35; // [rsp+44h] [rbp-134h]
  int v36; // [rsp+48h] [rbp-130h]
  __m128i v37; // [rsp+70h] [rbp-108h] BYREF
  unsigned int v38; // [rsp+80h] [rbp-F8h]
  char v39; // [rsp+84h] [rbp-F4h]
  int v40; // [rsp+88h] [rbp-F0h]
  __m128i v41; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v42; // [rsp+C0h] [rbp-B8h]
  char v43; // [rsp+C8h] [rbp-B0h]
  __int64 v44; // [rsp+D8h] [rbp-A0h]
  void *ptr; // [rsp+E0h] [rbp-98h]
  __int64 v46; // [rsp+E8h] [rbp-90h]
  _BYTE v47[136]; // [rsp+F0h] [rbp-88h] BYREF

  v4 = sub_A2CB40(*a1);
  v5 = *a1;
  if ( (*(_BYTE *)(v4 + 1) & 0x20) != 0 || *(_DWORD *)(v5 + 48) && (*(_BYTE *)(v5 + 962) || *(_BYTE *)(v5 + 963)) )
  {
    v13 = *(_QWORD *)(a2 + 16);
    v37.m128i_i64[0] = *a1;
    v43 |= 1u;
    v41 = 0u;
    v42 = 0;
    v44 = 0;
    ptr = v47;
    v46 = 0x800000000LL;
    v47[65] = 0;
    v37.m128i_i64[1] = (__int64)&v41;
    LOBYTE(v38) = 0;
    v11 = sub_869D30(&v37, v13);
    if ( !(_BYTE)v11 )
      goto LABEL_13;
    v15 = *(_BYTE *)(a2 + 2);
    v16 = *a1;
    v32 &= ~1u;
    v31 = 0;
    v11 = sub_84D690(
            v16,
            (_DWORD *)a2,
            &v41,
            *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
            ((v15 >> 3) & 0x1D) == 0,
            (__int64)&v31);
    if ( (_BYTE)v11 )
    {
      v17 = v34;
      v28 = v34;
      if ( v34 > 0x40 )
      {
        sub_2585B30(&v27);
        v17 = v28;
        v18 = v27;
      }
      else
      {
        v18 = v33;
        v27 = v33;
      }
      v37.m128i_i64[1] = (__int64)v18;
      v19 = a1[1];
      v37.m128i_i8[4] &= ~1u;
      v29 = v35;
      v30 = v36;
      v38 = v17;
      v28 = 0;
      v39 = v35;
      v40 = v36;
      v37.m128i_i32[0] = 4;
      sub_6A01B0(v19, (__int64)&v37);
      if ( v37.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v37);
      if ( v28 > 0x40 && v27 )
        operator delete[](v27);
    }
    if ( v31 > 1 )
    {
      sub_69F740((__int64)&v31);
      v14 = ptr;
      if ( ptr == v47 )
        return v11;
    }
    else
    {
LABEL_13:
      v14 = ptr;
      if ( ptr == v47 )
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
    v41.m128i_i64[0] = v7;
    v41.m128i_i8[8] = 1;
    v9 = *(unsigned int *)(v8 + 424);
    if ( *(unsigned int *)(v8 + 428) < (unsigned __int64)(v9 + 1) )
    {
      sub_25D6060(v8 + 416, v8 + 432, v9 + 1, 12);
      v9 = *(unsigned int *)(v8 + 424);
    }
    v10 = *(_QWORD *)(v8 + 416) + 12 * v9;
    *(_QWORD *)v10 = v41.m128i_i64[0];
    *(_DWORD *)(v10 + 8) = v41.m128i_i32[2];
    ++*(_DWORD *)(v8 + 424);
  }
  return 0;
}

