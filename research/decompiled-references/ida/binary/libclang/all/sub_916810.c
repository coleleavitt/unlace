__int64 __fastcall sub_916810(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rdi
  char v5; // bp
  __int16 v6; // bp
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v5 = sub_915550(*(_QWORD *)(a1 + 568));
        goto LABEL_11;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v5 = sub_915900(*(_QWORD *)(a1 + 568));
LABEL_11:
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = ~v5;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v6 = sub_915930(*(_QWORD *)(a1 + 568));
        goto LABEL_16;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v6 = sub_915CE0(*(_QWORD *)(a1 + 568));
LABEL_16:
        *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = ~v6;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v7 = sub_915D10(*(_QWORD *)(a1 + 568));
        goto LABEL_21;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v7 = sub_9160C0(*(_QWORD *)(a1 + 568));
LABEL_21:
        *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = ~v7;
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v8 = sub_9160F0(*(_QWORD *)(a1 + 568));
        goto LABEL_26;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v8 = sub_9164A0(*(_QWORD *)(a1 + 568));
LABEL_26:
        *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = ~v8;
      }
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v9 = a1 + 384;
        *(_QWORD *)(v9 + 416) = *a3;
        sub_8D5920(v9);
      }
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v4 = a1 + 384;
        *(_QWORD *)(v4 + 416) = *a3;
        sub_8D5B60(v4);
      }
      break;
  }
  return 1;
}

