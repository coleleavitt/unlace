/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140054100
// Address: 0x0000000140054100

//----- (0000000140054100) ----------------------------------------------------
void __fastcall __noreturn sub_140054100(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  void **v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+50h] [rbp+18h] BYREF

  sub_1400542D0("got signal #%d, terminating\n", a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 8LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD *)(a1 + 88);
  sub_1400400E0((_QWORD **)(v4 + 8), &v10);
  v5 = std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>>::_Unwrapped(
         v4 + 8,
         &v11);
  if ( (unsigned __int8)unknown_libname_6(&v10, v5) )
  {
    do
    {
      v6 = unknown_libname_7(&v10);
      v7 = *(void ***)(v6 + 8);
      v8 = *(_QWORD **)v6;
      if ( v7 )
        sub_14005D8F0(v7);
      if ( v8 )
      {
        if ( v8[17] )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, a2);
          sub_1400549F0((__int64)v8);
        }
      }
      sub_140021640(&v10);
      v4 = *(_QWORD *)(a1 + 88);
      v9 = std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>>::_Unwrapped(
             v4 + 8,
             &v11);
    }
    while ( (unsigned __int8)unknown_libname_6(&v10, v9) );
  }
  sub_140053870((_QWORD *)(v4 + 8));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  sub_1400545F0((_QWORD *)(a1 + 80));
  exit(a2 != 15);
}
// 14003FFE0: using guessed type __int64 __fastcall unknown_libname_6(_QWORD, _QWORD);
// 14003FFF0: using guessed type __int64 __fastcall unknown_libname_7(_QWORD);
// 140040150: using guessed type __int64 __fastcall std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,`anonymous namespace'::_Mutex_count_pair>>>>::_Unwrapped(_QWORD, _QWORD);
