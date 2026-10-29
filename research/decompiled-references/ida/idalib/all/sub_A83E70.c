void __fastcall sub_A83E70(__int64 a1, char **a2, __int64 a3)
{
  if ( a3 )
    sub_A82F30(a1, a2, a3, 0);
  else
    (*(void (__fastcall **)(_QWORD, char **, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 17448) + 440LL))(
      *(_QWORD *)(a1 + 17448),
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 2312) + 8LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL) + 64LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL) + 72LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 17448) + 208LL) + 256LL);
}
