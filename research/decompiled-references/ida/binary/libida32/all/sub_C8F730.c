__int64 __fastcall sub_C8F730(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // r12
  _QWORD *v6; // rbx
  __int64 v7; // rax

  v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = sub_F43FF0(*v3);
  if ( !v5 )
    v5 = sub_F3F530(*v3);
  v6 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = sub_F43FF0(*v6);
  if ( !v7 )
    v7 = sub_F3F530(*v6);
  return sub_CC2930(*(_QWORD *)(a1 + 488), v5, v7);
}

