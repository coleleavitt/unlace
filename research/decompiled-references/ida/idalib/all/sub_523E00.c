__int64 __fastcall sub_523E00(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _BYTE *v4; // rax

  if ( a3 < *(_QWORD *)(a2 + 48) && *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * a3) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 0;
    sub_35A790((char **)a1);
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
