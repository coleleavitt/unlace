bool __fastcall sub_F99D80(__int64 a1, unsigned int a2)
{
  int v3; // r14d
  __int64 v4; // r13
  __int64 v5; // r9
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 i; // rax
  const char *v11; // rax
  unsigned int v12; // edx
  unsigned __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 j; // rax
  const char *v16; // rax

  if ( a2 == 936 || a2 == 0 || a2 == 202 )
    return 1;
  v3 = *(_DWORD *)(a1 + 168);
  v4 = *(_QWORD *)a1;
  if ( a2 >= v3 + 1499 )
  {
    v5 = *(_QWORD *)(a1 + 112);
    v6 = a2 - v3 - 1499;
  }
  else if ( a2 <= 0x5DA )
  {
    v5 = *(_QWORD *)a1;
    v6 = a2;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = a2 - 1499;
  }
  v7 = *(_QWORD *)(v5 + 16);
  v8 = v6;
  for ( i = v5 + 40; v6 >= v7; v8 = v6 )
  {
    v5 = i;
    i += 40;
    v6 -= v7;
    v7 = *(_QWORD *)(i - 24);
  }
  if ( !strchr((const char *)(**(_QWORD **)v5 + *(unsigned int *)(*(_QWORD *)(v5 + 8) + 20 * v8 + 4)), 38) )
  {
    if ( a2 < v3 + 1499 )
    {
      v12 = a2;
      if ( a2 > 0x5DA )
      {
        v4 = *(_QWORD *)(a1 + 56);
        v12 = a2 - 1499;
      }
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 112);
      v12 = a2 - v3 - 1499;
    }
    v13 = *(_QWORD *)(v4 + 16);
    v14 = v12;
    for ( j = v4 + 40; v12 >= v13; v14 = v12 )
    {
      v4 = j;
      j += 40;
      v12 -= v13;
      v13 = *(_QWORD *)(j - 24);
    }
    if ( !strchr((const char *)(**(_QWORD **)v4 + *(unsigned int *)(*(_QWORD *)(v4 + 8) + 20 * v14 + 4)), 65) )
    {
      v16 = (const char *)sub_F99770((__int64 *)a1, a2);
      if ( !strchr(v16, 116) )
        return 1;
    }
  }
  v11 = (const char *)sub_F99770((__int64 *)a1, a2);
  return strchr(v11, 122) != nullptr;
}

