unsigned __int64 __fastcall sub_BA09E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  unsigned __int64 result; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // [rsp+8h] [rbp-20h]

  v7 = *(_QWORD *)(a1 + 64);
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) == 0 )
  {
    v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      result = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v7 & 2) == 0 )
        return result;
      v11 = v9[2295];
      v12 = a1 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v11 )
      {
        v13 = v9[294];
        v9[304] += 24LL;
        v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9[295] >= v14 + 24 && v13 )
        {
          v9[294] = v14 + 24;
          v15 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v15 = sub_962430((__int64)(v9 + 294), 24, 24, 3, a5, a6);
          v14 = v15 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v15 = v11;
        v12 = v14 | 4;
        *(_DWORD *)(v15 + 8) = 0;
        *(_QWORD *)(v15 + 16) = a1;
      }
      v8 = v12 & 0xFFFFFFFFFFFFFFFELL;
      v7 = v8 | 1;
      *(_QWORD *)(a1 + 64) = v8 | 1;
    }
  }
  v16 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  result = v16;
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
    {
      result = 0;
      if ( v16 )
      {
        v17 = *(_QWORD *)v16;
        v18 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
        if ( *(_DWORD *)(v16 + 8) != v18 )
        {
          *(_DWORD *)(v16 + 8) = v18;
          v19 = v16;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 152LL))(v17, a1);
          v16 = v19;
        }
        return *(_QWORD *)(v16 + 16);
      }
    }
  }
  return result;
}

