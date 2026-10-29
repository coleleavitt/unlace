__int64 __fastcall sub_419D60(__int64 a1, unsigned int a2, unsigned int *a3, int a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // eax

  v6 = a2;
  v7 = a2 - sub_614FB0(**(_QWORD **)(a1 + 1480), 29);
  if ( v7 >= *a3 && v7 < a3[1] )
    return v7 + a4 + (unsigned int)sub_614FB0(**(_QWORD **)(a1 + 1480), 29);
  return v6;
}

