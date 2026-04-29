__int64 __fastcall sub_D100(_QWORD *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rsi
  __int64 v3; // r9
  int v4; // ecx
  unsigned int v5; // r8d
  signed int v6; // edx

  v1 = a1[9];
  v2 = a1[8];
  if ( v1 < v2 )
  {
    v3 = a1[7];
    v4 = *(char *)(v3 + v1);
    if ( (unsigned __int8)(*(_BYTE *)(v3 + v1) - 48) <= 9u )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = v5;
        v5 = v4 + 10 * v5 - 48;
        if ( (int)v5 < v6 )
          break;
        if ( v2 > v1 )
        {
          a1[9] = ++v1;
          if ( v1 >= v2 )
            return v5;
        }
        else
        {
          v1 = a1[9];
          if ( v1 >= v2 )
            return v5;
        }
        v4 = *(char *)(v3 + v1);
        if ( (unsigned __int8)(*(_BYTE *)(v3 + v1) - 48) > 9u )
          return v5;
      }
    }
  }
  return 4294966296LL;
}
