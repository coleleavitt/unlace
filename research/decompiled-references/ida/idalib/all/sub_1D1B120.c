__int64 __fastcall sub_1D1B120(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r12
  int v21; // eax
  __int64 v22; // r12

  if ( a2 )
  {
    v9 = *(_BYTE *)(a2 + 28) & 0x7F;
    v10 = (unsigned int)v9 - 64;
    if ( (unsigned int)v10 <= 2 )
    {
      v11 = (__int64 *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(a2 + 80) & 4) != 0 )
        v12 = v11[1];
      else
        v12 = *v11;
      goto LABEL_5;
    }
    if ( v9 == 47 )
    {
      if ( (*(_DWORD *)(a2 + 68) & 0xFFFFFu) < *(_DWORD *)(a1 + 48) )
        *(_BYTE *)(a1 + 32) = 1;
      goto LABEL_10;
    }
    if ( (unsigned int)v9 - 26 <= 0x1A )
    {
LABEL_10:
      v12 = *(_QWORD *)(a2 + 48);
LABEL_5:
      sub_1D1AC70((_QWORD *)a1, v12, a3, a4);
      return a2;
    }
    if ( (unsigned int)v9 - 68 > 6 )
    {
      v14 = (unsigned int)v9 - 59;
      if ( (unsigned int)v14 <= 2 )
      {
        v15 = sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v14, v10, a7, a8);
        if ( (unsigned __int8)sub_B8E340((__int64)v15) )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) != 0 )
            v20 = *(_QWORD *)(v20 + 8);
          while ( v20 )
          {
            v21 = *(_BYTE *)(v20 + 8) & 0x7F;
            if ( (*(_BYTE *)(v20 + 8) & 0x7F) == 0 || v21 == 24 )
              break;
            if ( (unsigned int)(v21 - 59) <= 2
              && v20 != 64
              && v15 == sub_7052B0((__int64 *)(*(_QWORD *)(v20 + 40) + 96LL), *(_QWORD *)(v20 + 40), v16, v17, v18, v19) )
            {
              *(_BYTE *)(a1 + 32) = 1;
            }
            v22 = *(_QWORD *)(sub_B8C1B0(v20) + 16);
            if ( (v22 & 4) != 0 )
              v20 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v20 = v22 & 0xFFFFFFFFFFFFFFF8LL;
          }
        }
      }
    }
  }
  return a2;
}
