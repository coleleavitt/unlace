__int64 __fastcall sub_AFA410(__int64 a1, __m128 a2)
{
  _QWORD *v2; // r12
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  int v5; // eax
  _QWORD *v6; // rax
  __int64 result; // rax
  char v8; // bl
  char v9; // al
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rdx

  v2 = *(_QWORD **)(a1 + 96);
  v3 = &v2[2 * *(unsigned int *)(a1 + 104)];
  if ( v2 == v3 )
  {
LABEL_30:
    v12 = *(_QWORD *)(a1 + 88);
    result = 0;
    if ( v12 )
      return 2 * (unsigned int)(*(_DWORD *)(v12 - 4) != 0);
    return result;
  }
  v4 = *(_QWORD **)(a1 + 96);
  while ( *v4 <= 1u )
  {
    v4 += 2;
    if ( v3 == v4 )
      goto LABEL_17;
  }
  if ( v3 == v4 )
  {
LABEL_17:
    while ( v2 != v3 )
    {
      if ( *v2 > 1u )
      {
        if ( v3 == v2 )
          goto LABEL_30;
        v8 = 0;
        while ( 1 )
        {
          v9 = sub_AF9670(a1, v2[1], a2);
          v10 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(v10 + 8984) != qword_1C7ED08 || *(_BYTE *)(v10 + 2416) )
            return 1;
          v8 |= v9;
          v11 = v2 + 2;
          if ( v2 + 2 != v3 )
          {
            while ( 1 )
            {
              v2 = v11;
              if ( *v11 > 1u )
                break;
              v11 += 2;
              if ( v3 == v11 )
                goto LABEL_29;
            }
            if ( v3 != v11 )
              continue;
          }
LABEL_29:
          if ( v8 )
            return 1;
          goto LABEL_30;
        }
      }
      v2 += 2;
    }
    goto LABEL_30;
  }
  while ( 1 )
  {
    v5 = sub_AF9520(a1, v4[1]);
    if ( v5 == -1 )
      return 1;
    if ( !v5 )
      return 2;
    v6 = v4 + 2;
    if ( v3 != v4 + 2 )
    {
      while ( 1 )
      {
        v4 = v6;
        if ( *v6 > 1u )
          break;
        v6 += 2;
        if ( v3 == v6 )
          goto LABEL_13;
      }
      if ( v3 != v6 )
        continue;
    }
LABEL_13:
    v2 = *(_QWORD **)(a1 + 96);
    v3 = &v2[2 * *(unsigned int *)(a1 + 104)];
    goto LABEL_17;
  }
}

