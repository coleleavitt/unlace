__int64 __fastcall sub_4834B0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r12

  if ( a3 < *(_QWORD *)(a2 + 48) && (v3 = 160 * a3, *(_BYTE *)(*(_QWORD *)(a2 + 40) + 160 * a3 + 156)) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    v5 = *(_QWORD *)(a2 + 40) + v3;
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    sub_47E730((_QWORD *)a1, v5 + 16);
    return a1;
  }
  else
  {
    sub_45DE90(a1, &byte_22CD811);
    return a1;
  }
}

