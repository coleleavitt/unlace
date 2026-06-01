__int64 __fastcall sub_889670(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int16 v5; // ax
  unsigned __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned int v8; // ebp
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rbx
  void *v24; // rdi
  __m128i v25; // [rsp+0h] [rbp-108h] BYREF
  char v26; // [rsp+10h] [rbp-F8h]
  __int64 v27; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int64 v29; // [rsp+50h] [rbp-B8h]
  char v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+78h] [rbp-90h]
  _BYTE v34[136]; // [rsp+80h] [rbp-88h] BYREF

  v5 = (*(_WORD *)(a2 + 2) >> 3) & 0x7F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7F) == 0x13 )
    return sub_887F40(a1, *(_QWORD *)(a2 + 16), a3, a4);
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) > 0x13 )
  {
    if ( (_BYTE)v5 != 58 && (_BYTE)v5 != 63 )
      goto LABEL_28;
    BYTE4(v27) &= ~1u;
    LODWORD(v27) = 0;
    v8 = sub_856400((__int64)&v27, *a1, *(_QWORD *)(a2 + 16));
    if ( (_BYTE)v8 )
    {
      sub_6A63E0(a1[2], (__int64)&v27);
      if ( (unsigned int)v27 <= 1 )
        return v8;
    }
    else if ( (unsigned int)v27 <= 1 )
    {
      return v8;
    }
    sub_69F740((__int64)&v27);
    return v8;
  }
  if ( (_BYTE)v5 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v30 |= 1u;
    v33 = 0x800000000LL;
    v11 = *a1;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v31 = 0;
    ptr = v34;
    v34[65] = 0;
    v25.m128i_i64[0] = v11;
    v25.m128i_i64[1] = (__int64)&v27;
    v26 = 0;
    v8 = sub_869D30(&v25, v10);
    if ( (_BYTE)v8 )
    {
      v12 = *(_QWORD *)(a2 + 16);
      v25.m128i_i8[4] &= ~1u;
      v25.m128i_i32[0] = 0;
      v8 = sub_85F440(*a1, (_DWORD *)a2, *(_QWORD *)(v12 + 8), (__int64)&v27, (__int64)&v25, 0);
      if ( (_BYTE)v8 )
        sub_6A63E0(a1[2], (__int64)&v25);
      if ( v25.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v25);
    }
    if ( ptr != v34 )
      free(ptr);
    return v8;
  }
  if ( (_BYTE)v5 != 5 )
  {
    if ( (_BYTE)v5 == 3 )
    {
      v6 = *(_QWORD *)(a2 + 16);
      v7 = *a1;
      v25.m128i_i32[0] = 0;
      v25.m128i_i8[4] &= ~1u;
      BYTE4(v27) &= ~1u;
      LODWORD(v27) = 0;
      if ( (unsigned __int8)sub_856400((__int64)&v27, v7, v6)
        && (v8 = sub_867E00(*a1, (__int64)&v25, (__int64)&v27, a2), (_BYTE)v8) )
      {
        sub_6A63E0(a1[2], (__int64)&v25);
      }
      else
      {
        v8 = 0;
      }
      if ( (unsigned int)v27 > 1 )
        sub_69F740((__int64)&v27);
      if ( v25.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v25);
      return v8;
    }
LABEL_28:
    v13 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v14 = sub_AC7B80(a2);
    if ( v13 )
    {
      v15 = *v13;
      if ( !*v13 )
      {
        v18 = v13[1];
        v19 = *(_DWORD *)(v18 + 14976);
        if ( v19 )
        {
          v20 = (unsigned int)(v19 - 1);
          *(_DWORD *)(v18 + 14976) = v20;
          v15 = *(_QWORD *)(v18 + 8 * v20 + 14848);
          v21 = *(unsigned int *)(v15 + 536);
          v22 = *(_QWORD *)(v15 + 528);
          *(_BYTE *)v15 = 0;
          *(_DWORD *)(v15 + 424) = 0;
          v23 = v22 + (v21 << 6);
          while ( v22 != v23 )
          {
            while ( 1 )
            {
              v23 -= 64;
              v24 = *(void **)(v23 + 24);
              if ( v24 == (void *)(v23 + 40) )
                break;
              operator delete(v24, *(_QWORD *)(v23 + 40) + 1LL);
              if ( v22 == v23 )
                goto LABEL_41;
            }
          }
LABEL_41:
          *(_DWORD *)(v15 + 536) = 0;
        }
        else
        {
          v15 = operator new(0x3A0u);
          *(_BYTE *)v15 = 0;
          *(_QWORD *)(v15 + 96) = v15 + 112;
          *(_QWORD *)(v15 + 128) = v15 + 144;
          *(_QWORD *)(v15 + 160) = v15 + 176;
          *(_QWORD *)(v15 + 192) = v15 + 208;
          *(_QWORD *)(v15 + 224) = v15 + 240;
          *(_QWORD *)(v15 + 256) = v15 + 272;
          *(_QWORD *)(v15 + 288) = v15 + 304;
          *(_QWORD *)(v15 + 320) = v15 + 336;
          *(_QWORD *)(v15 + 352) = v15 + 368;
          *(_QWORD *)(v15 + 384) = v15 + 400;
          *(_QWORD *)(v15 + 104) = 0;
          *(_BYTE *)(v15 + 112) = 0;
          *(_QWORD *)(v15 + 136) = 0;
          *(_BYTE *)(v15 + 144) = 0;
          *(_QWORD *)(v15 + 168) = 0;
          *(_BYTE *)(v15 + 176) = 0;
          *(_QWORD *)(v15 + 200) = 0;
          *(_BYTE *)(v15 + 208) = 0;
          *(_QWORD *)(v15 + 232) = 0;
          *(_BYTE *)(v15 + 240) = 0;
          *(_QWORD *)(v15 + 264) = 0;
          *(_BYTE *)(v15 + 272) = 0;
          *(_QWORD *)(v15 + 296) = 0;
          *(_BYTE *)(v15 + 304) = 0;
          *(_QWORD *)(v15 + 328) = 0;
          *(_BYTE *)(v15 + 336) = 0;
          *(_QWORD *)(v15 + 360) = 0;
          *(_BYTE *)(v15 + 368) = 0;
          *(_QWORD *)(v15 + 392) = 0;
          *(_BYTE *)(v15 + 400) = 0;
          *(_QWORD *)(v15 + 416) = v15 + 432;
          *(_QWORD *)(v15 + 424) = 0x800000000LL;
          *(_QWORD *)(v15 + 528) = v15 + 544;
          *(_QWORD *)(v15 + 536) = 0x600000000LL;
        }
        *v13 = v15;
      }
      v27 = v14;
      LOBYTE(v28) = 1;
      v16 = *(unsigned int *)(v15 + 424);
      if ( *(unsigned int *)(v15 + 428) < (unsigned __int64)(v16 + 1) )
      {
        sub_25D6060(v15 + 416, v15 + 432, v16 + 1, 12);
        v16 = *(unsigned int *)(v15 + 424);
      }
      v17 = *(_QWORD *)(v15 + 416) + 12 * v16;
      *(_QWORD *)v17 = v27;
      *(_DWORD *)(v17 + 8) = v28;
      ++*(_DWORD *)(v15 + 424);
    }
    return 0;
  }
  return sub_887F40(a1, *(_QWORD *)(a2 + 16), a3, a4);
}

