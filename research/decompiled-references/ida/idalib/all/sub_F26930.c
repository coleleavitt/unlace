void __fastcall sub_F26930(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  size_t v3; // rbp
  void *v4; // rdi
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  void *v6[2]; // [rsp+10h] [rbp-38h] BYREF
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1096);
  v3 = j__strlen(" ");
  v4 = *(void **)(v2 + 32);
  if ( v3 > *(_QWORD *)(v2 + 24) - (_QWORD)v4 )
  {
    v2 = sub_227BF10(v2, " ", v3);
  }
  else if ( v3 )
  {
    memcpy(v4, " ", v3);
    *(_QWORD *)(v2 + 32) += v3;
  }
  v5 = **(_QWORD **)(a2 + 40);
  sub_F78400(v6, &v5);
  sub_227BF10(v2, v6[0], v6[1]);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
}
