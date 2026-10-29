/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453E80
// Address: 0x00453E80

//----- (00453E80) --------------------------------------------------------
int __userpurge sub_453E80@<eax>(__m128i a1@<xmm0>, _DWORD *a2, int a3, char *a4, int a5)
{
  int result; // eax
  unsigned int v6; // kr00_4
  void *v7; // esp
  char *v8; // edi
  int *v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned __int8 v12[12]; // [esp+0h] [ebp-10h] BYREF

  if ( !a4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(539);
  }
  if ( a2 )
  {
    if ( a3 < 0 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(1225);
    }
    if ( a3 <= 1 )
    {
      if ( a3 )
        *(_BYTE *)a2 = 0;
      return 0;
    }
    *(_BYTE *)a2 = 0;
  }
  else if ( a3 )
  {
    return 0;
  }
  v6 = strlen(a4);
  v7 = alloca(v6 + 100);
  v8 = sub_453BC0(a4, v12, v6 + 100);
  v9 = sub_41C0F0();
  v10 = *v9;
  v11 = v9[1];
  if ( a2 )
    result = sub_46B5C7(a3, (int)v8, a1, v10, v11, a2, a3, 0xFFFFFFFF, (int)v8, nullptr, a5);
  else
    result = sub_46B5EE((int)v8, a1, v10 | 2, v11, nullptr, 0, (int)v8, nullptr, a5);
  if ( result < 0 )
    result = -1;
  if ( result < 0 )
  {
    if ( a3 )
      goto LABEL_21;
    return 0;
  }
  if ( result >= (unsigned int)a3 && a3 )
  {
LABEL_21:
    if ( a2 )
    {
      *((_BYTE *)a2 + a3 - 1) = 0;
      return a3 - 1;
    }
    return 0;
  }
  return result;
}
// 453F6E: conditional instruction was optimized away because %arg_4.4>=2
// 4B70F0: using guessed type char byte_4B70F0;
