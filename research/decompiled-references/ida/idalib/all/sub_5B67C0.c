__int64 __fastcall sub_5B67C0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rdx
  _BYTE *v6; // rax

  if ( a3 < *(_QWORD *)(a2 + 48) && (v3 = 32 * a3, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 32 * a3)) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v4 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    get_ea_diffpos_name(a1, *(_QWORD *)(v3 + v4 + 8));
    return a1;
  }
  else
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    v6 = (_BYTE *)qvector_reserve(a1, 0, 1, 1);
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = 1;
    *v6 = 0;
    return a1;
  }
}
