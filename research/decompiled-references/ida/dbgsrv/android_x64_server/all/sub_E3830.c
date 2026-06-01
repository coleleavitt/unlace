/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E3830
// Address: 0x00000000000E3830

//----- (00000000000E3830) ----------------------------------------------------
__int64 __fastcall sub_E3830(__int64 a1, char **a2)
{
  char *v3; // rcx
  unsigned __int64 v4; // rsi
  char *v5; // rax
  size_t v6; // rsi
  _BYTE *v7; // rbx
  __int64 result; // rax

  v3 = a2[1];
  v4 = (unsigned __int64)a2[2];
  if ( (unsigned __int64)(v3 + 6) >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < (unsigned __int64)(v3 + 6) )
      v6 = (size_t)(v3 + 6);
    a2[2] = (char *)v6;
    v5 = (char *)realloc(*a2, v6);
    *a2 = v5;
    v3 = a2[1];
  }
  else
  {
    v5 = *a2;
  }
  *(_WORD *)&v3[(_QWORD)v5 + 4] = 8311;
  *(_DWORD *)&v3[(_QWORD)v5] = 1869768820;
  a2[1] += 6;
  v7 = *(_BYTE **)(a1 + 16);
  result = (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v7 + 24LL))(v7, a2);
  if ( v7[9] != 1 )
    return (*(__int64 (__fastcall **)(_BYTE *, char **))(*(_QWORD *)v7 + 32LL))(v7, a2);
  return result;
}
