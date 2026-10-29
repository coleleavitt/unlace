__int64 __fastcall sub_D2A410(__int64 a1, int a2, _QWORD *a3)
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
      v5 = sub_CFEA20(*(_QWORD *)(a1 + 560));
      goto LABEL_10;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        *(_QWORD *)(a1 + 1240) = *a3;
        v5 = sub_CFF120(*(_QWORD *)(a1 + 560));
LABEL_10:
        *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = ~v5;
      }
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v6 = sub_CFF630(*(_QWORD *)(a1 + 560));
      goto LABEL_15;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v6 = sub_CFFD50(*(_QWORD *)(a1 + 560));
LABEL_15:
      *(_WORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = ~v6;
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v7 = sub_CFFE60(*(_QWORD *)(a1 + 560));
      goto LABEL_20;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v7 = sub_D00570(*(_QWORD *)(a1 + 560));
LABEL_20:
      *(_DWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = ~v7;
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v8 = sub_D00680(*(_QWORD *)(a1 + 560));
      goto LABEL_25;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      *(_QWORD *)(a1 + 1240) = *a3;
      v8 = sub_D00DC0(*(_QWORD *)(a1 + 560));
LABEL_25:
      *(_QWORD *)sub_DFD980(*(_QWORD *)(a1 + 560), 8) = ~v8;
LABEL_3:
      result = 1;
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v9 = (_QWORD *)(a1 + 384);
      v9[107] = *a3;
      result = sub_D260B0(v9);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v4 = (_QWORD *)(a1 + 384);
      v4[107] = *a3;
      result = sub_D2A2E0(v4);
      break;
  }
  return result;
}

