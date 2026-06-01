_BYTE *__fastcall sub_E2A980(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7)
{
  __int64 v9; // rdi
  _WORD *v10; // rdx
  __int64 *v11; // rbx
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  _BYTE *result; // rax
  _BYTE *v16; // rcx
  unsigned __int16 *v17; // rbx

  v9 = a1[1];
  v10 = *(_WORD **)(v9 + 32);
  if ( *(_QWORD *)(v9 + 24) - (_QWORD)v10 > 1u )
  {
    *v10 = 29780;
    *(_QWORD *)(v9 + 32) += 2LL;
  }
  else
  {
    sub_22581D0(v9, "Tt", 2);
  }
  v11 = (__int64 *)(a2 + 24);
  v12 = a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24;
  if ( v12 != a2 + 24 )
  {
    do
    {
      v13 = *v11++;
      sub_E2A700(a1, v13, a3, (__int64)v10, a5, a6);
    }
    while ( (__int64 *)v12 != v11 );
  }
  v14 = a1[1];
  result = *(_BYTE **)(v14 + 32);
  v16 = *(_BYTE **)(v14 + 24);
  if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0 )
  {
    v17 = *(unsigned __int16 **)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24);
    if ( v17 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 212LL) > 0x9Fu )
      {
        if ( result >= v16 )
        {
          sub_2257CD0(v14, 81);
        }
        else
        {
          *(_QWORD *)(v14 + 32) = result + 1;
          *result = 81;
        }
        sub_E24970((__int64)a1, v17, (unsigned __int16 *)0xFFFFFFFFLL, 0, a6, a7);
        v14 = a1[1];
        v16 = *(_BYTE **)(v14 + 24);
        result = *(_BYTE **)(v14 + 32);
      }
    }
  }
  if ( v16 == result )
    return (_BYTE *)sub_22581D0(v14, "E", 1);
  *result = 69;
  ++*(_QWORD *)(v14 + 32);
  return result;
}

