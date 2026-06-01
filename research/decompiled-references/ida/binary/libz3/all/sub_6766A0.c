__int64 __fastcall sub_6766A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 1352);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1360) + 16LL))(*(_QWORD *)(a1 + 1360), a2);
  }
  sub_18183E0(a2, "smtfd-num-lemmas", *(unsigned int *)(a1 + 120));
  sub_18183E0(a2, "smtfd-num-rounds", *(unsigned int *)(a1 + 124));
  sub_18183E0(a2, "smtfd-num-mbqi", *(unsigned int *)(a1 + 128));
  return sub_18183E0(a2, "smtfd-num-fresh-bool", *(unsigned int *)(a1 + 132));
}

