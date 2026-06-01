void __fastcall sub_159970(__int64 a1)
{
  TView *v1; // rbp
  __int64 v2; // rax
  bool v3; // zf

  v1 = (TView *)(a1 - 104);
  *(_QWORD *)(a1 - 104) = &off_23B4B8;
  *(_QWORD *)(a1 - 32) = &off_23B7A0;
  *(_QWORD *)a1 = off_23B7B8;
  *(_QWORD *)(a1 + 56) = off_23B7E8;
  qfree();
  v2 = *(int *)(a1 + 1096);
  *(_QWORD *)(a1 + 1104) = 0;
  if ( (_DWORD)v2 != -1 )
  {
    v3 = v1 == (TView *)qword_254470;
    qword_2542C0[v2] = 0;
    if ( v3 )
      qword_254470 = 0;
  }
  sub_F9490(v1);
  operator delete(v1, 0x4C8u);
}

