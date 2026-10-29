_BYTE *__fastcall sub_73AAB0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r12d
  _BYTE *result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax

  v2 = a2 + 1;
  if ( *(_DWORD *)a1 < a2 + 1 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (a2 + 8) >> 3;
    if ( v5 < v6 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < v6 )
      {
        v8 = qvector_reserve(a1 + 8, v7, v6, 1);
        v5 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v8;
        v7 = v8;
      }
      memset((void *)(v7 + v5), 0, v6 - v5);
      *(_QWORD *)(a1 + 16) = v6;
      *(_DWORD *)a1 = v2;
    }
    else
    {
      if ( v6 != v5 )
        *(_QWORD *)(a1 + 16) = v6;
      *(_DWORD *)a1 = v2;
    }
  }
  result = (_BYTE *)(*(_QWORD *)(a1 + 8) + ((unsigned __int64)a2 >> 3));
  *result |= 1 << (a2 & 7);
  return result;
}
