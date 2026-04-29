__int64 __fastcall sub_162B50(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // r13
  char v5; // al
  __int64 result; // rax
  __int64 v8; // rax
  int *v9; // rax
  int v10; // r12d
  __int64 v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // rax
  __int64 i; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  char v17[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a1 + 64);
  v18 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 64) = 0;
  v5 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 4 )
  {
    v9 = *(int **)(a1 + 32);
    *(_BYTE *)(a1 + 40) = 1;
    if ( !(unsigned __int8)sub_150B70(a2, *v9, v4 != 0) || (++*(_DWORD *)(a1 + 76), *(_BYTE *)a2 == 4) )
      *(_DWORD *)(a1 + 76) += sub_157A70(
                                *(_QWORD *)(a2 + 8),
                                *(_QWORD *)(a1 + 48),
                                *(_QWORD *)(a1 + 16),
                                *(_QWORD *)(a1 + 24),
                                *(_QWORD *)(a1 + 32),
                                *(_QWORD *)(a1 + 56),
                                *(_DWORD *)(a1 + 72));
    return 0;
  }
  if ( v5 == 14 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      sub_11F840((__int64)v17, *(unsigned __int8 **)(a2 + 8));
      if ( (unsigned __int8)sub_14ADD0(
                              *(_QWORD *)(a1 + 16),
                              *(_QWORD *)(a1 + 24),
                              (__int64)v17,
                              *(_QWORD *)(a2 + 8),
                              *(_QWORD *)(a2 + 8) + 16LL,
                              a4) )
      {
        v8 = *(_QWORD *)(a1 + 32);
        if ( *(_DWORD *)v8 != 62 || (unsigned __int8)sub_316810(v17, *(_QWORD *)(a1 + 48), *(_QWORD *)(v8 + 24)) )
        {
          sub_118810((char *)a2, v17);
          ++*(_DWORD *)(a1 + 76);
          sub_118BA0((__int64)v17);
          return 0;
        }
      }
      sub_118BA0((__int64)v17);
    }
    if ( (unsigned int)(**(_DWORD **)(a1 + 32) - 10) > 1 )
    {
      *(_QWORD *)(a1 + 64) = a2;
      result = sub_11A7B0(*(_QWORD *)(a2 + 8), a1, nullptr, a4);
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(a1 + 64) = a2;
        result = sub_11A7B0(*(_QWORD *)(a2 + 8) + 16LL, a1, nullptr, a4);
      }
      *(_QWORD *)(a1 + 64) = v4;
      *(_BYTE *)(a1 + 40) = 1;
      return result;
    }
    return 0;
  }
  if ( v5 != 8 )
  {
    if ( v5 == 6 && !a4 )
    {
      if ( (unsigned __int8)sub_150E00(a2, *(_QWORD *)(a1 + 48), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)) )
        ++*(_DWORD *)(a1 + 76);
    }
    return 0;
  }
  v10 = *(_DWORD *)(a1 + 72);
  if ( (v10 & 1) != 0 )
    return 0;
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_DWORD *)(v11 + 284);
  if ( v12 > 5 )
  {
    if ( v12 - 34 <= 1 )
      goto LABEL_26;
    return 0;
  }
  if ( v12 <= 1 )
    return 0;
LABEL_26:
  if ( *(_QWORD *)(v11 + 32) != 3 )
    return 0;
  v13 = *(_QWORD *)(v11 + 24);
  if ( *(_BYTE *)(v13 + 160) != 4 )
    return 0;
  for ( i = 0; ; ++i )
  {
    v15 = v13 + 80 * i;
    if ( i == 2 )
      break;
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, v15, v15 + 24, 0);
    *(_DWORD *)(a1 + 72) = v10;
    if ( (_DWORD)result )
      return result;
    *(_BYTE *)(a1 + 40) = 1;
    v13 = *(_QWORD *)(v11 + 24);
  }
  v16 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 72) |= 1u;
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(v16 + 16))(a1, v15, v15 + 24, 0);
  *(_DWORD *)(a1 + 72) = v10;
  if ( !(_DWORD)result )
  {
    *(_BYTE *)(a1 + 40) = 1;
    return 0;
  }
  return result;
}
