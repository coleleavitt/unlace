__int64 __fastcall sub_406ED0(int a1, char a2, unsigned __int8 a3, int *a4)
{
  int v6; // edi
  unsigned int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // r9d
  int v12; // edi

  if ( a3 )
  {
    v6 = 8 * a1;
    v7 = -1;
    if ( a3 > v6 )
      a3 = v6;
    v8 = a3;
    v9 = a3 & 0xE0;
    if ( !v9 )
      v7 = (1 << v8) - 1;
    v10 = *a4;
    if ( v6 <= v8 || (a2 & 1) == 0 )
    {
      v9 = 1;
LABEL_9:
      *a4 = v10 & v7;
      return (unsigned int)v9;
    }
    if ( (a2 & 0x10) == 0 )
    {
      LOBYTE(v9) = v7 >= v10;
      goto LABEL_9;
    }
    v12 = v6 - v8;
    if ( (unsigned __int64)v12 > 0x1F )
    {
      v9 = 0;
      if ( v10 < -1 )
        goto LABEL_9;
      v9 = 0;
    }
    else
    {
      v9 = 0;
      if ( v10 < (int)0x80000000 >> v12 )
        goto LABEL_9;
      v9 = 0x7FFFFFFF >> v12;
    }
    LOBYTE(v9) = v10 <= v9;
    goto LABEL_9;
  }
  *a4 = 0;
  return 0;
}

