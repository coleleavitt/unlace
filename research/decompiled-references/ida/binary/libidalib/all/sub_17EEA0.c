void __fastcall sub_17EEA0(_QWORD *a1)
{
  _QWORD **v1; // rbx

  v1 = (_QWORD **)a1[4];
  for ( *a1 = &off_22F558; a1 + 2 != v1; v1 = (_QWORD **)std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v1[4] + 32LL))(v1[4], a1);
  sub_17EC80((_QWORD *)a1[3]);
  operator delete(a1, 0x40u);
}

