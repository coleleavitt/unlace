_BYTE *__fastcall sub_228AB90(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r13
  _BYTE *v4; // rbp
  unsigned __int64 v5; // rbx
  _BYTE *v6; // r12
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+10h] [rbp-48h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]

  v8[0] = a1;
  v9 = 0;
  v8[1] = a2;
  v10 = a2;
  v11 = a3;
  sub_2289610((__int64)v8);
  v3 = *((_QWORD *)&v9 + 1);
  v4 = (_BYTE *)v9;
  if ( !*((_QWORD *)&v9 + 1) )
    return nullptr;
  v5 = *((_QWORD *)&v9 + 1) - 1LL;
  v6 = (_BYTE *)(v9 + *((_QWORD *)&v9 + 1) - 1LL);
  if ( *v6 == 46 )
  {
    if ( *((_QWORD *)&v9 + 1) == 1 )
    {
      if ( j__strlen(".") == 1 && *v4 == 46 )
        return nullptr;
      goto LABEL_11;
    }
  }
  else
  {
    if ( *((_QWORD *)&v9 + 1) == 1 )
      return nullptr;
    v5 = *((_QWORD *)&v9 + 1) - 2LL;
    v6 = (_BYTE *)(v9 + *((_QWORD *)&v9 + 1) - 2LL);
    if ( *v6 != 46 )
    {
      while ( v5 )
      {
        --v5;
        v6 = (_BYTE *)(v9 + v5);
        if ( *(_BYTE *)(v9 + v5) == 46 )
          goto LABEL_10;
      }
      return nullptr;
    }
  }
LABEL_10:
  if ( *((_QWORD *)&v9 + 1) == 2 && j__strlen("..") == 2 && *(_WORD *)v4 == 11822 )
    return nullptr;
LABEL_11:
  if ( v3 < v5 )
    return &v4[v3];
  return v6;
}
