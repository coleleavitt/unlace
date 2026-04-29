__int64 __fastcall sub_166D50(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __m128i a5)
{
  __int64 v5; // r13
  char v6; // al
  char v7; // r12
  __int64 result; // rax
  __int64 v9; // rax
  int *v10; // rax
  int v11; // r12d
  __int64 v12; // rbp
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 i; // r13
  __int64 v16; // rsi
  __int64 v17; // rax
  char v18[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 64);
  v19 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 64) = 0;
  v6 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 4 )
  {
    v10 = *(int **)(a1 + 32);
    *(_BYTE *)(a1 + 40) = 1;
    if ( !(unsigned __int8)sub_154D70(a2, *v10, v5 != 0, a4) || (++*(_DWORD *)(a1 + 76), *(_BYTE *)a2 == 4) )
      *(_DWORD *)(a1 + 76) += sub_15BC70(
                                *(unsigned int **)(a2 + 8),
                                *(unsigned __int64 **)(a1 + 48),
                                *(_QWORD *)(a1 + 16),
                                *(_QWORD *)(a1 + 24),
                                *(int ***)(a1 + 32),
                                *(__m128 ***)(a1 + 56),
                                a5,
                                *(_DWORD *)(a1 + 72));
    return 0;
  }
  v7 = a4;
  if ( v6 == 14 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      sub_123A40((__int64)v18, *(unsigned __int8 **)(a2 + 8), a3, a4);
      if ( (unsigned __int8)sub_14EFD0(
                              *(_QWORD *)(a1 + 16),
                              *(_QWORD *)(a1 + 24),
                              (__int64)v18,
                              *(_QWORD *)(a2 + 8),
                              *(_QWORD *)(a2 + 8) + 16LL,
                              v7) )
      {
        v9 = *(_QWORD *)(a1 + 32);
        if ( *(_DWORD *)v9 != 62 || (unsigned __int8)sub_31B590(v18, *(_QWORD *)(a1 + 48), *(_QWORD *)(v9 + 24)) )
        {
          sub_11CA10((char *)a2, v18);
          ++*(_DWORD *)(a1 + 76);
          sub_11CDA0((__int64)v18);
          return 0;
        }
      }
      sub_11CDA0((__int64)v18);
    }
    if ( (unsigned int)(**(_DWORD **)(a1 + 32) - 10) > 1 )
    {
      *(_QWORD *)(a1 + 64) = a2;
      result = sub_11E9B0(*(_QWORD *)(a2 + 8), a1, 0, v7);
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(a1 + 64) = a2;
        result = sub_11E9B0(*(_QWORD *)(a2 + 8) + 16LL, a1, 0, v7);
      }
      *(_QWORD *)(a1 + 64) = v5;
      *(_BYTE *)(a1 + 40) = 1;
      return result;
    }
    return 0;
  }
  if ( v6 != 8 )
  {
    if ( v6 == 6 && !(_BYTE)a4 )
    {
      if ( (unsigned __int8)sub_155000(a2, *(_QWORD *)(a1 + 48), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)) )
        ++*(_DWORD *)(a1 + 76);
    }
    return 0;
  }
  v11 = *(_DWORD *)(a1 + 72);
  if ( (v11 & 1) != 0 )
    return 0;
  v12 = *(_QWORD *)(a2 + 8);
  v13 = *(_DWORD *)(v12 + 284);
  if ( v13 > 5 )
  {
    if ( v13 - 34 <= 1 )
      goto LABEL_26;
    return 0;
  }
  if ( v13 <= 1 )
    return 0;
LABEL_26:
  if ( *(_QWORD *)(v12 + 32) != 3 )
    return 0;
  v14 = *(_QWORD *)(v12 + 24);
  if ( *(_BYTE *)(v14 + 160) != 4 )
    return 0;
  for ( i = 0; ; ++i )
  {
    v16 = v14 + 80 * i;
    if ( i == 2 )
      break;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, v16, v16 + 24, 0);
    *(_DWORD *)(a1 + 72) = v11;
    if ( (_DWORD)result )
      return result;
    *(_BYTE *)(a1 + 40) = 1;
    v14 = *(_QWORD *)(v12 + 24);
  }
  v17 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 72) |= 1u;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(v17 + 16))(a1, v16, v16 + 24, 0);
  *(_DWORD *)(a1 + 72) = v11;
  if ( !(_DWORD)result )
  {
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  return result;
}
