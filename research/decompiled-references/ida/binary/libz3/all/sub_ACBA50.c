__int64 __fastcall sub_ACBA50(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  const char *(*v3)(); // rdx
  const char *v4; // rax
  unsigned int v5; // edx

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 16LL))(a2);
  v3 = *(const char *(**)())(*a1 + 16LL);
  v4 = "select_var";
  if ( v3 != sub_ACB800 )
    v4 = (const char *)((__int64 (__fastcall *)(_QWORD *))v3)(a1);
  v5 = 0;
  if ( (const char *)v2 != v4 || a1[4] != a2[4] )
    return 0;
  LOBYTE(v5) = a1[5] == a2[5];
  return v5;
}

