void __fastcall sub_17A0370(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  char v7; // al
  int v8; // edx
  __int64 v9; // r13
  __int64 v10; // rsi
  unsigned __int8 *v11; // rbp
  __int32 v12; // r15d
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 *v18; // rbp
  __int64 v19; // r15
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  char v26; // cl
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r14
  void *v34; // rdi
  unsigned __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r14
  void *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-70h] BYREF
  __m128 v45; // [rsp+8h] [rbp-68h] BYREF
  unsigned __int8 *v46; // [rsp+18h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+20h] [rbp-50h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 != *(_QWORD *)(a2 + 16) )
    return;
  if ( *(_BYTE *)(a1 + 26) )
  {
    v8 = 7484;
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 96) & 7) == 2 || (*(_BYTE *)(v3 + 96) & 7) == 0 && ((*(_BYTE *)(v3 + 96) >> 3) & 3) == 2 )
    {
      if ( !sub_A5EB90(v3) )
      {
        v8 = 7383;
        goto LABEL_12;
      }
      v3 = *(_QWORD *)(a1 + 16);
    }
    v5 = *(_QWORD *)(v3 + 16);
    v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v5 & 4) != 0 )
      v6 = *(_QWORD *)v6;
    v7 = *(_BYTE *)(v6 + 8) & 0x7F;
    if ( v7 != 24
      && v7
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 48LL) & 0xFFFFFFFFFFFFFFF0LL)
                                          + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 48 )
    {
      return;
    }
    v8 = 7483;
  }
