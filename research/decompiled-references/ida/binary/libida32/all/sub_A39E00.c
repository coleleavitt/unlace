__int64 __fastcall sub_A39E00(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  _BYTE *v4; // r8
  __int64 v5; // rax
  char v6; // dl
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  result = 0;
  if ( v2 == *(_QWORD *)(a2 + 8) )
  {
    v4 = *(_BYTE **)a1;
    if ( *(_QWORD *)a1 != *(_QWORD *)a1 + v2 )
    {
      if ( **(_BYTE **)a2 != *v4 )
        return result;
      v5 = 1;
      while ( v2 != v5 )
      {
        v6 = v4[v5++];
        if ( v6 != *(_BYTE *)(*(_QWORD *)a2 + v5 - 1) )
          return 0;
      }
    }
    v7 = *(_QWORD *)(a1 + 24);
    result = 0;
    if ( v7 == *(_QWORD *)(a2 + 24) )
    {
      v8 = *(_QWORD **)(a1 + 16);
      v9 = &v8[v7];
      if ( v8 != v9 )
      {
        v10 = *(_QWORD **)(a2 + 16);
        if ( *v10 != *v8 )
          return result;
        while ( 1 )
        {
          ++v8;
          ++v10;
          if ( v9 == v8 )
            break;
          if ( *v8 != *v10 )
            return 0;
        }
      }
      return 1;
    }
  }
  return result;
}

