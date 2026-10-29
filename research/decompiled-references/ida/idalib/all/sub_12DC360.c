__int64 __fastcall sub_12DC360(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v5; // r13
  _QWORD *v6; // r12
  _QWORD *v7; // rdi
  volatile signed __int32 *v8; // rdi

  v2 = *(_QWORD *)(a1 + 2008);
  if ( v2 != *(_QWORD *)(a1 + 2016) )
    *(_QWORD *)(a1 + 2016) = v2;
  result = *(unsigned int *)(a1 + 2044);
  if ( (_DWORD)result )
  {
    result = *(unsigned int *)(a1 + 2040);
    if ( (_DWORD)result )
    {
      v4 = 0;
      v5 = 8LL * (unsigned int)(result - 1) + 8;
      do
      {
        result = *(_QWORD *)(a1 + 2032);
        while ( 1 )
        {
          v6 = (_QWORD *)(result + v4);
          v7 = *(_QWORD **)(result + v4);
          if ( v7 != (_QWORD *)-8LL )
          {
            if ( v7 )
              break;
          }
          v4 += 8;
          *v6 = 0;
          if ( v4 == v5 )
            goto LABEL_10;
        }
        v4 += 8;
        result = operator delete(v7, *v7 + 17LL, 8);
        *v6 = 0;
      }
      while ( v4 != v5 );
    }
LABEL_10:
    *(_QWORD *)(a1 + 2044) = 0;
  }
  v8 = *(volatile signed __int32 **)(a1 + 1992);
  *(_OWORD *)(a1 + 1984) = 0;
  if ( v8 )
    return sub_4343A0(v8);
  return result;
}
