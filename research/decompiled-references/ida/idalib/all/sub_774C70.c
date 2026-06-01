__int64 __fastcall sub_774C70(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  int v4; // esi
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned int v13; // r10d

  v2 = *(unsigned __int8 *)(a2 + 8);
  v4 = *(_DWORD *)(a1 + 168) & 4;
  if ( (_BYTE)v2 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 32);
    v10 = v8 + 9 * v9;
    if ( v4 )
    {
      if ( v9 )
      {
        while ( 1 )
        {
          v2 = *(unsigned __int8 *)(v8 + 8);
          if ( !(_BYTE)v2 )
            return v2;
          if ( *(_QWORD *)v8 == *(_QWORD *)a2 )
            goto LABEL_12;
          v8 += 9;
          if ( v8 == v10 )
            return 0;
        }
      }
    }
    else if ( v10 != v8 )
    {
      v11 = *(_QWORD *)a2;
      while ( v11 != *(_QWORD *)v8 || !*(_BYTE *)(v8 + 8) )
      {
        v8 += 9;
        if ( v8 == v10 )
          return 0;
      }
LABEL_12:
      LOBYTE(v2) = v8 != v10;
      return v2;
    }
    return 0;
  }
  else
  {
    if ( v4 )
    {
      v5 = sub_773990(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24) + 9LL * *(_QWORD *)(a1 + 32), a2);
      if ( v7 != v5 && *(_QWORD *)v5 == *v6 )
        return *(unsigned __int8 *)(v5 + 8) ^ 1u;
      return v2;
    }
    LOBYTE(v13) = sub_773E60((_QWORD *)(a1 + 48), *(_QWORD *)a2) != nullptr;
    return v13;
  }
}
