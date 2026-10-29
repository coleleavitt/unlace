void __fastcall __noreturn sub_2E7832(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx

  v2 = (_BYTE *)sub_D0E7B0(a2);
  *(_BYTE *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *v2;
  BUG();
}
