void __fastcall sub_EEDBF0(_DWORD *a1, __int64 *a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // rdi
  _WORD *v7; // rdx

  v4 = a1[2];
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)a1;
        v7 = *(_WORD **)(*(_QWORD *)a1 + 32LL);
        if ( *(_QWORD *)(*(_QWORD *)a1 + 24LL) - (_QWORD)v7 > 1u )
          break;
        ++i;
        sub_22581D0(v6, "  ", 2);
        if ( v4 == i )
          goto LABEL_5;
      }
      *v7 = 8224;
      *(_QWORD *)(v6 + 32) += 2LL;
    }
  }
LABEL_5:
  sub_EED6E0(a1, a2, a3);
}

