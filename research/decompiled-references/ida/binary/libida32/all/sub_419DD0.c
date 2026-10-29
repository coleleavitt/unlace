void __fastcall sub_419DD0(__int64 a1, int *a2, unsigned int *a3, int a4)
{
  int v4; // r13d
  unsigned int v7; // eax

  v4 = *a2;
  if ( *a2 != -1 )
  {
    v7 = v4 - sub_614FB0(**(_QWORD **)(a1 + 1480), 29);
    if ( v7 >= *a3 && v7 < a3[1] )
      v4 = v7 + a4 + sub_614FB0(**(_QWORD **)(a1 + 1480), 29);
    *a2 = v4;
  }
}

