_QWORD *__fastcall sub_2FEFB0(_BYTE *a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  int dbctx_id; // eax
  __int64 v5; // r12
  int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax

  result = sub_277AA0(a2, 3u);
  if ( result )
  {
    v3 = result;
    dbctx_id = get_dbctx_id();
    v5 = *(_QWORD *)a1;
    v6 = dbctx_id;
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 728LL);
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 720LL);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 736LL) < (unsigned __int64)(v7 + 1) )
    {
      v9 = qvector_reserve(v5 + 720, v8, v7 + 1, 4);
      *(_QWORD *)(v5 + 720) = v9;
      v8 = v9;
      v7 = *(_QWORD *)(v5 + 728);
    }
    *(_DWORD *)(v8 + 4 * v7) = v6;
    ++*(_QWORD *)(v5 + 728);
    result = (_QWORD *)j__switch_dbctx(v3[1]);
    a1[8] = 1;
  }
  return result;
}
