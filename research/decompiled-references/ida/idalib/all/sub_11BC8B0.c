__int64 __fastcall sub_11BC8B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 *v10; // rbx
  __int64 *i; // rbp
  int v12[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( (*(_BYTE *)(a2 + 16) & 8) == 0 || sub_10DCD30(a3, 0xBF0u) || sub_10DCD30(a3, 0xBBFu) || sub_10DCD30(a3, 0xCA4u) )
  {
    v12[0] = 3007;
    v6 = sub_21B6DA0(a3, v12, 1);
    v7 = *(_QWORD *)(a3 + 8);
    v8 = (unsigned int)v6;
    result = HIDWORD(v6);
    v10 = (__int64 *)(v7 + 8 * v8);
    for ( i = (__int64 *)(v7 + 8 * result); i != v10; ++v10 )
    {
      if ( *v10 )
      {
        result = sub_21B9810(*v10, 3007);
        if ( (_BYTE)result )
          break;
      }
    }
    while ( i != v10 )
    {
      result = *(_QWORD *)(*v10 + 16);
      if ( !result )
        result = *v10;
      ++v10;
      *(_BYTE *)(result + 44) |= 1u;
      if ( v10 == i )
        break;
      while ( 1 )
      {
        if ( *v10 )
        {
          result = sub_21B9810(*v10, 3007);
          if ( (_BYTE)result )
            break;
        }
        if ( i == ++v10 )
          return result;
      }
    }
  }
  else
  {
    result = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
    if ( (void (*)())result != nullsub_574 )
      return ((__int64 (__fastcall *)(__int64, __int64, __int64))result)(a1, a3, a4);
  }
  return result;
}
