__int64 __fastcall sub_B85A20(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rdx

  v3 = a1 + 56;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v4 & 4) != 0 )
    v5 = (_QWORD *)*v5;
  return sub_F46340(v3, a2, v5, 3);
}

