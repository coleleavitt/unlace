void __fastcall sub_1482EF0(__int64 a1, int *a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rdx
  size_t v8; // rdx
  __int64 v9; // [rsp+8h] [rbp-E0h] BYREF
  void *src; // [rsp+10h] [rbp-D8h]
  size_t n; // [rsp+18h] [rbp-D0h]
  _QWORD v12[2]; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-B4h]
  char v15; // [rsp+38h] [rbp-B0h]
  __int64 v16; // [rsp+3Ch] [rbp-ACh]
  char v17; // [rsp+44h] [rbp-A4h]
  void *dest; // [rsp+48h] [rbp-A0h]
  __m128 v19; // [rsp+50h] [rbp-98h] BYREF
  char v20; // [rsp+68h] [rbp-80h]
  unsigned __int8 *v21[15]; // [rsp+70h] [rbp-78h] BYREF

  v2 = *a2;
  if ( *((_WORD *)a2 + 8) == 93 )
  {
    sub_1564820(v21, a1, v2, 2143);
    v17 = 0;
    v4 = j__strlen("_BitInt");
    v19.m128_i8[8] = 0;
    dest = &v19.m128_u16[4];
    v5 = v12;
    v16 = 0;
    v19.m128_u64[0] = 0;
    v20 = 0;
    v13 = v2;
    v14 = v2;
    v15 = 1;
    src = v12;
    if ( (unsigned __int64)v4 > 0xF )
    {
      if ( v4 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v5 = (_QWORD *)operator new(v4 + 1);
      v12[0] = v4;
      src = v5;
    }
    else
    {
      if ( v4 == 1 )
      {
        LOBYTE(v12[0]) = 95;
        goto LABEL_9;
      }
      if ( !v4 )
      {
LABEL_9:
        n = v4;
        *((_BYTE *)v5 + v4) = 0;
        v6 = dest;
        if ( src == v12 )
        {
          v8 = n;
          if ( n )
          {
            if ( n == 1 )
              *(_BYTE *)dest = v12[0];
            else
              memcpy(dest, src, n);
            v8 = n;
            v6 = dest;
          }
          v19.m128_u64[0] = v8;
          v6[v8] = 0;
          v6 = src;
          goto LABEL_13;
        }
        if ( dest == &v19.m128_u16[4] )
        {
          v9 = v12[0];
          dest = src;
          v19 = _mm_loadh_ps((const double *)&v9);
        }
        else
        {
          v9 = v12[0];
          v7 = v19.m128_u64[1];
          dest = src;
          v19 = _mm_loadh_ps((const double *)&v9);
          if ( v6 )
          {
            src = v6;
            v12[0] = v7;
LABEL_13:
            n = 0;
            *v6 = 0;
            if ( src != v12 )
              operator delete(src);
            if ( v13 && v14 )
              sub_1480470((__int64 *)v21, (unsigned __int64)&v13);
            if ( dest != &v19.m128_u16[4] )
              operator delete(dest);
            goto LABEL_4;
          }
        }
        v6 = v12;
        src = v12;
        goto LABEL_13;
      }
    }
    memcpy(v5, "_BitInt", v4);
    v5 = src;
    goto LABEL_9;
  }
  if ( (**(_BYTE **)(*(_QWORD *)(a1 + 8) + 56LL) & 8) != 0 )
  {
    sub_1564820(v21, a1, v2, 2071);
    v3 = sub_10CBF50(*((_WORD *)a2 + 8));
    sub_1478320(v21, v3);
LABEL_4:
    sub_AEA040((__int64)v21);
    return;
  }
  sub_1564820(v21, a1, v2, 1942);
  sub_AE9DF0(v21, (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0, 3u);
  sub_AEA040((__int64)v21);
}
