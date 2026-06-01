__int64 __fastcall sub_403BD0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi

  if ( a2 >= a1[1] )
    return 0xFFFFFFFFLL;
  v2 = (_QWORD *)(*a1 + 56 * a2);
  v3 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( v2[1] )
    return sub_698F20(v3, *v2, 0, 0);
  else
    return sub_698F20(v3, haystack, 0, 0);
}

