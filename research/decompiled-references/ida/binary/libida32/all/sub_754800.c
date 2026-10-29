__int64 __fastcall sub_754800(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  int v4; // esi
  __int64 v5; // rax
  _DWORD *v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // edx
  unsigned int v13; // r10d

  v2 = *(unsigned __int8 *)(a2 + 4);
  v4 = *(_DWORD *)(a1 + 164) & 4;
  if ( (_BYTE)v2 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 32);
    v10 = v8 + 5 * v9;
    if ( v4 )
    {
      if ( v9 )
      {
        while ( 1 )
        {
          v2 = *(unsigned __int8 *)(v8 + 4);
          if ( !(_BYTE)v2 )
            return v2;
          if ( *(_DWORD *)v8 == *(_DWORD *)a2 )
            goto LABEL_12;
          v8 += 5;
          if ( v8 == v10 )
            return 0;
        }
      }
    }
    else if ( v10 != v8 )
    {
      v11 = *(_DWORD *)a2;
      while ( v11 != *(_DWORD *)v8 || !*(_BYTE *)(v8 + 4) )
      {
        v8 += 5;
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
      v5 = sub_7534D0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 24) + 5LL * *(_QWORD *)(a1 + 32), a2);
      if ( v7 != v5 && *(_DWORD *)v5 == *v6 )
        return *(unsigned __int8 *)(v5 + 4) ^ 1u;
      return v2;
    }
    LOBYTE(v13) = sub_7539C0((_QWORD *)(a1 + 48), *(_DWORD *)a2) != nullptr;
    return v13;
  }
}

