unsigned __int64 __fastcall sub_ECEA10(unsigned __int64 *a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // r8
  _QWORD *v5; // rdi
  unsigned __int8 v6; // dl
  __int64 j; // rax
  __int64 v8; // rax
  char v9; // dl
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // cl

  result = *a1;
  if ( a2 )
  {
    result += 8LL;
    *a1 = result;
  }
  for ( i = a1[2]; result != i; *a1 = result )
  {
    v5 = *(_QWORD **)result;
    v6 = *(_BYTE *)(*(_QWORD *)result + 28LL) & 0x7F;
    if ( (unsigned int)v6 - 40 > 6 )
    {
      if ( (unsigned int)v6 - 64 > 2 )
      {
        if ( v6 == 33 && v5[9] )
          return result;
      }
      else
      {
        v10 = (__int64 *)(v5[10] & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v5[10] & 4) != 0 )
          v11 = v10[1];
        else
          v11 = *v10;
        while ( 1 )
        {
          v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
          v13 = *(_BYTE *)(v12 + 16);
          if ( (unsigned __int8)(v13 - 2) > 4u )
            break;
          if ( v13 == 6 && *(_QWORD *)(v12 + 40) )
          {
            result = a1[1] & 3;
            a1[1] = result | v12;
            return result;
          }
          v11 = *(_QWORD *)(v12 + 32);
        }
      }
    }
    else
    {
      for ( j = v5[6]; ; j = *(_QWORD *)(v8 + 32) )
      {
        v8 = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFF0LL);
        v9 = *(_BYTE *)(v8 + 16);
        if ( (unsigned __int8)(v9 - 2) > 4u )
          break;
        if ( v9 == 6 && *(_QWORD *)(v8 + 40) )
        {
          result = a1[1] & 3 | v8;
          a1[1] = result;
          return result;
        }
      }
      result = sub_B4F900((__int64)v5);
      if ( result )
        return result;
      i = a1[2];
      result = *a1;
    }
    result += 8LL;
  }
  a1[1] = 0;
  return result;
}

