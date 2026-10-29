__int64 __fastcall sub_1EA8800(__int64 a1, unsigned int *a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  bool v5; // cl

  v3 = *a2;
  *((_BYTE *)a2 + 4) |= 1u;
  result = v3 >> 9;
  if ( (unsigned int)(unsigned __int16)result - 28 <= 6 )
  {
    v5 = 1;
    if ( (unsigned __int16)result != 28 )
    {
      if ( (*((_BYTE *)a2 + 3) & 0x24) != 0 )
        goto LABEL_5;
      goto LABEL_9;
    }
  }
  else
  {
    v5 = (unsigned __int16)result != 65534 && (unsigned __int16)(result - 37) <= 0xFFDAu;
    if ( v5 )
      goto LABEL_4;
  }
  result = (unsigned int)(result - 1);
  v5 = (unsigned __int16)result <= 0x19u;
LABEL_4:
  if ( (*((_BYTE *)a2 + 3) & 0x24) != 0 )
  {
LABEL_5:
    *((_BYTE *)a2 + 4) |= 2u;
    return result;
  }
LABEL_9:
  if ( a3 != 1 && v5 )
    goto LABEL_5;
  if ( (a2[1] & 8) != 0 )
    goto LABEL_5;
  if ( !a3 || (result = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL), (*(_BYTE *)(result + 1) & 8) == 0) )
  {
    if ( *((_QWORD *)a2 + 1) )
      goto LABEL_5;
  }
  return result;
}
