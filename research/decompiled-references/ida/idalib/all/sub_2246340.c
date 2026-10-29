__int64 __fastcall sub_2246340(__int64 a1, char *a2, unsigned __int64 a3)
{
  __int64 result; // rax
  char *v4; // rax
  char *v5; // rdx
  char v6; // di
  char v7; // cl

  result = 0;
  if ( *(_QWORD *)(a1 + 8) >= a3 )
  {
    v4 = *(char **)a1;
    v5 = (char *)(*(_QWORD *)a1 + a3);
    if ( v5 == *(char **)a1 )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( (unsigned __int8)(*v4 - 65) < 0x1Au )
          v6 = *v4 + 32;
        v7 = *a2;
        if ( (unsigned __int8)(*a2 - 65) < 0x1Au )
          v7 = *a2 + 32;
        if ( v6 != v7 )
          break;
        ++v4;
        ++a2;
        if ( v5 == v4 )
          return 1;
      }
      return 0;
    }
  }
  return result;
}
