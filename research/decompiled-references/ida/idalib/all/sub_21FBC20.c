void __fastcall sub_21FBC20(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r12
  _BYTE *v5; // rax
  char v6; // r8
  char v7; // al
  __m128i *v8; // rdx
  __int64 v9; // rdx
  __m128i v10; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v11[24]; // [rsp+10h] [rbp-18h] BYREF

  v2 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v2 > 0x40 )
    a2 = *(_QWORD *)a2;
  v10.m128i_i64[0] = *(_QWORD *)a2;
  v3 = *(_QWORD *)(a2 + 8LL * ((unsigned int)((unsigned __int64)(v2 + 63) >> 6) - 1));
  v10.m128i_i64[1] = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFLL;
  sub_21F9140((_QWORD *)a1, (__int64)&unk_26F7D00);
  v4 = HIWORD(v3) & 0x7FFF;
  *(_BYTE *)(a1 + 20) = (8 * (v3 < 0)) | *(_BYTE *)(a1 + 20) & 0xF7;
  v5 = sub_21F8AA0(&v10, (__int64)v11);
  if ( v4 == 0x7FFF && v5 == v11 )
  {
    sub_21FB4C0(a1, (v6 & 8) != 0);
  }
  else if ( v5 == v11 || v4 != 0x7FFF )
  {
    if ( !(_DWORD)v4 && v5 == v11 )
    {
      sub_21FB9A0((__int64 *)a1, (*(_BYTE *)(a1 + 20) & 8) != 0);
    }
    else
    {
      v8 = (__m128i *)(a1 + 8);
      *(_BYTE *)(a1 + 20) = *(_BYTE *)(a1 + 20) & 0xF8 | 2;
      *(_DWORD *)(a1 + 16) = v4 - 0x3FFF;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
        v8 = *(__m128i **)(a1 + 8);
      *v8 = _mm_load_si128(&v10);
      if ( (_DWORD)v4 )
      {
        v9 = a1 + 8;
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
          v9 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(v9 + 8) |= 0x1000000000000uLL;
      }
      else
      {
        *(_DWORD *)(a1 + 16) = -16382;
      }
    }
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 20);
    *(_DWORD *)(a1 + 16) = 0x4000;
    *(_BYTE *)(a1 + 20) = v7 & 0xF8 | 1;
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
      *(__m128i *)*(_QWORD *)(a1 + 8) = _mm_load_si128(&v10);
    else
      *(__m128i *)(a1 + 8) = _mm_load_si128(&v10);
  }
}
