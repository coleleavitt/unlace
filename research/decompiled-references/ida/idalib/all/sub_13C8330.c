__int64 __fastcall sub_13C8330(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  char v9; // dl

  result = *a1;
  if ( (*(_BYTE *)(*a1 + 280) & 2) != 0 )
  {
    result = a1[6];
    v7 = (a1[7] - result) >> 4;
    if ( v7 )
    {
      v8 = 0;
      while ( 1 )
      {
        result += 16 * v8;
        v9 = *(_BYTE *)(result + 8);
        if ( (v9 & 0x18) == 0 )
          result = sub_13C8080((__int64)a1, *(_QWORD **)result, (v9 & 7) != 0, 0, a5, a6);
        if ( v7 == ++v8 )
          break;
        result = a1[6];
      }
    }
  }
  return result;
}
