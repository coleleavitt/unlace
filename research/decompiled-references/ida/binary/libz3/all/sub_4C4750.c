__int64 __fastcall sub_4C4750(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v9; // r13
  _DWORD *v10; // r14
  _QWORD *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char v21; // [rsp+1Bh] [rbp-3Dh]

  v9 = *(_DWORD **)(a2 + 8);
  v10 = *(_DWORD **)(a3 + 8);
  v21 = a7;
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 80LL))(v9);
  if ( v11 )
    return (__int64)v11;
  if ( v9 != v10 )
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v10 + 80LL))(
                      v10,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6);
  if ( v11 )
    return (__int64)v11;
  v13 = *(_QWORD *)(a2 + 16);
  if ( !v13 || !*(_DWORD *)(v13 - 4) || (v14 = *(_QWORD *)(a3 + 16)) == 0 || !*(_DWORD *)(v14 - 4) )
  {
    v11 = (_QWORD *)sub_186B270(8u);
    *v11 = off_1C4ED40;
    return (__int64)v11;
  }
  if ( v9[8] == 1 )
  {
    v17 = sub_4C2380(*(_QWORD *)(a1 + 56), *(_DWORD *)(a1 + 64), (__int64)v10);
    if ( v17 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(v17 + 16)
                                                                                          + 80LL))(
              *(_QWORD *)(v17 + 16),
              a2,
              a3,
              a4,
              a5,
              a6);
      if ( v18 )
        return v18;
    }
  }
  if ( v10[8] == 1 )
  {
    v16 = sub_4C2380(*(_QWORD *)(a1 + 56), *(_DWORD *)(a1 + 64), (__int64)v9);
    v11 = (_QWORD *)v16;
    if ( v16 )
    {
      v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64))(**(_QWORD **)(v16 + 16) + 80LL))(
                        *(_QWORD *)(v16 + 16),
                        a2,
                        a3,
                        a4,
                        a5,
                        a6);
      v21 = a7 & (v11 == nullptr);
    }
  }
  if ( !v21 )
    return (__int64)v11;
  v15 = sub_579060(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 80LL))(
           v15,
           a2,
           a3,
           a4,
           a5,
           a6);
}

