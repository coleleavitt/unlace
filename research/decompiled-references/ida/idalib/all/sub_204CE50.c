_QWORD *__fastcall sub_204CE50(_QWORD *a1)
{
  __int64 v1; // rbx

  v1 = operator new(0x30u);
  sub_208DE10(v1);
  *a1 = v1;
  *(_QWORD *)v1 = &off_2BE5E18;
  *(_DWORD *)(v1 + 40) = 257;
  return a1;
}
