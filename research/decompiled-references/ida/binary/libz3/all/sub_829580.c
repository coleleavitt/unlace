__int64 *__fastcall sub_829580(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 *a5, _BYTE *a6)
{
  __int64 *v8; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 *v14; // [rsp+8h] [rbp-40h]

  *a6 = 0;
  if ( a5 != a4 )
  {
    v14 = a5;
    v8 = a4;
    v10 = a2 + 24;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *v8;
        if ( a2 != *v8 && *(_DWORD *)(v11 + 56) == a3 )
          break;
        if ( a5 == ++v8 )
          return v14;
      }
      *a6 = 1;
      v12 = v11 + 24;
      if ( (*(_BYTE *)(a2 + 44) & 1) != 0
        || *(_DWORD *)(a2 + 40) != 1
        || (*(_BYTE *)(v11 + 44) & 1) != 0
        || *(_DWORD *)(v11 + 40) != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v10, v12) )
          return v14;
      }
      else if ( (*(_BYTE *)(a2 + 28) & 1) != 0 || (*(_BYTE *)(v11 + 28) & 1) != 0 )
      {
        if ( (int)sub_182C7B0(qword_1C7F2C0, v10, v12) < 0 )
          return v14;
      }
      else if ( *(_DWORD *)(a2 + 24) < *(_DWORD *)(v11 + 24) )
      {
        return v14;
      }
      v14 = v8++;
      if ( a5 == v8 )
        return v14;
    }
  }
  return a5;
}

