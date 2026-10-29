unsigned __int64 *__fastcall sub_505D70(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 **v4; // rax
  _QWORD *v5; // rdi
  unsigned __int64 *v6; // rax
  unsigned __int64 *v8; // [rsp+8h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 32);
  if ( !v3 )
    return nullptr;
  v4 = (unsigned __int64 **)sub_506F10(v3, a2);
  v5 = *(_QWORD **)(a1 + 32);
  if ( v4 == (unsigned __int64 **)(*v5 + 16LL * v5[1]) )
    return nullptr;
  v6 = *v4;
  if ( a2 < *v6 || a2 >= v6[1] )
    return nullptr;
  v8 = v6;
  sub_505BD0((__int64)(v5 + 8), a1, v6);
  return v8;
}
