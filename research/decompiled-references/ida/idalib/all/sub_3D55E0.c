__int64 __fastcall sub_3D55E0(__int64 *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  char v9; // al
  char data; // al
  unsigned __int64 v11; // rax

  v6 = sub_3BE900(a1, a2, 1);
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
    v8 = sub_505D70(a1 + 203, a2);
    if ( !v8 )
      return 0;
    if ( (a3 & 0xF00000) == 0xC00000 )
    {
      sub_3C9650(a1, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 2147484672LL, nullptr);
      data = create_data(a2);
      goto LABEL_9;
    }
    v9 = *(_BYTE *)(v8 + 43);
    if ( v9 == 2 )
    {
      if ( (a2 & 7) == 0 )
      {
        data = create_data(a2);
LABEL_9:
        if ( data )
        {
          v6 = sub_3BE900(a1, a2, 1);
          goto LABEL_11;
        }
        return 0;
      }
    }
    else if ( !v9 )
    {
      data = create_16bit_data(a2);
      goto LABEL_9;
    }
    data = create_32bit_data(a2);
    goto LABEL_9;
  }
LABEL_11:
  sub_39ADA0(0x10u, a2, a4, 0);
  v11 = type_flag(a2, v6, a3, a4);
  if ( (unsigned __int8)sub_3D07C0(a1, (void *)a2, v11) )
  {
    if ( qword_2CCB548 )
      qword_2CCB548(a2, 1);
  }
  return 1;
}
