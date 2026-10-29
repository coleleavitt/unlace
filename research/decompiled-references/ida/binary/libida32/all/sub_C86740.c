__int64 __fastcall sub_C86740(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  unsigned __int8 v11; // [rsp+3h] [rbp-35h] BYREF
  unsigned int v12; // [rsp+4h] [rbp-34h] BYREF
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v11 = 1;
  v12 = 407;
  sub_C7BEC0((__int64 *)(a1 + 440), &v12, &v11);
  if ( (*a3 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v13[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C7C0D0(a1 + 464, v13, a3);
  }
  v5 = *(_QWORD *)(a1 + 440);
  result = 0;
  v7 = *(_QWORD *)(a1 + 448) - v5;
  if ( v7 + 8 <= 0xFFFFFFFF )
  {
    v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v9 = v8 + 8;
    if ( v7 < v8 + 8 )
    {
      sub_C7BD20(a1 + 440, v9 - v7);
      result = v11;
      *(_QWORD *)(*(_QWORD *)(a1 + 440) + v8) = a2;
    }
    else
    {
      if ( v7 > v8 + 8 )
      {
        v10 = v5 + v9;
        if ( *(_QWORD *)(a1 + 448) != v10 )
          *(_QWORD *)(a1 + 448) = v10;
      }
      *(_QWORD *)(v5 + v8) = a2;
      return v11;
    }
  }
  return result;
}

