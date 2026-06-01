__int64 __fastcall sub_B64280(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 *v2; // r12
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 *v5; // r14
  __int64 *v7; // rax

  v1 = *(__int64 **)(a1 + 9528);
  v2 = &v1[2 * *(unsigned int *)(a1 + 9536)];
  if ( v1 == v2 )
    return 0;
  while ( (unsigned __int64)*v1 <= 1 )
  {
    v1 += 2;
    if ( v2 == v1 )
      return 0;
  }
  if ( v2 == v1 )
    return 0;
  v3 = *v1;
  while ( *(_DWORD *)(v3 + 32) == 1 )
  {
    v4 = *(__int64 **)(v3 + 56);
    if ( v4 )
    {
      v5 = &v4[*((unsigned int *)v4 - 1)];
      if ( v5 != v4 )
      {
        while ( (unsigned __int8)sub_8EB820(a1, *v4) )
        {
          if ( v5 == ++v4 )
            goto LABEL_14;
        }
        return 1;
      }
    }
LABEL_14:
    v7 = v1 + 2;
    if ( v2 != v1 + 2 )
    {
      while ( 1 )
      {
        v3 = *v7;
        v1 = v7;
        if ( (unsigned __int64)*v7 > 1 )
          break;
        v7 += 2;
        if ( v2 == v7 )
          return 0;
      }
      if ( v2 != v7 )
        continue;
    }
    return 0;
  }
  return 1;
}

