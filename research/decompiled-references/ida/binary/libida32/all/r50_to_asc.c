__int64 __fastcall r50_to_asc(_BYTE *a1, unsigned __int16 *a2, int a3)
{
  __int64 result; // rax
  int v4; // ecx
  __int16 v5; // dx
  int v6; // edx

  result = (unsigned int)a3;
  if ( a3 > 0 )
  {
    while ( 1 )
    {
      v6 = *a2++;
      if ( (unsigned __int16)v6 > 0xF9FFu )
        break;
      a1 += 3;
      *(a1 - 3) = aAbcdefghijklmn[(unsigned __int16)v6 / 0x640u];
      v4 = v6 - 1600 * ((unsigned __int16)v6 / 0x640u);
      v5 = (unsigned __int16)v6 % 0x640u / 0x28;
      *(a1 - 2) = aAbcdefghijklmn[v5 & 0x7FF];
      *(a1 - 1) = aAbcdefghijklmn[(unsigned __int16)(v4 - 40 * v5)];
      result = (unsigned int)(result - 1);
      if ( !(_DWORD)result )
      {
        *a1 = 0;
        return 0;
      }
    }
  }
  *a1 = 0;
  return result;
}

