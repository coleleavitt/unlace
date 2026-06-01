__int64 __fastcall sub_8483D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  sub_18183E0(a2, "q mbi instantiations", *(unsigned int *)(a1 + 24));
  return sub_18183E0(a2, "q mbi num checks", *(unsigned int *)(a1 + 28));
}

