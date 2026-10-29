unsigned __int64 __fastcall sub_183A880(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _QWORD v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 25 > 1 )
    v4 = sub_F63050(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4);
  v5 = sub_B8C330(a1);
  v7[0] = *(_QWORD *)(v4 + 24);
  return sub_F67970(v7, v5);
}
