unsigned __int64 __fastcall sub_1846EE0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // rbp
  __int64 v9; // rdx
  _QWORD *v10; // r13
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned int v13; // eax
  __int16 v14; // dx
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rax
  _DWORD *v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rdx

  v6 = (__int64)(a1 - 6);
  if ( !a2 )
  {
    a1[1] = v6;
    v8 = (__int64)(a1 - 6);
    goto LABEL_6;
  }
  v8 = *(_QWORD *)(a2 + 56);
  a1[1] = v8;
  v9 = *(_QWORD *)(v8 + 48);
  if ( (v9 & 1) != 0 )
  {
    v16 = v9 & 0xFFFFFFFFFFFFFFFELL;
LABEL_10:
    v17 = (_DWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    v10 = v17;
    v12 = (unsigned __int64)v17;
    if ( v16 )
    {
      if ( (v16 & 4) != 0 )
      {
        v12 = 0;
        if ( v17 )
        {
          v18 = *(_QWORD *)v17;
          v19 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
          if ( v17[2] != v19 )
          {
            v17[2] = v19;
            (*(void (__fastcall **)(__int64, __int64, _DWORD *, _QWORD))(*(_QWORD *)v18 + 152LL))(v18, v8, v17, 0);
          }
          v12 = v10[2];
          v10 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
        }
      }
    }
    goto LABEL_16;
  }
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v12 = 0;
LABEL_16:
    v8 = a1[1];
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v8 + 48) & 2LL;
  v12 = (unsigned __int64)v10;
  if ( (_DWORD)v11 )
  {
    v16 = sub_6E2500(v10, v8, v11, (__int64)v10, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
    v9 = v16 | 1;
    *(_QWORD *)(v8 + 48) = v16 | 1;
    goto LABEL_10;
  }
LABEL_5:
  v13 = *((unsigned __int16 *)a1 - 9);
  *a1 = v10;
  v14 = *(_WORD *)(v12 + 30);
  a4 = v13;
  LOWORD(a4) = v13 & 0x3FFF;
  a3 = (unsigned int)a4 | v14 & 0x26;
  *((_WORD *)a1 - 9) = a3 | v13 & 0xC000;
LABEL_6:
  result = *(_QWORD *)(v8 + 48);
  if ( (result & 1) != 0 || (result & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v20 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( (result & 0xFFFFFFFFFFFFFFFELL) != 0 && (result & 4) != 0 && (result &= 0xFFFFFFFFFFFFFFF8LL) != 0 )
      *(_QWORD *)(result + 16) = v6;
    else
      v20 = v6 & 0xFFFFFFFFFFFFFFFALL;
    *(_QWORD *)(v8 + 48) = v20 | 1;
  }
  else
  {
    result = sub_6E2500((_QWORD *)(result & 0xFFFFFFFFFFFFFFFCLL), v6, a3, a4, a5, a6) | 1;
    *(_QWORD *)(v8 + 48) = result;
  }
  return result;
}
