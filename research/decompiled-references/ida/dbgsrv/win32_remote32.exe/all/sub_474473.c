/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474473
// Address: 0x00474473

//----- (00474473) --------------------------------------------------------
DWORD *__cdecl sub_474473(DWORD *a1, unsigned int a2, int a3)
{
  __int16 *v3; // edi
  int v4; // ebx

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v3 = (__int16 *)a2;
  if ( a2 < a2 + a3 )
  {
    while ( 1 )
    {
      v4 = (unsigned __int16)*v3;
      if ( sub_47C407(*v3) != (_WORD)v4 )
        break;
      a1[1] += 2;
      if ( v4 == 10 )
      {
        if ( sub_47C407(13) != 13 )
          break;
        ++a1[1];
        ++a1[2];
      }
      if ( (unsigned int)++v3 >= a2 + a3 )
        return a1;
    }
    *a1 = GetLastError();
  }
  return a1;
}
