void __fastcall sub_F0BA80(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // r13
  void *v5; // rdi
  __int64 v6; // rbx
  size_t v7; // rax
  void *v8; // rdi
  size_t v9; // r13

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" depth ");
  v5 = *(void **)(v3 + 32);
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v3 = sub_22581D0(v3, " depth ", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, " depth ", v4);
    *(_QWORD *)(v3 + 32) += v4;
  }
  v6 = sub_2257BD0(v3, *(_DWORD *)(a2 + 64) & 0xFFFFF);
  v7 = j__strlen(" index ");
  v8 = *(void **)(v6 + 32);
  v9 = v7;
  if ( v7 > *(_QWORD *)(v6 + 24) - (_QWORD)v8 )
  {
    v6 = sub_22581D0(v6, " index ", v7);
  }
  else if ( v7 )
  {
    memcpy(v8, " index ", v7);
    *(_QWORD *)(v6 + 32) += v9;
  }
  sub_2257BD0(v6, *(_WORD *)(a2 + 66) >> 4);
  if ( (*(_BYTE *)(a2 + 80) & 2) != 0 )
    sub_971800(*(_QWORD *)(a1 + 1096), " ...");
  sub_F07020(a1, a2);
}