LABEL_12:
  v9 = *(_QWORD *)(a1 + 8);
  sub_168B9B0((__int64)&v46, v9 + 8, v8);
  v10 = *(_QWORD *)(a2 + 16);
  sub_AE9DF0(&v46, v10, 0xAu);
  v11 = v46;
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 24LL);
  if ( v46 )
  {
    v13 = *((unsigned int *)v46 + 106);
    v14 = *((unsigned int *)v46 + 107);
    v15 = v13 + 1;
  }
  else
  {
    v35 = v47;
    v36 = *(_DWORD *)(v47 + 14976);
    if ( v36 )
    {
      v37 = (unsigned int)(v36 - 1);
      *(_DWORD *)(v47 + 14976) = v37;
      v11 = *(unsigned __int8 **)(v35 + 8 * v37 + 14848);
      v38 = *((unsigned int *)v11 + 134);
      *v11 = 0;
      v39 = *((_QWORD *)v11 + 66);
      *((_DWORD *)v11 + 106) = 0;
      v40 = v39 + (v38 << 6);
      if ( v39 == v40 )
      {
        v15 = 1;
        v13 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v40 -= 64;
            v41 = *(void **)(v40 + 24);
            if ( v41 == (void *)(v40 + 40) )
              break;
            v44 = v39;
            operator delete(v41);
            v39 = v44;
            if ( v44 == v40 )
              goto LABEL_46;
          }
        }
        while ( v39 != v40 );
LABEL_46:
        v13 = *((unsigned int *)v11 + 106);
        v15 = v13 + 1;
      }
      *((_DWORD *)v11 + 134) = 0;
      v14 = *((unsigned int *)v11 + 107);
    }
    else
    {
      v42 = operator new(0x3A0u);
      v14 = 8;
      v15 = 1;
      v11 = (unsigned __int8 *)v42;
      *(_BYTE *)v42 = 0;
      *(_QWORD *)(v42 + 96) = v42 + 112;
      *(_QWORD *)(v42 + 128) = v42 + 144;
      *(_QWORD *)(v42 + 160) = v42 + 176;
      *(_QWORD *)(v42 + 192) = v42 + 208;
      *(_QWORD *)(v42 + 224) = v42 + 240;
      *(_QWORD *)(v42 + 256) = v42 + 272;
      *(_QWORD *)(v42 + 288) = v42 + 304;
      *(_QWORD *)(v42 + 320) = v42 + 336;
      *(_QWORD *)(v42 + 352) = v42 + 368;
      *(_QWORD *)(v42 + 384) = v42 + 400;
      *(_QWORD *)(v42 + 416) = v42 + 432;
      *(_QWORD *)(v42 + 104) = 0;
      *(_BYTE *)(v42 + 112) = 0;
      *(_QWORD *)(v42 + 136) = 0;
      *(_BYTE *)(v42 + 144) = 0;
      *(_QWORD *)(v42 + 168) = 0;
      *(_BYTE *)(v42 + 176) = 0;
      *(_QWORD *)(v42 + 200) = 0;
      *(_BYTE *)(v42 + 208) = 0;
      *(_QWORD *)(v42 + 232) = 0;
      *(_BYTE *)(v42 + 240) = 0;
      *(_QWORD *)(v42 + 264) = 0;
      *(_BYTE *)(v42 + 272) = 0;
      *(_QWORD *)(v42 + 296) = 0;
      *(_BYTE *)(v42 + 304) = 0;
      *(_QWORD *)(v42 + 328) = 0;
      *(_BYTE *)(v42 + 336) = 0;
      *(_QWORD *)(v42 + 360) = 0;
      *(_BYTE *)(v42 + 368) = 0;
      *(_QWORD *)(v42 + 392) = 0;
      *(_BYTE *)(v42 + 400) = 0;
      *(_QWORD *)(v42 + 424) = 0x800000000LL;
      *(_QWORD *)(v42 + 528) = v42 + 544;
      *(_QWORD *)(v42 + 536) = 0x600000000LL;
      v13 = 0;
    }
    v46 = v11;
  }
  v45.m128_i32[0] = v12;
  v45.m128_i32[1] = v12;
  v45.m128_i8[8] = 1;
  if ( v15 > v14 )
  {
    v10 = (__int64)(v11 + 432);
    sub_2237220(v11 + 416, v11 + 432, v15, 12);
    v13 = *((unsigned int *)v11 + 106);
  }
  v16 = *((_QWORD *)v11 + 52) + 12 * v13;
  *(_QWORD *)v16 = v45.m128_u64[0];
  *(_DWORD *)(v16 + 8) = v45.m128_i32[2];
  ++*((_DWORD *)v11 + 106);
  v17 = sub_EEC8C0(a2, v10, a3);
  v18 = v46;
  v19 = v17;
  if ( v46 )
  {
    v20 = *((unsigned int *)v46 + 106);
    v21 = *((unsigned int *)v46 + 107);
    v22 = v20 + 1;
  }
  else
  {
    v28 = v47;
    v29 = *(_DWORD *)(v47 + 14976);
    if ( v29 )
    {
      v30 = (unsigned int)(v29 - 1);
      *(_DWORD *)(v47 + 14976) = v30;
      v18 = *(unsigned __int8 **)(v28 + 8 * v30 + 14848);
      v31 = *((unsigned int *)v18 + 134);
      *v18 = 0;
      v32 = *((_QWORD *)v18 + 66);
      *((_DWORD *)v18 + 106) = 0;
      v33 = v32 + (v31 << 6);
      if ( v32 == v33 )
      {
        v22 = 1;
        v20 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v33 -= 64;
            v34 = *(void **)(v33 + 24);
            if ( v34 == (void *)(v33 + 40) )
              break;
            v44 = v32;
            operator delete(v34);
            v32 = v44;
            if ( v44 == v33 )
              goto LABEL_40;
          }
        }
        while ( v32 != v33 );
LABEL_40:
        v20 = *((unsigned int *)v18 + 106);
        v22 = v20 + 1;
      }
      *((_DWORD *)v18 + 134) = 0;
      v21 = *((unsigned int *)v18 + 107);
    }
    else
    {
      v43 = operator new(0x3A0u);
      v21 = 8;
      v22 = 1;
      v18 = (unsigned __int8 *)v43;
      *(_BYTE *)v43 = 0;
      *(_QWORD *)(v43 + 96) = v43 + 112;
      *(_QWORD *)(v43 + 128) = v43 + 144;
      *(_QWORD *)(v43 + 160) = v43 + 176;
      *(_QWORD *)(v43 + 192) = v43 + 208;
      *(_QWORD *)(v43 + 224) = v43 + 240;
      *(_QWORD *)(v43 + 256) = v43 + 272;
      *(_QWORD *)(v43 + 288) = v43 + 304;
      *(_QWORD *)(v43 + 320) = v43 + 336;
      *(_QWORD *)(v43 + 352) = v43 + 368;
      *(_QWORD *)(v43 + 384) = v43 + 400;
      *(_QWORD *)(v43 + 416) = v43 + 432;
      *(_QWORD *)(v43 + 104) = 0;
      *(_BYTE *)(v43 + 112) = 0;
      *(_QWORD *)(v43 + 136) = 0;
      *(_BYTE *)(v43 + 144) = 0;
      *(_QWORD *)(v43 + 168) = 0;
      *(_BYTE *)(v43 + 176) = 0;
      *(_QWORD *)(v43 + 200) = 0;
      *(_BYTE *)(v43 + 208) = 0;
      *(_QWORD *)(v43 + 232) = 0;
      *(_BYTE *)(v43 + 240) = 0;
      *(_QWORD *)(v43 + 264) = 0;
      *(_BYTE *)(v43 + 272) = 0;
      *(_QWORD *)(v43 + 296) = 0;
      *(_BYTE *)(v43 + 304) = 0;
      *(_QWORD *)(v43 + 328) = 0;
      *(_BYTE *)(v43 + 336) = 0;
      *(_QWORD *)(v43 + 360) = 0;
      *(_BYTE *)(v43 + 368) = 0;
      *(_QWORD *)(v43 + 392) = 0;
      *(_BYTE *)(v43 + 400) = 0;
      *(_QWORD *)(v43 + 424) = 0x800000000LL;
      *(_QWORD *)(v43 + 528) = v43 + 544;
      *(_QWORD *)(v43 + 536) = 0x600000000LL;
      v20 = 0;
    }
    v46 = v18;
  }
  v45.m128_u64[0] = v19;
  v45.m128_i8[8] = 1;
  if ( v22 > v21 )
  {
    sub_2237220(v18 + 416, v18 + 432, v22, 12);
    v20 = *((unsigned int *)v18 + 106);
  }
  v23 = *((_QWORD *)v18 + 52) + 12 * v20;
  *(_QWORD *)v23 = v45.m128_u64[0];
  *(_DWORD *)(v23 + 8) = v45.m128_i32[2];
  ++*((_DWORD *)v18 + 106);
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v24 = *(_QWORD *)(a2 + 32);
    if ( v24 )
    {
      v44 = *(_QWORD *)(a2 + 40);
      v45 = _mm_loadh_ps((const double *)&v44);
      v25 = *(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v25 )
      {
        v45.m128_u64[0] = v25;
        v26 = 0;
        while ( (*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v26 = 1;
          v25 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v26 )
          v45.m128_u64[0] = v25;
      }
      v27 = (unsigned int)sub_E90530((__int64 *)&v45);
    }
    else
    {
      v27 = 0;
    }
  }
  else
  {
    v27 = *(unsigned int *)(a2 + 4);
  }
  sub_18CAED0(v9, v27, a2, &v46);
  if ( v46 )
  {
    if ( v47 )
      sub_1580C40(v47, (unsigned __int64)v46);
  }
}
