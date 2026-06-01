__int64 __fastcall sub_F0C970(__int64 *a1, __int64 a2, double a3)
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
        sub_227BF10(v6, "  ", 2);
        if ( v4 == i )
          goto LABEL_5;
      }
      *v7 = 8224;
      *(_QWORD *)(v6 + 32) += 2LL;
    }
  }
LABEL_5:
  sub_F0C900(a1, a2, a3);
  return sub_227BF10(*a1, a1[5], a1[6]);
}
