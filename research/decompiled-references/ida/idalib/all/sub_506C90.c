void __fastcall sub_506C90(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        double a5,
        double a6,
        double a7)
{
  __int64 v10; // rdx
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  char v20; // dl
  void *v21; // rdi

  if ( !*(_QWORD *)(a1 + 32) )
    return;
  sub_505250(a1, (__int64)"make_hole ea1 %a ea2 %a create_tail_range %d", a5, a6, a2);
  v11 = *(_QWORD *)(a1 + 32);
  v12 = *(_DWORD *)(v11 + 180);
  if ( v12 )
    goto LABEL_3;
  if ( (unsigned __int8)must_journal(a1, "make_hole ea1 %a ea2 %a create_tail_range %d", v10) )
  {
    v12 = *(_DWORD *)(v11 + 180);
LABEL_3:
    *(_DWORD *)(v11 + 180) = v12 + 1;
  }
  v13 = sub_503EE0(a1, a2);
  sub_506A20(a1, v13, a2, a3, a4, a5, a6, a7);
  do
  {
    v14 = sub_503F40(a1, a2);
    v15 = v14;
  }
  while ( (unsigned __int8)sub_506A20(a1, v14, a2, a3, a4, a5, a6, a7) );
  sub_504B40(a1);
  v17 = *(_QWORD *)(a1 + 32);
  v18 = *(_DWORD *)(v17 + 180);
  if ( v18 || (v20 = must_journal(a1, v15, v16), v18 = *(_DWORD *)(v17 + 180), v20) )
    *(_DWORD *)(v17 + 180) = --v18;
  if ( !v18 )
  {
    v19 = *(_QWORD *)(v17 + 72);
    if ( v19 )
    {
      add_undo_record(*(unsigned int *)(v17 + 176), *(_QWORD *)(v17 + 64), v19);
      v21 = *(void **)(v17 + 64);
      if ( v21 )
      {
        *(_QWORD *)(v17 + 72) = 0;
        qfree(v21);
        *(_QWORD *)(v17 + 64) = 0;
        *(_QWORD *)(v17 + 80) = 0;
      }
      *(_QWORD *)(v17 + 144) = -1;
    }
  }
}
