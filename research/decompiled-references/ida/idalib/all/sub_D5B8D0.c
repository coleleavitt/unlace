__int64 __fastcall sub_D5B8D0(__int64 a1, int a2, unsigned __int8 a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  __int64 v7; // r14
  __int64 v8; // rsi
  unsigned int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rbp
  __int64 v24; // rsi
  _BYTE v25[88]; // [rsp+0h] [rbp-58h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v10 = *(_QWORD *)(a1 + 1232);
      v11 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v25, v11);
      v9 = sub_DCC160(a1 + 384, v10, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D35D40(a1 + 384, v10, (__int64)v25, a3);
      goto LABEL_33;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        return (unsigned int)sub_D0CAE0((_QWORD *)a1, a3, a4);
      return v5;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v12 = *(_QWORD *)(a1 + 1232);
      v13 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v25, v13);
      v9 = sub_DCC160(a1 + 384, v12, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D35FD0(a1 + 384, v12, (__int64)v25, a3);
      goto LABEL_33;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        return (unsigned int)sub_D0D0E0((_QWORD *)a1, a3, a4);
      return v5;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v14 = *(_QWORD *)(a1 + 1232);
      v15 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v25, v15);
      v9 = sub_DCC160(a1 + 384, v14, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D36260(a1 + 384, v14, (__int64)v25, a3);
      goto LABEL_33;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        return (unsigned int)sub_D0D800((_QWORD *)a1, a3, a4);
      return v5;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v16 = *(_QWORD *)(a1 + 1232);
      v17 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v25, v17);
      v9 = sub_DCC160(a1 + 384, v16, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D364F0(a1 + 384, v16, (__int64)v25, a3);
      goto LABEL_33;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        return (unsigned int)sub_D0E000((_QWORD *)a1, a3, a4);
      return v5;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v18 = *(_QWORD *)(a1 + 1232);
      v19 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v25, v19);
      v9 = sub_DCC160(a1 + 384, v18, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D59B60(a1 + 384, v18, (__int64)v25, a3);
      goto LABEL_33;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v20 = *(_QWORD *)(a1 + 1232);
      v21 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v25, v21);
      v9 = sub_DCC160(a1 + 384, v20, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D5B4F0(a1 + 384, v20, (__int64)v25, a3);
      goto LABEL_33;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v22 = *(_QWORD *)(a1 + 1232);
      v23 = a1 + 384;
      v24 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v25, v24);
      v9 = sub_DCC160(a1 + 384, v22, v25, 4);
      if ( (_BYTE)v9 )
      {
        v9 = sub_E21C70(v23);
        if ( (_BYTE)v9 || !(unsigned __int8)sub_DC7D30(v25) )
        {
          if ( (*(_BYTE *)(sub_E32240(v23) + 1) & 0x20) != 0 )
            sub_2E7832(v23, (__int64)v25);
          v9 = sub_CFEE20(v23, v22);
        }
      }
      goto LABEL_33;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v7 = *(_QWORD *)(a1 + 1232);
      v8 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_D09010((__int64)v25, v8);
      v9 = sub_DCC160(a1 + 384, v7, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D36780(a1 + 384, v7, (__int64)v25, a3);
LABEL_33:
      sub_E232A0(v25);
      return v9;
  }
}
