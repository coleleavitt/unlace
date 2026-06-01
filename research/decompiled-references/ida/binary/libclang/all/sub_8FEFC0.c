__int64 __fastcall sub_8FEFC0(__int64 a1, int a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  __int64 result; // rax
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
  __int64 v28; // rsi
  __int64 v29; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v8 = *(_QWORD *)(a1 + 792);
      v9 = a1 + 384;
      *(_QWORD *)(v9 + 416) = *a5;
      result = sub_8FC9C0(v9, v8, a3, a4);
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v10 = *(_QWORD *)(a1 + 792);
      v11 = a1 + 384;
      *(_QWORD *)(v11 + 416) = *a5;
      result = sub_8FCCD0(v11, v10, a3, a4);
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v12 = *(_QWORD *)(a1 + 792);
      v13 = a1 + 384;
      *(_QWORD *)(v13 + 416) = *a5;
      result = sub_8FCFE0(v13, v12, a3, a4);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(v15 + 416) = *a5;
      result = sub_8FD2F0(v15, v14, a3, a4);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v16 = *(_QWORD *)(a1 + 792);
      v17 = a1 + 384;
      *(_QWORD *)(v17 + 416) = *a5;
      result = sub_8FD600(v17, v16, a3, a4);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v18 = *(_QWORD *)(a1 + 792);
      v19 = a1 + 384;
      *(_QWORD *)(v19 + 416) = *a5;
      result = sub_8FD910(v19, v18, a3, a4);
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v20 = *(_QWORD *)(a1 + 792);
      v21 = a1 + 384;
      *(_QWORD *)(v21 + 416) = *a5;
      result = sub_8FDC20(v21, v20, a3, a4);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v22 = *(_QWORD *)(a1 + 792);
      v23 = a1 + 384;
      *(_QWORD *)(v23 + 416) = *a5;
      result = sub_8FDF30(v23, v22, a3, a4);
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v24 = *(_QWORD *)(a1 + 792);
      v25 = a1 + 384;
      *(_QWORD *)(v25 + 416) = *a5;
      result = sub_8FE240(v25, v24, a3, a4);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v26 = *(_QWORD *)(a1 + 792);
      v27 = a1 + 384;
      *(_QWORD *)(v27 + 416) = *a5;
      result = sub_8FE5A0(v27, v26, a3, a4);
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v28 = *(_QWORD *)(a1 + 792);
      v29 = a1 + 384;
      *(_QWORD *)(v29 + 416) = *a5;
      result = sub_8FE900(v29, v28, a3, a4);
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v6 = *(_QWORD *)(a1 + 792);
        v7 = a1 + 384;
        *(_QWORD *)(v7 + 416) = *a5;
        result = sub_8FEC10(v7, v6, a3, a4);
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

