unsigned __int64 __fastcall sub_1A240(__int64 a1, __int64 *a2, _QWORD *a3)
{
  bool v4; // zf
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 i; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 264) == 1;
  v19 = __readfsqword(0x28u);
  v6 = a3[4];
  if ( v4 )
  {
    if ( (get_tinfo_property(v6, 2) & 0x2F) == 0xD
      && ((unsigned __int64)get_tinfo_size(0, a3[4], 0) > 8 || !(unsigned __int8)sub_18EB0(a3 + 4)) )
    {
      v14 = a2[1];
      v15 = *a2;
      if ( a2[2] < (unsigned __int64)(v14 + 1) )
      {
        v18 = qvector_reserve(a2, v15, v14 + 1, 4);
        *a2 = v18;
        v15 = v18;
        v14 = a2[1];
      }
      *(_DWORD *)(v15 + 4 * v14) = -1;
      ++a2[1];
    }
    for ( i = 0; i < a3[1]; ++i )
    {
      v11 = *a3 + 80 * i;
      if ( (get_tinfo_property(*(_QWORD *)(v11 + 64), 2) & 0x2F) == 0xD
        && (unsigned __int64)get_tinfo_size(0, *(_QWORD *)(v11 + 64), 0) > 8 )
      {
        v12 = a2[1];
        v13 = *a2;
        if ( a2[2] < (unsigned __int64)(v12 + 1) )
        {
          v16 = qvector_reserve(a2, v13, v12 + 1, 4);
          *a2 = v16;
          v13 = v16;
          v12 = a2[1];
        }
        *(_DWORD *)(v13 + 4 * v12) = i;
        ++a2[1];
      }
    }
  }
  else if ( (get_tinfo_property(v6, 2) & 0x2F) == 0xD )
  {
    v7 = a2[1];
    v8 = *a2;
    if ( a2[2] < (unsigned __int64)(v7 + 1) )
    {
      v17 = qvector_reserve(a2, v8, v7 + 1, 4);
      *a2 = v17;
      v8 = v17;
      v7 = a2[1];
    }
    *(_DWORD *)(v8 + 4 * v7) = -3;
    ++a2[1];
  }
  return v19 - __readfsqword(0x28u);
}
