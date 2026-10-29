__int64 __fastcall sub_419CF0(__int64 a1, int *a2, unsigned int *a3, int a4)
{
  int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // r13d
  int v10; // eax

  v6 = *a2;
  v7 = v6 - sub_614FB0(**(_QWORD **)(a1 + 1480), 29);
  v8 = 0;
  if ( v7 >= *a3 && v7 < a3[1] )
  {
    v9 = v7 + a4;
    v10 = sub_614FB0(**(_QWORD **)(a1 + 1480), 29);
    v8 = 1;
    *a2 = v10 + v9;
  }
  return v8;
}

