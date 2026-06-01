int __fastcall sub_777130(__int64 a1, __int64 a2)
{
  int v2; // ecx
  int result; // eax
  bool v4; // sf
  bool v5; // of
  size_t v6; // r12
  size_t v7; // r13
  const void *v8; // rsi
  const void *v9; // rdi
  size_t v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx

  switch ( sub_776FB0((unsigned __int8 *)a1, (char *)a2) )
  {
    case 2uLL:
    case 6uLL:
      v2 = *(_DWORD *)(a2 + 8);
      result = 1;
      v5 = __OFSUB__(*(_DWORD *)(a1 + 8), v2);
      v4 = *(_DWORD *)(a1 + 8) - v2 < 0;
      if ( *(_DWORD *)(a1 + 8) <= v2 )
        return -(v4 ^ v5);
      return result;
    case 3uLL:
      return ecmp(a1 + 8, a2 + 8);
    case 5uLL:
      return *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8);
    case 7uLL:
      v6 = *(_QWORD *)(a1 + 16);
      if ( !v6 )
      {
        v7 = *(_QWORD *)(a2 + 16);
        if ( v7 )
        {
          --v7;
          goto LABEL_11;
        }
        return v7 < v6;
      }
      v7 = *(_QWORD *)(a2 + 16);
      --v6;
      if ( !v7 )
        return v7 < v6;
      --v7;
      v8 = *(const void **)(a2 + 8);
      v9 = *(const void **)(a1 + 8);
      v10 = v7;
      if ( v6 <= v7 )
        v10 = v6;
      result = memcmp(v9, v8, v10);
      if ( !result )
      {
LABEL_11:
        if ( v6 < v7 )
          return -1;
        return v7 < v6;
      }
      return result;
    case 8uLL:
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_QWORD *)(a2 + 8);
      result = 1;
      if ( v12 >= v11 )
        return -(v11 < v12);
      return result;
    case 9uLL:
      v13 = *(_QWORD *)(a2 + 8);
      result = 1;
      v5 = __OFSUB__(*(_QWORD *)(a1 + 8), v13);
      v4 = *(_QWORD *)(a1 + 8) - v13 < 0;
      if ( *(_QWORD *)(a1 + 8) <= v13 )
        return -(v4 ^ v5);
      return result;
    default:
      return 1;
  }
}

