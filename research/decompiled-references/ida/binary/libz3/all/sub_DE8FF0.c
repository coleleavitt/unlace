__int64 __fastcall sub_DE8FF0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  const char *(*v3)(); // rdx
  const char *v4; // rax
  unsigned int v5; // edx

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 96LL))(a2);
  v3 = *(const char *(**)())(*a1 + 96LL);
  v4 = "psort_sort";
  if ( v3 != sub_DE8660 )
    v4 = (const char *)((__int64 (__fastcall *)(_QWORD *))v3)(a1);
  v5 = 0;
  if ( (const char *)v2 == v4 )
    LOBYTE(v5) = a1[4] == a2[4];
  return v5;
}

