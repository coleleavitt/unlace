__int64 __fastcall sub_143F140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  char v10; // r13
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 1168);
  v7 = *(_QWORD *)(a1 + 1176);
  if ( v7 == v6 )
  {
    v10 = 0;
    v8 = 0;
  }
  else
  {
    v8 = *(_QWORD *)(v7 - 32);
    v9 = v7 - 56;
    if ( v8 )
    {
LABEL_3:
      v10 = *(_BYTE *)(v8 + 24);
      *(_BYTE *)(v8 + 26) = 1;
      *(_BYTE *)(v8 + 24) = 1;
    }
    else
    {
      while ( v6 != v9 )
      {
        v9 -= 56;
        a4 = *(_QWORD *)(v9 + 24);
        if ( a4 )
        {
          v8 = *(_QWORD *)(v9 + 24);
          goto LABEL_3;
        }
      }
      v10 = 0;
    }
  }
  if ( (unsigned __int8)sub_143F060(a1, a2, v6, a4, a5, a6) )
    goto LABEL_8;
  while ( 1 )
  {
    sub_14634E0(a1, a2);
LABEL_8:
    result = *(unsigned __int16 *)(a2 + 16);
    if ( (_WORD)result == 2 )
      break;
    if ( (_WORD)result == 1 )
      return result;
  }
  *(_BYTE *)(v8 + 26) = 0;
  if ( !v10 )
  {
    *(_BYTE *)(v8 + 24) = 0;
    return sub_14634E0(a1, a2);
  }
  return result;
}
