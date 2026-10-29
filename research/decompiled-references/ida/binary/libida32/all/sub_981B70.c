unsigned __int64 *__fastcall sub_981B70(
        __m128i *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // eax
  __int64 v8; // rcx
  bool v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *result; // rax
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rsi
  unsigned __int64 *v29; // r12
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9

  v7 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v8 = (unsigned int)(v7 - 19);
  if ( (unsigned int)v8 <= 1 )
  {
    v23 = a1[1].m128i_i64[0];
    if ( !v23 )
      v23 = sub_975DA0((__int64)a1, a2, a3, v8, a5, a6);
    sub_9784E0(a1, v23, a2);
    result = nullptr;
    if ( !a1[20].m128i_i8[0] )
      return (unsigned __int64 *)sub_979BF0((__int64)a1, a2, 0, v23, v23);
  }
  else if ( v7 == 32 )
  {
    v18 = a1[1].m128i_i64[0];
    if ( !v18 )
    {
      sub_976590((__int64)a1, 0, a3, v8, a5, a6);
      v18 = a1[1].m128i_i64[0];
    }
    sub_9784E0(a1, v18, a2);
    sub_979740((__int64)a1, *(_QWORD *)(a2 + 24), 1, 0, v19, v20);
    return (unsigned __int64 *)sub_979740((__int64)a1, *(_QWORD *)(a2 + 16), 1, 0, v21, v22);
  }
  else
  {
    v9 = (_DWORD)a3 == 1;
    if ( (unsigned int)(v7 - 21) > 0xA )
    {
      if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) || v9 )
      {
        v28 = a1[1].m128i_i64[0];
        if ( !v28 )
        {
          sub_976590((__int64)a1, 0, v24, v25, v26, v27);
          v28 = a1[1].m128i_i64[0];
        }
        sub_9784E0(a1, v28, a2);
      }
      if ( (((unsigned __int8)(*(_WORD *)(a2 + 2) >> 3) + 54) & 0x3Fu) <= 5 )
        sub_974040(a1->m128i_i64, a2);
      v29 = sub_97E030(a1, *(_QWORD **)(a2 + 24), 0, v25, v26, v27);
      result = sub_97E030(a1, *(_QWORD **)(a2 + 16), 0, v30, v31, v32);
      if ( !result )
        return v29;
    }
    else
    {
      if ( (unsigned __int8)sub_978340(a1, (_WORD *)a2) || v9 )
      {
        if ( !a1[1].m128i_i64[0] )
          sub_976590((__int64)a1, a2, v10, v11, v12, v13);
        sub_9784E0(a1, a1[1].m128i_i64[0], a2);
      }
      sub_97E030(a1, *(_QWORD **)(a2 + 16), 0, v11, v12, v13);
      return sub_97E030(a1, *(_QWORD **)(a2 + 24), 0, v14, v15, v16);
    }
  }
  return result;
}

