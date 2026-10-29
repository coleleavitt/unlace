__int64 __fastcall sub_EE9390(__int64 *a1, __int64 a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // rdi
  _WORD *v7; // rdx

  v4 = *((_DWORD *)a1 + 2);
  if ( v4 > 0 )
  {
    for ( i = 0; i != v4; ++i )
    {
      while ( 1 )
      {
        v6 = *a1;
        v7 = *(_WORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v7 > 1u )
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
  sub_971800(*a1, "__finally ");
  sub_EE8810(a1, *(_QWORD *)(a2 + 16), a3);
  sub_22581D0(*a1, a1[5], a1[6]);
  return sub_22581D0(*a1, a1[5], a1[6]);
}

