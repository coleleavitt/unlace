__int64 __fastcall sub_D502B0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  char v5; // bp
  char v6; // al
  __int16 v7; // bp
  __int16 v8; // ax
  int v9; // ebp
  int v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v5 = sub_D22760(*(_QWORD *)(a1 + 560));
      v6 = sub_D22760(*(_QWORD *)(a1 + 560));
      goto LABEL_10;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v5 = sub_D22E60(*(_QWORD *)(a1 + 560));
        v6 = sub_D22E60(*(_QWORD *)(a1 + 560));
LABEL_10:
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v6 ^ v5;
      }
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v7 = sub_D23370(*(_QWORD *)(a1 + 560));
      v8 = sub_D23370(*(_QWORD *)(a1 + 560));
      goto LABEL_15;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v7 = sub_D23A90(*(_QWORD *)(a1 + 560));
      v8 = sub_D23A90(*(_QWORD *)(a1 + 560));
LABEL_15:
      *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v8 ^ v7;
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v9 = sub_D23BA0(*(_QWORD *)(a1 + 560));
      v10 = sub_D23BA0(*(_QWORD *)(a1 + 560));
      goto LABEL_20;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v9 = sub_D242B0(*(_QWORD *)(a1 + 560));
      v10 = sub_D242B0(*(_QWORD *)(a1 + 560));
LABEL_20:
      *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v10 ^ v9;
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v11 = sub_D243C0(*(_QWORD *)(a1 + 560));
      v12 = sub_D243C0(*(_QWORD *)(a1 + 560));
      goto LABEL_25;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v11 = sub_D24B00(*(_QWORD *)(a1 + 560));
      v12 = sub_D24B00(*(_QWORD *)(a1 + 560));
LABEL_25:
      *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v12 ^ v11;
LABEL_3:
      result = 1;
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v13 = (_QWORD *)(a1 + 384);
      v13[107] = *a3;
      result = sub_D4A670(v13);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = (_QWORD *)(a1 + 384);
      v14[107] = *a3;
      result = sub_D50110(v14);
      break;
    case 10:
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v4 = a1 + 384;
      *(_QWORD *)(v4 + 856) = *a3;
      result = sub_D0B260(v4);
      break;
  }
  return result;
}
