__int64 __fastcall sub_88A150(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  __m128i v11; // [rsp+10h] [rbp-148h] BYREF
  __m128i v12; // [rsp+20h] [rbp-138h] BYREF
  __int64 v13; // [rsp+30h] [rbp-128h]
  __m128i v14; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-B8h]
  int v16; // [rsp+A8h] [rbp-B0h]
  __int64 v17; // [rsp+B0h] [rbp-A8h]
  __int64 v18; // [rsp+B8h] [rbp-A0h]
  void *ptr; // [rsp+C0h] [rbp-98h]
  __int64 v20; // [rsp+C8h] [rbp-90h]
  _BYTE v21[64]; // [rsp+D0h] [rbp-88h] BYREF
  __int16 v22; // [rsp+110h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a2 + 48);
  LOBYTE(v16) = v16 | 1;
  v4 = *(unsigned int *)(v2 + 192);
  v14 = 0u;
  v20 = 0x800000000LL;
  v5 = *(_QWORD *)(v2 + 184);
  v15 = 0;
  v18 = 0;
  ptr = v21;
  HIBYTE(v22) = 0;
  sub_69F1C0((__int64)&v11, a2, *(_DWORD *)(v2 + 176), *(_DWORD *)(v5 + 4 * v4 - 4));
  v6 = _mm_load_si128(&v11);
  LOBYTE(v22) = v22 & 0xFD;
  v15 = 0;
  v14 = v6;
  v12 = v6;
  v13 = sub_69F240(v12.m128i_i64);
  v22 &= 0xFEu;
  v16 = 0;
  v17 = 0;
  v18 = v13;
  LODWORD(v20) = 0;
  v7 = sub_823990(v2, v11.m128i_i64[0], v11.m128i_i64[1], a2, v3, 0);
  v8 = sub_77BC00(a2);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 2) & 2) != 0 )
    {
LABEL_3:
      v9 = 0;
      goto LABEL_4;
    }
    if ( !(unsigned __int8)sub_88A010(v7, a1, &v14, v8, 0) )
    {
      v12.m128i_i8[4] &= ~1u;
      v12.m128i_i32[0] = 0;
      sub_6A01B0(v7, (__int64)&v12);
      if ( v12.m128i_i32[0] > 1u )
        sub_69F740((__int64)&v12);
      goto LABEL_3;
    }
    goto LABEL_8;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    **(_BYTE **)(a1 + 24) = 1;
    if ( *(_DWORD *)(a1 + 964) > 2u )
    {
LABEL_8:
      v9 = 1;
      goto LABEL_4;
    }
    v9 = *(unsigned __int8 *)(a1 + 962);
    LOBYTE(v9) = *(_BYTE *)(a1 + 963) | v9;
  }
  else
  {
    v9 = sub_8312C0(*(_QWORD *)(a2 + 48), v7);
  }
LABEL_4:
  if ( ptr != v21 )
    free(ptr);
  return v9;
}

