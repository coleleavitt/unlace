unsigned __int8 *__fastcall sub_2091400(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx

  result = *(unsigned __int8 **)(a1 - 32LL * (*(_DWORD *)(a1 + 4) & 0x7FFFFFF));
  v7 = *result;
  if ( (unsigned __int8)v7 > 1u )
  {
    if ( (_BYTE)v7 == 9 )
    {
      return (unsigned __int8 *)sub_2057E60(*((_QWORD **)result + 1), a2, v7, a4, a5, a6);
    }
    else if ( (_BYTE)v7 == 95 )
    {
      v8 = sub_204C3A0(*((_QWORD *)result + 5));
      v9 = *(_QWORD *)(v8 + 48);
      if ( v9 == v8 + 48 )
      {
        return nullptr;
      }
      else
      {
        if ( !v9 )
          BUG();
        result = (unsigned __int8 *)(v9 - 24);
        if ( (unsigned int)*(unsigned __int8 *)(v9 - 24) - 30 >= 0xB )
          return nullptr;
      }
    }
  }
  return result;
}
