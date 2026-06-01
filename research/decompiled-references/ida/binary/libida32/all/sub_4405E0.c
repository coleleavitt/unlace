__int64 __fastcall sub_4405E0(__int64 a1, unsigned int *a2)
{
  _QWORD *v2; // rbp
  int v3; // eax
  unsigned int v4; // eax

  v2 = *(_QWORD **)(a1 + 1480);
  v3 = sub_78EE70();
  v4 = sub_3B9110(v2, v3);
  if ( v4 < *a2 || v4 >= a2[1] )
  {
    if ( !under_debugger )
      interr(2153);
    BUG();
  }
  return v4 - *a2;
}

