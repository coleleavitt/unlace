_QWORD *__fastcall sub_780C30(__int64 a1)
{
  __int64 v1; // rdx
  _QWORD *result; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx

  v1 = *(_QWORD *)(a1 + 152);
  result = nullptr;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 152) & 6LL;
    if ( v3 == 2 )
    {
      v4 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v4 )
      {
        result = (_QWORD *)v4;
        return (_QWORD *)(*result & 0xFFFFFFFFFFFFFFF8LL);
      }
    }
    else if ( v3 == 4 )
    {
      v5 = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v5 )
      {
        if ( (*(_BYTE *)(v5 + 8) & 4) != 0 )
        {
          result = *(_QWORD **)(v5 + 48);
          if ( result )
            return (_QWORD *)(*result & 0xFFFFFFFFFFFFFFF8LL);
        }
      }
    }
  }
  return result;
}

