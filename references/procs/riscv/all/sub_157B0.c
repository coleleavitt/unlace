__int64 __fastcall sub_157B0(__int64 a1)
{
  __int16 v1; // ax
  __int64 v3; // r12
  unsigned int v4; // ebp
  unsigned __int8 v5; // r12
  unsigned __int8 v6; // al
  bool v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned __int8 v9; // al
  bool v10; // dl
  bool v11; // cc
  bool v12; // al
  __int64 v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rdx
  __int64 v20; // rdx
  __int16 v21; // ax
  __m128i *v22; // rax
  __m128i v23; // xmm0

  v1 = *(_WORD *)(a1 + 40);
  if ( v1 != 13 && (v1 != 480 && v1 != 469 || *(_BYTE *)(a1 + 177) != 5 || *(_QWORD *)(a1 + 184) != 2) )
    return 0;
  v3 = *(_QWORD *)(a1 + 864);
  if ( !*(_BYTE *)(v3 + 1) )
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, a1 + 56, *(_QWORD *)(a1 + 864));
  if ( !(_BYTE)v4 )
    return 0;
  v5 = *(_BYTE *)(v3 + 5);
  v6 = *(_BYTE *)(a1 + 61);
  v7 = v5 <= 0xF9u;
  if ( v6 <= 0xF9u )
  {
    if ( v6 >= v5 || v5 > 0xF9u || v6 == 2 && *(_BYTE *)(a1 + 8) )
      goto LABEL_17;
  }
  else if ( v6 >= v5 && v5 > 0xF9u )
  {
    goto LABEL_17;
  }
  v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v8 == sub_14E20 )
    return 0;
  v9 = v8(a1, a1 + 56);
  v10 = v7 || v9 < v5;
  v11 = v9 <= 0xF9u;
  v12 = v9 < v5 && v7;
  if ( !v11 )
    v12 = v10;
  if ( v12 )
    return 0;
LABEL_17:
  v13 = *(unsigned __int16 *)(a1 + 102);
  if ( *(_WORD *)(a1 + 40) == 13 )
  {
    v20 = *(_QWORD *)(a1 + 864);
    *(_QWORD *)(a1 + 960) = *(_QWORD *)(a1 + 112);
    v21 = *(_WORD *)(a1 + 50);
    *(_BYTE *)(v20 + 1) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 864) + 6LL) = v13;
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 5LL) = (v21 & 4) == 0 ? 2 : 7;
  }
  else
  {
    if ( !(unsigned __int8)sub_26470(*(_QWORD *)(a1 + 888), a1 + 896, *(_QWORD *)(a1 + 32), v13)
      || (unsigned __int8)(*(_BYTE *)(a1 + 920) - 10) > 1u )
    {
      return 0;
    }
    v14 = *(__int64 **)(a1 + 896);
    v15 = *(_QWORD *)(a1 + 904);
    v16 = *v14;
    if ( v15 != 1 )
    {
      v17 = v14 + 3;
      v18 = 3 * v15;
      v19 = &v14[v18];
      if ( v18 != 3 )
      {
        while ( v16 == *v17 )
        {
          v17 += 3;
          if ( v17 == v19 )
            goto LABEL_33;
        }
        return 0;
      }
    }
LABEL_33:
    *(_QWORD *)(*(_QWORD *)(a1 + 376) + 8LL) = v16;
    v22 = *(__m128i **)(a1 + 864);
    v23 = _mm_loadu_si128((const __m128i *)(a1 + 136));
    *(_BYTE *)(a1 + 515) = 1;
    *v22 = v23;
    v22[1] = _mm_loadu_si128((const __m128i *)(a1 + 152));
    v22[2].m128i_i32[0] = *(_DWORD *)(a1 + 168);
    *(_BYTE *)(*(_QWORD *)(a1 + 864) + 32LL) = 2;
  }
  **(_DWORD **)(a1 + 376) |= 0x2000u;
  **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
  return v4;
}
