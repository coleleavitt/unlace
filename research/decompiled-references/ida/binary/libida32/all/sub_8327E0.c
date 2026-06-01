__int64 __fastcall sub_8327E0(
        unsigned __int8 **a1,
        unsigned __int8 *a2,
        int a3,
        unsigned int a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned int v8; // r10d
  unsigned __int8 *v9; // rax
  bool v10; // bp
  unsigned __int8 v11; // dl
  unsigned int v12; // r12d
  unsigned int v13; // ecx
  int v14; // edx
  unsigned int v15; // r11d

  v8 = a4;
  v9 = *a1;
  v10 = a3 >= 0;
  *a7 = 0;
  if ( v9 >= a2 || a3 < 0 )
  {
    v12 = 0;
    goto LABEL_19;
  }
  v11 = *v9;
  if ( *v9 == 43 )
  {
    v8 = a4 - a3;
    ++v9;
    v12 = 1;
LABEL_19:
    if ( v9 < a2 )
      goto LABEL_6;
    return 0;
  }
  v12 = 0;
  if ( v11 != 45 )
    goto LABEL_7;
  ++v9;
  v12 = -1;
  if ( v9 >= a2 )
    return 0;
LABEL_6:
  v11 = *v9;
LABEL_7:
  v13 = 0;
  if ( (unsigned __int8)(v11 - 48) > 9u )
    return 0;
  do
  {
    if ( v9 >= a2 || (v14 = *v9, (unsigned __int8)(v14 - 48) > 9u) )
    {
      if ( v12 && v10 )
      {
        if ( v13 )
        {
          if ( v12 == 1 )
          {
            v15 = v13 + a3;
          }
          else if ( a3 < v13 )
          {
            *a7 = 115;
            v15 = v13;
            v12 = 0;
          }
          else
          {
            v12 = 1;
            v15 = a3 + 1 - v13;
          }
        }
        else
        {
          *a7 = 126;
          v15 = 0;
          v12 = 0;
        }
      }
      else
      {
        v15 = v13;
        v12 = 1;
      }
      goto LABEL_23;
    }
    ++v9;
    v13 = v14 + 10 * v13 - 48;
  }
  while ( v8 >= v13 );
  *a7 = a5;
  v15 = v13;
  if ( v9 < a2 )
  {
    do
    {
      if ( (unsigned __int8)(*v9 - 48) > 9u )
        break;
      ++v9;
    }
    while ( a2 != v9 );
  }
  v12 = 0;
LABEL_23:
  *a6 = v15;
  *a1 = v9;
  return v12;
}

