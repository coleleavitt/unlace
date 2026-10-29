__int64 __fastcall sub_EE92A0(_DWORD *a1, __int64 a2, double a3)
{
  int v4; // r14d
  int i; // ebx
  __int64 v6; // rdi
  _WORD *v7; // rdx
  __int64 v8; // rdi

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
  sub_971800(*(_QWORD *)a1, "catch (");
  v8 = *(_QWORD *)(a2 + 16);
  if ( v8 )
    sub_B93BC0(v8, *(_QWORD *)a1, (const __m128i *)(a1 + 6), a1[2], 0);
  else
    sub_971800(*(_QWORD *)a1, "...");
  sub_971800(*(_QWORD *)a1, ") ");
  sub_EE8810(a1, *(_QWORD *)(a2 + 24), a3);
  return sub_22581D0(*(_QWORD *)a1, *((_QWORD *)a1 + 5), *((_QWORD *)a1 + 6));
}

