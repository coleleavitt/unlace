char __fastcall Z3_solver_reset(__int64 a1, _QWORD *a2)
{
  char v2; // bp
  char result; // al
  _DWORD *v4; // r13
  void (__fastcall ***v6)(_QWORD); // r13
  __int64 v7; // rbx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    result = sub_29D8A0(a1, (__int64)a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = (_DWORD *)a2[4];
  if ( v4 )
  {
    if ( v4[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v4)(v4);
      result = sub_186B220(v4);
    }
  }
  v6 = (void (__fastcall ***)(_QWORD))a2[9];
  a2[4] = 0;
  if ( v6 )
  {
    (**v6)(v6);
    result = sub_186B220(v6);
    a2[9] = 0;
  }
  v7 = a2[8];
  if ( v7 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    result = sub_168AD60(v7, "(reset)\n");
  }
  if ( v2 )
  {
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  return result;
}

