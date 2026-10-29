__int64 __fastcall sub_8F39D0(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi

  switch ( a2 )
  {
    case 0:
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
      goto LABEL_8;
    case 2:
    case 3:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v5 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        *(_WORD *)sub_A1A4E0(v5, 8) = 0;
      }
      return 1;
    case 4:
    case 5:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        *(_DWORD *)sub_A1A4E0(v8, 8) = 0;
      }
      return 1;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
        goto LABEL_10;
      return 1;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
LABEL_10:
        v7 = *(_QWORD *)(a1 + 568);
        *(_QWORD *)(a1 + 800) = *a3;
        *(_QWORD *)sub_A1A4E0(v7, 8) = 0;
      }
      return 1;
    case 8:
    case 9:
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        return 1;
LABEL_8:
      v6 = *(_QWORD *)(a1 + 568);
      *(_QWORD *)(a1 + 800) = *a3;
      *(_BYTE *)sub_A1A4E0(v6, 8) = 0;
      return 1;
  }
}

