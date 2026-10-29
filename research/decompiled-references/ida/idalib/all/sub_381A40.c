__int64 __fastcall sub_381A40(__int64 a1, const char *a2, char a3)
{
  int v5; // eax
  __int64 result; // rax
  int v7; // eax
  int v8; // r12d
  int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rdi
  int v12; // eax
  char v13; // dl

  sub_381970(a1, a2, a3);
  *(_DWORD *)(a1 + 212) = 0;
  if ( (a3 & 1) != 0 )
  {
    v7 = nbits(*(_QWORD *)(a1 + 16));
    v8 = v7 + 14;
    v9 = v7 + 7;
    if ( v9 >= 0 )
      v8 = v9;
    v10 = v8 >> 3;
    v11 = 2 * v10;
    if ( (*(_BYTE *)(get_ph() + 9) & 1) == 0 )
      v11 = v10;
    v12 = b2a_width(v11, 0);
    *(_DWORD *)(a1 + 216) = v12;
    *(_DWORD *)(a1 + 212) = (__int16)getinf(47) * (v12 + 1);
    if ( (a3 & 4) == 0 )
      goto LABEL_3;
  }
  else if ( (a3 & 4) == 0 )
  {
LABEL_3:
    v5 = *(_DWORD *)(a1 + 212);
    goto LABEL_4;
  }
  v13 = getinf(48);
  v5 = *(_DWORD *)(a1 + 212);
  if ( (v13 & 4) != 0 )
  {
    v5 += 4;
    *(_DWORD *)(a1 + 212) = v5;
  }
LABEL_4:
  result = (unsigned int)(*(_DWORD *)(a1 + 136) + v5);
  *(_DWORD *)(*(_QWORD *)(qword_2CCB598 + 1632) + 40LL) = result;
  return result;
}
