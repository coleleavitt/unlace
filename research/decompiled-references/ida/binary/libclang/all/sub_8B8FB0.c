__int64 __fastcall sub_8B8FB0(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r13
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // r11
  __int64 v6; // rdx
  __int64 v7; // rax
  _WORD *v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  unsigned __int64 v13; // rax
  char v14; // bl
  __int64 *v15; // r12
  __int64 v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rbp
  __int64 v24; // r13
  __int64 v25; // rbp
  void *v26; // rdi
  unsigned __int64 v27; // [rsp+10h] [rbp-D8h]
  __int64 v28; // [rsp+18h] [rbp-D0h]
  __m128i v29; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-B8h]
  char v31; // [rsp+38h] [rbp-B0h]
  __int64 v32; // [rsp+48h] [rbp-A0h]
  void *ptr; // [rsp+50h] [rbp-98h]
  __int64 v34; // [rsp+58h] [rbp-90h]
  _BYTE v35[136]; // [rsp+60h] [rbp-88h] BYREF

  v2 = (__int64 *)(a2 + 24);
  v3 = a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 16;
  if ( v3 == a2 + 24 )
    return 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = (_WORD *)*v2;
      v9 = *(unsigned __int16 *)(a2 + 6);
      if ( (*(_WORD *)*v2 & 0x1FF) == 0x1B )
        break;
      if ( (_WORD)v9 && v8 == *(_WORD **)(a2 + 8 * v9 + 16) )
      {
        if ( !sub_89CD60(a1, *v2) )
          return 0;
        goto LABEL_11;
      }
      v10 = *v2;
      v29.m128i_i8[4] &= ~1u;
      v29.m128i_i32[0] = 0;
      v11 = *a1;
      if ( (unsigned __int8)sub_856400((__int64)&v29, *a1, v10)
        || (**(_BYTE **)(v11 + 24) = 1, *(_DWORD *)(v11 + 964) > 2u) )
      {
        if ( v29.m128i_i32[0] <= 1u )
          goto LABEL_11;
      }
      else
      {
        if ( !*(_BYTE *)(v11 + 962) )
        {
          v14 = *(_BYTE *)(v11 + 963);
          if ( v29.m128i_i32[0] > 1u )
            sub_69F740((__int64)&v29);
          if ( !v14 )
            return 0;
          goto LABEL_11;
        }
        if ( v29.m128i_i32[0] <= 1u )
          goto LABEL_11;
      }
      ++v2;
      sub_69F740((__int64)&v29);
      if ( (__int64 *)v3 == v2 )
        return 1;
    }
    if ( (_WORD)v9 && v8 == *(_WORD **)(a2 + 8 * v9 + 16) )
      break;
    if ( (v8[1] & 8) == 0 )
    {
      v31 |= 1u;
      v29 = 0u;
      v30 = 0;
      v32 = 0;
      ptr = v35;
      v34 = 0x800000000LL;
      v35[65] = 0;
      v27 = *((_QWORD *)v8 + 2);
      v4 = *a1;
      v5 = *(_QWORD *)(*a1 + 32);
      if ( (*((_BYTE *)v8 + 1) & 6) != 0 )
      {
        v28 = *(_QWORD *)(*a1 + 32);
        v13 = sub_6C4DA0(*(_QWORD *)(v4 + 16), *((_QWORD *)v8 + 1), 1u);
        v5 = v28;
        v6 = v13;
      }
      else
      {
        v6 = *((_QWORD *)v8 + 1);
      }
      v7 = sub_823B90(v5, (unsigned __int64)v8, v6, &v29);
      if ( !(unsigned __int8)sub_856400(v7, v4, v27) )
      {
        if ( ptr != v35 )
        {
          free(ptr);
          return 0;
        }
        return 0;
      }
      if ( ptr != v35 )
        free(ptr);
    }
LABEL_11:
    if ( (__int64 *)v3 == ++v2 )
      return 1;
  }
  v15 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
  v16 = sub_AC7B80(a2);
  if ( !v15 )
    return 0;
  v17 = *v15;
  if ( !*v15 )
  {
    v20 = v15[1];
    v21 = *(_DWORD *)(v20 + 14976);
    if ( v21 )
    {
      v22 = (unsigned int)(v21 - 1);
      *(_DWORD *)(v20 + 14976) = v22;
      v17 = *(_QWORD *)(v20 + 8 * v22 + 14848);
      v23 = *(unsigned int *)(v17 + 536);
      *(_BYTE *)v17 = 0;
      v24 = *(_QWORD *)(v17 + 528);
      *(_DWORD *)(v17 + 424) = 0;
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
            goto LABEL_42;
        }
      }
LABEL_42:
      *(_DWORD *)(v17 + 536) = 0;
    }
    else
    {
      v17 = operator new(0x3A0u);
      *(_BYTE *)v17 = 0;
      *(_QWORD *)(v17 + 96) = v17 + 112;
      *(_QWORD *)(v17 + 128) = v17 + 144;
      *(_QWORD *)(v17 + 160) = v17 + 176;
      *(_QWORD *)(v17 + 192) = v17 + 208;
      *(_QWORD *)(v17 + 224) = v17 + 240;
      *(_QWORD *)(v17 + 256) = v17 + 272;
      *(_QWORD *)(v17 + 288) = v17 + 304;
      *(_QWORD *)(v17 + 320) = v17 + 336;
      *(_QWORD *)(v17 + 352) = v17 + 368;
      *(_QWORD *)(v17 + 384) = v17 + 400;
      *(_QWORD *)(v17 + 104) = 0;
      *(_BYTE *)(v17 + 112) = 0;
      *(_QWORD *)(v17 + 136) = 0;
      *(_BYTE *)(v17 + 144) = 0;
      *(_QWORD *)(v17 + 168) = 0;
      *(_BYTE *)(v17 + 176) = 0;
      *(_QWORD *)(v17 + 200) = 0;
      *(_BYTE *)(v17 + 208) = 0;
      *(_QWORD *)(v17 + 232) = 0;
      *(_BYTE *)(v17 + 240) = 0;
      *(_QWORD *)(v17 + 264) = 0;
      *(_BYTE *)(v17 + 272) = 0;
      *(_QWORD *)(v17 + 296) = 0;
      *(_BYTE *)(v17 + 304) = 0;
      *(_QWORD *)(v17 + 328) = 0;
      *(_BYTE *)(v17 + 336) = 0;
      *(_QWORD *)(v17 + 360) = 0;
      *(_BYTE *)(v17 + 368) = 0;
      *(_QWORD *)(v17 + 392) = 0;
      *(_BYTE *)(v17 + 400) = 0;
      *(_QWORD *)(v17 + 416) = v17 + 432;
      *(_QWORD *)(v17 + 424) = 0x800000000LL;
      *(_QWORD *)(v17 + 528) = v17 + 544;
      *(_QWORD *)(v17 + 536) = 0x600000000LL;
    }
    *v15 = v17;
  }
  v29.m128i_i64[0] = v16;
  v29.m128i_i8[8] = 1;
  v18 = *(unsigned int *)(v17 + 424);
  if ( *(unsigned int *)(v17 + 428) < (unsigned __int64)(v18 + 1) )
  {
    sub_25D6060(v17 + 416, v17 + 432, v18 + 1, 12);
    v18 = *(unsigned int *)(v17 + 424);
  }
  v19 = *(_QWORD *)(v17 + 416) + 12 * v18;
  *(_QWORD *)v19 = v29.m128i_i64[0];
  *(_DWORD *)(v19 + 8) = v29.m128i_i32[2];
  ++*(_DWORD *)(v17 + 424);
  return 0;
}

