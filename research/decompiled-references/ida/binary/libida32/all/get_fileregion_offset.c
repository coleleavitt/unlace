__int64 __fastcall get_fileregion_offset(unsigned int a1)
{
  unsigned int *v1; // rax
  unsigned int *v2; // rbp
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // eax
  int v6; // edx

  v1 = sub_4EE820(*(_QWORD *)(qword_2CA1698 + 1480) + 2672LL, a1);
  if ( !v1 )
    return -1;
  v2 = v1;
  v3 = a1 - *v1;
  v4 = nbits(a1);
  v5 = v4 + 14;
  v6 = v4 + 7;
  if ( v6 >= 0 )
    v5 = v6;
  return *((_QWORD *)v2 + 1) + (int)v3 * (__int64)(v5 >> 3);
}

