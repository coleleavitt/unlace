__int64 *__fastcall sub_99BB00(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 *a5, _BYTE *a6)
{
  __int64 *v8; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 *v13; // [rsp+8h] [rbp-40h]

  *a6 = 0;
  if ( a5 != a4 )
  {
    v13 = a5;
    v8 = a4;
    v10 = a2 + 56;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *v8;
        if ( a2 != *v8 && (*(_BYTE *)(v11 + 88) & 3) == a3 )
          break;
        if ( a5 == ++v8 )
          return v13;
      }
      *a6 = 1;
      if ( (*(_BYTE *)(a2 + 76) & 1) != 0
        || *(_DWORD *)(a2 + 72) != 1
        || (*(_BYTE *)(v11 + 76) & 1) != 0
        || *(_DWORD *)(v11 + 72) != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v10, v11 + 56) )
          return v13;
      }
      else if ( (*(_BYTE *)(a2 + 60) & 1) != 0 || (*(_BYTE *)(v11 + 60) & 1) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, v10, v11 + 56) < 0 )
          return v13;
      }
      else if ( *(_DWORD *)(a2 + 56) < *(_DWORD *)(v11 + 56) )
      {
        return v13;
      }
      v13 = v8++;
      if ( a5 == v8 )
        return v13;
    }
  }
  return a5;
}

