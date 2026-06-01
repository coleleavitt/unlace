__int64 __fastcall sub_CB5260(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rbx
  _QWORD v9[4]; // [rsp+8h] [rbp-20h] BYREF

  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v9[0] = a3 | 4;
      result = sub_CE4700(a2, v9);
      break;
    case 1:
      v5 = *(unsigned int *)(a1 + 8);
      v9[0] = a3 | 4;
      result = sub_CE2580(a2, v5, v9);
      break;
    case 2:
      v6 = *(unsigned int *)(a1 + 8);
      v9[0] = a3 | 4;
      result = sub_CDB9E0(a2, v6, v9);
      break;
    case 3:
      result = sub_CB4A90(a2, *(_QWORD *)(a1 + 8), a3);
      break;
    case 4:
    case 7:
      result = 1;
      break;
    case 5:
      v7 = *(unsigned int *)(a1 + 8);
      v8 = a3 | 4;
      v9[0] = a3 | 4;
      result = sub_CDCCE0(a2, v7, v9);
      if ( (_BYTE)result )
      {
        v9[0] = v8;
        result = sub_D08330(a2, v9);
      }
      break;
    case 6:
      v9[0] = a3 | 4;
      result = sub_CE43A0(a2, v9);
      break;
  }
  return result;
}

