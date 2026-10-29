__int64 __fastcall sub_157D870(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // rbx
  unsigned __int64 *v4; // r12
  unsigned __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rax

  result = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32;
  v3 = (unsigned __int64 *)(a2 + result);
  v4 = (unsigned __int64 *)(a2 + result + 8LL * *(unsigned int *)(a2 + 16));
  if ( v4 != (unsigned __int64 *)(a2 + result) )
  {
    do
    {
      while ( 1 )
      {
        v6 = *v3;
        if ( (*(_BYTE *)(*v3 + 1) & 6) != 0 )
        {
          result = *(_QWORD *)(v6 + 8);
          if ( (result & 1) == 0 )
          {
            result &= 0xFFFFFFFFFFFFFFF0LL;
            if ( (*(_BYTE *)(result + 8) & 1) == 0 )
            {
              result = sub_BFD550(v6);
              if ( (*(_WORD *)result & 0x1FF) == 0x47 )
              {
                v7 = *(_QWORD *)(result + 16);
                result = (*(_BYTE *)(v7 + 28) & 0x7Fu) - 40;
                if ( (unsigned int)result <= 6 )
                {
                  v8 = sub_B8C330(v7);
                  result = sub_B7D8D0(v7, v8);
                  if ( *(_QWORD *)a1 == result )
                    break;
                }
              }
            }
          }
        }
        if ( v4 == ++v3 )
          return result;
      }
      result = 256;
      ++v3;
      *(_WORD *)(a1 + 8) = 256;
    }
    while ( v4 != v3 );
  }
  return result;
}
