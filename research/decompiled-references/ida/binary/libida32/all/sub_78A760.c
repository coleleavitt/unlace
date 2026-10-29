__int64 __fastcall sub_78A760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _UNKNOWN *__ptr32 *a5, __int64 a6)
{
  _QWORD *v6; // rbp
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx

  v6 = (_QWORD *)(a1 + 168);
  v8 = *(void **)(a1 + 168);
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    v10 = v9 + 16;
    if ( *(_QWORD *)(a1 + 184) >= (unsigned __int64)(v9 + 16) )
      return sub_78A2C0(v6, (_WORD *)(a1 + 40), v10, v9, a5, a6);
LABEL_5:
    *(_QWORD *)(a1 + 168) = qvector_reserve(v6, *(_QWORD *)(a1 + 168), v10, 1);
    return sub_78A2C0(v6, (_WORD *)(a1 + 40), v10, v9, a5, a6);
  }
  *(_QWORD *)(a1 + 176) = 0;
  qfree(v8);
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  v10 = v9 + 16;
  if ( v9 != -16 )
    goto LABEL_5;
  return sub_78A2C0(v6, (_WORD *)(a1 + 40), v10, v9, a5, a6);
}

