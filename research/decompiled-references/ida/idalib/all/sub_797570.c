int __fastcall sub_797570(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  int result; // eax
  bool v4; // sf
  bool v5; // of
  int v6; // ecx
  size_t v7; // r13
  size_t v8; // r12
  const void *v9; // rsi
  const void *v10; // rdi
  size_t v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx

  switch ( sub_7973F0((unsigned __int8 *)a1, (char *)a2) )
  {
    case 2uLL:
    case 9uLL:
      v2 = *(_QWORD *)(a2 + 8);
      result = 1;
      v5 = __OFSUB__(*(_QWORD *)(a1 + 8), v2);
      v4 = *(_QWORD *)(a1 + 8) - v2 < 0;
      if ( *(_QWORD *)(a1 + 8) <= v2 )
        return -(v4 ^ v5);
      return result;
    case 3uLL:
      return ecmp(a1 + 8, a2 + 8);
    case 5uLL:
      return *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8);
    case 6uLL:
      v6 = *(_DWORD *)(a2 + 8);
      result = 1;
      v5 = __OFSUB__(*(_DWORD *)(a1 + 8), v6);
      v4 = *(_DWORD *)(a1 + 8) - v6 < 0;
      if ( *(_DWORD *)(a1 + 8) <= v6 )
        return -(v4 ^ v5);
      return result;
    case 7uLL:
      v7 = *(_QWORD *)(a1 + 16);
      if ( !v7 )
      {
        v8 = *(_QWORD *)(a2 + 16);
        if ( v8 )
        {
          --v8;
          goto LABEL_14;
        }
        return v8 < v7;
      }
      v8 = *(_QWORD *)(a2 + 16);
      --v7;
      if ( !v8 )
        return v8 < v7;
      --v8;
      v9 = *(const void **)(a2 + 8);
      v10 = *(const void **)(a1 + 8);
      v11 = v8;
      if ( v7 <= v8 )
        v11 = v7;
      result = memcmp(v10, v9, v11);
      if ( !result )
      {
LABEL_14:
        if ( v7 < v8 )
          return -1;
        return v8 < v7;
      }
      return result;
    case 8uLL:
      v12 = *(_QWORD *)(a1 + 8);
      v13 = *(_QWORD *)(a2 + 8);
      result = 1;
      if ( v13 >= v12 )
        return -(v12 < v13);
      return result;
    default:
      return 1;
  }
}
