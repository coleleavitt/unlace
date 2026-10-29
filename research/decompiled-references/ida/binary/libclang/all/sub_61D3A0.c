__int64 __fastcall sub_61D3A0(__int64 *a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char v15; // al
  int v16; // edx
  __int64 v17; // rbx
  unsigned int v18; // eax
  __m128i v19; // [rsp+20h] [rbp-48h] BYREF
  __m128i v20[3]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a4 )
  {
    v15 = *(_BYTE *)(a2 + 16);
    if ( v15 == 26 )
    {
      v16 = 8 * ((*(_WORD *)(a2 + 22) & 0x3C0) != 0) + 15;
    }
    else
    {
      v17 = 16;
      if ( v15 == 25 )
      {
LABEL_12:
        v18 = sub_B1AFD0(*(_QWORD *)(a2 + 24));
        if ( (unsigned __int8)sub_61B330(
                                a1,
                                *(_QWORD *)(a2 + 24),
                                v18 * ((a3 + v17 != 0) + (a3 + v17 - (unsigned __int64)(a3 + v17 != 0)) / v18)) )
          return 1;
        goto LABEL_2;
      }
      v16 = 15;
    }
    v17 = 8 * ((v16 + ((*(_DWORD *)(a2 + 20) >> 3) & 0x7FFF8u)) >> 3) + 8;
    goto LABEL_12;
  }
LABEL_2:
  if ( *(_BYTE *)(a2 + 16) == 25 || !(unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) )
    return 0;
  v7 = (__int64 *)(a3 + 16);
  v8 = a3 + 8LL * ((unsigned int)(unsigned __int16)(*(_DWORD *)(a2 + 20) >> 6) - 1) + 24;
  while ( 1 )
  {
    v9 = *v7;
    if ( *v7 )
    {
      sub_639160(&v19, v9, *a1, *(__int64 *)((char *)a1 + 84), 1, a6);
      if ( (unsigned __int8)sub_619180(
                              (__int64)a1,
                              v9,
                              v10,
                              v11,
                              v12,
                              v13,
                              (__int128)_mm_load_si128(&v19),
                              (__int128)_mm_load_si128(v20)) )
        break;
    }
    if ( ++v7 == (__int64 *)v8 )
      return 0;
  }
  return 1;
}

