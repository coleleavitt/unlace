__int64 __fastcall sub_7FCF90(__int64 *a1, _BYTE *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned int v8; // r12d
  _QWORD *v9; // rax
  __int64 v10; // r13
  __int64 *v11; // rax
  __int64 *v12; // rbp
  __int64 v13; // r9
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !(unsigned __int8)sub_7F0190(a1, (__int64)a2, a3, a4, a5, a6) )
    return 0;
  if ( (a2[28] & 0x7F) == 0x29 )
  {
    if ( !(unsigned __int8)sub_77D680((__int64)a2) )
      goto LABEL_5;
    goto LABEL_4;
  }
  v15 = sub_77BC00((__int64)a2);
  if ( !(unsigned __int8)sub_7EBA80(a1, v15) )
    return 0;
  if ( (unsigned __int8)sub_77D680((__int64)a2) )
  {
LABEL_4:
    if ( (a2[97] & 6) == 4 )
    {
      v17 = sub_77D670((__int64)a2);
      if ( !(unsigned __int8)sub_7EBA80(a1, v17) )
        return 0;
    }
  }
LABEL_5:
  if ( (unsigned __int8)sub_77D680((__int64)a2) )
  {
    if ( (((a2[97] & 6) - 2) & 0xFC) != 0 )
    {
      v16 = sub_77D590((__int64)a2);
      if ( !(unsigned __int8)sub_7EBA80(a1, v16) )
        return 0;
    }
  }
  v7 = 0;
  if ( (unsigned __int8)sub_79B790((__int64)a2) )
    v7 = sub_79AC10((__int64)a2);
  v8 = sub_7E1600(a1, v7);
  if ( !(_BYTE)v8 )
    return 0;
  if ( (a2[29] & 1) != 0 )
  {
    v9 = sub_79A2B0((__int64)a2);
    v10 = *v9 + 8LL * *((unsigned int *)v9 + 2);
    v11 = nullptr;
    if ( (a2[29] & 1) != 0 )
      v11 = (__int64 *)*sub_79A2B0((__int64)a2);
    if ( (__int64 *)v10 != v11 )
    {
      v12 = v11;
      while ( 1 )
      {
        v13 = *a1;
        v18[0] = *v12;
        if ( !(unsigned __int8)sub_7F2380((__int64)a1, v18[0], v18[0], v18, a1, v13) )
          break;
        if ( (__int64 *)v10 == ++v12 )
          return v8;
      }
      return 0;
    }
  }
  return v8;
}

