__int64 __fastcall sub_85B9B0(__int64 *a1, __int64 a2)
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
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 *v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  bool v23; // cc
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r13
  void *v31; // rdi
  __int64 v32; // [rsp+8h] [rbp-170h]
  __m128i v33; // [rsp+10h] [rbp-168h] BYREF
  unsigned int *v34; // [rsp+20h] [rbp-158h]
  __int64 v35; // [rsp+28h] [rbp-150h]
  __m128i v36; // [rsp+30h] [rbp-148h] BYREF
  __int64 *v37; // [rsp+40h] [rbp-138h]
  int v38; // [rsp+48h] [rbp-130h]
  unsigned int v39; // [rsp+50h] [rbp-128h] BYREF
  char v40; // [rsp+54h] [rbp-124h]
  __int64 v41; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+98h] [rbp-E0h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp-D8h]
  char v44; // [rsp+A4h] [rbp-D4h]
  __int64 v45; // [rsp+A8h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-A0h]
  __int64 v49; // [rsp+E0h] [rbp-98h]
  void *ptr; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-88h]
  _BYTE v52[128]; // [rsp+F8h] [rbp-80h] BYREF

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *a1;
  v40 &= ~1u;
  v39 = 0;
  if ( !(unsigned __int8)sub_856400((__int64)&v39, v5, v4) )
  {
LABEL_20:
    v15 = 0;
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 > 2 )
  {
    v17 = (__int64 *)sub_A2E130(*a1, a2, 110, 0);
    v18 = sub_AC7B80(a2);
    if ( v17 )
    {
      v19 = *v17;
      if ( !*v17 )
      {
        v25 = v17[1];
        v26 = *(_DWORD *)(v25 + 14976);
        if ( v26 )
        {
          v27 = (unsigned int)(v26 - 1);
          *(_DWORD *)(v25 + 14976) = v27;
          v19 = *(_QWORD *)(v25 + 8 * v27 + 14848);
          v28 = *(unsigned int *)(v19 + 536);
          *(_BYTE *)v19 = 0;
          v29 = *(_QWORD *)(v19 + 528);
          *(_DWORD *)(v19 + 424) = 0;
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
                goto LABEL_37;
            }
          }
LABEL_37:
          *(_DWORD *)(v19 + 536) = 0;
        }
        else
        {
          v19 = operator new(0x3A0u);
          *(_BYTE *)v19 = 0;
          *(_QWORD *)(v19 + 96) = v19 + 112;
          *(_QWORD *)(v19 + 128) = v19 + 144;
          *(_QWORD *)(v19 + 160) = v19 + 176;
          *(_QWORD *)(v19 + 192) = v19 + 208;
          *(_QWORD *)(v19 + 224) = v19 + 240;
          *(_QWORD *)(v19 + 256) = v19 + 272;
          *(_QWORD *)(v19 + 288) = v19 + 304;
          *(_QWORD *)(v19 + 320) = v19 + 336;
          *(_QWORD *)(v19 + 352) = v19 + 368;
          *(_QWORD *)(v19 + 384) = v19 + 400;
          *(_QWORD *)(v19 + 104) = 0;
          *(_BYTE *)(v19 + 112) = 0;
          *(_QWORD *)(v19 + 136) = 0;
          *(_BYTE *)(v19 + 144) = 0;
          *(_QWORD *)(v19 + 168) = 0;
          *(_BYTE *)(v19 + 176) = 0;
          *(_QWORD *)(v19 + 200) = 0;
          *(_BYTE *)(v19 + 208) = 0;
          *(_QWORD *)(v19 + 232) = 0;
          *(_BYTE *)(v19 + 240) = 0;
          *(_QWORD *)(v19 + 264) = 0;
          *(_BYTE *)(v19 + 272) = 0;
          *(_QWORD *)(v19 + 296) = 0;
          *(_BYTE *)(v19 + 304) = 0;
          *(_QWORD *)(v19 + 328) = 0;
          *(_BYTE *)(v19 + 336) = 0;
          *(_QWORD *)(v19 + 360) = 0;
          *(_BYTE *)(v19 + 368) = 0;
          *(_QWORD *)(v19 + 392) = 0;
          *(_BYTE *)(v19 + 400) = 0;
          *(_QWORD *)(v19 + 416) = v19 + 432;
          *(_QWORD *)(v19 + 424) = 0x800000000LL;
          *(_QWORD *)(v19 + 528) = v19 + 544;
          *(_QWORD *)(v19 + 536) = 0x600000000LL;
        }
        *v17 = v19;
      }
      v47 = v18;
      LOBYTE(v48) = 1;
      v20 = *(unsigned int *)(v19 + 424);
      if ( *(unsigned int *)(v19 + 428) < (unsigned __int64)(v20 + 1) )
      {
        sub_25D6060(v19 + 416, v19 + 432, v20 + 1, 12);
        v20 = *(unsigned int *)(v19 + 424);
      }
      v21 = *(_QWORD *)(v19 + 416) + 12 * v20;
      *(_QWORD *)v21 = v47;
      *(_DWORD *)(v21 + 8) = v48;
      ++*(_DWORD *)(v19 + 424);
    }
    goto LABEL_20;
  }
  v35 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL);
  v49 = v7;
  v51 = 0x800000000LL;
  v33 = 0u;
  v34 = &v39;
  LODWORD(v47) = 0;
  v48 = 0;
  ptr = v52;
  sub_69F580(&v41, v6 & 0xFFFFFFFFFFFFFFFBLL);
  v8 = (unsigned int)v51;
  v9 = v41;
  v10 = (unsigned int)v51 + 1LL;
  if ( HIDWORD(v51) < v10 )
  {
    v32 = v41;
    sub_25D6060(&ptr, v52, v10, 8);
    v8 = (unsigned int)v51;
    v9 = v32;
  }
  *((_QWORD *)ptr + v8) = v9;
  v11 = v51 + 1;
  LODWORD(v51) = v51 + 1;
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 47 <= 2 )
  {
    v12 = *(_QWORD *)(v6 + 48);
    v48 = 0;
    v49 = v12;
    LODWORD(v47) = v47 & 7 | (16 * v11);
  }
  v13 = *a1;
  BYTE4(v41) &= ~1u;
  v37 = &v41;
  v38 = 0;
  LODWORD(v41) = 0;
  v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)a2);
  v15 = sub_851190(v13, a2, &v33, (__int64)&v47, (__int64)&v36);
  if ( (_BYTE)v15 )
  {
    v22 = a1[1];
    if ( (_DWORD)v41 == 6 )
    {
      *(_BYTE *)v22 = 0;
      sub_834130((__int64 *)(v22 + 40), &v42, v14);
      sub_834130((__int64 *)(v22 + 64), &v46, v24);
    }
    else
    {
      v23 = *(_DWORD *)(v22 + 16) <= 0x40u;
      *(_BYTE *)v22 = 1;
      if ( v23 && v43 <= 0x40 )
      {
        *(_QWORD *)(v22 + 8) = v42;
        *(_DWORD *)(v22 + 16) = v43;
      }
      else
      {
        sub_2585EA0(v22 + 8, &v42);
      }
      v23 = *(_DWORD *)(v22 + 32) <= 0x40u;
      *(_BYTE *)(v22 + 20) = v44;
      if ( v23 && (unsigned int)v46 <= 0x40 )
      {
        *(_QWORD *)(v22 + 24) = v45;
        *(_DWORD *)(v22 + 32) = v46;
      }
      else
      {
        sub_2585EA0(v22 + 24, &v45);
      }
      *(_BYTE *)(v22 + 36) = BYTE4(v46);
    }
  }
  if ( (unsigned int)v41 > 1 )
    sub_69F740((__int64)&v41);
  if ( ptr != v52 )
    free(ptr);
LABEL_12:
  if ( v39 > 1 )
    sub_69F740((__int64)&v39);
  return v15;
}

