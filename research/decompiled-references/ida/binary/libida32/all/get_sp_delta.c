__int64 __fastcall get_sp_delta(__int64 a1, unsigned int a2)
{
  unsigned int *v2; // rax
  unsigned int v3; // edx

  v2 = sub_59ED40(*(_QWORD **)(qword_2CA1698 + 1480), a1, a2);
  v3 = 0;
  if ( v2 && a2 == *v2 && (v3 = v2[1], v2 != *(unsigned int **)(a1 + 48)) )
    return v3 - *(v2 - 1);
  else
    return v3;
}

