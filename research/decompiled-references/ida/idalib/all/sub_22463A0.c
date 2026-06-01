__int64 __fastcall sub_22463A0(__int64 a1, char *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  char *v5; // rdi
  char *v6; // rdx
  char v7; // al
  char v8; // cl

  v3 = *(_QWORD *)(a1 + 8);
  result = 0;
  if ( v3 >= a3 )
  {
    v5 = *(char **)a1;
    if ( v3 != a3 )
    {
      if ( v3 < a3 )
        a3 = 0;
      else
        v3 -= a3;
      v5 += v3;
    }
    v6 = &v5[a3];
    if ( v6 == v5 )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( (unsigned __int8)(*v5 - 65) < 0x1Au )
          v7 = *v5 + 32;
        v8 = *a2;
        if ( (unsigned __int8)(*a2 - 65) < 0x1Au )
          v8 = *a2 + 32;
        if ( v8 != v7 )
          break;
        ++v5;
        ++a2;
        if ( v6 == v5 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}
