__int64 __fastcall sub_D357D0(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rsi
  _BYTE v27[24]; // [rsp+0h] [rbp-58h] BYREF
  int v28; // [rsp+18h] [rbp-40h]
  __int64 v29; // [rsp+20h] [rbp-38h]

  v4 = 1;
  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v10 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D16160(a1 + 384, v10, a3);
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v11 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D16220(a1 + 384, v11, a3);
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D162E0(a1 + 384, v12, a3);
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v13 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D163A0(a1 + 384, v13, a3);
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v14 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D16460(a1 + 384, v14, a3);
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v15 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D16520(a1 + 384, v15, a3);
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D165E0(a1 + 384, v16, a3);
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D166A0(a1 + 384, v17, a3);
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D16760(a1 + 384, v18, a3);
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v19 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D16820(a1 + 384, v19, a3);
      }
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v20 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D168E0(a1 + 384, v20, a3);
      }
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v21 = *(_QWORD *)(a1 + 552);
        v22 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E291A0(v27, v21, a3);
        v23 = sub_CFDF60((__int64)v27);
        if ( (unsigned __int8)sub_DC8690(a1 + 384, v22, v23) && (v28 || !v29 || !*(_BYTE *)(v29 + 25)) )
        {
          v4 = sub_DC9F80(a1 + 384, v22, v27);
          if ( (_BYTE)v4 )
          {
            v24 = sub_D0F1C0((__int64)v27);
            sub_D0BA90(*(_QWORD *)(a1 + 560), v24);
            goto LABEL_41;
          }
        }
        goto LABEL_44;
      }
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v25 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D16B30(a1 + 384, v25, a3);
      }
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v26 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v4 = sub_D169A0(a1 + 384, v26, a3);
      }
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = *(_QWORD *)(a1 + 552);
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        sub_E291A0(v27, v6, a3);
        v8 = sub_CFDF60((__int64)v27);
        if ( (unsigned __int8)sub_DC8690(a1 + 384, v7, v8)
          && (v28 || !v29 || !*(_BYTE *)(v29 + 25))
          && (v4 = sub_DC9F80(a1 + 384, v7, v27), (_BYTE)v4) )
        {
          v9 = sub_D0EF40((__int64)v27);
          sub_D32BB0(*(_QWORD *)(a1 + 560), v9);
        }
        else
        {
LABEL_44:
          v4 = 0;
        }
LABEL_41:
        sub_E232A0(v27);
      }
      break;
  }
  return v4;
}
