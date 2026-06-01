__int64 __fastcall sub_8BA3A0(const __m128i *a1, __int64 a2)
{
  char v2; // al
  __int64 *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r12
  __int64 v19; // r13
  __int64 v20; // r12
  void *v21; // rdi
  __m128i v22; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a2 + 2) >> 3;
  if ( v2 == 6 )
  {
    v14 = *(_QWORD *)(a2 + 16);
    v22 = _mm_loadu_si128(a1);
    return (unsigned int)sub_883160(v22.m128i_i64, v14);
  }
  else
  {
    if ( v2 != 7 )
    {
      v3 = (__int64 *)sub_A2E130(a1->m128i_i64[0], a2, 110, 0);
      v4 = sub_AC7B80(a2);
      if ( v3 )
      {
        v5 = *v3;
        if ( !*v3 )
        {
          v15 = v3[1];
          v16 = *(_DWORD *)(v15 + 14976);
          if ( v16 )
          {
            v17 = (unsigned int)(v16 - 1);
            *(_DWORD *)(v15 + 14976) = v17;
            v5 = *(_QWORD *)(v15 + 8 * v17 + 14848);
            v18 = *(unsigned int *)(v5 + 536);
            *(_BYTE *)v5 = 0;
            v19 = *(_QWORD *)(v5 + 528);
            *(_DWORD *)(v5 + 424) = 0;
            v20 = v19 + (v18 << 6);
            while ( v19 != v20 )
            {
              while ( 1 )
              {
                v20 -= 64;
                v21 = *(void **)(v20 + 24);
                if ( v21 == (void *)(v20 + 40) )
                  break;
                operator delete(v21, *(_QWORD *)(v20 + 40) + 1LL);
                if ( v19 == v20 )
                  goto LABEL_20;
              }
            }
LABEL_20:
            *(_DWORD *)(v5 + 536) = 0;
          }
          else
          {
            v5 = operator new(0x3A0u);
            *(_BYTE *)v5 = 0;
            *(_QWORD *)(v5 + 96) = v5 + 112;
            *(_QWORD *)(v5 + 128) = v5 + 144;
            *(_QWORD *)(v5 + 160) = v5 + 176;
            *(_QWORD *)(v5 + 192) = v5 + 208;
            *(_QWORD *)(v5 + 224) = v5 + 240;
            *(_QWORD *)(v5 + 256) = v5 + 272;
            *(_QWORD *)(v5 + 288) = v5 + 304;
            *(_QWORD *)(v5 + 320) = v5 + 336;
            *(_QWORD *)(v5 + 352) = v5 + 368;
            *(_QWORD *)(v5 + 384) = v5 + 400;
            *(_QWORD *)(v5 + 104) = 0;
            *(_BYTE *)(v5 + 112) = 0;
            *(_QWORD *)(v5 + 136) = 0;
            *(_BYTE *)(v5 + 144) = 0;
            *(_QWORD *)(v5 + 168) = 0;
            *(_BYTE *)(v5 + 176) = 0;
            *(_QWORD *)(v5 + 200) = 0;
            *(_BYTE *)(v5 + 208) = 0;
            *(_QWORD *)(v5 + 232) = 0;
            *(_BYTE *)(v5 + 240) = 0;
            *(_QWORD *)(v5 + 264) = 0;
            *(_BYTE *)(v5 + 272) = 0;
            *(_QWORD *)(v5 + 296) = 0;
            *(_BYTE *)(v5 + 304) = 0;
            *(_QWORD *)(v5 + 328) = 0;
            *(_BYTE *)(v5 + 336) = 0;
            *(_QWORD *)(v5 + 360) = 0;
            *(_BYTE *)(v5 + 368) = 0;
            *(_QWORD *)(v5 + 392) = 0;
            *(_BYTE *)(v5 + 400) = 0;
            *(_QWORD *)(v5 + 416) = v5 + 432;
            *(_QWORD *)(v5 + 424) = 0x800000000LL;
            *(_QWORD *)(v5 + 528) = v5 + 544;
            *(_QWORD *)(v5 + 536) = 0x600000000LL;
          }
          *v3 = v5;
        }
        v22.m128i_i64[0] = v4;
        v22.m128i_i8[8] = 1;
        v6 = *(unsigned int *)(v5 + 424);
        if ( *(unsigned int *)(v5 + 428) < (unsigned __int64)(v6 + 1) )
        {
          sub_25D6060(v5 + 416, v5 + 432, v6 + 1, 12);
          v6 = *(unsigned int *)(v5 + 424);
        }
        v7 = *(_QWORD *)(v5 + 416) + 12 * v6;
        *(_QWORD *)v7 = v22.m128i_i64[0];
        *(_DWORD *)(v7 + 8) = v22.m128i_i32[2];
        ++*(_DWORD *)(v5 + 424);
      }
      return 0;
    }
    v10 = *(_QWORD *)(a2 + 16);
    v22 = _mm_loadu_si128(a1);
    v8 = sub_883160(v22.m128i_i64, v10);
    if ( !(_BYTE)v8 )
      return 0;
    v12 = sub_2575D20(&v22, v10, v11);
    v13 = (_QWORD *)a1->m128i_i64[1];
    if ( *v13 == v12 )
    {
      sub_257D180(v13);
      return v8;
    }
    sub_2577530(v13);
    return v8;
  }
}

