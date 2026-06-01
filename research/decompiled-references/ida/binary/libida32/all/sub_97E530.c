unsigned __int64 *__fastcall sub_97E530(__m128i *a1, __int16 *a2, int a3)
{
  __int16 *v3; // rcx
  unsigned __int64 v7; // rax
  __int16 *v8; // rdx
  __int64 v10; // rdi
  __int16 *v11; // rax
  __int16 *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi

  v3 = a2 + 8;
  v7 = (unsigned __int64)&a2[4 * (*(_DWORD *)a2 >> 9) + 8];
  if ( (unsigned __int64)(a2 + 8) >= v7 )
  {
    if ( a2 + 8 == (__int16 *)v7 )
      return sub_97E4B0(a1, a2);
    v10 = *(_QWORD *)v7;
    if ( *(_WORD *)(*(_QWORD *)v7 + 36LL) != 46 )
    {
      v11 = (__int16 *)(v7 + 8);
      v12 = v11;
      while ( v3 != v12 )
      {
        v13 = *(_QWORD *)v12;
        v12 += 4;
        if ( *(_WORD *)(v13 + 36) == 46 )
          goto LABEL_19;
      }
      if ( *(_WORD *)(v10 + 36) != 44 )
      {
        while ( v3 != v11 )
        {
          v14 = *(_QWORD *)v11;
          v11 += 4;
          if ( *(_WORD *)(v14 + 36) == 44 )
            goto LABEL_19;
        }
        return sub_97E4B0(a1, a2);
      }
    }
  }
  else
  {
    v8 = a2 + 8;
    while ( *(_WORD *)(*(_QWORD *)v8 + 36LL) != 46 )
    {
      v8 += 4;
      if ( (__int16 *)v7 == v8 )
        goto LABEL_5;
    }
    if ( (__int16 *)v7 == v8 )
    {
LABEL_5:
      while ( *(_WORD *)(*(_QWORD *)v3 + 36LL) != 44 )
      {
        v3 += 4;
        if ( (__int16 *)v7 == v3 )
          return sub_97E4B0(a1, a2);
      }
      if ( (__int16 *)v7 == v3 )
        return sub_97E4B0(a1, a2);
    }
  }
LABEL_19:
  if ( !(unsigned __int8)sub_978340(a1, a2) && a3 != 1 )
    return sub_97E4B0(a1, a2);
  v19 = a1[1].m128i_i64[0];
  if ( !v19 )
  {
    v19 = sub_975DA0((__int64)a1, 0, v15, v16, v17, v18);
    a1[1].m128i_i64[0] = v19;
  }
  sub_9784E0(a1, v19, (unsigned __int64)a2);
  return sub_97E4B0(a1, a2);
}

