__int64 __fastcall sub_D4E570(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  char v7; // bp
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int16 v10; // bp
  __int64 v11; // rsi
  __int64 v12; // rdi
  int v13; // ebp
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rbp
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  char v19; // bp
  __int64 v20; // rsi
  __int64 v21; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v5 = *(_QWORD *)(a1 + 1232);
      v6 = a1 + 384;
      *(_QWORD *)(v6 + 856) = *a3;
      return sub_D22950(v6, v5);
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v7 = sub_D22E60(*(_QWORD *)(a1 + 560));
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = -v7;
      }
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v8 = *(_QWORD *)(a1 + 1232);
      v9 = a1 + 384;
      *(_QWORD *)(v9 + 856) = *a3;
      result = sub_D23570(v9, v8);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v10 = sub_D23A90(*(_QWORD *)(a1 + 560));
        *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = -v10;
      }
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 1232);
      v12 = a1 + 384;
      *(_QWORD *)(v12 + 856) = *a3;
      result = sub_D23D90(v12, v11);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v13 = -(int)sub_D242B0(*(_QWORD *)(a1 + 560));
        *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v13;
      }
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 1232);
      v15 = a1 + 384;
      *(_QWORD *)(v15 + 856) = *a3;
      result = sub_D245C0(v15, v14);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v16 = -sub_D24B00(*(_QWORD *)(a1 + 560));
        *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v16;
      }
      goto LABEL_3;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v17 = (_QWORD *)(a1 + 384);
      v17[107] = *a3;
      result = sub_D49FF0(v17);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v18 = (_QWORD *)(a1 + 384);
      v18[107] = *a3;
      result = sub_D4E490(v18);
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v19 = sub_D08FE0(*(_QWORD *)(a1 + 560));
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v19;
      }
      goto LABEL_3;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v20 = *(_QWORD *)(a1 + 1232);
      v21 = a1 + 384;
      *(_QWORD *)(v21 + 856) = *a3;
      result = sub_D1BAD0(v21, v20);
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v4 = (_QWORD *)(a1 + 384);
        v4[107] = *a3;
        result = sub_D47B10(v4);
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
