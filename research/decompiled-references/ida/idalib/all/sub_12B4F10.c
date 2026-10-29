__int64 __fastcall sub_12B4F10(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 *i; // rbp
  int v8[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v8[0] = 3033;
  v2 = sub_21B6DA0(a2, v8, 1);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (unsigned int)v2;
  result = HIDWORD(v2);
  v6 = (__int64 *)(v3 + 8 * v4);
  for ( i = (__int64 *)(v3 + 8 * result); i != v6; ++v6 )
  {
    if ( *v6 )
    {
      result = sub_21B9810(*v6, 3033);
      if ( (_BYTE)result )
        break;
    }
  }
  while ( i != v6 )
  {
    result = *v6;
    if ( *(_QWORD *)(*v6 + 16) )
      result = *(_QWORD *)(*v6 + 16);
    ++v6;
    *(_BYTE *)(result + 44) |= 1u;
    if ( v6 == i )
      break;
    while ( 1 )
    {
      if ( *v6 )
      {
        result = sub_21B9810(*v6, 3033);
        if ( (_BYTE)result )
          break;
      }
      if ( i == ++v6 )
        return result;
    }
  }
  return result;
}
