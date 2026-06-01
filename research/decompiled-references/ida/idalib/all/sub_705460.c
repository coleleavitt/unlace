bool __fastcall sub_705460(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  _DWORD *v13; // rdi
  __int64 v14; // rax
  int v15; // edx

  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
    return v6 > 7;
  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_QWORD *)(v9 + 88);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) != 0 )
    goto LABEL_7;
  if ( v11 > 3 && (v10 & 2) != 0 )
  {
    v12 = sub_6E2500((_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL), v9, 0, a4, a5, a6);
    v11 = v12 & 0xFFFFFFFFFFFFFFFELL;
    v10 = v12 | 1;
    *(_QWORD *)(v9 + 88) = v10;
LABEL_7:
    if ( v11 )
    {
      if ( (v11 & 4) != 0 )
      {
        v13 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v13 )
        {
          v14 = *(_QWORD *)v13;
          v15 = *(_DWORD *)(*(_QWORD *)v13 + 12LL);
          if ( v13[2] != v15 )
          {
            v13[2] = v15;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 152LL))(v14, v9);
          }
        }
      }
    }
    v6 = *(_QWORD *)(a1 + 104);
  }
  return v6 > 7;
}
