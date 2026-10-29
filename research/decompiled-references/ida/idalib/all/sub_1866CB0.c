void __fastcall sub_1866CB0(_QWORD *a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // eax

  v4 = a3 + 16;
  v5 = sub_F6C520(*(_QWORD *)(a2 + 32));
  sub_1866A00(a1, *(_QWORD *)(a2 + 32), v5 * ((v4 - (unsigned __int64)(v4 != 0)) / v5 + (v4 != 0)), 6u, a4);
}
