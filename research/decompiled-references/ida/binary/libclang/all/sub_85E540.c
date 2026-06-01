__int64 __fastcall sub_85E540(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 *v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v25; // r13
  void *v26; // rdi
  __int64 v27; // [rsp+8h] [rbp-170h]
  __m128i v28; // [rsp+10h] [rbp-168h] BYREF
  unsigned int *v29; // [rsp+20h] [rbp-158h]
  __int64 v30; // [rsp+28h] [rbp-150h]
  __m128i v31; // [rsp+30h] [rbp-148h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-138h]
  int v33; // [rsp+48h] [rbp-130h]
  unsigned int v34; // [rsp+50h] [rbp-128h] BYREF
  char v35; // [rsp+54h] [rbp-124h]
  __int64 v36[8]; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-A0h]
  __int64 v39; // [rsp+E0h] [rbp-98h]
  void *ptr; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-88h]
  _BYTE v42[128]; // [rsp+F8h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *a1;
  v35 &= ~1u;
  v34 = 0;
  if ( !(unsigned __int8)sub_856400((__int64)&v34, v4, v3) )
  {
LABEL_19:
    v13 = 0;
    goto LABEL_11;
  }
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 47 > 2 )
  {
    v15 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v16 = sub_AC7B80(a2);
    if ( v15 )
    {
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
                goto LABEL_25;
            }
          }
LABEL_25:
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
      v37 = v16;
      LOBYTE(v38) = 1;
      v18 = *(unsigned int *)(v17 + 424);
      if ( *(unsigned int *)(v17 + 428) < (unsigned __int64)(v18 + 1) )
      {
        sub_25D6060(v17 + 416, v17 + 432, v18 + 1, 12);
        v18 = *(unsigned int *)(v17 + 424);
      }
      v19 = *(_QWORD *)(v17 + 416) + 12 * v18;
      *(_QWORD *)v19 = v37;
      *(_DWORD *)(v19 + 8) = v38;
      ++*(_DWORD *)(v17 + 424);
    }
    goto LABEL_19;
  }
  v30 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  v39 = v6;
  v41 = 0x800000000LL;
  v28 = 0u;
  v29 = &v34;
  LODWORD(v37) = 0;
  v38 = 0;
  ptr = v42;
  sub_69F580(v36, v5 & 0xFFFFFFFFFFFFFFFBLL);
  v7 = (unsigned int)v41;
  v8 = v36[0];
  v9 = (unsigned int)v41 + 1LL;
  if ( HIDWORD(v41) < v9 )
  {
    v27 = v36[0];
    sub_25D6060(&ptr, v42, v9, 8);
    v7 = (unsigned int)v41;
    v8 = v27;
  }
  *((_QWORD *)ptr + v7) = v8;
  v10 = v41 + 1;
  LODWORD(v41) = v41 + 1;
  if ( (*(_BYTE *)(v5 + 28) & 0x7Fu) - 47 <= 2 )
  {
    v11 = *(_QWORD *)(v5 + 48);
    v38 = 0;
    v39 = v11;
    LODWORD(v37) = v37 & 7 | (16 * v10);
  }
  v12 = *a1;
  BYTE4(v36[0]) &= ~1u;
  v32 = v36;
  v33 = 0;
  LODWORD(v36[0]) = 0;
  v31 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)a2);
  v13 = sub_851190(v12, a2, &v28, (__int64)&v37, (__int64)&v31);
  if ( LODWORD(v36[0]) > 1 )
    sub_69F740((__int64)v36);
  if ( ptr != v42 )
    free(ptr);
LABEL_11:
  if ( v34 > 1 )
    sub_69F740((__int64)&v34);
  return v13;
}

