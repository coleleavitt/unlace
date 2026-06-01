__int64 __fastcall sub_8FC720(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 *v9; // rax
  bool v10; // bl
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19[7]; // [rsp+0h] [rbp-38h] BYREF

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      result = sub_8FB890(a1 + 384, v11, a3);
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v12 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      result = sub_8FB670(a1 + 384, v12, a3);
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v13 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      result = sub_8FBCD0(a1 + 384, v13, a3);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      result = sub_8FBAB0(a1 + 384, v14, a3);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v15 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      result = sub_8FC120(a1 + 384, v15, a3);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v16 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      result = sub_8FBEF0(a1 + 384, v16, a3);
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v17 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      result = sub_8FC530(a1 + 384, v17, a3);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v18 = *(_QWORD *)(a1 + 792);
      *(_QWORD *)(a1 + 800) = *a4;
      result = sub_8FC340(a1 + 384, v18, a3);
      break;
    case 8:
    case 9:
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v5 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_8F4110((__int64)v19, v5);
        v6 = *(_QWORD *)(a1 + 568);
        v8 = sub_2575D20(v19, v5, v7);
        v9 = v19;
        if ( v19[0] == v8 )
          v9 = (__int64 *)v19[1];
        v10 = (*((_BYTE *)v9 + 20) & 7) != 3;
        *(_BYTE *)sub_A1A4E0(v6, 8) = v10;
        sub_5FF3B0(v19);
      }
LABEL_3:
      result = 1;
      break;
  }
  return result;
}

