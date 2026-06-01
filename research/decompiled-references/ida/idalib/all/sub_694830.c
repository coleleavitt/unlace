__int64 __fastcall sub_694830(__int64 a1)
{
  _QWORD *v1; // rbp
  char *v2; // rbx
  char *v3; // r12
  char *v4; // rbx
  char *v5; // r12

  v1 = *(_QWORD **)(a1 + 1816);
  if ( (debug & 0x100) != 0 )
    sub_368890();
  v2 = (char *)v1[3];
  while ( v2 )
  {
    v3 = v2;
    sub_693350(*((_QWORD **)v2 + 3));
    v2 = *((char **)v2 + 2);
    clear_tinfo_t(v3 + 40);
    operator delete(v3, 0x30u);
  }
  v4 = (char *)v1[9];
  v1[3] = 0;
  v1[4] = v1 + 2;
  v1[5] = v1 + 2;
  v1[6] = 0;
  while ( v4 )
  {
    v5 = v4;
    sub_693110(*((_QWORD **)v4 + 3));
    v4 = *((char **)v4 + 2);
    clear_tinfo_t(v5 + 48);
    operator delete(v5, 0x38u);
  }
  v1[9] = 0;
  v1[10] = v1 + 8;
  v1[11] = v1 + 8;
  v1[12] = 0;
  return register_undo_handlers(&unk_2B37880, 5, 0, 0);
}
