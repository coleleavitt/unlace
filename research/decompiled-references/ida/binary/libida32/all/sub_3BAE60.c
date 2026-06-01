char __fastcall sub_3BAE60(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int *a4, char a5)
{
  char v5; // dh
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx

  if ( (v5 & 1) == 0 || a2 > 0xFFFFFFFD || (sub_3B9AA0((__int64)a1, a2 + 1, 1) & 0x100) == 0 )
    return a5 ^ 1;
  v9 = nbits(a2);
  v10 = v9 + 14;
  v11 = v9 + 7;
  if ( v11 >= 0 )
    v10 = v11;
  v12 = v10 >> 3;
  if ( v12 == 3 )
  {
    a4[1] = (unsigned __int16)a4[1];
    return *(_QWORD *)a4 == sub_3BA340(a1, a2);
  }
  if ( v11 > 31 )
  {
    if ( v12 != 4 )
      return a5 ^ 1;
    return *(_QWORD *)a4 == sub_3BA340(a1, a2);
  }
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
      return *a4 == sub_3BA340(a1, a2);
    return a5 ^ 1;
  }
  return *(_WORD *)a4 == (unsigned __int16)sub_3B9FA0(a1, a2);
}

