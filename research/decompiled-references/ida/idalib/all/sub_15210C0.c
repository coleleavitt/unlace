__int64 (__fastcall **__fastcall sub_15210C0(_QWORD *a1, char *a2))()
{
  size_t v2; // rax

  v2 = strlen(a2);
  *a1 = &unk_2C446A0;
  a1[1] = a1 + 3;
  sub_1520EC0(a1 + 1, a2, (__int64)&a2[v2]);
  *a1 = &off_2BB39A0;
  return &off_2BB39A0;
}
