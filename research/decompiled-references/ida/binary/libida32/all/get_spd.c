__int64 __fastcall get_spd(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // edx

  v2 = sub_59ED40(*(_QWORD **)(qword_2CA1698 + 1480), a1, a2);
  v3 = 0;
  if ( v2 )
    return v2[1];
  return v3;
}

