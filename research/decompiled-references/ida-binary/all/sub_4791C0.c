__int64 __fastcall sub_4791C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ecx
  const char *v6; // rdi

  v3 = *(_DWORD *)(a2 + 84);
  if ( v3 == 2 )
  {
    v6 = &s1;
    if ( *(_QWORD *)(a2 + 64) )
      v6 = *(const char **)(a2 + 56);
    reg_int_op(v6, 1, a3, "Hidden Messages");
    return 1;
  }
  v4 = 0;
  if ( v3 == 3 )
  {
    sub_479100(&qword_8D17B0, a2, a3);
    return 1;
  }
  return v4;
}
