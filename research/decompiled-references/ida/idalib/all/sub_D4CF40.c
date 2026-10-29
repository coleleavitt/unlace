__int64 __fastcall sub_D4CF40(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi

  v6 = a2;
  switch ( a2 )
  {
    case 0u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v10 = (_QWORD *)(a1 + 384);
      v10[107] = *a4;
      result = sub_D45950(v10, a3, a3, (__int64)a4, a2, a6);
      break;
    case 1u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v11 = (_QWORD *)(a1 + 384);
      v11[107] = *a4;
      result = sub_D45880(v11, a3, a3, (__int64)a4, a2, a6);
      break;
    case 2u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v12 = (_QWORD *)(a1 + 384);
      v12[107] = *a4;
      result = sub_D457B0(v12, a3, a3, (__int64)a4, a2, a6);
      break;
    case 3u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v13 = (_QWORD *)(a1 + 384);
      v13[107] = *a4;
      result = sub_D456E0(v13, a3, a3, (__int64)a4, a2, a6);
      break;
    case 4u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = (_QWORD *)(a1 + 384);
      v14[107] = *a4;
      result = sub_D45610(v14, a3, a3, (__int64)a4, a2, a6);
      break;
    case 5u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v15 = (_QWORD *)(a1 + 384);
      v15[107] = *a4;
      result = sub_D45540(v15, a3, a3, (__int64)a4, a2, a6);
      break;
    case 6u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v16 = (_QWORD *)(a1 + 384);
      v16[107] = *a4;
      result = sub_D45470(v16, a3, a3, (__int64)a4, a2, a6);
      break;
    case 7u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v17 = (_QWORD *)(a1 + 384);
      v17[107] = *a4;
      result = sub_D453A0(v17, a3, a3, (__int64)a4, a2, a6);
      break;
    case 8u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v18 = (_QWORD *)(a1 + 384);
      v18[107] = *a4;
      result = sub_D49260(v18, a3, a3, (__int64)a4, a2, a6);
      break;
    case 9u:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v19 = (_QWORD *)(a1 + 384);
      v19[107] = *a4;
      result = sub_D4CE30(v19, a3, a3, (__int64)a4, a2, a6);
      break;
    case 0xAu:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v20 = (_QWORD *)(a1 + 384);
      v20[107] = *a4;
      result = sub_D452D0(v20, a3, a3, (__int64)a4, a2, a6);
      break;
    case 0xBu:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v8 = *(_QWORD *)(a1 + 1232);
        v9 = (_QWORD *)(a1 + 384);
        v9[107] = *a4;
        result = sub_D44F30(v9, v8, a3, (__int64)a4, v6, a6);
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
