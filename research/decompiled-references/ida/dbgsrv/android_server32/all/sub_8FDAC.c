/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8FDAC
// Address: 0x0008FDAC

//----- (0008FDAC) --------------------------------------------------------
_DWORD *__fastcall sub_8FDAC(_DWORD *a1, char *s)
{
  size_t v4; // r6
  _DWORD *v5; // r0
  size_t v6; // r2
  _DWORD *v7; // r6

  v4 = strlen(s);
  v5 = operator new(v4 + 13);
  *v5 = v4;
  v5[1] = v4;
  v6 = v4 + 1;
  v7 = v5 + 3;
  v5[2] = 0;
  qmemcpy(v5 + 3, s, v6);
  *a1 = v7;
  return a1;
}
