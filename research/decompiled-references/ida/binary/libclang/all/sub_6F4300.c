void __fastcall sub_6F4300(__int64 a1, char **a2, __int64 a3)
{
  if ( a3 )
    sub_6F2DE0(a1, a2, a3, 0);
  else
    (*(void (__fastcall **)(_QWORD, char **, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 17288) + 440LL))(
      *(_QWORD *)(a1 + 17288),
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 2152) + 8LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 17288) + 200LL) + 64LL),
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 17288) + 200LL) + 72LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 17288) + 200LL) + 256LL);
}

