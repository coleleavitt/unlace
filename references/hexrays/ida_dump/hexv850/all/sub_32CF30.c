__int64 __fastcall sub_32CF30(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  __int64 first_seg; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  _QWORD *next_seg; // rax

  if ( a1[177] )
  {
    v4 = a1[179];
LABEL_3:
    if ( v4 == -1 )
    {
      if ( !under_debugger )
        sub_37CFE0(52389);
      BUG();
    }
  }
  else
  {
    v10 = 61888LL << (8 * (unsigned __int8)*(_DWORD *)(*(_QWORD *)(a1[187] + 24) + 24LL) - 16);
    v11 = v10;
    if ( (getseg(v10) || (v11 = v10, (next_seg = (_QWORD *)get_next_seg(v10)) != nullptr) && *next_seg - v10 <= 0xFFFFF)
      && (v10 = (*(_QWORD *)(get_last_seg(v11) + 8) + 4095LL) & 0xFFFFFFFFFFFFF000LL, getseg(v10)) )
    {
      first_seg = get_first_seg();
      do
      {
        v4 = *(_QWORD *)(first_seg + 8);
        first_seg = getseg(v4);
        if ( !first_seg )
        {
          a1[179] = v4;
          goto LABEL_3;
        }
      }
      while ( v4 != -1 );
      a1[179] = (sub_32CE60(a1 + 1, a2, v13, v14, v15, v16) + 4095) & 0xFFFFFFFFFFFFF000LL;
    }
    else
    {
      a1[179] = v10;
    }
  }
  v5 = a1[177];
  v6 = a1[176];
  if ( a1[178] < (unsigned __int64)(v5 + 1) )
  {
    v17 = qvector_reserve(a1 + 176, v6, v5 + 1, 8);
    a1[176] = v17;
    v6 = v17;
    v5 = a1[177];
  }
  *(_QWORD *)(v6 + 8 * v5) = a2;
  v7 = a1[179];
  v8 = a1[177] + 1;
  a1[177] = v8;
  return v7 + 4 * v8;
}
