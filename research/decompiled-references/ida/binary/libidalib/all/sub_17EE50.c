void __fastcall sub_17EE50(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 32);
  for ( *(_QWORD *)a1 = &off_22F558; a1 + 16 != v1; v1 = std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v1 + 32) + 32LL))(*(_QWORD *)(v1 + 32), a1);
  sub_17EC80(*(_QWORD **)(a1 + 24));
}

