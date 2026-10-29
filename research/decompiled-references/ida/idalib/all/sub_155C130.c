__int64 __fastcall sub_155C130(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rbp

  v2 = *(unsigned int *)(a2 + 24);
  if ( !(_DWORD)v2 )
    return sub_1A37D70(a1, a2);
  v3 = *(__int64 **)(a2 + 16);
  if ( !*v3 )
    return sub_1A37D70(a1, a2);
  v4 = 8 * v2;
  v5 = &v3[(unsigned __int64)v4 / 8];
  v6 = v4 >> 3;
  v7 = v4 >> 5;
  if ( !v7 )
  {
LABEL_13:
    if ( v6 != 2 )
    {
      if ( v6 != 3 )
      {
        if ( v6 != 1 )
          return 0;
        goto LABEL_21;
      }
      if ( !(unsigned __int8)sub_B72F20(*v3) )
        goto LABEL_10;
      ++v3;
    }
    if ( !(unsigned __int8)sub_B72F20(*v3) )
      goto LABEL_10;
    ++v3;
LABEL_21:
    if ( (unsigned __int8)sub_B72F20(*v3) )
      return 0;
    goto LABEL_10;
  }
  v8 = &v3[4 * v7];
  while ( (unsigned __int8)sub_B72F20(*v3) )
  {
    if ( !(unsigned __int8)sub_B72F20(v3[1]) )
    {
      ++v3;
      break;
    }
    if ( !(unsigned __int8)sub_B72F20(v3[2]) )
    {
      v3 += 2;
      break;
    }
    if ( !(unsigned __int8)sub_B72F20(v3[3]) )
    {
      v3 += 3;
      break;
    }
    v3 += 4;
    if ( v8 == v3 )
    {
      v6 = v5 - v3;
      goto LABEL_13;
    }
  }
LABEL_10:
  if ( v5 != v3 )
    return sub_1A37D70(a1, a2);
  return 0;
}
