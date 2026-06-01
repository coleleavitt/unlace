__int64 __fastcall sub_1601DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rdx
  __int64 v14; // rdi
  int v15; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  unsigned __int64 v19; // [rsp+8h] [rbp-20h]

  v7 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)(a1 + 192) = a2;
  v8 = *(_QWORD *)(v7 + 2264);
  v9 = *(_QWORD *)(v8 + 80);
  v10 = *(_QWORD *)(v9 + 72);
  if ( (v10 & 1) != 0 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v17 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v13 = nullptr;
      return sub_17A2E00(a1, a2, v13);
    }
    v18 = *(_QWORD *)(v9 + 72) & 2LL;
    v13 = v17;
    if ( !(_DWORD)v18 )
      goto LABEL_9;
    v11 = sub_6E2500(v17, *(_QWORD *)(v8 + 80), (__int64)v17, v18, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
    v10 = v11 | 1;
    *(_QWORD *)(v9 + 72) = v11 | 1;
  }
  v12 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = (_QWORD *)v12;
  if ( v11 && (v11 & 4) != 0 )
  {
    v13 = nullptr;
    if ( !v12 )
      return sub_17A2E00(a1, a2, v13);
    v14 = *(_QWORD *)v12;
    v15 = *(_DWORD *)(*(_QWORD *)v12 + 12LL);
    if ( *(_DWORD *)(v12 + 8) != v15 )
    {
      *(_DWORD *)(v12 + 8) = v15;
      v19 = v12;
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 152LL))(v14, v9, 0);
      v12 = v19;
    }
    v13 = *(_QWORD **)(v12 + 16);
  }
LABEL_9:
  if ( v13 )
    v13 += 5;
  return sub_17A2E00(a1, a2, v13);
}
