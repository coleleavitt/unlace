__int64 __fastcall sub_5F10(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = a2 - a1;
  switch ( a2 - (_DWORD)a1 )
  {
    case 1:
    case 3:
    case 5:
      create_data(a1, 0, v2, -1);
      break;
    case 2:
      create_data(a1, 0x10000000, 2, -1);
      break;
    case 4:
      create_data(a1, 0x20000000, 4, -1);
      break;
    default:
      break;
  }
  v3 = num_flag();
  set_op_type(a1, v3, 0);
  return v2;
}

