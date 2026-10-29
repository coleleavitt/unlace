__int64 __fastcall sub_9164D0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
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
  __int64 v17; // rdi
  __int64 v18; // rdi
  char v19; // bp
  __int64 v20; // rsi
  __int64 v21; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v5 = *(_QWORD *)(a1 + 792);
      v6 = a1 + 384;
      *(_QWORD *)(v6 + 416) = *a3;
      return sub_90C670(v6, v5);
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v7 = sub_915900(*(_QWORD *)(a1 + 568));
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = -v7;
      }
      goto LABEL_3;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v8 = *(_QWORD *)(a1 + 792);
      v9 = a1 + 384;
      *(_QWORD *)(v9 + 416) = *a3;
      result = sub_90C960(v9, v8);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v10 = sub_915CE0(*(_QWORD *)(a1 + 568));
        *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = -v10;
      }
      goto LABEL_3;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v11 = *(_QWORD *)(a1 + 792);
      v12 = a1 + 384;
      *(_QWORD *)(v12 + 416) = *a3;
      result = sub_90CC50(v12, v11);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v13 = -(int)sub_9160C0(*(_QWORD *)(a1 + 568));
        *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v13;
      }
      goto LABEL_3;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v14 = *(_QWORD *)(a1 + 792);
      v15 = a1 + 384;
      *(_QWORD *)(v15 + 416) = *a3;
      result = sub_90CF40(v15, v14);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v16 = -sub_9164A0(*(_QWORD *)(a1 + 568));
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v16;
      }
      goto LABEL_3;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v17 = a1 + 384;
        *(_QWORD *)(v17 + 416) = *a3;
        sub_8D5500(v17);
      }
      goto LABEL_3;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v18 = a1 + 384;
        *(_QWORD *)(v18 + 416) = *a3;
        sub_8D5710(v18);
      }
      goto LABEL_3;
    case 10:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v19 = sub_8F4170(*(_QWORD *)(a1 + 568));
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v19;
      }
      goto LABEL_3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v20 = *(_QWORD *)(a1 + 792);
      v21 = a1 + 384;
      *(_QWORD *)(v21 + 416) = *a3;
      result = sub_90D240(v21, v20);
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v4 = a1 + 384;
        *(_QWORD *)(v4 + 416) = *a3;
        sub_8DBC10(v4);
      }
LABEL_3:
      result = 1;
      break;
  }
  return result;
}

