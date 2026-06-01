__int64 __fastcall sub_D2FA50(__int64 a1, int a2, unsigned __int8 a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rsi
  _BYTE *v23; // r12
  _BYTE v24[104]; // [rsp+0h] [rbp-68h] BYREF

  v5 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v9 = *(_QWORD *)(a1 + 1232);
        v10 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)v24, v10);
        v5 = sub_DA8420(a1 + 384, v9, v24, 3);
        if ( (_BYTE)v5 )
          v5 = sub_D147D0(a1 + 384, v9, (__int64)v24, a3);
        goto LABEL_33;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        v5 = sub_CE8CB0((_QWORD *)a1, a3, a4);
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v11 = *(_QWORD *)(a1 + 1232);
        v12 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)v24, v12);
        v5 = sub_DA8420(a1 + 384, v11, v24, 3);
        if ( (_BYTE)v5 )
          v5 = sub_D14A50(a1 + 384, v11, (__int64)v24, a3);
        goto LABEL_33;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        v5 = sub_CE92B0((_QWORD *)a1, a3, a4);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(a1 + 1232);
        v14 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)v24, v14);
        v5 = sub_DA8420(a1 + 384, v13, v24, 3);
        if ( (_BYTE)v5 )
          v5 = sub_D14CE0(a1 + 384, v13, (__int64)v24, a3);
        goto LABEL_33;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        v5 = sub_CE9BA0((_QWORD *)a1, a3, a4);
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v15 = *(_QWORD *)(a1 + 1232);
        v16 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)v24, v16);
        v5 = sub_DA8420(a1 + 384, v15, v24, 3);
        if ( (_BYTE)v5 )
          v5 = sub_D14F70(a1 + 384, v15, (__int64)v24, a3);
        goto LABEL_33;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
        v5 = sub_CEA3B0((_QWORD *)a1, a3, a4);
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        v18 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)v24, v18);
        v5 = sub_DA8420(a1 + 384, v17, v24, 3);
        if ( (_BYTE)v5 )
          v5 = sub_D2EAA0(a1 + 384, v17, (__int64)v24, a3);
        goto LABEL_33;
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v19 = *(_QWORD *)(a1 + 1232);
        v20 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)v24, v20);
        v5 = sub_DA8420(a1 + 384, v19, v24, 3);
        if ( (_BYTE)v5 )
          v5 = sub_D2F670(a1 + 384, v19, (__int64)v24, a3);
        goto LABEL_33;
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v21 = *(_QWORD *)(a1 + 1232);
        v22 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)v24, v22);
        v5 = sub_DA8420(a1 + 384, v21, v24, 3);
        if ( (_BYTE)v5 )
        {
          if ( !(unsigned __int8)sub_DFDF30(a1 + 384) && (unsigned __int8)sub_DA3FF0(v24) )
          {
            v5 = 0;
          }
          else if ( (*(_BYTE *)(sub_E0E500(a1 + 384) + 1) & 0x20) != 0 )
          {
            v23 = (_BYTE *)sub_CEAA70((__int64)v24);
            *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = *v23;
            *(_BYTE *)sub_CEAA70((__int64)v24) = 1;
          }
          else
          {
            v5 = sub_CDB0E0(a1 + 384, v21);
          }
        }
        goto LABEL_33;
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 1232);
        v8 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_CE52D0((__int64)v24, v8);
        v5 = sub_DA8420(a1 + 384, v7, v24, 3);
        if ( (_BYTE)v5 )
          v5 = sub_D15200(a1 + 384, v7, (__int64)v24, a3);
LABEL_33:
        sub_DFF560(v24);
      }
      break;
  }
  return v5;
}

