__int64 __fastcall sub_85EA30(__int64 *a1, __int64 a2)
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
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // r13
  void *v27; // rdi
  __int64 v28; // [rsp+8h] [rbp-170h]
  __m128i v29; // [rsp+10h] [rbp-168h] BYREF
  unsigned int *v30; // [rsp+20h] [rbp-158h]
  __int64 v31; // [rsp+28h] [rbp-150h]
  __m128i v32; // [rsp+30h] [rbp-148h] BYREF
  __int64 *v33; // [rsp+40h] [rbp-138h]
  int v34; // [rsp+48h] [rbp-130h]
  unsigned int v35; // [rsp+50h] [rbp-128h] BYREF
  char v36; // [rsp+54h] [rbp-124h]
  __int64 v37[8]; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-A0h]
  __int64 v40; // [rsp+E0h] [rbp-98h]
  void *ptr; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-88h]
  _BYTE v43[128]; // [rsp+F8h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *a1;
  v36 &= ~1u;
  v35 = 0;
  if ( !(unsigned __int8)sub_856400((__int64)&v35, v5, v4) )
  {
LABEL_21:
    v14 = 0;
    goto LABEL_13;
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
        v21 = v16[1];
        v22 = *(_DWORD *)(v21 + 14976);
        if ( v22 )
        {
          v23 = (unsigned int)(v22 - 1);
          *(_DWORD *)(v21 + 14976) = v23;
          v18 = *(_QWORD *)(v21 + 8 * v23 + 14848);
          v24 = *(unsigned int *)(v18 + 536);
          *(_BYTE *)v18 = 0;
          v25 = *(_QWORD *)(v18 + 528);
          *(_DWORD *)(v18 + 424) = 0;
          v26 = v25 + (v24 << 6);
          while ( v25 != v26 )
          {
            while ( 1 )
            {
              v26 -= 64;
              v27 = *(void **)(v26 + 24);
              if ( v27 == (void *)(v26 + 40) )
                break;
              operator delete(v27, *(_QWORD *)(v26 + 40) + 1LL);
              if ( v25 == v26 )
                goto LABEL_27;
            }
          }
LABEL_27:
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
      v38 = v17;
      LOBYTE(v39) = 1;
      v19 = *(unsigned int *)(v18 + 424);
      if ( *(unsigned int *)(v18 + 428) < (unsigned __int64)(v19 + 1) )
      {
        sub_25D6060(v18 + 416, v18 + 432, v19 + 1, 12);
        v19 = *(unsigned int *)(v18 + 424);
      }
      v20 = *(_QWORD *)(v18 + 416) + 12 * v19;
      *(_QWORD *)v20 = v38;
      *(_DWORD *)(v20 + 8) = v39;
      ++*(_DWORD *)(v18 + 424);
    }
    goto LABEL_21;
  }
  v31 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  v40 = v7;
  v42 = 0x800000000LL;
  v29 = 0u;
  v30 = &v35;
  LODWORD(v38) = 0;
  v39 = 0;
  ptr = v43;
  sub_69F580(v37, v6 & 0xFFFFFFFFFFFFFFFBLL);
  v8 = (unsigned int)v42;
  v9 = v37[0];
  v10 = (unsigned int)v42 + 1LL;
  if ( HIDWORD(v42) < v10 )
  {
    v28 = v37[0];
    sub_25D6060(&ptr, v43, v10, 8);
    v8 = (unsigned int)v42;
    v9 = v28;
  }
  *((_QWORD *)ptr + v8) = v9;
  v11 = v42 + 1;
  LODWORD(v42) = v42 + 1;
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 <= 2 )
  {
    v12 = *(_QWORD *)(v6 + 48);
    v39 = 0;
    v40 = v12;
    LODWORD(v38) = v38 & 7 | (16 * v11);
  }
  v13 = *a1;
  BYTE4(v37[0]) &= ~1u;
  v33 = v37;
  v34 = 0;
  LODWORD(v37[0]) = 0;
  v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)a2);
  v14 = sub_851190(v13, a2, &v29, (__int64)&v38, (__int64)&v32);
  if ( (_BYTE)v14 )
    sub_6A63E0(a1[2], (__int64)v37);
  if ( LODWORD(v37[0]) > 1 )
    sub_69F740((__int64)v37);
  if ( ptr != v43 )
    free(ptr);
LABEL_13:
  if ( v35 > 1 )
    sub_69F740((__int64)&v35);
  return v14;
}

