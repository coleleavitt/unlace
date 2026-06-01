__int64 __fastcall sub_D34650(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v6 = *(_QWORD *)(a1 + 1232);
      v7 = a1 + 384;
      *(_QWORD *)(v7 + 856) = *a3;
      result = sub_D05390(v7, v6);
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v8 = *(_QWORD *)(a1 + 1232);
      v9 = a1 + 384;
      *(_QWORD *)(v9 + 856) = *a3;
      result = sub_CFF230(v9, v8);
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v10 = *(_QWORD *)(a1 + 1232);
      v11 = a1 + 384;
      *(_QWORD *)(v11 + 856) = *a3;
      result = sub_D05E40(v11, v10);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v12 = *(_QWORD *)(a1 + 1232);
      v13 = a1 + 384;
      *(_QWORD *)(v13 + 856) = *a3;
      result = sub_D06850(v13, v12);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 1232);
      v15 = a1 + 384;
      *(_QWORD *)(v15 + 856) = *a3;
      result = sub_D07300(v15, v14);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v16 = *(_QWORD *)(a1 + 1232);
      v17 = a1 + 384;
      *(_QWORD *)(v17 + 856) = *a3;
      result = sub_D07D10(v17, v16);
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v18 = *(_QWORD *)(a1 + 1232);
      v19 = a1 + 384;
      *(_QWORD *)(v19 + 856) = *a3;
      result = sub_D08C30(v19, v18);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v20 = *(_QWORD *)(a1 + 1232);
      v21 = a1 + 384;
      *(_QWORD *)(v21 + 856) = *a3;
      result = sub_D09640(v21, v20);
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v22 = *(_QWORD *)(a1 + 1232);
      v23 = a1 + 384;
      *(_QWORD *)(v23 + 856) = *a3;
      result = sub_D246C0(v23, v22);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v24 = *(_QWORD *)(a1 + 1232);
      v25 = a1 + 384;
      *(_QWORD *)(v25 + 856) = *a3;
      result = sub_D34410(v25, v24);
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v26 = *(_QWORD *)(a1 + 1232);
      v27 = a1 + 384;
      *(_QWORD *)(v27 + 856) = *a3;
      result = sub_D0A270(v27, v26);
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = *(_QWORD *)(a1 + 1232);
        v5 = a1 + 384;
        *(_QWORD *)(v5 + 856) = *a3;
        result = sub_D0AE50(v5, v4);
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

