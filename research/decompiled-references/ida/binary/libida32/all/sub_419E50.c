__int64 __fastcall sub_419E50(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // edx

  v4 = sub_3B9110(*(_QWORD **)(a1 + 1480), a2);
  v5 = 0;
  if ( v4 >= *a3 )
    LOBYTE(v5) = v4 < a3[1];
  return v5;
}

