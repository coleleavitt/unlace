__int64 __fastcall sub_ACBAC0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  const char *(*v3)(); // rdx
  const char *v4; // rax
  unsigned int v5; // edx

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
  v3 = *(const char *(**)())(*a1 + 16LL);
  v4 = "f_var_plus_offset";
  if ( v3 != sub_ACB7E0 )
    v4 = (const char *)((__int64 (__fastcall *)(_QWORD *))v3)(a1);
  v5 = 0;
  if ( (const char *)v2 == v4 && a1[2] == a2[2] && a1[3] == a2[3] )
    LOBYTE(v5) = a1[4] == a2[4];
  return v5;
}

