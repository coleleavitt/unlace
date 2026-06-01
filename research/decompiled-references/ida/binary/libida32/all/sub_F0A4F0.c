__int64 __fastcall sub_F0A4F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rbp
  void *v5; // rdi
  _QWORD v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" ");
  v5 = *(void **)(v3 + 32);
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    sub_22581D0(v3, " ", v4);
    v3 = *(_QWORD *)(a1 + 1096);
  }
  else if ( v4 )
  {
    memcpy(v5, " ", v4);
    *(_QWORD *)(v3 + 32) += v4;
    v3 = *(_QWORD *)(a1 + 1096);
  }
  v7[0] = *(_QWORD *)(a2 + 16);
  return sub_FBB170(v7, v3);
}

