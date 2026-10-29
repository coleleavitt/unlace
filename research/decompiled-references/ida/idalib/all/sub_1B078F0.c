__int64 __fastcall sub_1B078F0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, double a5)
{
  unsigned int v6; // ebp
  unsigned int v8; // r13d
  unsigned __int64 v9; // rax
  __int16 v10; // cx
  unsigned int v11; // eax
  __m128i v12; // rax
  __int64 v14; // r12
  __m128i v15; // xmm0
  __m128i v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  char v19; // dl
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdx
  _QWORD v26[2]; // [rsp+0h] [rbp-148h] BYREF
  __m128i v27; // [rsp+10h] [rbp-138h] BYREF
  __int64 v28; // [rsp+20h] [rbp-128h]
  __m128i v29; // [rsp+30h] [rbp-118h]
  __int64 v30; // [rsp+40h] [rbp-108h]
  __m128i v31; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-E8h]
  __m128i v33; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+90h] [rbp-B8h]

  if ( a3 )
  {
    v6 = a2;
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL);
    v9 = a3;
    while ( 1 )
    {
      v10 = *(_WORD *)v9 & 0x1FF;
      if ( v10 != 250 )
        break;
      v9 = *(_QWORD *)(v9 + 8LL * *(unsigned int *)(v9 + 8) + 32);
      if ( !v9 )
        goto LABEL_5;
    }
    if ( v10 == 249 )
    {
      v14 = v9 + 8LL * *(unsigned int *)(v9 + 4) + 16;
      if ( v14 != v9 + 16 )
      {
        v33 = (__m128i)(v9 + 24);
        v15 = _mm_load_si128(&v33);
        v30 = v34;
        v27 = v15;
        v16 = v15;
        v28 = v34;
        v32 = v34;
        v29 = v15;
        v31 = v15;
        while ( 1 )
        {
          if ( v14 == v16.m128i_i64[0] )
          {
LABEL_19:
            if ( !v16.m128i_i64[1] )
              return 0;
          }
          while ( 1 )
          {
            if ( (v16.m128i_i8[8] & 3) != 0 )
              v16.m128i_i64[0] = sub_EF2B30((__int64)&v27);
            v17 = *(_QWORD *)v16.m128i_i64[0];
            if ( !*(_QWORD *)v16.m128i_i64[0] )
              return 1;
            if ( (*(_WORD *)v17 & 0x1FF) != 0xB0 )
            {
              v24 = sub_EEB7E0(v17, a2, *(double *)v15.m128i_i64);
              sub_168B9F0((__int64)&v33, (__int64 *)(a1 + 8), v24, 0x1203u, 0);
              v26[0] = sub_20EAB70(v6, v8);
              v26[1] = v25;
              sub_166BAF0((__int64)&v33, (__int64)v26);
              sub_15F7200(&v33);
              return 1;
            }
            v18 = *(unsigned int *)(a4 + 344);
            v19 = 0;
            if ( (_DWORD)v18 )
            {
              v20 = *(_QWORD *)(a4 + 336) + 6776 * v18 - 6776;
              if ( *(_QWORD *)(v20 + 6768) == *(_QWORD *)(a4 + 328) )
              {
                v21 = *(unsigned int *)(v20 + 8);
                a2 = *(unsigned int *)(a4 + 27504);
                if ( (unsigned int)v21 > (unsigned int)a2 )
                {
                  v22 = v21 - a2;
                  if ( v22 )
                  {
                    v23 = *(_QWORD *)v20 + 1688 * (v22 - 1);
                    if ( v23 )
                      v19 = *(_BYTE *)(v23 + 1106);
                  }
                }
              }
            }
            *(_BYTE *)(v17 + 32) = v19;
            v16.m128i_i64[1] = v27.m128i_i64[1];
            if ( (v27.m128i_i8[8] & 3) != 0 )
              break;
            v16.m128i_i64[0] = v27.m128i_i64[0] + 8;
            v27.m128i_i64[0] = v16.m128i_i64[0];
            if ( v14 == v16.m128i_i64[0] )
              goto LABEL_19;
          }
          if ( (v27.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            sub_EF2960((__int64)&v27);
          }
          else
          {
            a2 = 1;
            sub_EF2750((unsigned __int64 *)&v27, 1);
          }
          v16 = v27;
        }
      }
    }
    else
    {
LABEL_5:
      v11 = sub_EEB7E0(a3, a2, a5);
      sub_168B9F0((__int64)&v33, (__int64 *)(a1 + 8), v11, 0x1202u, 0);
      v12.m128i_i64[0] = sub_20EAB70((unsigned int)a2, v8);
      v31 = v12;
      sub_166BAF0((__int64)&v33, (__int64)&v31);
      sub_15F7200(&v33);
    }
    return 1;
  }
  return 1;
}
