__int64 __fastcall sub_4267F0(signed int *a1, __int64 a2)
{
  signed int v2; // r13d
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // edx
  signed int v7; // r13d
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 result; // rax
  int v12; // ebx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  int *v16; // rbp
  int v17; // edx
  char v18; // [rsp+0h] [rbp-28h]
  char v19; // [rsp+0h] [rbp-28h]

  v2 = 0;
  sub_48EDF0(a2, "data=[", 0xFFFFFFFFLL);
  if ( *a1 > 0 )
  {
    do
    {
      if ( v2 )
        sub_48EDF0(a2, ", ", 0xFFFFFFFFLL);
      v6 = v2 + a1[1];
      ++v2;
      sub_490C60(a2, (unsigned int)"%%v%u", v6, v3, v4, v5, v18);
    }
    while ( *a1 > v2 );
  }
  v7 = 0;
  sub_490C60(a2, (unsigned int)"], loop=%%v%u", a1[2], v3, v4, v5, v18);
  result = (unsigned int)*a1;
  if ( (int)result > 0 )
  {
    do
    {
      if ( v7 )
        sub_48EDF0(a2, ",", 0xFFFFFFFFLL);
      v12 = 0;
      sub_490C60(a2, (unsigned int)"\n\t\t it%%v%u\t[", v7 + a1[1], v8, v9, v10, v19);
      v16 = *(int **)&a1[2 * v7 + 4];
      if ( *v16 > 0 )
      {
        do
        {
          if ( v12 )
            sub_48EDF0(a2, ", ", 0xFFFFFFFFLL);
          v17 = v16[++v12];
          sub_490C60(a2, (unsigned int)"%%v%u", v17, v13, v14, v15, v19);
        }
        while ( *v16 > v12 );
      }
      ++v7;
      result = sub_48EDF0(a2, "]", 0xFFFFFFFFLL);
    }
    while ( *a1 > v7 );
  }
  return result;
}

