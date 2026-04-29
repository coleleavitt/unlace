__int64 __fastcall sub_14A060(__int64 a1, __int64 a2)
{
  char v3; // al
  __int64 v4; // rsi
  __int64 result; // rax

LABEL_1:
  v3 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 == 1 )
    goto LABEL_9;
  while ( v3 == 4 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)v4 != 6 )
    {
      if ( (unsigned int)(*(_DWORD *)v4 - 19) > 2 || !(unsigned __int8)sub_14A060(a1, v4 + 32) )
        return 0;
      a2 = *(_QWORD *)(a2 + 8) + 48LL;
      goto LABEL_1;
    }
    v3 = *(_BYTE *)(v4 + 32);
    a2 = v4 + 32;
    if ( v3 == 1 )
    {
LABEL_9:
      result = sub_118AD0(a1, *(_DWORD *)(a2 + 8));
      if ( (_BYTE)result )
        return result;
      v3 = *(_BYTE *)a2;
    }
  }
  return 0;
}
