/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43D040
// Address: 0x0043D040

//----- (0043D040) --------------------------------------------------------
char __userpurge sub_43D040@<al>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, _DWORD *a4, int a5)
{
  int v5; // eax

  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 24))(a1, a3);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 12) )
      sub_45ACB0((unsigned int)a4, *(char **)(v5 + 8), a5);
    else
      sub_45ACB0((unsigned int)a4, (char *)MultiByteStr, a5);
    return 1;
  }
  else
  {
    sub_453D50(a2, a4, a5, "%08X", a3);
    return 0;
  }
}
