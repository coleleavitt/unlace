void __fastcall sub_2213DA0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        void (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        char a6,
        void (__fastcall *a7)(__int64),
        __int64 a8,
        char a9)
{
  unsigned __int64 v9; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int8 v14; // di
  unsigned __int8 v15; // di
  char v16; // al
  unsigned __int8 v17; // di
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r9
  _BYTE *v21; // rsi
  unsigned __int8 v22; // di
  __int64 v23; // r9
  __int64 v24; // rax
  char v25; // cl
  char v26; // r15
  unsigned __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int64 v31; // r13
  char v32; // si
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // rax
  unsigned __int64 v39; // [rsp+30h] [rbp-E8h]
  char v40; // [rsp+3Dh] [rbp-DBh]
  void *ptr; // [rsp+40h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-D0h]
  _BYTE v44[192]; // [rsp+58h] [rbp-C0h] BYREF

  v9 = 0;
  ptr = v44;
  v40 = a9;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v39 = a2 - 1;
  if ( a2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_2:
        while ( a2 <= v9 )
        {
          if ( a2 <= ++v9 )
            goto LABEL_33;
        }
        while ( 1 )
        {
          v12 = *(unsigned __int8 *)(a1 + v9);
          if ( (unsigned __int8)v12 > 0x20u )
            break;
          v29 = 0x100002601LL;
          if ( !_bittest64(&v29, v12) )
            break;
          if ( (_BYTE)v12 == 10 )
            a7(a8);
          if ( v9 + 1 == a2 )
          {
            v9 += 2LL;
            if ( v9 >= a2 )
              goto LABEL_33;
          }
          else
          {
            ++v9;
          }
        }
        if ( a2 > v9 )
          break;
        if ( ++v9 >= a2 )
          goto LABEL_33;
      }
      v13 = v9;
      if ( v40 )
      {
        v15 = *(_BYTE *)(a1 + v9);
        v16 = sub_2210560(v15);
        if ( v15 != 34 )
        {
          while ( 1 )
          {
            if ( v16 )
              goto LABEL_18;
            if ( ++v13 == a2 )
              break;
            v17 = *(_BYTE *)(a1 + v13);
            v16 = sub_2210560(v17);
            if ( v17 == 34 )
              goto LABEL_18;
          }
LABEL_10:
          if ( a2 <= v9 )
            v9 = a2;
          if ( a2 < v9 )
          {
            v21 = (_BYTE *)(a1 + v9);
            v13 = a2;
            v20 = 0;
LABEL_46:
            if ( a6 )
            {
              v35 = sub_2245280(a3, v21, v20);
              a4(a5, v35);
            }
            else
            {
              ((void (__fastcall *)(__int64, _BYTE *, unsigned __int64))a4)(a5, v21, v20);
            }
            v9 = v13 + 1;
LABEL_49:
            if ( a2 <= v9 )
              goto LABEL_33;
            v40 = 0;
            goto LABEL_2;
          }
          v13 = a2;
          goto LABEL_21;
        }
      }
      else
      {
        while ( 1 )
        {
          v14 = *(_BYTE *)(a1 + v13);
          if ( sub_2210560(v14) || v14 == 34 || v14 == 92 )
            break;
          if ( ++v13 == a2 )
            goto LABEL_10;
        }
      }
LABEL_18:
      if ( a2 <= v9 )
        v9 = a2;
      if ( v13 < v9 )
      {
        v19 = v9;
        v20 = 0;
        goto LABEL_24;
      }
LABEL_21:
      v18 = v13;
      v19 = v9;
      if ( a2 <= v13 )
        v18 = a2;
      v20 = v18 - v9;
      v9 = v18;
LABEL_24:
      v21 = (_BYTE *)(a1 + v19);
      if ( a2 <= v13 )
        goto LABEL_46;
      v22 = *(_BYTE *)(a1 + v13);
      if ( sub_2210560(v22) )
      {
        v30 = v23;
        if ( a6 )
          v21 = (_BYTE *)sub_2245280(a3, v21, v23);
        v9 = v13 + 1;
        ((void (__fastcall *)(__int64, _BYTE *, __int64))a4)(a5, v21, v30);
        if ( *(_BYTE *)(a1 + v13) == 10 )
        {
LABEL_55:
          a7(a8);
          if ( a2 <= v9 )
            goto LABEL_33;
          v40 = a9;
          goto LABEL_2;
        }
        goto LABEL_49;
      }
      if ( v22 != 34 )
      {
        sub_A1FE50(&ptr, v21, (_BYTE *)(a1 + v9));
        v24 = sub_22110E0(a1, a2, v13, &ptr);
        if ( a2 > v24 + 1 )
        {
          v25 = *(_BYTE *)(v24 + a1 + 1);
          v26 = v40;
          v27 = v24 + 1;
          goto LABEL_29;
        }
LABEL_65:
        v33 = sub_2245280(a3, ptr, si128.m128i_i64[0]);
        a4(a5, v33);
        goto LABEL_33;
      }
      v31 = v13 + 1;
      sub_A1FE50(&ptr, v21, (_BYTE *)(a1 + v9));
      if ( a2 <= v31 )
        goto LABEL_65;
      v26 = v40;
      while ( 1 )
      {
LABEL_62:
        while ( 1 )
        {
          v32 = *(_BYTE *)(a1 + v31);
          if ( v32 == 34 )
            break;
          if ( (unsigned __int8)v26 | (v32 != 92) )
          {
            ++v31;
            sub_FC8050(&ptr, v32);
            if ( v31 >= a2 )
              goto LABEL_65;
          }
          else
          {
            v31 = sub_22110E0(a1, a2, v31, &ptr) + 1;
            if ( a2 <= v31 )
              goto LABEL_65;
            v26 = 0;
          }
        }
        v34 = v31 + 1;
        if ( v39 <= v31 )
        {
          if ( a2 > v34 )
          {
            v25 = *(_BYTE *)(a1 + v34);
            v27 = v31 + 1;
            goto LABEL_29;
          }
          goto LABEL_65;
        }
        v25 = *(_BYTE *)(v31 + a1 + 1);
        if ( v25 != 34 )
          break;
        v31 += 2LL;
        sub_FC8050(&ptr, 34);
        if ( a2 <= v31 )
          goto LABEL_65;
      }
      if ( a2 <= v34 )
        goto LABEL_65;
      v27 = v31 + 1;
LABEL_29:
      while ( 2 )
      {
        if ( (unsigned __int8)v25 > 0x20u )
        {
          if ( v25 == 34 )
          {
            v31 = v27 + 1;
            if ( a2 > v31 )
              goto LABEL_62;
            goto LABEL_65;
          }
          if ( (unsigned __int8)v26 | (v25 != 92) )
          {
LABEL_59:
            ++v27;
            sub_FC8050(&ptr, v25);
            if ( a2 <= v27 )
              goto LABEL_65;
          }
          else
          {
            v27 = sub_22110E0(a1, a2, v27, &ptr) + 1;
            if ( a2 <= v27 )
              goto LABEL_65;
            v26 = 0;
          }
          v25 = *(_BYTE *)(a1 + v27);
          continue;
        }
        break;
      }
      if ( ((0x100002601uLL >> v25) & 1) == 0 )
        goto LABEL_59;
      v40 = 0;
      v28 = sub_2245280(a3, ptr, si128.m128i_i64[0]);
      a4(a5, v28);
      si128.m128i_i64[0] = 0;
      v9 = v27 + 1;
      if ( *(_BYTE *)(a1 + v27) == 10 )
        goto LABEL_55;
      if ( a2 <= v9 )
      {
LABEL_33:
        if ( ptr != v44 )
          free(ptr);
        return;
      }
    }
  }
}
