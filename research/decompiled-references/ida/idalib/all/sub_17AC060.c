_QWORD *__fastcall sub_17AC060(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // [rsp+8h] [rbp-20h]

  v7 = *(_QWORD *)(a2 + 112);
  v8 = *(_QWORD *)(v7 + 104);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) == 0 )
  {
    v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v8 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v11 = v8 & 2;
      v12 = v10;
      if ( !(_DWORD)v11 )
        goto LABEL_4;
      v9 = sub_6E2500(v10, *(_QWORD *)(a2 + 112), v11, (__int64)v10, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v8 = v9 | 1;
      *(_QWORD *)(v7 + 104) = v9 | 1;
    }
  }
  v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v12 = (_QWORD *)v11;
  if ( v9 )
  {
    if ( (v9 & 4) != 0 )
    {
      v12 = nullptr;
      if ( v11 )
      {
        v16 = *(_QWORD *)v11;
        v17 = *(_DWORD *)(*(_QWORD *)v11 + 12LL);
        if ( *(_DWORD *)(v11 + 8) != v17 )
        {
          *(_DWORD *)(v11 + 8) = v17;
          v18 = v11;
          (*(void (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD))(*(_QWORD *)v16 + 152LL))(v16, v7, v11, 0);
          v11 = v18;
        }
        v12 = *(_QWORD **)(v11 + 16);
      }
    }
  }
LABEL_4:
  v13 = v12[6] & 0xFFFFFFFFFFFFFFF0LL;
  v14 = *(_QWORD *)v13;
  if ( *(_BYTE *)(*(_QWORD *)v13 + 16LL) == 26
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
    && (v14 = sub_F63050(v14, v14, v11, v12)) != 0 )
  {
    sub_A5DD60(a1, v14);
    return a1;
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    return a1;
  }
}
