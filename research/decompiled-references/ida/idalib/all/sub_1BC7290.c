_WORD *__fastcall sub_1BC7290(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // dx
  __int64 v4; // rax
  __int64 v5; // r9
  _WORD *result; // rax
  __int64 v7; // rcx

  v2 = a2;
  v3 = *(_WORD *)a2 & 0x1FF;
  if ( v3 == 60 )
  {
    v4 = sub_1BC7290(a1, *(_QWORD *)(a2 + 16));
    return (_WORD *)sub_C96350(a1, v4, (*(_DWORD *)a2 & 0x80000) != 0, a2 + 24, (*(_WORD *)(a2 + 2) >> 4) & 0xFFF, v5);
  }
  else
  {
    result = (_WORD *)a2;
    if ( v3 == 79 && ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) <= 0x27 )
    {
      v7 = 0xF038000020LL;
      if ( _bittest64(&v7, (*(_WORD *)(a2 + 2) >> 3) & 0x7F) )
      {
        while ( 1 )
        {
          result = *(_WORD **)(v2 + 16);
          if ( (*result & 0x1FF) != 0x4F
            || ((result[1] >> 3) & 0x7Fu) > 0x27
            || ((1LL << ((result[1] >> 3) & 0x7F)) & 0xF038000020LL) == 0 )
          {
            break;
          }
          v2 = *(_QWORD *)(v2 + 16);
        }
      }
    }
  }
  return result;
}
