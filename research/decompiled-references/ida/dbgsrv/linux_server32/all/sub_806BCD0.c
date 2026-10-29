/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806BCD0
// Address: 0x0806BCD0

//----- (0806BCD0) --------------------------------------------------------
char *__cdecl sub_806BCD0(_DWORD *a1, _QWORD *a2)
{
  int v2; // edx
  char *v3; // eax
  int v4; // ecx
  char *result; // eax

  v2 = a1[115];
  v3 = (char *)a1[114];
  v4 = v2 + 1;
  if ( a1[116] < (unsigned int)(v2 + 1) )
  {
    v3 = (char *)sub_80CF920((int)(a1 + 114), v3, v2 + 1, 0x18u);
    v2 = a1[115];
    a1[114] = v3;
    v4 = v2 + 1;
  }
  a1[115] = v4;
  result = &v3[24 * v2];
  *(_QWORD *)result = a2[1];
  *((_QWORD *)result + 1) = a2[4];
  *((_QWORD *)result + 2) = a2[2];
  return result;
}
