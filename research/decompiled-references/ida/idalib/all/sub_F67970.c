unsigned __int64 __fastcall sub_F67970(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rax

  v3 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v3 + 16) - 43 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
    && (v3 = sub_F62E70(v3)) != 0 )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(v3 + 32);
      if ( (*(_BYTE *)(v3 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v3 = *(_QWORD *)(result & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v3 + 16) - 43 <= 1 )
          break;
        v5 = sub_F62E70(v3);
        result = *(_QWORD *)(v5 + 32);
        if ( (*(_BYTE *)(v5 + 18) & 0x10) == 0 )
          return result;
      }
    }
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(a2 + 2320) + 1LL) & 8) != 0
         && ((v6 = *(_QWORD *)(*a1 & 0xFFFFFFFFFFFFFFF0LL), (*(_BYTE *)(v6 + 17) & 4) != 0)
          || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48) )
  {
    return *a1;
  }
  else
  {
    return sub_6D5440(a1);
  }
  return result;
}
