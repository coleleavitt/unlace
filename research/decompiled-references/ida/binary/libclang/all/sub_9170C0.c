__int64 __fastcall sub_9170C0(__int64 a1, int a2, _QWORD *a3)
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
  __int64 v13; // rdi
  __int64 v14; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_4;
      *(_QWORD *)(a1 + 800) = *a3;
      v5 = sub_915550(*(_QWORD *)(a1 + 568));
      v6 = sub_915550(*(_QWORD *)(a1 + 568));
      goto LABEL_11;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        *(_QWORD *)(a1 + 800) = *a3;
        v5 = sub_915900(*(_QWORD *)(a1 + 568));
        v6 = sub_915900(*(_QWORD *)(a1 + 568));
LABEL_11:
        *(_BYTE *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v6 & v5;
      }
      goto LABEL_4;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_4;
      *(_QWORD *)(a1 + 800) = *a3;
      v7 = sub_915930(*(_QWORD *)(a1 + 568));
      v8 = sub_915930(*(_QWORD *)(a1 + 568));
      goto LABEL_16;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_4;
      *(_QWORD *)(a1 + 800) = *a3;
      v7 = sub_915CE0(*(_QWORD *)(a1 + 568));
      v8 = sub_915CE0(*(_QWORD *)(a1 + 568));
LABEL_16:
      *(_WORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v8 & v7;
      goto LABEL_4;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_4;
      *(_QWORD *)(a1 + 800) = *a3;
      v9 = sub_915D10(*(_QWORD *)(a1 + 568));
      v10 = sub_915D10(*(_QWORD *)(a1 + 568));
      goto LABEL_21;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_4;
      *(_QWORD *)(a1 + 800) = *a3;
      v9 = sub_9160C0(*(_QWORD *)(a1 + 568));
      v10 = sub_9160C0(*(_QWORD *)(a1 + 568));
LABEL_21:
      *(_DWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v10 & v9;
      goto LABEL_4;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_4;
      *(_QWORD *)(a1 + 800) = *a3;
      v11 = sub_9160F0(*(_QWORD *)(a1 + 568));
      v12 = sub_9160F0(*(_QWORD *)(a1 + 568));
      goto LABEL_26;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_4;
      *(_QWORD *)(a1 + 800) = *a3;
      v11 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v12 = sub_9164A0(*(_QWORD *)(a1 + 568));
LABEL_26:
      *(_QWORD *)sub_A1A4E0(*(_QWORD *)(a1 + 568), 8) = v12 & v11;
LABEL_4:
      result = 1;
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = a1 + 384;
        *(_QWORD *)(v13 + 416) = *a3;
        sub_8D87C0(v13);
      }
      goto LABEL_4;
    case 9:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v14 = a1 + 384;
        *(_QWORD *)(v14 + 416) = *a3;
        sub_8D8A60(v14);
      }
      goto LABEL_4;
    case 10:
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_4;
      v4 = a1 + 384;
      *(_QWORD *)(v4 + 416) = *a3;
      sub_8D6820(v4);
      result = 0;
      break;
  }
  return result;
}

