/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AB00
// Address: 0x0004AB00

//----- (0004AB00) --------------------------------------------------------
_BOOL4 __cdecl sub_4AB00(_DWORD *a1)
{
  char *v1; // eax
  unsigned __int16 v2; // ax
  int v3; // ecx
  _BOOL4 result; // eax
  int v5; // eax
  int *v6; // edi
  int v7; // esi
  int v8[6]; // [esp+4h] [ebp-18h] BYREF

  v8[1] = __readgsdword(0x14u);
  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = byte_EF875;
  v2 = sub_4A890(a1, v1, v8);
  if ( (unsigned int)(v8[0] - 1) > 2 )
  {
    v3 = set_qerrno(58);
    result = 1;
    if ( v3 )
      return result;
  }
  else
  {
    sub_470B0((int)a1, 0xDBC2C0u >> (8 * (LOBYTE(v8[0]) - 1)), v2);
  }
  sub_4AC10((int)a1);
  v5 = a1[48];
  v6 = *(int **)(a1[47] + 4 * v5 - 4);
  if ( v5 )
    a1[48] = v5 - 1;
  v7 = sub_4C980((int)a1, v6, 0, 0);
  if ( v6 )
  {
    sub_4AEB0(v6);
    operator delete(v6);
  }
  return set_qerrno(v7) != 0;
}
