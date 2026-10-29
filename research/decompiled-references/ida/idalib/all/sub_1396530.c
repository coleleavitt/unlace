__int64 __fastcall sub_1396530(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rsi
  _QWORD *v6; // r12
  __int64 v7; // r9
  _QWORD *v8; // rbp
  void (__fastcall *v9)(_QWORD *); // rax

  v3 = a1[9];
  v4 = a1[3];
  v5 = a1[2];
  v6 = (_QWORD *)operator new(0x30u);
  sub_1393320(v6, v5, a2, v4, v3);
  v8 = (_QWORD *)a1[4];
  a1[4] = v6;
  if ( v8 )
  {
    v9 = *(void (__fastcall **)(_QWORD *))(*v8 + 8LL);
    if ( v9 == sub_1393170 )
    {
      *v8 = &off_2BB2510;
      nullsub_646();
      operator delete(v8, 0x30u);
    }
    else
    {
      v9(v8);
    }
  }
  return sub_101A030(a1[9], (__int64)"clang", 5, a1[5], a1[6], v7, (__int64)"21.1.5", 6);
}
