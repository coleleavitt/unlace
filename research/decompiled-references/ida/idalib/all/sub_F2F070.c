__int64 __fastcall sub_F2F070(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v3; // rax
  __int64 v4; // rbp
  size_t v5; // rax
  __int64 v6; // rbp

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" extended by ");
  sub_9954E0(v2, " extended by ", v3);
  sub_F2A6D0(a1, *(_QWORD *)(a2 + 48));
  v4 = *(_QWORD *)(a1 + 1096);
  v5 = j__strlen(" mangling ");
  sub_9954E0(v4, " mangling ", v5);
  v6 = *(_QWORD *)(a1 + 1096);
  if ( !*(_BYTE *)(a1 + 1104) )
    return sub_227B910(*(_QWORD *)(a1 + 1096), *(unsigned int *)(a2 + 56));
  (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v6 + 24LL))(*(_QWORD *)(a1 + 1096), 6, 1, 0);
  sub_227B910(*(_QWORD *)(a1 + 1096), *(unsigned int *)(a2 + 56));
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
}
