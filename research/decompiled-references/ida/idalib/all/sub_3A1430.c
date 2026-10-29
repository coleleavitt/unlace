__int64 __fastcall sub_3A1430(unsigned int *a1, char a2)
{
  unsigned int *v2; // r14
  unsigned int *v3; // r13
  unsigned int *v4; // r12
  __int64 v6; // rdi
  unsigned int *v7; // rbx

  v2 = a1 + 42;
  v3 = a1 + 42;
  v4 = a1 + 406;
  v6 = a1[56];
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = v3 + 2;
      v3 += 26;
      register_undo_handler(v6, sub_3A51C0, v7, 1);
      register_undo_handler(v2[15], sub_3A50B0, v7, 1);
      register_undo_handler(v2[16], sub_3A52C0, v7, 1);
      register_undo_handler(v2[17], sub_3A50D0, v7, 1);
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 16LL))(v2);
      if ( v4 == v3 )
        break;
      v6 = v3[14];
      v2 = v3;
    }
    register_undo_handler(a1[420], sub_3A51C0, a1 + 408, 1);
    register_undo_handler(a1[421], sub_3A50B0, a1 + 408, 1);
    register_undo_handler(a1[422], sub_3A52C0, a1 + 408, 1);
    register_undo_handler(a1[423], sub_3A50D0, a1 + 408, 1);
    register_undo_handler(a1[424], sub_3A5480, a1 + 408, 1);
    register_undo_handler(a1[446], sub_3A51C0, a1 + 434, 1);
    register_undo_handler(a1[447], sub_3A50B0, a1 + 434, 1);
    register_undo_handler(a1[448], sub_3A52C0, a1 + 434, 1);
    register_undo_handler(a1[449], sub_3A50D0, a1 + 434, 1);
    register_undo_handler(a1[450], sub_3A5480, a1 + 434, 1);
    register_undo_handler(116, sub_3A02E0, 0, 1);
    register_undo_handler(117, sub_3A0140, 0, 1);
    register_undo_handler(118, sub_3A01A0, 0, 1);
    register_undo_handler(119, sub_3A7980, 0, 1);
    return register_undo_handler(120, sub_3A7860, 0, 1);
  }
  else
  {
    while ( 1 )
    {
      v3 += 26;
      register_undo_handler(v6, 0, 0, 0);
      register_undo_handler(v2[15], 0, 0, 0);
      register_undo_handler(v2[16], 0, 0, 0);
      register_undo_handler(v2[17], 0, 0, 0);
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
      if ( v4 == v3 )
        break;
      v6 = v3[14];
      v2 = v3;
    }
    register_undo_handler(a1[420], 0, 0, 0);
    register_undo_handler(a1[421], 0, 0, 0);
    register_undo_handler(a1[422], 0, 0, 0);
    register_undo_handler(a1[423], 0, 0, 0);
    register_undo_handler(a1[424], 0, 0, 0);
    register_undo_handler(a1[446], 0, 0, 0);
    register_undo_handler(a1[447], 0, 0, 0);
    register_undo_handler(a1[448], 0, 0, 0);
    register_undo_handler(a1[449], 0, 0, 0);
    register_undo_handler(a1[450], 0, 0, 0);
    register_undo_handler(118, 0, 0, 0);
    register_undo_handler(117, 0, 0, 0);
    register_undo_handler(116, 0, 0, 0);
    register_undo_handler(120, 0, 0, 0);
    return register_undo_handler(119, 0, 0, 0);
  }
}
