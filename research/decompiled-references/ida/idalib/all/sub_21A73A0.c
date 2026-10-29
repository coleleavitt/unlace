__int64 *__fastcall sub_21A73A0(__int64 *a1, __int64 a2, __int64 a3)
{
  char **v5; // rbp
  unsigned __int64 v6; // r15
  _BYTE *v7; // rsi
  int v8; // ebx
  char *v9; // rsi
  char *v10; // rdx
  char v11; // r8
  char *v12; // rax
  unsigned __int64 v13; // r12
  unsigned int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rdi
  const char *v17; // rdi
  char *v18; // rsi
  __m128i *v19; // rsi
  __int64 v20; // rbx
  unsigned __int64 v22; // rax
  _BYTE *v23; // rdx
  size_t v24; // r12
  char *v25; // rax
  void *v26; // r10
  char *v27; // rcx
  char *v28; // rax
  void *src; // [rsp+20h] [rbp-78h]
  char *srca; // [rsp+20h] [rbp-78h]
  _BYTE *v32; // [rsp+28h] [rbp-70h]
  __m128i v33; // [rsp+30h] [rbp-68h] BYREF
  __m128i v34; // [rsp+40h] [rbp-58h] BYREF
  __int16 v35; // [rsp+50h] [rbp-48h]

  v5 = (char **)(a3 + 8);
  v6 = sub_21A29A0((char **)(a3 + 8), *(char **)(a3 + 16));
  if ( v6 > 0xFFFFFFFF )
LABEL_40:
    sub_2221C70("LEB is outside Varuint32 range", 1);
  v7 = *(_BYTE **)(a2 + 352);
  v8 = v6;
  if ( (__int64)(*(_QWORD *)(a2 + 368) - (_QWORD)v7) >> 5 < v6 )
  {
    v23 = *(_BYTE **)(a2 + 360);
    v24 = v23 - v7;
    if ( v6 )
    {
      v32 = *(_BYTE **)(a2 + 360);
      v25 = (char *)operator new(32 * v6);
      v23 = v32;
      v26 = *(void **)(a2 + 352);
      v27 = v25;
    }
    else
    {
      v26 = v7;
      v27 = nullptr;
    }
    if ( v7 != v23 )
    {
      src = v26;
      v28 = (char *)memmove(v27, v7, v24);
      v26 = src;
      v27 = v28;
    }
    if ( v26 )
    {
      srca = v27;
      operator delete(v26);
      v27 = srca;
    }
    *(_QWORD *)(a2 + 352) = v27;
    *(_QWORD *)(a2 + 360) = &v27[v24];
    *(_QWORD *)(a2 + 368) = &v27[32 * v6];
  }
  if ( v6 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *(char **)(a3 + 16);
        v10 = *(char **)(a3 + 8);
        if ( v9 == v10 )
        {
LABEL_22:
          v17 = "malformed uleb128, extends past end";
LABEL_23:
          sub_2221C70(v17, 1);
        }
        v11 = *v10;
        v12 = *(char **)(a3 + 8);
        v13 = 0;
        v14 = 0;
        v15 = *v10 & 0x7F;
        while ( 1 )
        {
          v16 = v15 << v14;
          ++v12;
          v14 += 7;
          v13 += v16;
          if ( v11 >= 0 )
            break;
          if ( v9 == v12 )
            goto LABEL_22;
          v11 = *v12;
          v15 = *v12 & 0x7F;
          if ( v14 > 0x3E )
          {
            if ( v14 == 63 )
            {
              if ( v15 != (v11 & 1) )
              {
LABEL_11:
                v17 = "uleb128 too big for uint64";
                goto LABEL_23;
              }
            }
            else if ( (*v12 & 0x7F) != 0 )
            {
              goto LABEL_11;
            }
          }
        }
        *(_QWORD *)(a3 + 8) = &v10[(_DWORD)v12 - (_DWORD)v10];
        if ( v13 > 0xFFFFFFFF )
          goto LABEL_40;
        v33.m128i_i8[0] = v13;
        v33.m128i_i64[1] = sub_21A29A0(v5, v9);
        if ( (v13 & 1) != 0 )
          v34.m128i_i64[0] = sub_21A29A0(v5, *(char **)(a3 + 16));
        if ( (v13 & 8) != 0 )
        {
          v22 = sub_21A29A0(v5, *(char **)(a3 + 16));
          if ( v22 > 0xFFFFFFFF )
            goto LABEL_40;
          if ( v22 > 0x1F )
            sub_2221C70("log2(wasm page size) too large", 1);
          v34.m128i_i32[2] = 1 << v22;
        }
        if ( (v33.m128i_i8[0] & 4) != 0 )
          *(_BYTE *)(a2 + 614) = 1;
        v18 = *(char **)(a2 + 360);
        if ( v18 == *(char **)(a2 + 368) )
          break;
        v19 = (__m128i *)(v18 + 32);
        v19[-2] = _mm_load_si128(&v33);
        v19[-1] = _mm_load_si128(&v34);
        *(_QWORD *)(a2 + 360) = v19;
        if ( !--v8 )
          goto LABEL_20;
      }
      sub_21A7240(a2 + 352, v18, &v33);
      --v8;
    }
    while ( v8 );
    if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(a3 + 16) )
      goto LABEL_31;
LABEL_21:
    v33.m128i_i64[0] = (__int64)"memory section ended prematurely";
    v35 = 259;
    v20 = operator new(0x38u);
    sub_2195A00(v20, (__int64)&v33, 3);
    *a1 = v20;
    return a1;
  }
LABEL_20:
  if ( *(_QWORD *)(a3 + 8) != *(_QWORD *)(a3 + 16) )
    goto LABEL_21;
LABEL_31:
  *a1 = 0;
  return a1;
}
