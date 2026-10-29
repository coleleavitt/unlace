char __fastcall sub_C29DE0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdx
  char result; // al
  __int64 v12; // r12
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rdi
  int v18; // edx

  if ( *(_BYTE *)(a1 + 73) >> 5 == 2 )
    return sub_B7E900(a1, a2, a3, (__int64)a4, a5, a6) != 0;
  v7 = *(_QWORD *)(a1 + 104);
  v8 = *(_QWORD *)(v7 + 96);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) != 0 )
    goto LABEL_13;
  a4 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    goto LABEL_13;
  if ( (v8 & 2) != 0 )
  {
    v12 = a4[2295];
    v13 = v7 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v12 )
    {
      a2 = a4[294];
      a4[304] += 24LL;
      v14 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( a4[295] >= v14 + 24 && a2 )
      {
        a4[294] = v14 + 24;
        v15 = (a2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        a2 = 24;
        v15 = sub_986170((__int64)(a4 + 294), 24, 24, 3, a5, a6);
        v14 = v15 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v15 = v12;
      v13 = v14 | 4;
      *(_DWORD *)(v15 + 8) = 0;
      *(_QWORD *)(v15 + 16) = v7;
    }
    v9 = v13 & 0xFFFFFFFFFFFFFFFELL;
    v8 = v9 | 1;
    *(_QWORD *)(v7 + 96) = v9 | 1;
LABEL_13:
    if ( v9 )
    {
      if ( (v9 & 4) != 0 )
      {
        v16 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v16 )
        {
          v17 = *(_QWORD *)v16;
          v18 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
          if ( v16[2] != v18 )
          {
            v16[2] = v18;
            a2 = v7;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 152LL))(v17, v7);
          }
        }
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 128);
  result = 0;
  if ( (*(_BYTE *)(v10 + 1) & 2) == 0 )
    return sub_C286B0(a1, a2, v10, (__int64)a4, a5, a6);
  return result;
}
