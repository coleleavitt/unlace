__int64 __fastcall sub_CB7B60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r8d
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // [rsp+8h] [rbp-20h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h] BYREF
  int v12; // [rsp+18h] [rbp-10h]

  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_QWORD *)a2;
  if ( (_DWORD)a3 == 9 )
  {
    v12 = *(_DWORD *)(a2 + 8);
    v10 = a4 | 4;
    if ( v4 > 0x40 )
    {
      v11 = v5;
    }
    else
    {
      v8 = 0;
      if ( v4 )
        v8 = v5 << (64 - (unsigned __int8)v4) >> (64 - (unsigned __int8)v4);
      v11 = v8;
    }
    return sub_CA8C90(a1, (__int64)&v11, &v10);
  }
  else if ( (_DWORD)a3 == 8 )
  {
    v12 = *(_DWORD *)(a2 + 8);
    v10 = a4 | 4;
    v11 = v5;
    return sub_CA8B20(a1, (__int64)&v11, &v10);
  }
  else if ( *(_BYTE *)(a2 + 12) )
  {
    v9 = *(_QWORD *)a2;
    if ( v4 > 0x40 )
      v9 = *(_QWORD *)v5;
    return sub_CB77B0(a1, v9, a3, a4);
  }
  else
  {
    if ( v4 > 0x40 )
    {
      v6 = *(_QWORD *)v5;
    }
    else
    {
      v6 = 0;
      if ( v4 )
        v6 = v5 << (64 - (unsigned __int8)v4) >> (64 - (unsigned __int8)v4);
    }
    return sub_CB7AA0(a1, v6, a3, a4);
  }
}
