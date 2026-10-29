/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_type_match
// Address: 0x0007FD34

//----- (0007FD34) --------------------------------------------------------
int __fastcall _cxa_type_match(_BYTE *a1, int a2, int a3, _DWORD *a4)
{
  int **v6; // r4
  int v7; // r6
  int result; // r0
  unsigned int v9; // r2
  _DWORD *v10; // r0
  _DWORD *v11; // [sp+4h] [bp-8h] BYREF

  if ( *a1 != 71 || a1[1] != 78 || a1[2] != 85 || a1[3] != 67 )
    goto LABEL_2;
  if ( a1[4] == 70 && a1[5] == 79 && a1[6] == 82 && !a1[7] )
  {
    v11 = (_DWORD *)(unsigned __int8)a1[7];
    v6 = &`typeinfo for'__cxxabiv1::__forced_unwind;
    goto LABEL_3;
  }
  if ( a1[4] != 67 || a1[5] != 43 || a1[6] != 43 || (v9 = (unsigned __int8)a1[7], v9 > 1) )
  {
LABEL_2:
    v11 = nullptr;
    v6 = &`typeinfo for'__cxxabiv1::__foreign_exception;
    goto LABEL_3;
  }
  v6 = *((int ***)a1 - 8);
  if ( v9 == 1 )
  {
    v10 = *((_DWORD **)a1 - 8);
    v6 = (int **)*(v6 - 30);
  }
  else
  {
    v10 = a1 + 88;
  }
  v11 = v10;
LABEL_3:
  v7 = 1;
  if ( ((int (__fastcall *)(int **))(*v6)[2])(v6) )
  {
    v7 = 2;
    v11 = (_DWORD *)*v11;
  }
  result = (*(int (__fastcall **)(int, int **, _DWORD **, int))(*(_DWORD *)a2 + 16))(a2, v6, &v11, 1);
  if ( result )
  {
    *a4 = v11;
    return v7;
  }
  return result;
}
// D1BD4: using guessed type int *`typeinfo for'__cxxabiv1::__forced_unwind;
// D1BDC: using guessed type int *`typeinfo for'__cxxabiv1::__foreign_exception;
