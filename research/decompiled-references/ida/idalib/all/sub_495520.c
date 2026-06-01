__int64 __fastcall sub_495520(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  _BYTE *v4; // rax
  __int64 v6; // rdx

  if ( a3 < *(_QWORD *)(a2 + 48) && (v3 = 424 * a3, *(_DWORD *)(*(_QWORD *)(a2 + 40) + 424 * a3 + 176)) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v6 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    sub_493230((_QWORD *)a1, v3 + v6 + 152);
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v4 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = 1;
    *v4 = 0;
    return a1;
  }
}
