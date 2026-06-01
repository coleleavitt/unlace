__int64 __fastcall sub_841EC0(char a1, __int64 a2, unsigned int *a3)
{
  unsigned int *v3; // r12
  unsigned int v4; // edx
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 result; // rax

  v3 = a3;
  v4 = *a3;
  if ( !v4 || (result = sub_841C80(a1, a2, 0, v4 - 1), v4 = *v3, *v3 <= 0xFF) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = v3[1];
        v6 = v4 + 1;
        if ( v5 != (_DWORD)v6 )
          break;
        ++v3;
        v4 = v5;
      }
      if ( v5 > 0x100 )
        v5 = 256;
      sub_841C80(a1, a2, v6, v5 - 1);
      v4 = v3[1];
      result = (__int64)(v3 + 1);
      if ( v4 > 0xFF )
        break;
      ++v3;
    }
  }
  return result;
}

