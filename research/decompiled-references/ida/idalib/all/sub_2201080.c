bool __fastcall sub_2201080(char *a1, char *a2)
{
  void **v2; // rbx
  _QWORD *v3; // rbp
  char *v5; // rsi
  char *v6; // rdi
  char v7; // al
  void *v8; // rax

  do
  {
    v2 = *((void ***)a1 + 1);
    v3 = *((_QWORD **)a2 + 1);
    if ( *v2 != (void *)*v3 )
      return 0;
    v5 = *((char **)a2 + 1);
    v6 = *((char **)a1 + 1);
    v7 = *v2 == &unk_26F7B20 ? sub_2201080(v6, v5) : sub_21F96E0(v6, v5);
    if ( !v7 )
      return 0;
    v8 = v2[3];
    if ( v8 != (void *)v3[3] )
      return 0;
    a1 = (char *)(v2 + 3);
    a2 = (char *)(v3 + 3);
  }
  while ( v8 == &unk_26F7B20 );
  return sub_21F96E0(a1, a2);
}
