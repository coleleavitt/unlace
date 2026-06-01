/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44EBA0
// Address: 0x0044EBA0

//----- (0044EBA0) --------------------------------------------------------
_QWORD *__thiscall sub_44EBA0(signed int *this, char a2, unsigned int a3)
{
  signed int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 v7; // rax
  int v8; // eax
  int v9; // esi
  unsigned int v10; // eax
  int v11; // ecx
  _QWORD *result; // eax
  __int128 v13; // [esp+0h] [ebp-18h]
  __int64 v14; // [esp+10h] [ebp-8h]

  *(_QWORD *)&v13 = a3;
  v4 = *(this + 3);
  *((_QWORD *)&v13 + 1) = 0;
  LOBYTE(v14) = a2;
  if ( *(this + 1) && v4 > -1 )
  {
    v5 = sub_453720();
    LODWORD(v7) = sub_44D840(v5, v6, v4);
    *((_QWORD *)&v13 + 1) = v7;
  }
  v8 = *(this + 5);
  v9 = (int)(this + 4);
  v10 = v8 + 1;
  if ( v10 > *(_DWORD *)(v9 + 8) )
    *(_DWORD *)v9 = sub_453B00(v9, *(void **)v9, v10, 0x18u);
  v11 = 3 * *(_DWORD *)(v9 + 4);
  result = *(_QWORD **)v9;
  *(__int128 *)&result[v11] = v13;
  result[v11 + 2] = v14;
  ++*(_DWORD *)(v9 + 4);
  return result;
}
// 44EBDE: variable 'v6' is possibly undefined
// 44EBE6: variable 'v7' is possibly undefined
// 44EC1F: variable 'v14' is possibly undefined
