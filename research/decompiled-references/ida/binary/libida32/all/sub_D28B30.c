__int64 __fastcall sub_D28B30(__int64 a1, int a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rsi
  _QWORD *v21; // rdi
  __int64 v22; // rsi
  _QWORD *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rsi
  _QWORD *v29; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v8 = *(_QWORD *)(a1 + 1232);
      v9 = (_QWORD *)(a1 + 384);
      v9[107] = *a5;
      result = sub_D1E8D0(v9, v8, a3, a4);
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v10 = *(_QWORD *)(a1 + 1232);
      v11 = (_QWORD *)(a1 + 384);
      v11[107] = *a5;
      result = sub_D1EAA0(v11, v10, a3, a4);
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v12 = *(_QWORD *)(a1 + 1232);
      v13 = (_QWORD *)(a1 + 384);
      v13[107] = *a5;
      result = sub_D1EC70(v13, v12, a3, a4);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 1232);
      v15 = (_QWORD *)(a1 + 384);
      v15[107] = *a5;
      result = sub_D1EE40(v15, v14, a3, a4);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v16 = *(_QWORD *)(a1 + 1232);
      v17 = (_QWORD *)(a1 + 384);
      v17[107] = *a5;
      result = sub_D1F010(v17, v16, a3, a4);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v18 = *(_QWORD *)(a1 + 1232);
      v19 = (_QWORD *)(a1 + 384);
      v19[107] = *a5;
      result = sub_D1F1E0(v19, v18, a3, a4);
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v20 = *(_QWORD *)(a1 + 1232);
      v21 = (_QWORD *)(a1 + 384);
      v21[107] = *a5;
      result = sub_D1F3B0(v21, v20, a3, a4);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v22 = *(_QWORD *)(a1 + 1232);
      v23 = (_QWORD *)(a1 + 384);
      v23[107] = *a5;
      result = sub_D1F580(v23, v22, a3, a4);
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v24 = *(_QWORD *)(a1 + 1232);
      v25 = a1 + 384;
      *(_QWORD *)(v25 + 856) = *a5;
      result = sub_D25260((void **)v25, v24, a3, a4);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v26 = *(_QWORD *)(a1 + 1232);
      v27 = a1 + 384;
      *(_QWORD *)(v27 + 856) = *a5;
      result = sub_D28970((void **)v27, v26, a3, a4);
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v28 = *(_QWORD *)(a1 + 1232);
      v29 = (_QWORD *)(a1 + 384);
      v29[107] = *a5;
      result = sub_D1F750(v29, v28, a3, a4);
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = *(_QWORD *)(a1 + 1232);
        v7 = a1 + 384;
        *(_QWORD *)(v7 + 856) = *a5;
        result = sub_D1F920((void **)v7, v6, a3, a4);
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

