__int64 __fastcall sub_2CA3D0(__int64 a1, _DWORD *a2, __int64 a3, double a4)
{
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  __int64 result; // rax
  int v9; // ebp
  int v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // edx

  *a2 = 0;
  v5 = sub_2CA210(*(_QWORD *)a1, a3, a4);
  v6 = v5 - ((v5 == 0) - 2);
  a2[1] = v6;
  v7 = v6;
  result = *(_DWORD *)(a1 + 12) * ((unsigned int)sub_2C9780((_DWORD *)a1, a3) + 1);
  v9 = v7 + result + 1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
    ++v9;
  a2[2] = v9;
  if ( *(_BYTE *)(a1 + 28) && *(_DWORD *)(a1 + 20) <= 1u )
  {
    v10 = *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 12);
    v11 = nbits(a3);
    v12 = v11 + 14;
    v13 = v11 + 7;
    if ( v13 >= 0 )
      v12 = v13;
    result = (unsigned int)(v10 * (v12 >> 3));
    a2[3] = result + v9;
  }
  else
  {
    a2[3] = v9;
  }
  return result;
}
