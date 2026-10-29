__int64 __fastcall sub_174F20(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ecx

  v3 = *(_DWORD *)(a2 + 84);
  if ( v3 == 2 )
  {
    reg_int_op();
    return 1;
  }
  v4 = 0;
  if ( v3 == 3 )
  {
    sub_174E60(&qword_2553F0, a2, a3);
    return 1;
  }
  return v4;
}

