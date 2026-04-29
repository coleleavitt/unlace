_QWORD *__fastcall sub_102580(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // cl
  __int64 v6; // rcx

  result = a1;
  if ( a1 )
  {
    v3 = *a1 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v3 )
      return nullptr;
    if ( (*(_BYTE *)v3 & 2) == 0 )
    {
      v4 = *(_BYTE *)(a2 + 32);
      while ( 1 )
      {
        v5 = *(_BYTE *)(v3 + 56);
        if ( v4 >= v5 )
        {
          if ( v5 < v4 )
            goto LABEL_14;
          v6 = *(_QWORD *)(v3 + 48);
          if ( *(_QWORD *)(a2 + 24) >= v6 )
            break;
        }
        v3 = *(_QWORD *)(v3 + 8);
LABEL_12:
        if ( (*(_BYTE *)v3 & 2) != 0 )
          return result;
      }
      if ( *(_QWORD *)(a2 + 24) <= v6 )
        return (_QWORD *)v3;
LABEL_14:
      v3 = *(_QWORD *)(v3 + 16);
      goto LABEL_12;
    }
  }
  return result;
}
