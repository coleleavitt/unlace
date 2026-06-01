__int64 __fastcall sub_39C870(unsigned int *a1, char a2)
{
  unsigned int *v2; // r14
  unsigned int *v3; // r13
  unsigned int *v4; // r12
  __int64 v6; // rdi
  unsigned int *v7; // rbx

  v2 = a1 + 34;
  v3 = a1 + 34;
  v4 = a1 + 398;
  v6 = a1[48];
  if ( a2 )
  {
    while ( 1 )
    {
      v7 = v3 + 2;
      v3 += 26;
      register_undo_handler(v6, sub_3A0B00, v7, 1);
      register_undo_handler(v2[15], sub_3A09F0, v7, 1);
      register_undo_handler(v2[16], sub_3A0C00, v7, 1);
      register_undo_handler(v2[17], sub_3A0A10, v7, 1);
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 16LL))(v2);
      if ( v4 == v3 )
        break;
      v6 = v3[14];
      v2 = v3;
    }
    register_undo_handler(a1[412], sub_3A0B00, a1 + 400, 1);
    register_undo_handler(a1[413], sub_3A09F0, a1 + 400, 1);
    register_undo_handler(a1[414], sub_3A0C00, a1 + 400, 1);
    register_undo_handler(a1[415], sub_3A0A10, a1 + 400, 1);
    register_undo_handler(a1[416], sub_3A0DC0, a1 + 400, 1);
    register_undo_handler(a1[438], sub_3A0B00, a1 + 426, 1);
    register_undo_handler(a1[439], sub_3A09F0, a1 + 426, 1);
    register_undo_handler(a1[440], sub_3A0C00, a1 + 426, 1);
    register_undo_handler(a1[441], sub_3A0A10, a1 + 426, 1);
    register_undo_handler(a1[442], sub_3A0DC0, a1 + 426, 1);
    register_undo_handler(116, sub_39B560, 0, 1);
    register_undo_handler(117, sub_39B3C0, 0, 1);
    register_undo_handler(118, sub_39B420, 0, 1);
    register_undo_handler(119, sub_3A3120, 0, 1);
    return register_undo_handler(120, sub_3A3000, 0, 1);
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
    register_undo_handler(a1[412], 0, 0, 0);
    register_undo_handler(a1[413], 0, 0, 0);
    register_undo_handler(a1[414], 0, 0, 0);
    register_undo_handler(a1[415], 0, 0, 0);
    register_undo_handler(a1[416], 0, 0, 0);
    register_undo_handler(a1[438], 0, 0, 0);
    register_undo_handler(a1[439], 0, 0, 0);
    register_undo_handler(a1[440], 0, 0, 0);
    register_undo_handler(a1[441], 0, 0, 0);
    register_undo_handler(a1[442], 0, 0, 0);
    register_undo_handler(118, 0, 0, 0);
    register_undo_handler(117, 0, 0, 0);
    register_undo_handler(116, 0, 0, 0);
    register_undo_handler(120, 0, 0, 0);
    return register_undo_handler(119, 0, 0, 0);
  }
}

