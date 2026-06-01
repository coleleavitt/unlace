__int64 __fastcall sub_AED850(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rdi

  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(v7 + 96);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) == 0 )
  {
    v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v8 & 2) == 0 )
        goto LABEL_4;
      v13 = v10[2295];
      v14 = v7 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v13 )
      {
        v15 = v10[294];
        v10[304] += 24LL;
        v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v10[295] >= v16 + 24 && v15 )
        {
          v10[294] = v16 + 24;
          v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          a2 = 24;
          v17 = sub_986170((__int64)(v10 + 294), 24, 24, 3, a5, a6);
          v16 = v17 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v17 = v13;
        v14 = v16 | 4;
        *(_DWORD *)(v17 + 8) = 0;
        *(_QWORD *)(v17 + 16) = v7;
      }
      v9 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v8 = v9 | 1;
      *(_QWORD *)(v7 + 96) = v9 | 1;
    }
  }
  if ( v9 )
  {
    v9 &= 4u;
    if ( (_DWORD)v9 )
    {
      v18 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v18 )
      {
        v19 = *(_QWORD *)v18;
        v9 = *(unsigned int *)(*(_QWORD *)v18 + 12LL);
        if ( v18[2] != (_DWORD)v9 )
        {
          v18[2] = v9;
          a2 = v7;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v7);
          v11 = *(_QWORD *)(a1 + 128);
          if ( (*(_BYTE *)(v11 + 24) & 1) == 0 )
            return *(_QWORD *)(v11 + 24);
          return sub_B96980(v11, a2, v9);
        }
      }
    }
  }
LABEL_4:
  v11 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v11 + 24) & 1) == 0 )
    return *(_QWORD *)(v11 + 24);
  return sub_B96980(v11, a2, v9);
}
