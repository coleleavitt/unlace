/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfilelength
// Address: 0x000AFBC0

//----- (000AFBC0) --------------------------------------------------------
int __cdecl qfilelength(int a1)
{
  int v1; // edx
  int v2; // esi
  int v3; // edi
  int v5; // [esp+8h] [ebp-14h]

  v2 = qtell(a1);
  if ( (v1 & v2) == 0xFFFFFFFF )
    return -1;
  v3 = v1;
  v5 = qseek(a1, 0, 0, 2);
  qseek(a1, v2, v3, 0);
  return v5;
}
// AFBE8: variable 'v1' is possibly undefined
