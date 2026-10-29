/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45ADE0
// Address: 0x0045ADE0

//----- (0045ADE0) --------------------------------------------------------
char *__stdcall sub_45ADE0(__int8 *a1, _BYTE *a2, __int8 **a3)
{
  __int8 *v3; // esi
  char *v4; // esi
  _BYTE *v6; // eax

  v3 = a1;
  if ( !a1 )
    v3 = *a3;
  v4 = &v3[sub_474D10(v3, a2)];
  if ( !*v4 )
    return nullptr;
  LOBYTE(v6) = sub_474CD0(v4, a2);
  if ( v6 )
  {
    *v6 = 0;
    *a3 = v6 + 1;
  }
  else
  {
    *a3 = sub_464F10(v4, 0);
  }
  return v4;
}
// 45AE1A: variable 'v6' is possibly undefined
