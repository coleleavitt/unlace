__int64 __fastcall sub_D37B90(__int64 a1, int a2, unsigned __int8 a3, _QWORD *a4)
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
      sub_CE52D0((__int64)v25, v11);
      v9 = sub_DA8420(a1 + 384, v10, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D12000(a1 + 384, v10, (__int64)v25, a3);
      goto LABEL_33;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        return (unsigned int)sub_CE8DA0((_QWORD *)a1, a3, a4);
      return v5;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v12 = *(_QWORD *)(a1 + 1232);
      v13 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v25, v13);
      v9 = sub_DA8420(a1 + 384, v12, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D12290(a1 + 384, v12, (__int64)v25, a3);
      goto LABEL_33;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        return (unsigned int)sub_CE93A0((_QWORD *)a1, a3, a4);
      return v5;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v14 = *(_QWORD *)(a1 + 1232);
      v15 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v25, v15);
      v9 = sub_DA8420(a1 + 384, v14, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D12520(a1 + 384, v14, (__int64)v25, a3);
      goto LABEL_33;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        return (unsigned int)sub_CE9AC0((_QWORD *)a1, a3, a4);
      return v5;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v16 = *(_QWORD *)(a1 + 1232);
      v17 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v25, v17);
      v9 = sub_DA8420(a1 + 384, v16, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D127B0(a1 + 384, v16, (__int64)v25, a3);
      goto LABEL_33;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        return (unsigned int)sub_CEA2C0((_QWORD *)a1, a3, a4);
      return v5;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v18 = *(_QWORD *)(a1 + 1232);
      v19 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v25, v19);
      v9 = sub_DA8420(a1 + 384, v18, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D35E20(a1 + 384, v18, (__int64)v25, a3);
      goto LABEL_33;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v20 = *(_QWORD *)(a1 + 1232);
      v21 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v25, v21);
      v9 = sub_DA8420(a1 + 384, v20, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D377B0(a1 + 384, v20, (__int64)v25, a3);
      goto LABEL_33;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v22 = *(_QWORD *)(a1 + 1232);
      v23 = a1 + 384;
      v24 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v25, v24);
      v9 = sub_DA8420(a1 + 384, v22, v25, 4);
      if ( (_BYTE)v9 )
      {
        v9 = sub_DFDF30(v23);
        if ( (_BYTE)v9 || !(unsigned __int8)sub_DA3FF0(v25) )
        {
          if ( (*(_BYTE *)(sub_E0E500(v23) + 1) & 0x20) != 0 )
            sub_2E4412(v23, (__int64)v25);
          v9 = sub_CDB0E0(v23, v22);
        }
      }
      goto LABEL_33;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        return v5;
      v7 = *(_QWORD *)(a1 + 1232);
      v8 = *(_QWORD *)(a1 + 560);
      *(_QWORD *)(a1 + 1240) = *a4;
      sub_CE52D0((__int64)v25, v8);
      v9 = sub_DA8420(a1 + 384, v7, v25, 4);
      if ( (_BYTE)v9 )
        v9 = sub_D12A40(a1 + 384, v7, (__int64)v25, a3);
LABEL_33:
      sub_DFF560(v25);
      return v9;
  }
}

