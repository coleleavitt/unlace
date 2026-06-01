unsigned __int64 __fastcall sub_6C1EC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx

  result = a2 & 0xFFFFFFFFFFFFFFFBLL;
  v7 = a1[2295];
  if ( v7 )
  {
    v8 = a1[294];
    a1[304] += 24LL;
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v10 = v9 + 24;
    if ( a1[295] >= v9 + 24 && v8 )
      a1[294] = v10;
    else
      v9 = sub_6B3E60((__int64)(a1 + 294), 24, 3, v10, a5, a6);
    *(_QWORD *)v9 = v7;
    *(_DWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = a2;
    return v9 | 4;
  }
  return result;
}

