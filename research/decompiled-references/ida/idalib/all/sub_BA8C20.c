__int64 __fastcall sub_BA8C20(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdx
  __int64 v4; // [rsp+8h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v2 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
    v2 = (_QWORD *)*v2;
  return sub_F6A080(&v4, a2, v2, 3);
}
