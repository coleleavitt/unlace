__int64 __fastcall sub_1AF0130(__int64 *a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rdx

  result = *((unsigned __int8 *)a1 + 12);
  v2 = *((_DWORD *)a1 + 2);
  if ( (_BYTE)result )
  {
    if ( v2 <= 0x40 )
    {
      v3 = *a1;
LABEL_10:
      LOBYTE(result) = v3 == 0;
      return (unsigned int)result ^ 1;
    }
LABEL_6:
    LODWORD(result) = sub_2206780(a1);
    LOBYTE(result) = (_DWORD)result == v2;
    return (unsigned int)result ^ 1;
  }
  v3 = *a1;
  v4 = 1LL << ((unsigned __int8)v2 - 1);
  if ( v2 <= 0x40 )
  {
    if ( (v4 & v3) != 0 )
      return result;
    goto LABEL_10;
  }
  if ( (v4 & *(_QWORD *)(v3 + 8LL * ((v2 - 1) >> 6))) == 0 )
    goto LABEL_6;
  return result;
}
