__int64 __fastcall sub_7D4EB0(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD *v3; // r12
  void *v4; // r13
  const void *v5; // rax
  __int64 v6; // rdx
  __int64 v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  if ( !v1 )
    v1 = sub_7D0C20(a1);
  if ( (*(_QWORD *)(v1 + 200) & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    v3 = (_QWORD *)sub_798D40(a1);
    sub_B03930(v7, a1);
    v4 = (void *)sub_6CC5F0(v3, 0, 0, v7[0]);
    v5 = (const void *)sub_7D2AE0(*(__int64 **)(a1 + 56), v3);
    *(_QWORD *)(v1 + 200) = sub_718CB0((__int64)v3, v4, v5, v6, 0);
  }
  return *(_QWORD *)(v1 + 200);
}

