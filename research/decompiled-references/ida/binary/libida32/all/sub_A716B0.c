__int64 __fastcall sub_A716B0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 result; // rax
  char v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  bool v10; // cl
  unsigned int v11; // edx
  __int64 v12; // rsi
  char v13; // cl
  __int64 *v14; // rdx
  __int64 *v15; // rsi

  v3 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v3 != (*(_BYTE *)(a3 + 28) & 0x7F) )
    return 0;
  if ( v3 != 67 )
  {
    if ( v3 != 47 )
    {
      if ( ((*(_BYTE *)(a3 + 80) & 2) != 0) == ((*(_BYTE *)(a2 + 80) & 2) != 0) )
        return sub_A71880(a1, *(_QWORD *)(a2 + 56), *(_QWORD *)(a3 + 56));
      return 0;
    }
    if ( *(_BYTE *)(a2 + 80) == *(_BYTE *)(a3 + 80) )
    {
      v7 = *(_QWORD *)(a3 + 48);
      v8 = *(_QWORD *)(a2 + 48);
      if ( (*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v8) & 7) == (*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v7) & 7) )
      {
        if ( !sub_A3B230(a3) )
          return !sub_A3B230(a2) || !*(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 84) + 88);
        v9 = *(_QWORD *)(a3 + 16LL * *(unsigned int *)(a3 + 84) + 88);
        v10 = sub_A3B230(a2);
        LOBYTE(v11) = v9 == 0;
        result = v11;
        if ( !v10 )
          return result;
        v12 = *(_QWORD *)(a2 + 16LL * *(unsigned int *)(a2 + 84) + 88);
        if ( (v12 == 0) == (_BYTE)v11 )
        {
          if ( v9 )
            return sub_A32C10((__int64)a1, v12, v9);
          return 1;
        }
      }
    }
    return 0;
  }
  v6 = sub_B9A890(a2);
  if ( v6 != (unsigned __int8)sub_B9A890(a3) )
    return 0;
  v13 = *(_BYTE *)(a2 + 60);
  if ( ((v13 & 2) != 0) != ((*(_BYTE *)(a3 + 60) & 2) != 0) )
    return 0;
  v14 = (__int64 *)(a3 + 80);
  v15 = (__int64 *)(a2 + 80);
  if ( (*(_BYTE *)(a3 + 60) & 4) == 0 )
    v14 = nullptr;
  if ( (v13 & 4) == 0 )
    v15 = nullptr;
  return sub_A715D0(a1, v15, v14);
}

