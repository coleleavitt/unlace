void __fastcall sub_9820(__int64 a1, unsigned int a2, unsigned __int8 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax

  v7 = a6;
  if ( !(_BYTE)a4 )
    return;
  v8 = a4;
  if ( (unsigned __int8)(a4 - 3) <= 0x3Cu )
  {
    v10 = 0x800000041C013F98LL;
    if ( _bittest64((const __int64 *)&v10, v8) )
      return;
  }
  if ( a3 > 0xEu )
  {
    v11 = a3;
    if ( (unsigned __int8)(a3 - 15) > 0xCu )
      goto LABEL_18;
    v12 = 1LL << a3;
    v13 = v12;
    if ( (v12 & 0x9008000) != 0 )
    {
LABEL_31:
      v14 = 1;
    }
    else
    {
      if ( (v12 & 0x260000) != 0 )
      {
LABEL_19:
        if ( (_BYTE)v8 != 1 )
        {
          v15 = (unsigned __int8)v8;
          if ( (unsigned __int8)(v8 - 2) > 0x3Du )
            goto LABEL_24;
          v17 = 1LL << v8;
          if ( (v17 & 0x800000041C013F98LL) != 0 )
            return;
          if ( (v17 & 0x4040) == 0 )
          {
            v14 = 4294967294LL;
            v7 = -1;
            if ( (v17 & 0x24) != 0 )
              goto LABEL_26;
            goto LABEL_24;
          }
LABEL_32:
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 16LL))(
            a1,
            a2,
            a5,
            0,
            1,
            -1);
          return;
        }
        v14 = 4294967294LL;
        v7 = -1;
LABEL_26:
        sub_97E0(a1, a2, v7, a5, v14, 0);
        return;
      }
      v14 = 0;
      if ( (v13 & 0x6400000) == 0 )
        goto LABEL_18;
    }
LABEL_12:
    if ( (_BYTE)v8 != 1 )
    {
      v15 = (unsigned __int8)v8;
      if ( (unsigned __int8)(v8 - 2) > 0x3Du )
        goto LABEL_24;
      v16 = 1LL << v8;
      if ( (v16 & 0x800000041C013F98LL) != 0 )
        return;
      if ( (v16 & 0x4040) == 0 )
      {
        if ( (v16 & 0x24) != 0 )
          goto LABEL_26;
LABEL_24:
        sub_59A0((__int64)"Untested symbol type %d\n", v15);
        return;
      }
      if ( a6 != -1 )
      {
        sub_11E40(a1, a2, a6, a5, 0, 0);
        return;
      }
      goto LABEL_32;
    }
    goto LABEL_26;
  }
  v11 = 0;
  if ( !a3 )
  {
LABEL_18:
    sub_59A0((__int64)"Untested symbol class %d\n", v11);
    return;
  }
  switch ( a3 )
  {
    case 1u:
      goto LABEL_31;
    case 2u:
    case 0xDu:
      v14 = 5;
      goto LABEL_12;
    case 3u:
    case 0xEu:
      v14 = 9;
      goto LABEL_12;
    case 4u:
    case 5u:
      return;
    case 6u:
      goto LABEL_19;
    default:
      v11 = a3;
      goto LABEL_18;
  }
}

