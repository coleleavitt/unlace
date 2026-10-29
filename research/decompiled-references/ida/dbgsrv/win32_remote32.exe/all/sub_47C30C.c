/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47C30C
// Address: 0x0047C30C

//----- (0047C30C) --------------------------------------------------------
int __cdecl sub_47C30C(_WORD *a1, CHAR **a2, unsigned int a3, int *a4)
{
  CHAR *v4; // edi
  unsigned int v5; // ebx
  _WORD *v6; // esi
  int v7; // eax
  int v8; // eax
  __int16 v9; // cx
  unsigned int v10; // ecx
  int v11; // esi
  int i; // ebx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // [esp+Ch] [ebp-8h] BYREF

  v4 = *a2;
  if ( a1 )
  {
    v5 = a3;
    v6 = a1;
    if ( a3 )
    {
      while ( 1 )
      {
        v7 = sub_47C2A0(v4);
        v8 = sub_4810FA((int)&v16, v4, v7, a4);
        if ( v8 == -1 )
          break;
        if ( !v8 )
        {
          v4 = nullptr;
          *v6 = 0;
          goto LABEL_9;
        }
        v9 = v16;
        if ( v16 > 0xFFFF )
        {
          if ( v5 <= 1 )
            goto LABEL_9;
          v10 = v16 - 0x10000;
          --v5;
          v16 = v10;
          *v6++ = (v10 >> 10) | 0xD800;
          v9 = v10 & 0x3FF | 0xDC00;
        }
        *v6 = v9;
        v4 += v8;
        ++v6;
        if ( !--v5 )
          goto LABEL_9;
      }
      *a2 = v4;
      *sub_46B984() = 42;
      return -1;
    }
    else
    {
LABEL_9:
      v11 = v6 - a1;
      *a2 = v4;
      return v11;
    }
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v14 = sub_47C2A0(v4);
      v15 = sub_4810FA(0, v4, v14, a4);
      v11 = v15;
      if ( v15 == -1 )
      {
        *sub_46B984() = 42;
        return v11;
      }
      if ( !v15 )
        break;
      if ( v15 == 4 )
        ++i;
      v4 += v15;
    }
    return i;
  }
}
