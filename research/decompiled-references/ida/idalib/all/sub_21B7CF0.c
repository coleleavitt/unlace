__int64 __fastcall sub_21B7CF0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 *v7; // r12
  __int64 *v8; // rbp
  unsigned int v9[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v9[0] = a2;
  v2 = sub_21B6DA0(a1, (int *)v9, 1);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = (unsigned int)v2;
  result = HIDWORD(v2);
  v6 = (__int64 *)(v3 + 8 * v4);
  v7 = (__int64 *)(v3 + 8 * result);
  if ( v6 != v7 )
  {
    if ( a2 )
    {
      do
      {
        if ( *v6 )
        {
          result = sub_21B9810(*v6, a2);
          if ( (_BYTE)result )
            break;
        }
        ++v6;
      }
      while ( v7 != v6 );
    }
    else
    {
      result = (unsigned __int64)((char *)(v7 - 1) - (char *)v6) >> 3;
      v6 += result + 1;
    }
  }
  while ( v7 != v6 )
  {
    v8 = v6 + 1;
    result = *(_QWORD *)(*v6 + 16);
    if ( !result )
      result = *v6;
    *(_BYTE *)(result + 44) |= 1u;
    if ( v8 == v7 )
      break;
    if ( a2 )
    {
      while ( 1 )
      {
        if ( *v8 )
        {
          result = sub_21B9810(*v8, a2);
          if ( (_BYTE)result )
            break;
        }
        if ( v7 == ++v8 )
          return result;
      }
      v6 = v8;
    }
    else
    {
      result = (unsigned __int64)((char *)(v7 - 2) - (char *)v6) >> 3;
      v6 = &v8[result + 1];
    }
  }
  return result;
}
