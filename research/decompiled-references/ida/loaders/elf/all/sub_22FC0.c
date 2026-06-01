__int64 __fastcall sub_22FC0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int8 dword; // al

  v5 = a2;
  v8 = a3 & 1;
  if ( (_DWORD)v8 || (unsigned int)(a3 + 0xFFFFFF) > 0x1FFFFFC )
  {
    v9 = *(_QWORD *)(a2 + 4);
    a2 = a3;
    sub_40E00(v9, a3, v8, a4, a5);
  }
  dword = get_dword(*(_QWORD *)(v5 + 4), a2, v8, a4, a5);
  return sub_42050(
           a1,
           *(_QWORD *)(v5 + 4),
           *(_QWORD *)(v5 + 12),
           ((unsigned int)a3 >> 9) & 0xFF00 | ((unsigned int)a3 >> 1 << 16) | dword,
           (int)a3 - *(_DWORD *)(v5 + 12),
           4,
           0,
           0,
           0);
}

