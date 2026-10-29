/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AC30
// Address: 0x0045AC30

//----- (0045AC30) --------------------------------------------------------
char *__stdcall sub_45AC30(char *a1, __int8 *a2, int a3)
{
  __int8 *v3; // eax
  __int8 *v4; // ecx
  int v6; // esi
  __int8 v7; // al

  if ( a3 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  v3 = sub_464F10(a1, 0);
  v4 = v3;
  if ( v3 >= &a1[a3] )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(520);
  }
  v6 = (int)&a1[a3 - 1];
  if ( v3 == (__int8 *)v6 )
  {
LABEL_6:
    *v4 = 0;
  }
  else
  {
    while ( 1 )
    {
      v7 = *a2++;
      *v4 = v7;
      if ( !v7 )
        break;
      if ( ++v4 == (__int8 *)v6 )
        goto LABEL_6;
    }
  }
  return a1;
}
// 4B70F0: using guessed type char byte_4B70F0;
