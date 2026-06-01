__int64 __fastcall sub_8596E0(unsigned int **a1, __int64 a2)
{
  unsigned int *v2; // r12
  _QWORD *v3; // rax

  v2 = *a1;
  if ( !**a1 )
  {
    v2[36] = 0;
    if ( !(unsigned int)sub_844EC0(v2, 2, 0, 13, 0) )
    {
      v3 = sub_8452F0((__int64)v2, 2);
      if ( a2 )
      {
        if ( v3 )
        {
          v3[2] &= ~1uLL;
          v3[3] = a2;
        }
      }
    }
  }
  return sub_84ACF0((__int64)a1);
}

