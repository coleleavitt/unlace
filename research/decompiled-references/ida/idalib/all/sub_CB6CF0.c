__int64 __fastcall sub_CB6CF0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rax

  v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = sub_F67D30(*v3);
  if ( !v5 )
    v5 = sub_F63270(*v3);
  v6 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = sub_F67D30(*v6);
  if ( !v7 )
    v7 = sub_F63270(*v6);
  return sub_CE6670(*(_QWORD *)(a1 + 1264), v5, v7);
}
