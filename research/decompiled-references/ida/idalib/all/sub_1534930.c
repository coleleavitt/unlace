__int64 __fastcall sub_1534930(__int64 a1, __m128i a2)
{
  __int64 v2; // rsi
  __int16 v4; // r12
  __int16 v5; // ax
  unsigned int v6; // r13d
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // dl
  int v19; // r14d
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 (__fastcall *v28)(_QWORD, __int64, _QWORD); // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // [rsp+8h] [rbp-B0h]
  __int64 v39; // [rsp+10h] [rbp-A8h]
  __int64 v40; // [rsp+18h] [rbp-A0h]
  __int64 v41; // [rsp+24h] [rbp-94h]
  int v42; // [rsp+2Ch] [rbp-8Ch]
  __int64 v43; // [rsp+30h] [rbp-88h] BYREF
  __int64 v44; // [rsp+38h] [rbp-80h]

  v2 = a1 + 16;
  v4 = *(_WORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v5 = *(_WORD *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 40);
  if ( v5 == 63 )
    goto LABEL_18;
  if ( v4 == 169 )
  {
    if ( v5 == 3 )
    {
      v17 = sub_14BFC10((const __m128i *)a1, 0, a2);
      if ( v17 != 1 )
      {
        v9 = *(_QWORD *)(a1 + 96);
        v8 = v17 & 0xFFFFFFFFFFFFFFFELL;
        v10 = *(_QWORD *)(v9 + 608);
        return sub_178CC10(v9, v10, v6, v8);
      }
      goto LABEL_22;
    }
LABEL_4:
    if ( v5 != 24 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) == 0 )
    {
      v7 = sub_14BFC10((const __m128i *)a1, 0, a2);
      if ( v7 != 1 )
      {
        v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_8;
      }
      goto LABEL_22;
    }
    v16 = sub_14EE310(a1, a2);
    if ( v16 != 1 )
    {
      if ( v16 )
      {
        v18 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10;
        v19 = -(v18 == 0);
        LOBYTE(v19) = v18 == 0 ? 0x7B : 0;
        v8 = v16 & 0xFFFFFFFFFFFFFFFELL;
        v20 = sub_EEB7E0(v16 & 0xFFFFFFFFFFFFFFFELL, v2, *(double *)a2.m128i_i64);
        sub_1564820(&v43, a1, v20, (unsigned int)(v19 + 2118));
        v21 = sub_EEC8C0(v8, a1, *(double *)a2.m128i_i64);
        v22 = v43;
        v23 = v21;
        if ( v43 )
        {
          v24 = *(unsigned int *)(v43 + 424);
          v25 = *(unsigned int *)(v43 + 428);
          v26 = v24 + 1;
        }
        else
        {
          v30 = v44;
          v31 = *(_DWORD *)(v44 + 14976);
          if ( v31 )
          {
            v33 = (unsigned int)(v31 - 1);
            *(_DWORD *)(v44 + 14976) = v33;
            v22 = *(_QWORD *)(v30 + 8 * v33 + 14848);
            v34 = *(unsigned int *)(v22 + 536);
            *(_BYTE *)v22 = 0;
            v35 = *(_QWORD *)(v22 + 528);
            *(_DWORD *)(v22 + 424) = 0;
            v36 = v35 + (v34 << 6);
            while ( v35 != v36 )
            {
              while ( 1 )
              {
                v36 -= 64;
                v37 = *(void **)(v36 + 24);
                if ( v37 == (void *)(v36 + 40) )
                  break;
                v40 = v23;
                v39 = v36;
                operator delete(v37);
                v36 = v39;
                v23 = v40;
                if ( v35 == v39 )
                  goto LABEL_38;
              }
            }
LABEL_38:
            v24 = *(unsigned int *)(v22 + 424);
            v25 = *(unsigned int *)(v22 + 428);
            *(_DWORD *)(v22 + 536) = 0;
            v26 = v24 + 1;
          }
          else
          {
            v38 = v23;
            v32 = operator new(0x3A0u);
            v25 = 8;
            v26 = 1;
            v22 = v32;
            *(_BYTE *)v32 = 0;
            *(_QWORD *)(v32 + 96) = v32 + 112;
            *(_QWORD *)(v32 + 128) = v32 + 144;
            *(_QWORD *)(v32 + 160) = v32 + 176;
            *(_QWORD *)(v32 + 192) = v32 + 208;
            *(_QWORD *)(v32 + 224) = v32 + 240;
            *(_QWORD *)(v32 + 256) = v32 + 272;
            *(_QWORD *)(v32 + 288) = v32 + 304;
            *(_QWORD *)(v32 + 320) = v32 + 336;
            *(_QWORD *)(v32 + 352) = v32 + 368;
            *(_QWORD *)(v32 + 384) = v32 + 400;
            *(_QWORD *)(v32 + 416) = v32 + 432;
            *(_QWORD *)(v32 + 104) = 0;
            *(_BYTE *)(v32 + 112) = 0;
            *(_QWORD *)(v32 + 136) = 0;
            *(_BYTE *)(v32 + 144) = 0;
            *(_QWORD *)(v32 + 168) = 0;
            *(_BYTE *)(v32 + 176) = 0;
            *(_QWORD *)(v32 + 200) = 0;
            *(_BYTE *)(v32 + 208) = 0;
            *(_QWORD *)(v32 + 232) = 0;
            *(_BYTE *)(v32 + 240) = 0;
            *(_QWORD *)(v32 + 264) = 0;
            *(_BYTE *)(v32 + 272) = 0;
            *(_QWORD *)(v32 + 296) = 0;
            *(_BYTE *)(v32 + 304) = 0;
            *(_QWORD *)(v32 + 328) = 0;
            *(_BYTE *)(v32 + 336) = 0;
            *(_QWORD *)(v32 + 360) = 0;
            *(_BYTE *)(v32 + 368) = 0;
            *(_QWORD *)(v32 + 392) = 0;
            *(_BYTE *)(v32 + 400) = 0;
            *(_QWORD *)(v32 + 424) = 0x800000000LL;
            v23 = v38;
            *(_QWORD *)(v32 + 528) = v32 + 544;
            *(_QWORD *)(v32 + 536) = 0x600000000LL;
            v24 = 0;
          }
          v43 = v22;
        }
        v41 = v23;
        LOBYTE(v42) = 1;
        if ( v26 > v25 )
        {
          sub_2237220(v22 + 416, v22 + 432, v26, 12);
          v24 = *(unsigned int *)(v22 + 424);
        }
        v27 = *(_QWORD *)(v22 + 416) + 12 * v24;
        *(_QWORD *)v27 = v41;
        *(_DWORD *)(v27 + 8) = v42;
        ++*(_DWORD *)(v22 + 424);
        sub_AEA040((__int64)&v43);
LABEL_8:
        v9 = *(_QWORD *)(a1 + 96);
        v10 = *(_QWORD *)(v9 + 608);
        if ( v4 != 169 )
          return sub_1C47E40(v9, v6, v8, *(_QWORD *)(v9 + 608));
        return sub_178CC10(v9, v10, v6, v8);
      }
LABEL_18:
      v8 = 0;
      goto LABEL_8;
    }
LABEL_22:
    LOWORD(v43) = 25;
    sub_15680D0(a1, &v43, 1, 3);
    return 1;
  }
  v2 = *(_QWORD *)(a1 + 96);
  sub_1703920(a1 + 48, v2, *(unsigned int *)(a1 + 16));
  v5 = *(_WORD *)(a1 + 32);
  if ( v5 != 3 )
    goto LABEL_4;
  v12 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v12 + 760) )
  {
    *(_BYTE *)(v12 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v12 + 48) + 6LL) = 1;
  }
  v13 = *(_QWORD *)(a1 + 96);
  *(_WORD *)(a1 + 32) = 1;
  v14 = 0;
  v15 = *(_QWORD *)(v13 + 656);
  if ( *(_BYTE *)(a1 + 56) )
  {
    if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(a1 + 60) )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( (v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v28 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 72);
        v14 = 0;
        if ( v28 )
        {
          v29 = v28(*(_QWORD *)(a1 + 80), v2, 0);
          v13 = *(_QWORD *)(a1 + 96);
          v14 = v29;
        }
      }
    }
  }
  sub_172C2C0(v15, *(_QWORD *)(v13 + 608), v14, 0);
  return 1;
}
