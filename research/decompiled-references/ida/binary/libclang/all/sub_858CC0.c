__int64 __fastcall sub_858CC0(__int64 *a1, __int64 a2)
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
  __int64 v21; // rbp
  __int64 v22; // rdx
  unsigned int v23; // eax
  void *v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r13
  void *v31; // rdi
  __int64 v32; // [rsp+8h] [rbp-1A0h]
  void *v33; // [rsp+10h] [rbp-198h] BYREF
  unsigned int v34; // [rsp+18h] [rbp-190h]
  char v35; // [rsp+1Ch] [rbp-18Ch]
  __m128i v36; // [rsp+20h] [rbp-188h] BYREF
  unsigned int *v37; // [rsp+30h] [rbp-178h]
  __int64 v38; // [rsp+38h] [rbp-170h]
  unsigned int v39; // [rsp+40h] [rbp-168h] BYREF
  char v40; // [rsp+44h] [rbp-164h]
  unsigned int v41; // [rsp+80h] [rbp-128h] BYREF
  char v42; // [rsp+84h] [rbp-124h]
  void *v43; // [rsp+88h] [rbp-120h]
  unsigned int v44; // [rsp+90h] [rbp-118h]
  char v45; // [rsp+94h] [rbp-114h]
  __m128i v46; // [rsp+C0h] [rbp-E8h] BYREF
  unsigned int *v47; // [rsp+D0h] [rbp-D8h]
  int v48; // [rsp+D8h] [rbp-D0h]
  __int64 v49; // [rsp+100h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+108h] [rbp-A0h]
  __int64 v51; // [rsp+110h] [rbp-98h]
  void *ptr; // [rsp+118h] [rbp-90h] BYREF
  __int64 v53; // [rsp+120h] [rbp-88h]
  _BYTE v54[128]; // [rsp+128h] [rbp-80h] BYREF

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
        v25 = v16[1];
        v26 = *(_DWORD *)(v25 + 14976);
        if ( v26 )
        {
          v27 = (unsigned int)(v26 - 1);
          *(_DWORD *)(v25 + 14976) = v27;
          v18 = *(_QWORD *)(v25 + 8 * v27 + 14848);
          v28 = *(unsigned int *)(v18 + 536);
          *(_BYTE *)v18 = 0;
          v29 = *(_QWORD *)(v18 + 528);
          *(_DWORD *)(v18 + 424) = 0;
          v30 = v29 + (v28 << 6);
          while ( v29 != v30 )
          {
            while ( 1 )
            {
              v30 -= 64;
              v31 = *(void **)(v30 + 24);
              if ( v31 == (void *)(v30 + 40) )
                break;
              operator delete(v31, *(_QWORD *)(v30 + 40) + 1LL);
              if ( v29 == v30 )
                goto LABEL_38;
            }
          }
LABEL_38:
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
      v49 = v17;
      LOBYTE(v50) = 1;
      v19 = *(unsigned int *)(v18 + 424);
      if ( *(unsigned int *)(v18 + 428) < (unsigned __int64)(v19 + 1) )
      {
        sub_25D6060(v18 + 416, v18 + 432, v19 + 1, 12);
        v19 = *(unsigned int *)(v18 + 424);
      }
      v20 = *(_QWORD *)(v18 + 416) + 12 * v19;
      *(_QWORD *)v20 = v49;
      *(_DWORD *)(v20 + 8) = v50;
      ++*(_DWORD *)(v18 + 424);
    }
    goto LABEL_20;
  }
  v38 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  v51 = v7;
  v53 = 0x800000000LL;
  v36 = 0u;
  v37 = &v39;
  LODWORD(v49) = 0;
  v50 = 0;
  ptr = v54;
  sub_69F580(v46.m128i_i64, v6 & 0xFFFFFFFFFFFFFFFBLL);
  v8 = (unsigned int)v53;
  v9 = v46.m128i_i64[0];
  v10 = (unsigned int)v53 + 1LL;
  if ( HIDWORD(v53) < v10 )
  {
    v32 = v46.m128i_i64[0];
    sub_25D6060(&ptr, v54, v10, 8);
    v8 = (unsigned int)v53;
    v9 = v32;
  }
  *((_QWORD *)ptr + v8) = v9;
  v11 = v53 + 1;
  LODWORD(v53) = v53 + 1;
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 <= 2 )
  {
    v12 = *(_QWORD *)(v6 + 48);
    v50 = 0;
    v51 = v12;
    LODWORD(v49) = v49 & 7 | (16 * v11);
  }
  v13 = *a1;
  v42 &= ~1u;
  v41 = 0;
  v47 = &v41;
  v48 = 0;
  v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)a2);
  v14 = sub_851190(v13, a2, &v36, (__int64)&v49, (__int64)&v46);
  if ( (_BYTE)v14 )
  {
    v21 = a1[1];
    if ( v41 <= 0xD && (v22 = 8322, _bittest64(&v22, v41)) || (v42 & 1) != 0 )
    {
      sub_6A63E0(v21, (__int64)&v41);
    }
    else
    {
      v23 = v44;
      v34 = v44;
      if ( v44 > 0x40 )
      {
        sub_2585B30(&v33);
        v23 = v34;
        v24 = v33;
      }
      else
      {
        v24 = v43;
        v33 = v43;
      }
      v46.m128i_i8[4] &= ~1u;
      v46.m128i_i32[0] = 2;
      v35 = v45;
      v34 = 0;
      v46.m128i_i64[1] = (__int64)v24;
      LODWORD(v47) = v23;
      BYTE4(v47) = v45;
      sub_6A01B0(v21, (__int64)&v46);
      if ( v46.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v46);
      if ( v34 > 0x40 && v33 )
        operator delete[](v33);
    }
  }
  if ( v41 > 1 )
    sub_69F740((__int64)&v41);
  if ( ptr != v54 )
    free(ptr);
LABEL_12:
  if ( v39 > 1 )
    sub_69F740((__int64)&v39);
  return v14;
}

