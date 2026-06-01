__int64 __fastcall sub_CC6080(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v7; // eax
  unsigned int v8; // ebp
  __int64 v10; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // ebp
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a3;
  v7 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 2 )
    return (unsigned int)sub_CB7B60((__int64)a1, a2 + 8, a3, a4);
  if ( v7 == 3 )
  {
    v12 = sub_21F90D0(a1, a2, a3);
    v13 = a2 + 8;
    if ( *(_QWORD *)(a2 + 8) == v12 )
      sub_21FFE60(v17, v13);
    else
      sub_21F97A0(v17, v13);
    v14 = sub_CB2770((__int64)a1, v17, a4);
    sub_9955A0(v17);
    return v14;
  }
  else
  {
    if ( v7 == 7 )
    {
      v8 = sub_A510C0(a2);
      if ( (_BYTE)v8 )
      {
        v17[0] = a4 | 4;
        return (unsigned int)sub_CA7F50(a1, v4, 0, 0, v17);
      }
      else
      {
        v15 = sub_A51060(a2);
        if ( v15 )
        {
          if ( (v15 & 3) == 1 )
          {
            if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              return (*(unsigned int (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 40LL))(
                       a1,
                       v15 & 0xFFFFFFFFFFFFFFFCLL);
          }
          else if ( (v15 & 3) == 0 )
          {
            v16 = v15 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v16 )
              return (unsigned int)sub_CC55C0((__int64)a1, v16, a4);
          }
        }
      }
    }
    else
    {
      v8 = 0;
      if ( v7 == 12 )
      {
        v10 = a4 | 4;
        v11 = sub_A51390(a2);
        v17[0] = v10;
        if ( v11 )
          return (unsigned int)sub_CA9300(a1, v11, v17);
        else
          return (unsigned int)sub_CAA9C0(a1, 0, 0, v17);
      }
    }
    return v8;
  }
}
