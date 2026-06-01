__int64 __fastcall sub_61CE30(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 **v5; // r15
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // [rsp+28h] [rbp-60h]
  __m128i v18; // [rsp+30h] [rbp-58h] BYREF
  __m128i v19[4]; // [rsp+40h] [rbp-48h] BYREF

  if ( *(_BYTE *)(a3 + 16) )
  {
    v15 = 8 * ((4 * ((*(_BYTE *)(a2 + 19) >> 2) + 2 * ((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu)) + 23) >> 3) + 8;
    v16 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
    if ( (unsigned __int8)sub_61B330(
                            a1,
                            *(_QWORD *)(a2 + 24),
                            v16 * ((a3 + v15 != 0) + (a3 + v15 - (unsigned __int64)(a3 + v15 != 0)) / v16)) )
      return 1;
  }
  if ( ((*(_WORD *)(a2 + 18) >> 3) & 0x7F) != 0 )
  {
    v5 = (__int64 **)(a3 + 24);
    v17 = a3 + 8LL * (((*(_WORD *)(a2 + 18) >> 3) & 0x7Fu) - 1) + 32;
    while ( !(unsigned __int8)sub_61B330(a1, **v5, (__int64)(*v5 + 1)) )
    {
      if ( (__int64 **)v17 == ++v5 )
        goto LABEL_7;
    }
    return 1;
  }
LABEL_7:
  if ( (*(_BYTE *)(a2 + 19) & 0xFC) != 0 )
  {
    v7 = 0;
    v8 = 4LL * (*(_BYTE *)(a2 + 19) >> 2);
    while ( 1 )
    {
      v9 = *(_WORD *)(a2 + 18) & 0x3F8;
      v10 = *(_QWORD *)(v9 + a2 + 2 * v7 + 48);
      sub_639C30(&v18, v10, *(unsigned int *)(v7 + a3 + v9 + 24), *a1);
      if ( (unsigned __int8)sub_619180(
                              (__int64)a1,
                              v10,
                              v11,
                              v12,
                              v13,
                              v14,
                              (__int128)_mm_load_si128(&v18),
                              (__int128)_mm_load_si128(v19)) )
        break;
      v7 += 4;
      if ( v8 == v7 )
        return 0;
    }
    return 1;
  }
  return 0;
}

