_BYTE *__fastcall sub_713AD0(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // r12
  _BYTE *result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax

  v2 = a2 + 1;
  if ( *(_WORD *)a1 < (unsigned __int16)(a2 + 1) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (v2 + 7) >> 3;
    if ( v5 < v6 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < v6 )
      {
        v8 = qvector_reserve(a1 + 8, v7, (v2 + 7) >> 3, 1);
        v5 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v8;
        v7 = v8;
      }
      memset((void *)(v7 + v5), 0, v6 - v5);
      *(_QWORD *)(a1 + 16) = v6;
      *(_WORD *)a1 = v2;
    }
    else
    {
      if ( v6 != v5 )
        *(_QWORD *)(a1 + 16) = v6;
      *(_WORD *)a1 = v2;
    }
  }
  result = (_BYTE *)(*(_QWORD *)(a1 + 8) + ((unsigned __int64)a2 >> 3));
  *result |= 1 << (a2 & 7);
  return result;
}

