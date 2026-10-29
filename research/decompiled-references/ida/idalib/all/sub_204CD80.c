_QWORD *__fastcall sub_204CD80(_QWORD *a1)
{
  __int64 v1; // rbx

  v1 = operator new(0x30u);
  sub_208DE10(v1);
  *a1 = v1;
  *(_QWORD *)v1 = &off_2BE5DA0;
  *(_WORD *)(v1 + 42) = 257;
  return a1;
}
