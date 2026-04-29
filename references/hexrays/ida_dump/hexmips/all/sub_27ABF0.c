__int64 __fastcall sub_27ABF0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 *v4; // rbp
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 79 )
  {
    result = 1;
    v4 = *(__int64 **)(a1 + 64);
    if ( v4 )
    {
      v5 = v4[1];
      v7 = *v4;
      if ( v4[2] < (unsigned __int64)(v5 + 1) )
      {
        v8 = qvector_reserve(*(_QWORD *)(a1 + 64), v7, v5 + 1, 8);
        *v4 = v8;
        v7 = v8;
        v5 = v4[1];
      }
      *(_QWORD *)(v7 + 8 * v5) = a2;
      ++v4[1];
      return 0;
    }
  }
  else
  {
    if ( (unsigned int)(v2 - 74) <= 2 )
      *(_DWORD *)(a1 + 8) |= 1u;
    return 0;
  }
  return result;
}
