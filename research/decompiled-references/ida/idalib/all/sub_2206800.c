__int64 __fastcall sub_2206800(__int64 *a1)
{
  __int64 v1; // rdx
  int v2; // esi
  int v3; // ecx
  __int64 v4; // rdi
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // rcx

  v1 = *((unsigned int *)a1 + 2);
  v2 = 64;
  v3 = a1[1] & 0x3F;
  if ( v3 )
  {
    v2 = a1[1] & 0x3F;
    LOBYTE(v3) = 64 - v3;
  }
  v4 = *a1;
  v5 = (unsigned __int64)(v1 + 63) >> 6;
  result = 64;
  v7 = ~(*(_QWORD *)(v4 + 8LL * ((int)v5 - 1)) << v3);
  if ( v7 )
  {
    _BitScanReverse64(&v8, v7);
    result = (unsigned int)v8 ^ 0x3F;
  }
  if ( v2 == (_DWORD)result )
  {
    v9 = v5 - 2;
    if ( v9 >= 0 )
    {
      v10 = *(_QWORD *)(v4 + 8LL * v9);
      if ( v10 == -1 )
      {
        v11 = v4 + 8LL * v9 - 8;
        while ( 1 )
        {
          --v9;
          result = (unsigned int)(result + 64);
          if ( v9 == -1 )
            break;
          v11 -= 8;
          v10 = *(_QWORD *)(v11 + 8);
          if ( v10 != -1 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        _BitScanReverse64((unsigned __int64 *)&v10, ~v10);
        return ((unsigned int)v10 ^ 0x3F) + (unsigned int)result;
      }
    }
  }
  return result;
}
