__int64 __fastcall sub_D71830(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
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
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v5 = a1 + 384;
      *(_QWORD *)(v5 + 856) = *a3;
      result = sub_D6EE00(v5);
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v6 = a1 + 384;
      *(_QWORD *)(v6 + 856) = *a3;
      result = sub_D1B690(v6);
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v7 = a1 + 384;
      *(_QWORD *)(v7 + 856) = *a3;
      result = sub_D6F8A0(v7);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v8 = a1 + 384;
      *(_QWORD *)(v8 + 856) = *a3;
      result = sub_D1B8B0(v8);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v9 = a1 + 384;
      *(_QWORD *)(v9 + 856) = *a3;
      result = sub_D70300(v9);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v10 = a1 + 384;
      *(_QWORD *)(v10 + 856) = *a3;
      result = sub_D0D430(v10);
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v11 = a1 + 384;
      *(_QWORD *)(v11 + 856) = *a3;
      result = sub_D71520(v11);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v12 = a1 + 384;
      *(_QWORD *)(v12 + 856) = *a3;
      result = sub_D0DC20(v12);
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v13 = a1 + 384;
      *(_QWORD *)(v13 + 856) = *a3;
      result = sub_D5A4C0(v13);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = a1 + 384;
      *(_QWORD *)(v14 + 856) = *a3;
      result = sub_D5CB80(v14);
      break;
    case 10:
    case 11:
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = (_QWORD *)(a1 + 384);
        v4[107] = *a3;
        result = sub_D44690(v4);
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
