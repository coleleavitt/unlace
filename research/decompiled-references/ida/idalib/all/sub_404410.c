__int64 __fastcall sub_404410(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  _BYTE *v4; // rax

  if ( a3 >= *(_QWORD *)(a2 + 48) || (v3 = 88 * a3, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 88 * a3) == -1) )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v4 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)(a1 + 8) = 1;
    *v4 = 0;
  }
  else
  {
    switch_dbctx(*(int *)(a2 + 8));
    sub_4040C0(a1, (_QWORD *)(v3 + *(_QWORD *)(a2 + 40)));
  }
  return a1;
}
