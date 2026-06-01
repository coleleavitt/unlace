_BYTE *__fastcall sub_228AAA0(__int64 a1, __int64 a2, unsigned int a3)
{
  _BYTE *v3; // rbp
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+10h] [rbp-38h]
  __int64 v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]

  v6[0] = a1;
  v7 = 0;
  v6[1] = a2;
  v8 = a2;
  v9 = a3;
  sub_2289610((__int64)v6);
  v3 = (_BYTE *)v7;
  if ( !*((_QWORD *)&v7 + 1) )
    return v3;
  if ( *(_BYTE *)(v7 + *((_QWORD *)&v7 + 1) - 1) == 46 )
  {
    if ( *((_QWORD *)&v7 + 1) == 1 )
    {
      if ( j__strlen(".") == 1 && *v3 == 46 )
        return v3;
      return v3;
    }
  }
  else
  {
    if ( *((_QWORD *)&v7 + 1) == 1 )
      return v3;
    v4 = *((_QWORD *)&v7 + 1) - 2LL;
    if ( *(_BYTE *)(v7 + *((_QWORD *)&v7 + 1) - 2) != 46 )
    {
      while ( v4 )
      {
        --v4;
        if ( *(_BYTE *)(v7 + v4) == 46 )
          goto LABEL_10;
      }
      return v3;
    }
  }
LABEL_10:
  if ( *((_QWORD *)&v7 + 1) == 2 && j__strlen("..") == 2 && *(_WORD *)v3 == 11822 )
    return v3;
  return v3;
}
