unsigned __int64 __fastcall sub_BC4F90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // edx
  unsigned __int64 v21; // [rsp+8h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_QWORD *)(v6 + 96);
  v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v7 & 1) == 0 )
  {
    v9 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v7 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v10 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v7 & 2) == 0 )
        goto LABEL_4;
      v13 = v9[2295];
      v14 = v6 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v13 )
      {
        v15 = v9[294];
        v9[304] += 24LL;
        v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v9[295] >= v16 + 24 && v15 )
        {
          v9[294] = v16 + 24;
          v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v17 = sub_986170((__int64)(v9 + 294), 24, 24, 3, a5, a6);
          v16 = v17 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v17 = v13;
        v14 = v16 | 4;
        *(_DWORD *)(v17 + 8) = 0;
        *(_QWORD *)(v17 + 16) = v6;
      }
      v8 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v7 = v8 | 1;
      *(_QWORD *)(v6 + 96) = v8 | 1;
    }
  }
  v18 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v10 = v18;
  if ( v8 )
  {
    if ( (v8 & 4) != 0 )
    {
      v10 = 0;
      if ( v18 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(_DWORD *)(*(_QWORD *)v18 + 12LL);
        if ( *(_DWORD *)(v18 + 8) != v20 )
        {
          *(_DWORD *)(v18 + 8) = v20;
          v21 = v18;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, v6);
          v18 = v21;
        }
        v10 = *(_QWORD *)(v18 + 16);
      }
    }
  }
LABEL_4:
  while ( sub_B97450(v10) )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 96);
      v10 = 0;
      if ( (v11 & 3) != 0 )
        break;
      v10 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !sub_B97450(v11 & 0xFFFFFFFFFFFFFFFCLL) )
        return v10;
    }
  }
  return v10;
}
