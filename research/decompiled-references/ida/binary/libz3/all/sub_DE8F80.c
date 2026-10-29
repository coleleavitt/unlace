__int64 __fastcall sub_DE8F80(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r12
  const char *(*v3)(); // rdx
  const char *v4; // rax
  unsigned int v5; // edx

  v2 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 96LL))(a2);
  v3 = *(const char *(**)())(*(_QWORD *)a1 + 96LL);
  v4 = "psort_var";
  if ( v3 != sub_DE8690 )
    v4 = (const char *)((__int64 (__fastcall *)(_DWORD *))v3)(a1);
  v5 = 0;
  if ( (const char *)v2 != v4 || a1[3] != a2[3] )
    return 0;
  LOBYTE(v5) = a1[8] == a2[8];
  return v5;
}

