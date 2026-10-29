__int64 __fastcall sub_B87020(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  __int64 v8; // rbp
  char v9; // bl
  char v10; // al
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 result; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v7 = a3;
  v8 = a2;
  v9 = a3;
  v10 = *(_BYTE *)(a1 + 8) & 0x7F;
  if ( v10 != 19 )
  {
    if ( v10 != 20 )
      goto LABEL_14;
    v14 = a1 - 48;
    if ( !v14 )
      goto LABEL_14;
    goto LABEL_8;
  }
  if ( a1 == 48 )
    goto LABEL_14;
  v11 = *(_QWORD *)(a1 + 56);
  if ( v11 )
  {
    v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v12 )
      goto LABEL_14;
  }
  else
  {
    a2 = *(_QWORD *)(a1 + 48);
    sub_A55AE0((__int64 *)(a2 + 88), a2, a3, a4, a5, a6);
    v12 = (__int64 *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v12 )
      goto LABEL_7;
  }
  v13 = *v12;
  if ( v13 && (*(_BYTE *)(v13 + 8) & 6) != 0 )
    return 0;
LABEL_7:
  v14 = a1 - 48;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) != 0x14 )
    goto LABEL_14;
LABEL_8:
  for ( v21[0] = sub_B86FC0(v14, a2, a3, a4, a5, a6); ; v21[0] = *(_QWORD *)(v21[0] + 128) )
  {
    sub_B82AC0(v21);
    if ( !v21[0] )
      break;
    result = sub_B87020(v21[0] + 48, v8, v7);
    if ( result )
      return result;
  }
LABEL_14:
  v16 = sub_B70930(a1, v8, a3, a4, a5, a6);
  if ( !v16 )
    return 0;
  if ( v9 == 1 )
  {
    while ( 1 )
    {
      v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      result = v16 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v16 & 4) == 0 )
        break;
      if ( !v17 )
        return 0;
      result = *(_QWORD *)v17;
      if ( (*(_BYTE *)(*(_QWORD *)v17 + 28LL) & 0x7F) == 0x4B && (*(_BYTE *)(result + 73) & 0x40) == 0 )
        return result;
      v16 = *(_QWORD *)(v17 + 8);
      if ( !v16 )
        return 0;
    }
    if ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x4B && (*(_BYTE *)(v17 + 73) & 0x40) == 0 )
      return result;
    return 0;
  }
  if ( v9 == 2 )
  {
    while ( 1 )
    {
      v18 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      result = v16 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v16 & 4) == 0 )
        break;
      if ( !v18 )
        return 0;
      result = *(_QWORD *)v18;
      if ( (*(_BYTE *)(*(_QWORD *)v18 + 28LL) & 0x7F) == 0x4B && (*(_BYTE *)(result + 73) & 0x40) != 0 )
        return result;
      v16 = *(_QWORD *)(v18 + 8);
      if ( !v16 )
        return 0;
    }
    if ( (*(_BYTE *)(v18 + 28) & 0x7F) != 0x4B || (*(_BYTE *)(v18 + 73) & 0x40) == 0 )
      return 0;
  }
  else
  {
    if ( v9 )
    {
      do
      {
        v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v16 & 4) == 0 )
          break;
        if ( !v19 )
          break;
        v16 = *(_QWORD *)(v19 + 8);
      }
      while ( v16 );
      return 0;
    }
    result = 0;
    while ( 1 )
    {
      v20 = v16 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v16 & 4) == 0 )
        break;
      if ( v20 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)v20 + 28LL) & 0x7F) != 0x4B
          || (result = *(_QWORD *)v20, (*(_BYTE *)(*(_QWORD *)v20 + 73LL) & 0x40) != 0) )
        {
          v16 = *(_QWORD *)(v20 + 8);
          if ( v16 )
            continue;
        }
      }
      return result;
    }
    if ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x4B )
      return v16 & 0xFFFFFFFFFFFFFFF8LL;
  }
  return result;
}

