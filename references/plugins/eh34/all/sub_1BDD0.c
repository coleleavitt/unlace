void __fastcall sub_1BDD0(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  _QWORD *v4; // rbp
  void (__fastcall *hexdsp)(__int64, _QWORD *); // rax
  void (__fastcall *v6)(__int64, _QWORD *); // rax

  v2 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v3 = a1;
    do
    {
      v4 = v2;
      v2 = (_QWORD *)*v2;
      *(_QWORD *)v4[1] = v2;
      v2[1] = v4[1];
      hexdsp = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(a1, a2);
      hexdsp(493, v4 + 2);
      v6 = (void (__fastcall *)(__int64, _QWORD *))get_hexdsp(493, v4 + 2);
      a2 = v4 + 2;
      v6(444, v4 + 2);
      a1 = v4;
      qfree(v4);
      --v3[2];
    }
    while ( v3 != v2 );
  }
}
