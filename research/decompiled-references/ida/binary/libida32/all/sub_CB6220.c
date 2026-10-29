__int64 __fastcall sub_CB6220(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  unsigned int *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int8 v8; // al
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned __int16 v11; // ax
  int v13; // edx
  unsigned __int64 v14; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // r14
  unsigned __int8 v17; // al

  v3 = *(_QWORD *)(a2 + 8);
  if ( (v3 & 1) != 0 )
  {
    v4 = (unsigned int *)(v3 & 0xFFFFFFFFFFFFFFFELL);
    v5 = (__int64 *)(v4 + 2);
    v6 = (__int64)&v4[2 * *v4 + 2];
  }
  else
  {
    v6 = a2 + 16;
    v5 = (__int64 *)(a2 + 8);
    if ( !v3 )
      return 1;
  }
  if ( v5 == (__int64 *)v6 )
    return 1;
  v7 = 0xC801DF40003FLL;
  if ( a3 )
  {
    while ( 1 )
    {
      v16 = *v5;
      v17 = *(_BYTE *)(*v5 + 28) & 0x7F;
      if ( v17 != 9 )
      {
        v13 = v17;
        v14 = (v17 + 94) & 0x7F;
        if ( (unsigned __int8)v14 > 0x2Fu || !_bittest64(&v7, v14) )
        {
          if ( (unsigned int)(v13 - 40) > 6 )
            break;
          v15 = sub_CB3E40(a1, *v5, 0, 0);
          if ( !HIBYTE(v15) || !(_BYTE)v15 || !(unsigned __int8)sub_CB5F60(a1, v16) )
            break;
        }
      }
      if ( (__int64 *)v6 == ++v5 )
        return 1;
    }
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = *(_BYTE *)(*v5 + 28) & 0x7F;
        if ( v8 != 9 )
        {
          v9 = v8;
          v10 = (v8 + 94) & 0x7F;
          if ( (unsigned __int8)v10 > 0x2Fu || !_bittest64(&v7, v10) )
            break;
        }
        if ( (__int64 *)v6 == ++v5 )
          return 1;
      }
      if ( (unsigned int)(v9 - 40) > 6 )
        break;
      v11 = sub_CB3E40(a1, *v5, 0, 0);
      if ( !HIBYTE(v11) || !(_BYTE)v11 )
        break;
      if ( (__int64 *)v6 == ++v5 )
        return 1;
    }
  }
  return 0;
}

