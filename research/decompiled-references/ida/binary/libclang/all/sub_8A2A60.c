__int64 __fastcall sub_8A2A60(__m128i *a1, __int64 a2)
{
  __int16 v3; // ax
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rbx
  void *v22; // rdi
  __m128i v23; // [rsp+0h] [rbp-108h] BYREF
  char v24; // [rsp+10h] [rbp-F8h]
  __int64 v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  char v28; // [rsp+58h] [rbp-B0h]
  __int64 v29; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v31; // [rsp+78h] [rbp-90h]
  _BYTE v32[136]; // [rsp+80h] [rbp-88h] BYREF

  v3 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x13 )
    return sub_8A19A0(a1, *(_QWORD *)(a2 + 16));
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) > 0x13 )
  {
    if ( (_BYTE)v3 != 58 && (_BYTE)v3 != 63 )
      goto LABEL_28;
    BYTE4(v25) &= ~1u;
    LODWORD(v25) = 0;
    v6 = sub_856400((__int64)&v25, a1->m128i_i64[0], *(_QWORD *)(a2 + 16));
    if ( (_BYTE)v6 )
    {
      sub_6A63E0(a1[1].m128i_i64[0], (__int64)&v25);
      if ( (unsigned int)v25 <= 1 )
        return v6;
    }
    else if ( (unsigned int)v25 <= 1 )
    {
      return v6;
    }
    sub_69F740((__int64)&v25);
    return v6;
  }
  if ( (_BYTE)v3 == 4 )
  {
    v8 = *(_QWORD *)(a2 + 16);
    v28 |= 1u;
    v31 = 0x800000000LL;
    v9 = a1->m128i_i64[0];
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v29 = 0;
    ptr = v32;
    v32[65] = 0;
    v23.m128i_i64[0] = v9;
    v23.m128i_i64[1] = (__int64)&v25;
    v24 = 0;
    v6 = sub_869D30(&v23, v8);
    if ( (_BYTE)v6 )
    {
      v10 = *(_QWORD *)(a2 + 16);
      v23.m128i_i8[4] &= ~1u;
      v23.m128i_i32[0] = 0;
      v6 = sub_85F440(a1->m128i_i64[0], (_DWORD *)a2, *(_QWORD *)(v10 + 8), (__int64)&v25, (__int64)&v23, 0);
      if ( (_BYTE)v6 )
        sub_6A63E0(a1[1].m128i_i64[0], (__int64)&v23);
      if ( v23.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v23);
    }
    if ( ptr != v32 )
      free(ptr);
    return v6;
  }
  if ( (_BYTE)v3 != 5 )
  {
    if ( (_BYTE)v3 == 3 )
    {
      v4 = *(_QWORD *)(a2 + 16);
      v5 = a1->m128i_i64[0];
      v23.m128i_i32[0] = 0;
      v23.m128i_i8[4] &= ~1u;
      BYTE4(v25) &= ~1u;
      LODWORD(v25) = 0;
      if ( (unsigned __int8)sub_856400((__int64)&v25, v5, v4)
        && (v6 = sub_867E00(a1->m128i_i64[0], (__int64)&v23, (__int64)&v25, a2), (_BYTE)v6) )
      {
        sub_6A63E0(a1[1].m128i_i64[0], (__int64)&v23);
      }
      else
      {
        v6 = 0;
      }
      if ( (unsigned int)v25 > 1 )
        sub_69F740((__int64)&v25);
      if ( v23.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v23);
      return v6;
    }
LABEL_28:
    v11 = (__int64 *)sub_A2E130(a1->m128i_i64[0], a2, 110, 0);
    v12 = sub_AC7B80(a2);
    if ( v11 )
    {
      v13 = *v11;
      if ( !*v11 )
      {
        v16 = v11[1];
        v17 = *(_DWORD *)(v16 + 14976);
        if ( v17 )
        {
          v18 = (unsigned int)(v17 - 1);
          *(_DWORD *)(v16 + 14976) = v18;
          v13 = *(_QWORD *)(v16 + 8 * v18 + 14848);
          v19 = *(unsigned int *)(v13 + 536);
          v20 = *(_QWORD *)(v13 + 528);
          *(_BYTE *)v13 = 0;
          *(_DWORD *)(v13 + 424) = 0;
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
                goto LABEL_41;
            }
          }
LABEL_41:
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
      v25 = v12;
      LOBYTE(v26) = 1;
      v14 = *(unsigned int *)(v13 + 424);
      if ( *(unsigned int *)(v13 + 428) < (unsigned __int64)(v14 + 1) )
      {
        sub_25D6060(v13 + 416, v13 + 432, v14 + 1, 12);
        v14 = *(unsigned int *)(v13 + 424);
      }
      v15 = *(_QWORD *)(v13 + 416) + 12 * v14;
      *(_QWORD *)v15 = v25;
      *(_DWORD *)(v15 + 8) = v26;
      ++*(_DWORD *)(v13 + 424);
    }
    return 0;
  }
  return sub_8A19A0(a1, *(_QWORD *)(a2 + 16));
}

