__int64 __fastcall sub_1527030(__int64 a1, __m128i a2)
{
  int *v2; // rbp
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // r12d
  __int64 *v9; // rdi
  __int64 v11; // r13
  unsigned __int64 v12; // rax
  size_t v13; // rax
  _DWORD *v14; // rbp
  int v15; // eax
  unsigned __int8 *v16; // rbp
  unsigned int v17; // r15d
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  void *v29; // rdi
  __int64 v30; // [rsp+0h] [rbp-A8h]
  __int64 v31; // [rsp+8h] [rbp-A0h]
  int v32; // [rsp+1Ch] [rbp-8Ch]
  unsigned __int8 *v33; // [rsp+20h] [rbp-88h] BYREF
  __int64 v34; // [rsp+28h] [rbp-80h]

  v2 = (int *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 20);
  if ( !v4 )
    v4 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = v4;
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  if ( *(_WORD *)(a1 + 32) == 2 )
  {
    sub_FC70B0((__int64)&v33, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), *(_DWORD *)(a1 + 16), 150);
    sub_1520A40(&v33, (__int64)"dump");
    sub_AEA040((__int64)&v33);
    return sub_1569A00(a1, 2, 14, &byte_22F0C30, 0);
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(v5 + 2944);
  if ( v6 >= *(unsigned int *)(v5 + 2912) )
    v7 = sub_14180A0(v5, 1u);
  else
    v7 = *(_QWORD *)(v5 + 2904) + 24 * v6;
  v8 = *(_DWORD *)(a1 + 16);
  if ( *(_WORD *)(v7 + 16) != 2 )
  {
    v11 = *(_QWORD *)(a1 + 96);
    sub_18C74E0(v11, 0, 0, 4);
    v12 = sub_14BFC10((const __m128i *)a1, 0, a2);
    if ( v12 > 1 )
    {
      v14 = (_DWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
      v15 = *(_DWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL) >> 14;
      if ( (v15 & 0x10) == 0 )
      {
        if ( (v15 & 0x1F) != 0 )
        {
          sub_FC70B0((__int64)&v33, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), v8, 2184);
          sub_1520C80(&v33, HIWORD(*v14) & 1);
          v16 = v33;
          v17 = *(_DWORD *)(a1 + 16);
          if ( v33 )
          {
            v18 = *((unsigned int *)v33 + 106);
            v19 = *((unsigned int *)v33 + 107);
            v20 = v18 + 1;
          }
          else
          {
            v22 = v34;
            v23 = *(_DWORD *)(v34 + 14976);
            if ( v23 )
            {
              v25 = (unsigned int)(v23 - 1);
              *(_DWORD *)(v34 + 14976) = v25;
              v16 = *(unsigned __int8 **)(v22 + 8 * v25 + 14848);
              v26 = *((unsigned int *)v16 + 134);
              *v16 = 0;
              v27 = *((_QWORD *)v16 + 66);
              *((_DWORD *)v16 + 106) = 0;
              v28 = v27 + (v26 << 6);
              v30 = v27;
              while ( v30 != v28 )
              {
                while ( 1 )
                {
                  v28 -= 64;
                  v29 = *(void **)(v28 + 24);
                  if ( v29 == (void *)(v28 + 40) )
                    break;
                  v31 = v28;
                  operator delete(v29);
                  v28 = v31;
                  if ( v30 == v31 )
                    goto LABEL_29;
                }
              }
LABEL_29:
              v18 = *((unsigned int *)v16 + 106);
              v19 = *((unsigned int *)v16 + 107);
              *((_DWORD *)v16 + 134) = 0;
              v20 = v18 + 1;
            }
            else
            {
              v24 = operator new(0x3A0u);
              v19 = 8;
              v20 = 1;
              v16 = (unsigned __int8 *)v24;
              *(_BYTE *)v24 = 0;
              *(_QWORD *)(v24 + 96) = v24 + 112;
              *(_QWORD *)(v24 + 128) = v24 + 144;
              *(_QWORD *)(v24 + 160) = v24 + 176;
              *(_QWORD *)(v24 + 192) = v24 + 208;
              *(_QWORD *)(v24 + 224) = v24 + 240;
              *(_QWORD *)(v24 + 256) = v24 + 272;
              *(_QWORD *)(v24 + 288) = v24 + 304;
              *(_QWORD *)(v24 + 320) = v24 + 336;
              *(_QWORD *)(v24 + 352) = v24 + 368;
              *(_QWORD *)(v24 + 384) = v24 + 400;
              *(_QWORD *)(v24 + 416) = v24 + 432;
              *(_QWORD *)(v24 + 104) = 0;
              *(_BYTE *)(v24 + 112) = 0;
              *(_QWORD *)(v24 + 136) = 0;
              *(_BYTE *)(v24 + 144) = 0;
              *(_QWORD *)(v24 + 168) = 0;
              *(_BYTE *)(v24 + 176) = 0;
              *(_QWORD *)(v24 + 200) = 0;
              *(_BYTE *)(v24 + 208) = 0;
              *(_QWORD *)(v24 + 232) = 0;
              *(_BYTE *)(v24 + 240) = 0;
              *(_QWORD *)(v24 + 264) = 0;
              *(_BYTE *)(v24 + 272) = 0;
              *(_QWORD *)(v24 + 296) = 0;
              *(_BYTE *)(v24 + 304) = 0;
              *(_QWORD *)(v24 + 328) = 0;
              *(_BYTE *)(v24 + 336) = 0;
              *(_QWORD *)(v24 + 360) = 0;
              *(_BYTE *)(v24 + 368) = 0;
              *(_QWORD *)(v24 + 392) = 0;
              *(_BYTE *)(v24 + 400) = 0;
              *(_QWORD *)(v24 + 424) = 0x800000000LL;
              *(_QWORD *)(v24 + 528) = v24 + 544;
              *(_QWORD *)(v24 + 536) = 0x600000000LL;
              v18 = 0;
            }
            v33 = v16;
          }
          LOBYTE(v32) = 1;
          if ( v20 > v19 )
          {
            sub_2237220(v16 + 416, v16 + 432, v20, 12);
            v18 = *((unsigned int *)v16 + 106);
          }
          v21 = *((_QWORD *)v16 + 52) + 12 * v18;
          *(_QWORD *)v21 = __PAIR64__(v17, v8);
          *(_DWORD *)(v21 + 8) = v32;
          ++*((_DWORD *)v16 + 106);
          sub_AEA040((__int64)&v33);
        }
        else
        {
          sub_1A3A240(*(_QWORD *)(a1 + 96), v14);
        }
      }
    }
    LOWORD(v33) = 2;
    sub_15680D0(a1, &v33, 1, 2);
    sub_190D5E0(v11);
    return sub_1569A00(a1, 2, 14, &byte_22F0C30, 0);
  }
  if ( *(_WORD *)(a1 + 32) == 5 )
  {
    sub_1A5BA50(*(_QWORD *)(a1 + 96), *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL), v8, *(_QWORD *)(a1 + 24));
    v9 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v9, v2);
    return sub_1569A00(a1, 2, 14, &byte_22F0C30, 0);
  }
  sub_FC70B0((__int64)&v33, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL), v8, 151);
  sub_AEA040((__int64)&v33);
  sub_149F520(a1, 0);
  v13 = j__strlen(&byte_22F0C30);
  return sub_1569A00(a1, 2, 14, &byte_22F0C30, v13);
}
