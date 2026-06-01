/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E010
// Address: 0x000000000046E010

//----- (000000000046E010) ----------------------------------------------------
void __fastcall __noreturn sub_46E010(__int64 a1, unsigned int a2)
{
  char *v3; // rax
  _QWORD *v4; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  pthread_t v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  void *v11; // rdi

  v3 = strsignal(a2);
  sub_4724D0("%s: terminating the server\n", v3);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD **)(a1 + 88);
  v5 = (_QWORD *)v4[4];
  v6 = v4 + 2;
  if ( v5 != v4 + 2 )
  {
    do
    {
      v7 = v5[5];
      v8 = (_QWORD *)v5[4];
      if ( v7 )
        j__pthread_detach(v7);
      if ( v8 && v8[17] )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 24LL))(v8, a2);
        sub_46D7D0((__int64)v8);
      }
      v9 = std::_Rb_tree_increment(v5);
      v4 = *(_QWORD **)(a1 + 88);
      v5 = (_QWORD *)v9;
      v6 = v4 + 2;
    }
    while ( (_QWORD *)v9 != v4 + 2 );
  }
  v10 = v4[3];
  while ( v10 )
  {
    sub_46DCF0(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x30u);
  }
  v4[3] = 0;
  v4[4] = v6;
  v4[5] = v6;
  v4[6] = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  sub_46F0A0((_QWORD *)(a1 + 80));
  _exit(a2 != 15);
}
// 405450: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
