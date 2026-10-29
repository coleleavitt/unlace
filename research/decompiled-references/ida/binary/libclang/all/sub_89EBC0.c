__int64 __fastcall sub_89EBC0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 *v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebp
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rsi
  char v23; // dl
  __int64 v24; // rax
  _BYTE *v25; // rdx
  char v26; // al
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r12
  __int64 v34; // r13
  __int64 v35; // r12
  void *v36; // rdi
  __int64 v37; // [rsp+0h] [rbp-108h] BYREF
  __int64 v38[7]; // [rsp+8h] [rbp-100h] BYREF
  __m128i v39; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+50h] [rbp-B8h]
  char v41; // [rsp+58h] [rbp-B0h]
  __int64 v42; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h]
  _BYTE v45[136]; // [rsp+80h] [rbp-88h] BYREF

  v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) <= 1 )
  {
    v17 = a1->m128i_i64[0];
    v15 = 0;
    v41 |= 1u;
    v39 = 0u;
    v40 = 0;
    v42 = 0;
    ptr = v45;
    v44 = 0x800000000LL;
    v45[65] = 0;
    if ( sub_89E210(v17, a2, (__int64)&v39, 1, a5, a6) )
    {
      v18 = *(_QWORD *)(a2 + 8);
      v19 = a1->m128i_i64[0];
      BYTE4(v37) &= ~1u;
      LODWORD(v37) = 0;
      v15 = sub_85F440(v19, (_DWORD *)a2, v18, (__int64)&v39, (__int64)&v37, 0);
      if ( (_BYTE)v15 )
        sub_834130((__int64 *)a1->m128i_i64[1], v38, v20);
      if ( (unsigned int)v37 > 1 )
        sub_69F740((__int64)&v37);
    }
    if ( ptr != v45 )
      free(ptr);
    return v15;
  }
  v9 = (unsigned int)(unsigned __int8)v8 - 21;
  if ( (unsigned int)v9 <= 0xA )
  {
    v10 = (__int64 *)sub_A2E130(a1->m128i_i64[0], a2, 110, 0);
    v11 = sub_AC7B80(a2);
    if ( v10 )
    {
      v12 = *v10;
      if ( !*v10 )
      {
        v30 = v10[1];
        v31 = *(_DWORD *)(v30 + 14976);
        if ( v31 )
        {
          v32 = (unsigned int)(v31 - 1);
          *(_DWORD *)(v30 + 14976) = v32;
          v12 = *(_QWORD *)(v30 + 8 * v32 + 14848);
          v33 = *(unsigned int *)(v12 + 536);
          *(_BYTE *)v12 = 0;
          v34 = *(_QWORD *)(v12 + 528);
          *(_DWORD *)(v12 + 424) = 0;
          v35 = v34 + (v33 << 6);
          while ( v34 != v35 )
          {
            while ( 1 )
            {
              v35 -= 64;
              v36 = *(void **)(v35 + 24);
              if ( v36 == (void *)(v35 + 40) )
                break;
              operator delete(v36, *(_QWORD *)(v35 + 40) + 1LL);
              if ( v34 == v35 )
                goto LABEL_34;
            }
          }
LABEL_34:
          *(_DWORD *)(v12 + 536) = 0;
        }
        else
        {
          v12 = operator new(0x3A0u);
          *(_BYTE *)v12 = 0;
          *(_QWORD *)(v12 + 96) = v12 + 112;
          *(_QWORD *)(v12 + 128) = v12 + 144;
          *(_QWORD *)(v12 + 160) = v12 + 176;
          *(_QWORD *)(v12 + 192) = v12 + 208;
          *(_QWORD *)(v12 + 224) = v12 + 240;
          *(_QWORD *)(v12 + 256) = v12 + 272;
          *(_QWORD *)(v12 + 288) = v12 + 304;
          *(_QWORD *)(v12 + 320) = v12 + 336;
          *(_QWORD *)(v12 + 352) = v12 + 368;
          *(_QWORD *)(v12 + 384) = v12 + 400;
          *(_QWORD *)(v12 + 104) = 0;
          *(_BYTE *)(v12 + 112) = 0;
          *(_QWORD *)(v12 + 136) = 0;
          *(_BYTE *)(v12 + 144) = 0;
          *(_QWORD *)(v12 + 168) = 0;
          *(_BYTE *)(v12 + 176) = 0;
          *(_QWORD *)(v12 + 200) = 0;
          *(_BYTE *)(v12 + 208) = 0;
          *(_QWORD *)(v12 + 232) = 0;
          *(_BYTE *)(v12 + 240) = 0;
          *(_QWORD *)(v12 + 264) = 0;
          *(_BYTE *)(v12 + 272) = 0;
          *(_QWORD *)(v12 + 296) = 0;
          *(_BYTE *)(v12 + 304) = 0;
          *(_QWORD *)(v12 + 328) = 0;
          *(_BYTE *)(v12 + 336) = 0;
          *(_QWORD *)(v12 + 360) = 0;
          *(_BYTE *)(v12 + 368) = 0;
          *(_QWORD *)(v12 + 392) = 0;
          *(_BYTE *)(v12 + 400) = 0;
          *(_QWORD *)(v12 + 416) = v12 + 432;
          *(_QWORD *)(v12 + 424) = 0x800000000LL;
          *(_QWORD *)(v12 + 528) = v12 + 544;
          *(_QWORD *)(v12 + 536) = 0x600000000LL;
        }
        *v10 = v12;
      }
      v39.m128i_i64[0] = v11;
      v39.m128i_i8[8] = 1;
      v13 = *(unsigned int *)(v12 + 424);
      if ( *(unsigned int *)(v12 + 428) < (unsigned __int64)(v13 + 1) )
      {
        sub_25D6060(v12 + 416, v12 + 432, v13 + 1, 12);
        v13 = *(unsigned int *)(v12 + 424);
      }
      v14 = *(_QWORD *)(v12 + 416) + 12 * v13;
      *(_QWORD *)v14 = v39.m128i_i64[0];
      *(_DWORD *)(v14 + 8) = v39.m128i_i32[2];
      ++*(_DWORD *)(v12 + 424);
    }
    return 0;
  }
  if ( (unsigned __int8)v8 != 32 )
  {
    v21 = sub_2575D00(a1, a2, v9);
    sub_2580BE0(&v39, 0.0);
    sub_257EDC0(&v37, &v39, v21);
    sub_25769A0(&v39);
    v22 = *(_QWORD *)(a2 + 16);
    v39 = _mm_loadu_si128(a1);
    v23 = sub_883160(v39.m128i_i64, v22);
    v24 = a1->m128i_i64[0];
    if ( v23 )
    {
      v29 = *(_QWORD *)(a2 + 24);
      v39.m128i_i64[0] = a1->m128i_i64[0];
      v39.m128i_i64[1] = (__int64)&v37;
      if ( (unsigned __int8)sub_883160(v39.m128i_i64, v29) )
      {
        v15 = sub_82E1B0(a1->m128i_i64[0], a2, (_QWORD *)a1->m128i_i64[1], (*(_WORD *)(a2 + 2) >> 3) & 0x3F, &v37);
        goto LABEL_25;
      }
    }
    else if ( *(_DWORD *)(v24 + 48) )
    {
      v25 = *(_BYTE **)(v24 + 24);
      if ( *(_BYTE *)(v24 + 962) )
      {
        *v25 = 1;
        goto LABEL_23;
      }
      v26 = *(_BYTE *)(v24 + 963);
      *v25 |= v26;
      if ( v26 )
      {
LABEL_23:
        v27 = a1->m128i_i64[0];
        v28 = *(_QWORD *)(a2 + 24);
        v39.m128i_i64[1] = (__int64)&v37;
        v39.m128i_i64[0] = v27;
        sub_883160(v39.m128i_i64, v28);
      }
    }
    v15 = 0;
LABEL_25:
    sub_5FF3B0(&v37);
    return v15;
  }
  sub_857160(a1->m128i_i64[0], *(_QWORD *)(a2 + 16));
  return sub_883160(a1->m128i_i64, *(_QWORD *)(a2 + 24));
}

