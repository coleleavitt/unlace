__int64 __fastcall sub_1EC1D10(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // r15d
  int v7; // ebp
  _BYTE v9[120]; // [rsp+8h] [rbp-78h] BYREF

  result = (__int64)(*(_QWORD *)(a2 + 1232) - *(_QWORD *)(a2 + 1224)) >> 3;
  if ( (_DWORD)result )
  {
    v5 = 0;
    v7 = (__int64)(*(_QWORD *)(a2 + 1232) - *(_QWORD *)(a2 + 1224)) >> 3;
    do
    {
      while ( 1 )
      {
        result = sub_1EC0940((__int64)v9, a2, ++v5);
        if ( v9[58] )
        {
          if ( v9[59] )
          {
            result = sub_1EC0E20(a1, a2, v5, 1) & 0xFFFFFFFFFFFFFFF8LL;
            if ( result )
              break;
          }
        }
        if ( v5 == v7 )
          return result;
      }
      result = a3(a4, result);
    }
    while ( v5 != v7 );
  }
  return result;
}
