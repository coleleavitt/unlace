void __fastcall sub_13B3BE0(char *a1)
{
  char *v2; // rdi
  char *v3; // rdi
  char *v4; // rdi

  v2 = a1 + 96;
  *((_QWORD *)v2 - 12) = &off_2BB2708;
  sub_22339F0(v2);
  v3 = *((char **)a1 + 6);
  *(_QWORD *)a1 = &unk_2C44428;
  if ( v3 != a1 + 64 )
    operator delete(v3);
  v4 = *((char **)a1 + 2);
  if ( v4 != a1 + 32 )
    operator delete(v4);
  operator delete(a1, 0x70u);
}
