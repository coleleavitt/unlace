__int64 __fastcall sub_D4CD90(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v5 = *(_QWORD *)(a1 + 1232);
      v6 = a1 + 384;
      *(_QWORD *)(v6 + 856) = *a3;
      result = sub_D4AA00(v6, v5);
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v7 = *(_QWORD *)(a1 + 1232);
      v8 = a1 + 384;
      *(_QWORD *)(v8 + 856) = *a3;
      result = sub_CEFA60(v8, v7);
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v9 = *(_QWORD *)(a1 + 1232);
      v10 = a1 + 384;
      *(_QWORD *)(v10 + 856) = *a3;
      result = sub_D4B470(v10, v9);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 1232);
      v12 = a1 + 384;
      *(_QWORD *)(v12 + 856) = *a3;
      result = sub_CEFCC0(v12, v11);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v13 = *(_QWORD *)(a1 + 1232);
      v14 = a1 + 384;
      *(_QWORD *)(v14 + 856) = *a3;
      result = sub_D4BF00(v14, v13);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v15 = *(_QWORD *)(a1 + 1232);
      v16 = a1 + 384;
      *(_QWORD *)(v16 + 856) = *a3;
      result = sub_CEFF20(v16, v15);
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v17 = *(_QWORD *)(a1 + 1232);
      v18 = a1 + 384;
      *(_QWORD *)(v18 + 856) = *a3;
      result = sub_D4C970(v18, v17);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v19 = *(_QWORD *)(a1 + 1232);
      v20 = a1 + 384;
      *(_QWORD *)(v20 + 856) = *a3;
      result = sub_CF0180(v20, v19);
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v21 = *(_QWORD *)(a1 + 1232);
      v22 = a1 + 384;
      *(_QWORD *)(v22 + 856) = *a3;
      result = sub_D361C0(v22, v21);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v23 = *(_QWORD *)(a1 + 1232);
      v24 = a1 + 384;
      *(_QWORD *)(v24 + 856) = *a3;
      result = sub_D38050(v24, v23);
      break;
    case 10:
    case 11:
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = (_QWORD *)(a1 + 384);
        v4[107] = *a3;
        result = sub_D20D60(v4);
      }
      else
      {
LABEL_3:
        result = 1;
      }
      break;
  }
  return result;
}

