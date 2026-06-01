/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6AD20
// Address: 0x0006AD20

//----- (0006AD20) --------------------------------------------------------
int __cdecl sub_6AD20(int a1, int (__cdecl *a2)(int *, char *, _DWORD, _DWORD, int), int a3)
{
  int *v3; // edi
  int result; // eax
  int *v5; // eax
  char *v6; // ecx

  v3 = *(int **)(*(_DWORD *)(a1 + 248) + 8);
  result = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v5 = (v3[2] & 1) != 0 ? (int *)v3[4] : (int *)((char *)v3 + 9);
      v6 = byte_EF875;
      if ( v3[6] )
        v6 = (char *)v3[5];
      result = a2(v5, v6, *((unsigned __int8 *)v3 + 32), *((unsigned __int8 *)v3 + 33), a3);
      if ( result )
        break;
      v3 = (int *)*v3;
      if ( !v3 )
        return 0;
    }
  }
  return result;
}
