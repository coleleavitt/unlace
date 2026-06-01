__int64 __fastcall sub_21C7250(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  bool v5; // r13
  __int64 v6; // r14
  char *v8; // r15
  size_t v9; // rax
  char *v10; // r14
  unsigned __int64 v11; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  v5 = a3 == 5;
  *(_BYTE *)(a1 + 16) = 0;
  if ( a3 == 5 && a4 )
  {
    v6 = a2;
    v8 = off_2BE9960[a2];
    v9 = j__strlen(v8);
    sub_99BDC0((_QWORD *)a1, 0, 0, v8, v9);
  }
  else
  {
    v6 = a2;
    if ( a3 == 1 )
    {
      sub_9EE7C0((_QWORD *)a1, off_2BE99E0[a2]);
      return a1;
    }
  }
  v10 = off_2BE9A60[v6];
  v11 = j__strlen(v10);
  if ( v11 > 0x7FFFFFFFFFFFFFFFLL - *(_QWORD *)(a1 + 8) )
    std::__throw_length_error("basic_string::append");
  sub_9EE560((_QWORD *)a1, v10, v11);
  if ( (a4 & (a2 == 0)) != 0 && v5 )
    sub_9EE7C0((_QWORD *)a1, ",regular,live_support");
  return a1;
}
