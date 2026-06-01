__int64 __fastcall sub_936540(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v5 = a1 + 384;
      *(_QWORD *)(v5 + 416) = *a3;
      return sub_8F6430(v5);
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v6 = a1 + 384;
        *(_QWORD *)(v6 + 416) = *a3;
        sub_8E88A0(v6);
      }
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v7 = a1 + 384;
      *(_QWORD *)(v7 + 416) = *a3;
      result = sub_8F6C70(v7);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = a1 + 384;
        *(_QWORD *)(v8 + 416) = *a3;
        sub_8E8190(v8);
      }
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v9 = a1 + 384;
      *(_QWORD *)(v9 + 416) = *a3;
      result = sub_8F74D0(v9);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v10 = a1 + 384;
        *(_QWORD *)(v10 + 416) = *a3;
        sub_8E7A80(v10);
      }
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v11 = a1 + 384;
      *(_QWORD *)(v11 + 416) = *a3;
      result = sub_8F7D10(v11);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v12 = a1 + 384;
        *(_QWORD *)(v12 + 416) = *a3;
        sub_8E7370(v12);
      }
      goto LABEL_3;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = a1 + 384;
        *(_QWORD *)(v13 + 416) = *a3;
        sub_8F8570(v13);
      }
      goto LABEL_3;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v14 = a1 + 384;
      *(_QWORD *)(v14 + 416) = *a3;
      result = sub_935D60(v14);
      break;
    case 10:
    case 11:
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v4 = a1 + 384;
        *(_QWORD *)(v4 + 416) = *a3;
        sub_8E6510(v4);
      }
LABEL_3:
      result = 1;
      break;
  }
  return result;
}

