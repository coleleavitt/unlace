__int64 __fastcall sub_AEABB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r12
  __int64 v8; // rbp
  __int64 v9; // rdx
  _QWORD *v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int16 v13; // ax
  __int64 result; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _DWORD *v22; // rdx
  __int64 v23; // rdi
  int v24; // eax
  unsigned __int64 v25; // rdx

  v6 = (unsigned __int64)(a1 - 8);
  if ( !a2 )
  {
    a1[1] = v6;
    v8 = (__int64)(a1 - 8);
    goto LABEL_6;
  }
  v8 = *(_QWORD *)(a2 + 72);
  a1[1] = v8;
  v9 = *(_QWORD *)(v8 + 64);
  if ( (v9 & 1) != 0 )
  {
    v21 = v9 & 0xFFFFFFFFFFFFFFFELL;
LABEL_15:
    v22 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    v10 = v22;
    v12 = (unsigned __int64)v22;
    if ( v21 )
    {
      if ( (v21 & 4) != 0 )
      {
        v12 = 0;
        if ( v22 )
        {
          v23 = *(_QWORD *)v22;
          v24 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
          if ( v22[2] != v24 )
          {
            v22[2] = v24;
            (*(void (__fastcall **)(__int64, __int64, _DWORD *, _QWORD))(*(_QWORD *)v23 + 152LL))(v23, v8, v22, 0);
          }
          v12 = v10[2];
          v10 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
        }
      }
    }
    goto LABEL_21;
  }
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v12 = 0;
LABEL_21:
    v8 = a1[1];
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v8 + 64) & 2LL;
  v12 = (unsigned __int64)v10;
  if ( (_DWORD)v11 )
  {
    v21 = sub_6E2500(v10, v8, v11, (__int64)v10, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
    v9 = v21 | 1;
    *(_QWORD *)(v8 + 64) = v21 | 1;
    goto LABEL_15;
  }
LABEL_5:
  v13 = *((_WORD *)a1 - 17);
  *a1 = v10;
  *((_WORD *)a1 - 17) = v13 & 0x3FFF | *(_WORD *)(v12 + 30) & 0x26 | v13 & 0xC000;
LABEL_6:
  result = *(_QWORD *)(v8 + 64);
  if ( (result & 1) != 0 || (v15 = (_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), (result & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
    v25 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 && (result &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
      *(_QWORD *)(result + 16) = v6;
    else
      v25 = v6 & 0xFFFFFFFFFFFFFFFALL;
    *(_QWORD *)(v8 + 64) = v25 | 1;
  }
  else
  {
    v16 = v15[2295];
    v17 = v6 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v16 )
    {
      v18 = v15[294];
      v15[304] += 24LL;
      v19 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15[295] >= v19 + 24 && v18 )
      {
        v15[294] = v19 + 24;
        v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v20 = sub_986170((__int64)(v15 + 294), 24, 24, 3, a5, a6);
        v19 = v20 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v20 = v16;
      v17 = v19 | 4;
      *(_DWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 16) = v6;
    }
    result = v17 | 1;
    *(_QWORD *)(v8 + 64) = result;
  }
  return result;
}
