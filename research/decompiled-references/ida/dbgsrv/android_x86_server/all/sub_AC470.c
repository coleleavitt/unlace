/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC470
// Address: 0x000AC470

//----- (000AC470) --------------------------------------------------------
ssize_t __cdecl sub_AC470(int a1, int a2, int a3, void *buf, size_t nbytes)
{
  int v5; // eax
  int v6; // edx

  v5 = qseek(*(_DWORD *)(a1 + 16), a2, a3, 0);
  if ( (v5 & v6) == 0xFFFFFFFF )
    return -1;
  else
    return qread(*(_DWORD *)(a1 + 16), buf, nbytes);
}
// AC49A: variable 'v6' is possibly undefined
