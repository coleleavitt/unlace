__int64 __fastcall sub_FFDA0(__int64 a1, _DWORD *a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  __int64 result; // rax
  int v10; // ebp
  int v11; // ebx
  int v12; // edx
  int v13; // eax
  int v14; // edx

  *a2 = 0;
  v6 = sub_FFC20(*(_QWORD *)a1, (unsigned int)a3, a3, a4, a5, a6);
  v7 = v6 - ((v6 == 0) - 2);
  a2[1] = v7;
  v8 = v7;
  result = *(_DWORD *)(a1 + 12) * ((unsigned int)sub_FF570((_DWORD *)a1) + 1);
  v10 = v8 + result + 1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
    ++v10;
  a2[2] = v10;
  if ( *(_BYTE *)(a1 + 28) && *(_DWORD *)(a1 + 20) <= 1u )
  {
    v11 = *(_DWORD *)(a1 + 8) * *(_DWORD *)(a1 + 12);
    v12 = nbits();
    v13 = v12 + 14;
    v14 = v12 + 7;
    if ( v14 >= 0 )
      v13 = v14;
    result = (unsigned int)(v11 * (v13 >> 3));
    a2[3] = result + v10;
  }
  else
  {
    a2[3] = v10;
  }
  return result;
}

