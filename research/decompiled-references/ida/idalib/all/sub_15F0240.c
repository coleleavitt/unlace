void __fastcall sub_15F0240(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi

  *a1 = &off_2C48DC8;
  v2 = (_QWORD *)a1[8];
  if ( v2 != a1 + 10 )
    free(v2);
  v3 = (_QWORD *)a1[2];
  if ( v3 != a1 + 4 )
    free(v3);
  nullsub_670();
  operator delete(a1, 0x90u);
}
