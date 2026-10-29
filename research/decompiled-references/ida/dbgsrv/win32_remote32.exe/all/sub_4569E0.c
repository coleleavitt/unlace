/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4569E0
// Address: 0x004569E0

//----- (004569E0) --------------------------------------------------------
__int8 *__stdcall sub_4569E0(__int8 *a1, int a2, char *a3, int a4)
{
  char *v4; // ecx
  unsigned int v5; // ebx
  __int8 *i; // esi
  int v7; // ebp
  char v8; // cl
  char v10; // [esp+8h] [ebp+8h]

  if ( a2 < 0 )
  {
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(1225);
  }
  if ( a1 )
  {
    v4 = a3;
    v5 = (unsigned int)&a1[a2];
    i = a1;
    v10 = 0;
    if ( a3 )
    {
      v7 = a4 - 4;
      while ( 1 )
      {
        if ( i != v4 )
          sub_45A4D0(i, v4, v5 - (_DWORD)i);
        for ( i = sub_464F10(i, 0); i > a1; v10 = 1 )
        {
          v8 = *(i - 1);
          if ( v8 != 47 && v8 != 92 )
            break;
          --i;
        }
        v4 = *(char **)(v7 + 4);
        v7 += 4;
        if ( !v4 )
          break;
        while ( *v4 == 47 || *v4 == 92 )
          ++v4;
        if ( (unsigned int)i >= v5 )
          goto LABEL_30;
        *i++ = 92;
        if ( (unsigned int)i >= v5 )
        {
          i = (__int8 *)(v5 - 1);
          *(_BYTE *)(v5 - 1) = 0;
        }
      }
      if ( v10 && i == a1 + 2 && *(i - 1) == 58 )
      {
        if ( (unsigned int)i >= v5 )
        {
LABEL_30:
          if ( byte_4B70F0 )
            __debugbreak();
          sub_4533F0(518);
        }
        *i++ = 92;
        if ( (unsigned int)i < v5 )
          goto LABEL_25;
        i = (__int8 *)(v5 - 1);
        *(_BYTE *)(v5 - 1) = 0;
      }
    }
    if ( (unsigned int)i >= v5 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(519);
    }
LABEL_25:
    *i = 0;
  }
  return a1;
}
// 4B70F0: using guessed type char byte_4B70F0;
