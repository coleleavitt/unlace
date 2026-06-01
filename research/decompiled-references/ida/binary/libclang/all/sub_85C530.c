__int64 __fastcall sub_85C530(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 *v16; // rbp
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  void *v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // r13
  void *v30; // rdi
  __int64 v31; // [rsp+8h] [rbp-1B0h]
  void *v32; // [rsp+10h] [rbp-1A8h] BYREF
  unsigned int v33; // [rsp+18h] [rbp-1A0h]
  char v34; // [rsp+1Ch] [rbp-19Ch]
  int v35; // [rsp+20h] [rbp-198h]
  __m128i v36; // [rsp+30h] [rbp-188h] BYREF
  unsigned int *v37; // [rsp+40h] [rbp-178h]
  __int64 v38; // [rsp+48h] [rbp-170h]
  unsigned int v39; // [rsp+50h] [rbp-168h] BYREF
  char v40; // [rsp+54h] [rbp-164h]
  unsigned int v41; // [rsp+90h] [rbp-128h] BYREF
  char v42; // [rsp+94h] [rbp-124h]
  void *v43; // [rsp+98h] [rbp-120h]
  unsigned int v44; // [rsp+A0h] [rbp-118h]
  char v45; // [rsp+A4h] [rbp-114h]
  int v46; // [rsp+A8h] [rbp-110h]
  __m128i v47; // [rsp+D0h] [rbp-E8h] BYREF
  unsigned int *v48; // [rsp+E0h] [rbp-D8h]
  int v49; // [rsp+E8h] [rbp-D0h]
  __int64 v50; // [rsp+110h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+118h] [rbp-A0h]
  __int64 v52; // [rsp+120h] [rbp-98h]
  void *ptr; // [rsp+128h] [rbp-90h] BYREF
  __int64 v54; // [rsp+130h] [rbp-88h]
  _BYTE v55[128]; // [rsp+138h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *a1;
  v40 &= ~1u;
  v39 = 0;
  if ( !(unsigned __int8)sub_856400((__int64)&v39, v5, v4) )
  {
LABEL_20:
    v14 = 0;
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 > 2 )
  {
    v16 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v17 = sub_AC7B80(a2);
    if ( v16 )
    {
      v18 = *v16;
      if ( !*v16 )
      {
        v24 = v16[1];
        v25 = *(_DWORD *)(v24 + 14976);
        if ( v25 )
        {
          v26 = (unsigned int)(v25 - 1);
          *(_DWORD *)(v24 + 14976) = v26;
          v18 = *(_QWORD *)(v24 + 8 * v26 + 14848);
          v27 = *(unsigned int *)(v18 + 536);
          *(_BYTE *)v18 = 0;
          v28 = *(_QWORD *)(v18 + 528);
          *(_DWORD *)(v18 + 424) = 0;
          v29 = v28 + (v27 << 6);
          while ( v28 != v29 )
          {
            while ( 1 )
            {
              v29 -= 64;
              v30 = *(void **)(v29 + 24);
              if ( v30 == (void *)(v29 + 40) )
                break;
              operator delete(v30, *(_QWORD *)(v29 + 40) + 1LL);
              if ( v28 == v29 )
                goto LABEL_34;
            }
          }
LABEL_34:
          *(_DWORD *)(v18 + 536) = 0;
        }
        else
        {
          v18 = operator new(0x3A0u);
          *(_BYTE *)v18 = 0;
          *(_QWORD *)(v18 + 96) = v18 + 112;
          *(_QWORD *)(v18 + 128) = v18 + 144;
          *(_QWORD *)(v18 + 160) = v18 + 176;
          *(_QWORD *)(v18 + 192) = v18 + 208;
          *(_QWORD *)(v18 + 224) = v18 + 240;
          *(_QWORD *)(v18 + 256) = v18 + 272;
          *(_QWORD *)(v18 + 288) = v18 + 304;
          *(_QWORD *)(v18 + 320) = v18 + 336;
          *(_QWORD *)(v18 + 352) = v18 + 368;
          *(_QWORD *)(v18 + 384) = v18 + 400;
          *(_QWORD *)(v18 + 104) = 0;
          *(_BYTE *)(v18 + 112) = 0;
          *(_QWORD *)(v18 + 136) = 0;
          *(_BYTE *)(v18 + 144) = 0;
          *(_QWORD *)(v18 + 168) = 0;
          *(_BYTE *)(v18 + 176) = 0;
          *(_QWORD *)(v18 + 200) = 0;
          *(_BYTE *)(v18 + 208) = 0;
          *(_QWORD *)(v18 + 232) = 0;
          *(_BYTE *)(v18 + 240) = 0;
          *(_QWORD *)(v18 + 264) = 0;
          *(_BYTE *)(v18 + 272) = 0;
          *(_QWORD *)(v18 + 296) = 0;
          *(_BYTE *)(v18 + 304) = 0;
          *(_QWORD *)(v18 + 328) = 0;
          *(_BYTE *)(v18 + 336) = 0;
          *(_QWORD *)(v18 + 360) = 0;
          *(_BYTE *)(v18 + 368) = 0;
          *(_QWORD *)(v18 + 392) = 0;
          *(_BYTE *)(v18 + 400) = 0;
          *(_QWORD *)(v18 + 416) = v18 + 432;
          *(_QWORD *)(v18 + 424) = 0x800000000LL;
          *(_QWORD *)(v18 + 528) = v18 + 544;
          *(_QWORD *)(v18 + 536) = 0x600000000LL;
        }
        *v16 = v18;
      }
      v50 = v17;
      LOBYTE(v51) = 1;
      v19 = *(unsigned int *)(v18 + 424);
      if ( *(unsigned int *)(v18 + 428) < (unsigned __int64)(v19 + 1) )
      {
        sub_25D6060(v18 + 416, v18 + 432, v19 + 1, 12);
        v19 = *(unsigned int *)(v18 + 424);
      }
      v20 = *(_QWORD *)(v18 + 416) + 12 * v19;
      *(_QWORD *)v20 = v50;
      *(_DWORD *)(v20 + 8) = v51;
      ++*(_DWORD *)(v18 + 424);
    }
    goto LABEL_20;
  }
  v38 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  v52 = v7;
  v54 = 0x800000000LL;
  v36 = 0u;
  v37 = &v39;
  LODWORD(v50) = 0;
  v51 = 0;
  ptr = v55;
  sub_69F580(v47.m128i_i64, v6 & 0xFFFFFFFFFFFFFFFBLL);
  v8 = (unsigned int)v54;
  v9 = v47.m128i_i64[0];
  v10 = (unsigned int)v54 + 1LL;
  if ( HIDWORD(v54) < v10 )
  {
    v31 = v47.m128i_i64[0];
    sub_25D6060(&ptr, v55, v10, 8);
    v8 = (unsigned int)v54;
    v9 = v31;
  }
  *((_QWORD *)ptr + v8) = v9;
  v11 = v54 + 1;
  LODWORD(v54) = v54 + 1;
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 <= 2 )
  {
    v12 = *(_QWORD *)(v6 + 48);
    v51 = 0;
    v52 = v12;
    LODWORD(v50) = v50 & 7 | (16 * v11);
  }
  v13 = *a1;
  v42 &= ~1u;
  v41 = 0;
  v48 = &v41;
  v49 = 0;
  v47 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)a2);
  v14 = sub_851190(v13, a2, &v36, (__int64)&v50, (__int64)&v47);
  if ( (_BYTE)v14 )
  {
    v21 = v44;
    v33 = v44;
    if ( v44 > 0x40 )
    {
      sub_2585B30(&v32);
      v21 = v33;
      v22 = v32;
    }
    else
    {
      v22 = v43;
      v32 = v43;
    }
    v47.m128i_i64[1] = (__int64)v22;
    v23 = a1[1];
    v47.m128i_i8[4] &= ~1u;
    v34 = v45;
    v35 = v46;
    LODWORD(v48) = v21;
    v33 = 0;
    BYTE4(v48) = v45;
    v49 = v46;
    v47.m128i_i32[0] = 4;
    sub_6A01B0(v23, (__int64)&v47);
    if ( v47.m128i_i32[0] > 1u )
      sub_69F740((__int64)&v47);
    if ( v33 > 0x40 && v32 )
      operator delete[](v32);
  }
  if ( v41 > 1 )
    sub_69F740((__int64)&v41);
  if ( ptr != v55 )
    free(ptr);
LABEL_12:
  if ( v39 > 1 )
    sub_69F740((__int64)&v39);
  return v14;
}

