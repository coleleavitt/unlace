__int64 __fastcall sub_7EE760(__int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_DWORD *)a2 & 0x7FFFFFFF;
  if ( v2 == 8 )
    return sub_7EBA80(a1, *(_QWORD *)(a2 + 8));
  if ( v2 > 8 )
  {
    if ( v2 != 9 )
      return 1;
    v4 = *(_QWORD *)(a2 + 8);
    v5 = v4 + 24LL * *(unsigned int *)(a2 + 4);
    if ( v4 == v5 )
      return 1;
    while ( 1 )
    {
      result = sub_7EE760(a1, v4);
      if ( !(_BYTE)result )
        break;
      v4 += 24;
      if ( v5 == v4 )
        return 1;
    }
  }
  else
  {
    if ( v2 != 1 )
    {
      if ( ((v2 + 2147483642) & 0x7FFFFFFF) <= 1 )
      {
        sub_B03900(v6, *(_QWORD *)(a2 + 8));
        return sub_7EE690(a1, v6[0]);
      }
      return 1;
    }
    return sub_7EDF40(a1, *(_QWORD *)(a2 + 8));
  }
  return result;
}

