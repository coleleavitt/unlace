__int64 __fastcall sub_1E5E740(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // r8
  _QWORD *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax

  v4 = a3;
  v6 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = v4 & 7;
  if ( (unsigned int)a4 == *(_QWORD *)(a1 + 24) )
  {
    v15 = v6[1];
    v13 = *(_QWORD *)(a1 + 8);
    v14 = ((unsigned __int8)v15 | v4) & 7;
    if ( (v15 & 8) == 0 )
      return v14 | v13 & 0xFFFFFFFFFFFFFFF0LL;
    v14 = v7 | v15 & 7 | *(__int64 *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL));
    if ( (*(__int64 *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL)) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return v14 | v13 & 0xFFFFFFFFFFFFFFF0LL;
    return sub_A70C40(a2, v13, v14);
  }
  v8 = v4 & 8;
  LODWORD(v9) = v7;
  if ( !(_DWORD)v8 )
  {
    if ( !v7 )
      return sub_1E5E840(a1, a2, v6, a4, v8);
    v12 = sub_1E5E840(a1, a2, v6, a4, v8);
    return (unsigned int)v9 | v12 & 7 | v12 & 0xFFFFFFFFFFFFFFF8LL;
  }
  v9 = v6[3] | v7;
  v6 = (_QWORD *)*v6;
  if ( !v9 )
    return sub_1E5E840(a1, a2, v6, a4, v8);
  v11 = sub_1E5E840(a1, a2, v6, a4, v8);
  v12 = v11;
  if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v13 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    v14 = v9 | v11 & 7;
    if ( (v11 & 8) != 0 )
    {
      v14 |= *(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL));
      v13 = *(_QWORD *)v13;
    }
    return sub_A70C40(a2, v13, v14);
  }
  return (unsigned int)v9 | v12 & 7 | v12 & 0xFFFFFFFFFFFFFFF8LL;
}
