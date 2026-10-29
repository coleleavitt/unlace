__int64 __fastcall sub_D4E150(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  char v5; // bp
  __int16 v6; // bp
  int v7; // eax
  __int64 v8; // rax
  _QWORD *v9; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v5 = sub_D22760(*(_QWORD *)(a1 + 560));
      goto LABEL_10;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v5 = sub_D22E60(*(_QWORD *)(a1 + 560));
LABEL_10:
        *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = ~v5;
      }
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v6 = sub_D23370(*(_QWORD *)(a1 + 560));
      goto LABEL_15;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v6 = sub_D23A90(*(_QWORD *)(a1 + 560));
LABEL_15:
      *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = ~v6;
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v7 = sub_D23BA0(*(_QWORD *)(a1 + 560));
      goto LABEL_20;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v7 = sub_D242B0(*(_QWORD *)(a1 + 560));
LABEL_20:
      *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = ~v7;
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v8 = sub_D243C0(*(_QWORD *)(a1 + 560));
      goto LABEL_25;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v8 = sub_D24B00(*(_QWORD *)(a1 + 560));
LABEL_25:
      *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = ~v8;
LABEL_3:
      result = 1;
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v9 = (_QWORD *)(a1 + 384);
      v9[107] = *a3;
      result = sub_D49DF0(v9);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v4 = (_QWORD *)(a1 + 384);
      v4[107] = *a3;
      result = sub_D4E020(v4);
      break;
  }
  return result;
}
