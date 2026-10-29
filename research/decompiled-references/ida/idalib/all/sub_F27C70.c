__int64 __fastcall sub_F27C70(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  size_t v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  size_t v7; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  if ( *(_QWORD *)(a2 + 40) )
  {
    v3 = sub_995540(*(_QWORD *)(a1 + 1096), " ");
    sub_9954E0(
      v3,
      (const void *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + 16LL),
      **(unsigned int **)(*(_QWORD *)(a2 + 40) + 16LL));
    v2 = *(_QWORD *)(a1 + 1096);
  }
  v4 = j__strlen(" ");
  v5 = sub_9954E0(v2, " ", v4);
  sub_227B930(v5, *(int *)(a2 + 48));
  v6 = *(_QWORD *)(a1 + 1096);
  v7 = j__strlen(" ");
  v8 = sub_9954E0(v6, " ", v7);
  return sub_227B930(v8, *(int *)(a2 + 52));
}
