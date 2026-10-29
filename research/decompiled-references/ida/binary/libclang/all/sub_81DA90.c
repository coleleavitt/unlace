__int64 __fastcall sub_81DA90(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  char v4; // dl
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  bool v8; // zf

  if ( (*(_BYTE *)(a1 + 1) & 8) == 0 )
    return 11;
  v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v3 = *(_QWORD *)v2;
  v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  result = 0;
  if ( v4 != 42 )
  {
    if ( *(_BYTE *)(v3 + 16) == 43 )
    {
LABEL_4:
      while ( 1 )
      {
        v6 = *(_QWORD *)(v3 + 32);
        if ( (*(_BYTE *)(v3 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v3 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v3 + 16) - 42 <= 1 )
            break;
          v7 = sub_B0D320(v3);
          v8 = (*(_BYTE *)(v7 + 18) & 0x10) == 0;
          v6 = *(_QWORD *)(v7 + 32);
          if ( v8 )
            return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 25 > 1;
        }
      }
      return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 > 1;
    }
    if ( v4 == 43 )
    {
      v3 = sub_B0D320(v3);
      if ( v3 )
        goto LABEL_4;
      v4 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    }
    result = 8;
    if ( v4 != 47 )
    {
      result = 9;
      if ( (unsigned __int8)(v4 - 2) > 4u )
        return 11;
    }
  }
  return result;
}

