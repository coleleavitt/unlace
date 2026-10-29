__int64 __fastcall sub_3CFA90(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  char v9; // al
  char _16bit_data; // al
  __int64 v11; // rax

  v6 = sub_3B9AA0((__int64)a1, a2, 1);
  v7 = v6 & 0x600;
  if ( v7 == 512 )
    return 0;
  if ( v7 == 1024 )
  {
    if ( ((((unsigned int)v6 & 0xF0000000) - 1342177280LL) & 0xFFFFFFFFE0000000LL) != 0 )
      goto LABEL_11;
    return 0;
  }
  if ( (v6 & 0x600) == 0 )
  {
    v8 = sub_4EE820(a1 + 194, a2);
    if ( !v8 )
      return 0;
    if ( (a3 & 0xF00000) != 0xC00000 )
    {
      v9 = *(_BYTE *)(v8 + 23);
      if ( v9 != 2 )
      {
        if ( !v9 )
        {
          _16bit_data = create_16bit_data(a2, 2);
          goto LABEL_9;
        }
        goto LABEL_19;
      }
      if ( (a2 & 7) != 0 )
      {
LABEL_19:
        _16bit_data = create_32bit_data(a2, 4);
LABEL_9:
        if ( _16bit_data )
        {
          v6 = sub_3B9AA0((__int64)a1, a2, 1);
          goto LABEL_11;
        }
        return 0;
      }
    }
    _16bit_data = create_data(a2);
    goto LABEL_9;
  }
LABEL_11:
  sub_396090(0x10u, a2, a4, 0);
  v11 = type_flag(a2, v6, a3, a4);
  if ( (unsigned __int8)sub_3CAE70(a1, a2, v11) )
  {
    if ( qword_2CA1648 )
      qword_2CA1648(a2, 1);
  }
  return 1;
}

