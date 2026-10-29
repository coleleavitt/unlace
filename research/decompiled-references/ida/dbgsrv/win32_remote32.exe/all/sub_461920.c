/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461920
// Address: 0x00461920

//----- (00461920) --------------------------------------------------------
char *__stdcall sub_461920(char *a1, int a2, char *a3, char *a4)
{
  unsigned int v4; // ebx
  char *v5; // esi
  __int8 *v6; // eax
  __int8 *v7; // ecx
  bool v8; // zf
  _BYTE *v9; // eax
  char *v10; // edx
  char v11; // cl

  if ( a2 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( !a1 )
    return a1;
  v4 = (unsigned int)&a1[a2];
  if ( a1 != a3 )
    sub_45ACB0((unsigned int)a1, a3, a2);
  v5 = sub_456590(a1);
  v6 = sub_464F10(v5, 0);
  v7 = v6;
  v8 = v6 == v5;
  if ( v6 > v5 )
  {
    while ( *v6 != 46 )
    {
      v8 = --v6 == v5;
      if ( v6 <= v5 )
        goto LABEL_8;
    }
    goto LABEL_12;
  }
LABEL_8:
  if ( !v8 )
  {
LABEL_12:
    v9 = v6 + 1;
    goto LABEL_13;
  }
  if ( (unsigned int)v7 >= v4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(518);
  }
  v9 = v7 + 1;
  *v7 = 46;
  if ( (unsigned int)(v7 + 1) >= v4 )
  {
    v9 = (_BYTE *)(v4 - 1);
    *(_BYTE *)(v4 - 1) = 0;
  }
LABEL_13:
  v10 = a4 + 1;
  if ( *a4 != 46 )
    v10 = a4;
  if ( (unsigned int)v9 >= v4 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(520);
  }
  if ( v9 == (_BYTE *)(v4 - 1) )
  {
LABEL_19:
    *v9 = 0;
  }
  else
  {
    while ( 1 )
    {
      v11 = *v10++;
      *v9 = v11;
      if ( !v11 )
        break;
      if ( ++v9 == (_BYTE *)(v4 - 1) )
        goto LABEL_19;
    }
  }
  return a1;
}
// 4B70F0: using guessed type char byte_4B70F0;
