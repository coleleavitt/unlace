/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D5D0
// Address: 0x0004D5D0

//----- (0004D5D0) --------------------------------------------------------
int __cdecl sub_4D5D0(_DWORD *a1)
{
  char *v1; // eax
  unsigned __int16 v2; // ax
  int v3; // ecx
  int v4; // edx
  char *v6; // eax
  int v7[4]; // [esp+8h] [ebp-10h] BYREF

  v7[1] = __readgsdword(0x14u);
  if ( a1[6] )
    v1 = (char *)a1[5];
  else
    v1 = byte_EF875;
  v2 = sub_4A890(a1, v1, v7);
  if ( (unsigned int)(v7[0] - 1) >= 3 )
  {
    if ( a1[6] )
      v6 = (char *)a1[5];
    else
      v6 = byte_EF875;
    set_error_string(0, v6);
    return set_qerrno(55);
  }
  else
  {
    v3 = a1[50];
    v4 = 16 * a1[51];
    *(_DWORD *)(v3 + v4 - 4) = v2;
    *(_DWORD *)(v3 + v4 - 8) = v7[0];
    *(_DWORD *)(v3 + v4 - 12) = a1[28];
    return 0;
  }
}
