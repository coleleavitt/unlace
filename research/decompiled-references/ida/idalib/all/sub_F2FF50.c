__int64 __fastcall sub_F2FF50(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // r13
  void *v5; // rdi
  int v6; // eax
  size_t v7; // rax
  void *v8; // rdi
  size_t v9; // r13

  sub_F2AD60(a1, a2);
  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" version: ");
  v5 = *(void **)(v3 + 32);
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    sub_227BF10(v3, " version: ", v4);
    v3 = *(_QWORD *)(a1 + 1096);
LABEL_3:
    v6 = *(_DWORD *)(a2 + 48);
    if ( v6 != 1 )
      goto LABEL_4;
LABEL_11:
    sub_995540(v3, "1.0");
    v3 = *(_QWORD *)(a1 + 1096);
    goto LABEL_6;
  }
  if ( !v4 )
    goto LABEL_3;
  memcpy(v5, " version: ", v4);
  *(_QWORD *)(v3 + 32) += v4;
  v6 = *(_DWORD *)(a2 + 48);
  v3 = *(_QWORD *)(a1 + 1096);
  if ( v6 == 1 )
    goto LABEL_11;
LABEL_4:
  if ( v6 == 2 )
  {
    sub_995540(v3, "1.1");
    v3 = *(_QWORD *)(a1 + 1096);
  }
LABEL_6:
  v7 = j__strlen(", ");
  v8 = *(void **)(v3 + 32);
  v9 = v7;
  if ( v7 > *(_QWORD *)(v3 + 24) - (_QWORD)v8 )
  {
    sub_227BF10(v3, ", ", v7);
    v3 = *(_QWORD *)(a1 + 1096);
  }
  else if ( v7 )
  {
    memcpy(v8, ", ", v7);
    *(_QWORD *)(v3 + 32) += v9;
    v3 = *(_QWORD *)(a1 + 1096);
  }
  return sub_20E3940(v3, a2 + 56, *(unsigned int *)(a2 + 52));
}
