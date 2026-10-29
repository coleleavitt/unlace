__int64 __fastcall sub_86DDC0(__m128i *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rbp
  void *v16; // rdi
  int v17; // [rsp+8h] [rbp-30h]

  if ( (*(_BYTE *)(sub_A2CB40(a1->m128i_i64[0]) + 1) & 0x20) == 0 )
  {
    v3 = a1->m128i_i64[0];
    if ( !*(_DWORD *)(a1->m128i_i64[0] + 48) || !*(_BYTE *)(v3 + 962) && !*(_BYTE *)(v3 + 963) )
    {
      v4 = (__int64 *)sub_A2E130(v3, a2, 110, 0);
      v5 = sub_AC7B80(a2);
      if ( v4 )
      {
        v6 = *v4;
        if ( !*v4 )
        {
          v10 = v4[1];
          v11 = *(_DWORD *)(v10 + 14976);
          if ( v11 )
          {
            v12 = (unsigned int)(v11 - 1);
            *(_DWORD *)(v10 + 14976) = v12;
            v6 = *(_QWORD *)(v10 + 8 * v12 + 14848);
            v13 = *(unsigned int *)(v6 + 536);
            *(_BYTE *)v6 = 0;
            v14 = *(_QWORD *)(v6 + 528);
            *(_DWORD *)(v6 + 424) = 0;
            v15 = v14 + (v13 << 6);
            while ( v14 != v15 )
            {
              while ( 1 )
              {
                v15 -= 64;
                v16 = *(void **)(v15 + 24);
                if ( v16 == (void *)(v15 + 40) )
                  break;
                operator delete(v16, *(_QWORD *)(v15 + 40) + 1LL);
                if ( v14 == v15 )
                  goto LABEL_18;
              }
            }
LABEL_18:
            *(_DWORD *)(v6 + 536) = 0;
          }
          else
          {
            v6 = operator new(0x3A0u);
            *(_BYTE *)v6 = 0;
            *(_QWORD *)(v6 + 96) = v6 + 112;
            *(_QWORD *)(v6 + 128) = v6 + 144;
            *(_QWORD *)(v6 + 160) = v6 + 176;
            *(_QWORD *)(v6 + 192) = v6 + 208;
            *(_QWORD *)(v6 + 224) = v6 + 240;
            *(_QWORD *)(v6 + 256) = v6 + 272;
            *(_QWORD *)(v6 + 288) = v6 + 304;
            *(_QWORD *)(v6 + 320) = v6 + 336;
            *(_QWORD *)(v6 + 352) = v6 + 368;
            *(_QWORD *)(v6 + 384) = v6 + 400;
            *(_QWORD *)(v6 + 104) = 0;
            *(_BYTE *)(v6 + 112) = 0;
            *(_QWORD *)(v6 + 136) = 0;
            *(_BYTE *)(v6 + 144) = 0;
            *(_QWORD *)(v6 + 168) = 0;
            *(_BYTE *)(v6 + 176) = 0;
            *(_QWORD *)(v6 + 200) = 0;
            *(_BYTE *)(v6 + 208) = 0;
            *(_QWORD *)(v6 + 232) = 0;
            *(_BYTE *)(v6 + 240) = 0;
            *(_QWORD *)(v6 + 264) = 0;
            *(_BYTE *)(v6 + 272) = 0;
            *(_QWORD *)(v6 + 296) = 0;
            *(_BYTE *)(v6 + 304) = 0;
            *(_QWORD *)(v6 + 328) = 0;
            *(_BYTE *)(v6 + 336) = 0;
            *(_QWORD *)(v6 + 360) = 0;
            *(_BYTE *)(v6 + 368) = 0;
            *(_QWORD *)(v6 + 392) = 0;
            *(_BYTE *)(v6 + 400) = 0;
            *(_QWORD *)(v6 + 416) = v6 + 432;
            *(_QWORD *)(v6 + 424) = 0x800000000LL;
            *(_QWORD *)(v6 + 528) = v6 + 544;
            *(_QWORD *)(v6 + 536) = 0x600000000LL;
          }
          *v4 = v6;
        }
        v7 = *(unsigned int *)(v6 + 424);
        LOBYTE(v17) = 1;
        if ( *(unsigned int *)(v6 + 428) < (unsigned __int64)(v7 + 1) )
        {
          sub_25D6060(v6 + 416, v6 + 432, v7 + 1, 12);
          v7 = *(unsigned int *)(v6 + 424);
        }
        v8 = *(_QWORD *)(v6 + 416) + 12 * v7;
        *(_QWORD *)v8 = v5;
        *(_DWORD *)(v8 + 8) = v17;
        ++*(_DWORD *)(v6 + 424);
      }
      return 0;
    }
  }
  if ( !(unsigned __int8)sub_869D30(a1, *(_QWORD *)(a2 + 16)) )
    return 0;
  return sub_84D690(
           a1->m128i_i64[0],
           (_DWORD *)a2,
           (__m128i *)a1->m128i_i64[1],
           *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL),
           ((*(_BYTE *)(a2 + 2) >> 3) & 0x1D) == 0,
           0);
}

