char __fastcall sub_1C53C50(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  char result; // al
  unsigned int v4; // ebx
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  int v7; // edx
  unsigned __int64 v8; // rdx
  int v9; // eax
  _DWORD *v10; // rax
  _DWORD *v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // r14
  __int64 *v17; // rbx
  char v18; // cl
  __int64 v19; // rbx
  __int64 v20; // rbp
  unsigned int v21; // r12d
  __int64 v22; // r13
  unsigned int v23; // edx
  unsigned int v24; // eax
  bool v25; // al

  v2 = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)v2 || *(_QWORD *)(a1 + 96) )
  {
    v4 = *(_DWORD *)(a2 + 8);
    v5 = *(_QWORD *)a2;
    v6 = 1LL << ((unsigned __int8)v4 - 1);
    if ( v4 > 0x40 )
    {
      if ( (v6 & *(_QWORD *)(v5 + 8LL * ((v4 - 1) >> 6))) != 0 )
        v9 = sub_2206800(a2);
      else
        v9 = sub_2206780(a2);
      if ( v4 + 1 - v9 > 0x20 )
        return 0;
      v5 = *(_QWORD *)v5;
    }
    else if ( (v6 & v5) != 0 )
    {
      if ( v4 )
      {
        v7 = 64;
        if ( v5 << (64 - (unsigned __int8)v4) != -1 )
        {
          _BitScanReverse64(&v8, ~(v5 << (64 - (unsigned __int8)v4)));
          v7 = v8 ^ 0x3F;
        }
        if ( v4 + 1 - v7 > 0x20 )
          return 0;
      }
    }
    else if ( v5 )
    {
      _BitScanReverse64(&v12, v5);
      if ( 65 - ((unsigned int)v12 ^ 0x3F) > 0x20 )
        return 0;
    }
    if ( *(_QWORD *)(a1 + 96) )
    {
      v13 = *(_QWORD *)(a1 + 72);
      if ( v13 )
      {
        v14 = a1 + 64;
        do
        {
          while ( (int)v5 <= *(_DWORD *)(v13 + 32) )
          {
            v14 = v13;
            v13 = *(_QWORD *)(v13 + 16);
            if ( !v13 )
              goto LABEL_31;
          }
          v13 = *(_QWORD *)(v13 + 24);
        }
        while ( v13 );
LABEL_31:
        result = 0;
        if ( a1 + 64 != v14 )
          return (int)v5 >= *(_DWORD *)(v14 + 32);
        return result;
      }
    }
    else
    {
      v10 = *(_DWORD **)(a1 + 24);
      v11 = &v10[v2];
      if ( v10 != v11 )
      {
        while ( (_DWORD)v5 != *v10 )
        {
          if ( v11 == ++v10 )
            return 0;
        }
        return 1;
      }
    }
    return 0;
  }
  if ( !*(_BYTE *)(a1 + 16) )
    return 1;
  v15 = *(_DWORD *)(a2 + 8);
  v16 = *(int *)(a1 + 8);
  v17 = *(__int64 **)a2;
  if ( v15 > 0x40 )
  {
    v21 = v15 + 1;
    v22 = v17[(v15 - 1) >> 6] & (1LL << ((unsigned __int8)v15 - 1));
    if ( v22 )
    {
      v23 = v21 - sub_2206800(a2);
      result = 0;
      if ( v23 > 0x40 || v16 > *v17 )
        return result;
      v20 = *(int *)(a1 + 12);
      v24 = v21 - sub_2206800(a2);
      goto LABEL_42;
    }
    if ( v21 - (unsigned int)sub_2206780(a2) > 0x40 )
      goto LABEL_46;
    if ( *v17 >= v16 )
    {
      v20 = *(int *)(a1 + 12);
      v24 = v21 - sub_2206780(a2);
LABEL_42:
      if ( v24 <= 0x40 )
      {
        v19 = *v17;
        goto LABEL_44;
      }
LABEL_46:
      v25 = v22 == 0;
      return !v25;
    }
    return 0;
  }
  if ( v15 )
  {
    v18 = 64 - v15;
    result = 0;
    v19 = (__int64)((_QWORD)v17 << v18) >> v18;
    if ( v16 <= v19 )
    {
      v20 = *(int *)(a1 + 12);
LABEL_44:
      v25 = v20 < v19;
      return !v25;
    }
  }
  else
  {
    result = 0;
    if ( v16 <= 0 )
    {
      v20 = *(int *)(a1 + 12);
      v19 = 0;
      goto LABEL_44;
    }
  }
  return result;
}
