__int64 __fastcall sub_D6980(__int64 a1, _DWORD *a2)
{
  __int64 *v2; // r12
  int v3; // r13d
  __int64 result; // rax
  _QWORD *v5; // r14
  char v6; // dl
  int v7; // eax
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int64 v11; // r13
  __int64 v12; // rsi
  int v13; // r15d
  __int64 v14; // rax
  int v15; // ebp
  int v16; // [rsp+Ch] [rbp-3Ch]

  v2 = (__int64 *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_60500((_QWORD *)(a1 + 144)) )
    v3 -= sub_60880(v2) + 1;
  result = (unsigned int)(v3 != 1) + 2;
  if ( *a2 < (int)result )
  {
    *a2 = 0;
  }
  else
  {
    if ( (*(_DWORD *)a1 & 0xFFFFFFFB) != 2 )
      goto LABEL_5;
    v15 = *(_QWORD *)(a1 + 40);
    if ( !(unsigned __int8)sub_60500((_QWORD *)(a1 + 160)) )
      v15 -= sub_60880((_QWORD *)(a1 + 160)) + 1;
    if ( v3 <= 0 || v15 <= 0 )
    {
      if ( !under_debugger )
        sub_37DDE0(52748);
      BUG();
    }
    if ( v3 > v15 )
    {
      v5 = (_QWORD *)(a1 + 32);
      v2 = (__int64 *)(a1 + 160);
    }
    else
    {
LABEL_5:
      v5 = (_QWORD *)(a1 + 8);
    }
    v6 = sub_60500(v2);
    v7 = 0;
    if ( !v6 )
      v7 = sub_60880(v2) + 1;
    v8 = v5[1];
    if ( (int)v8 <= v7 )
    {
      v16 = v8 - 1;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 184);
      v16 = v8 - 1;
      v10 = 4LL * v7;
      v11 = 4 * (v7 + (unsigned __int64)(unsigned int)(v8 - 1 - v7) + 1);
      do
      {
        v12 = *(_QWORD *)(a1 + 176);
        v13 = *(_DWORD *)(*v5 + v10);
        if ( *(_QWORD *)(a1 + 192) < (unsigned __int64)(v9 + 1) )
        {
          v14 = qvector_reserve(a1 + 176, v12, v9 + 1, 4);
          v9 = *(_QWORD *)(a1 + 184);
          *(_QWORD *)(a1 + 176) = v14;
          v12 = v14;
        }
        *(_DWORD *)(v12 + 4 * v9) = v13;
        v10 += 4;
        v9 = *(_QWORD *)(a1 + 184) + 1LL;
        *(_QWORD *)(a1 + 184) = v9;
      }
      while ( v11 != v10 );
    }
    return sub_5FE10(v2, v16);
  }
  return result;
}
