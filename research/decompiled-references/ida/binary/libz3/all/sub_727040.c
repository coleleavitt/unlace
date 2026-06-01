__int64 __fastcall sub_727040(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  void *v3; // r12

  v1 = sub_186B270(0x1E8u);
  result = sub_1242AA0(v1, *(_QWORD *)(a1 + 16), a1 + 24);
  v3 = *(void **)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v1;
  if ( v3 )
  {
    sub_1242ED0(v3);
    return sub_186B220(v3);
  }
  return result;
}

