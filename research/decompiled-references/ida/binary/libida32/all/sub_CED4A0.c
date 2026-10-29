__int64 __fastcall sub_CED4A0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  bool v13; // bp
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  _QWORD v22[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v23[7]; // [rsp+10h] [rbp-38h] BYREF

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v14 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        result = sub_CEC450(a1 + 384, v14, a3);
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v15 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        result = sub_CEC660(a1 + 384, v15, a3);
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        result = sub_CEC870(a1 + 384, v16, a3);
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        result = sub_CECA80(a1 + 384, v17, a3);
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        result = sub_CECC90(a1 + 384, v18, a3);
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v19 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        result = sub_CECEA0(a1 + 384, v19, a3);
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v20 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        result = sub_CED0C0(a1 + 384, v20, a3);
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v21 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        result = sub_CED2B0(a1 + 384, v21, a3);
      }
      break;
    case 8:
    case 9:
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = *(_QWORD *)(a1 + 560);
        *(_QWORD *)(a1 + 1240) = *a4;
        v7 = sub_CE4EC0(v6);
        v8 = *(_QWORD *)(a1 + 560);
        v22[1] = v9;
        v22[0] = v7;
        sub_CDADA0((__int64)v23, (__int64)v22);
        v11 = sub_21D5390(v23, v22, v10);
        v12 = v23;
        if ( v23[0] == v11 )
          v12 = (_QWORD *)v23[1];
        v13 = (*((_BYTE *)v12 + 20) & 7) != 3;
        sub_971860(v23);
        *(_BYTE *)sub_DFD980(v8, 8) = v13;
        result = 1;
      }
      break;
  }
  return result;
}

