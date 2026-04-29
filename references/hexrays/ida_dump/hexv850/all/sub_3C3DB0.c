__int64 __fastcall sub_3C3DB0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v3)(__int64, int); // rax
  __int64 result; // rax
  unsigned int v5; // edi
  char *v6; // rax

  v3 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 136LL);
  if ( v3 == sub_3C2590 )
  {
    result = a1[38];
    if ( *(int *)(result + 4LL * a3) <= 14 )
      return result;
    v5 = 65280;
    goto LABEL_4;
  }
  result = v3((__int64)a1, a3);
  v5 = result;
  if ( (_DWORD)result != -1 )
  {
LABEL_4:
    v6 = sub_3C22D0(v5);
    return sub_62040(a2, (__int64)" color: %s", v6);
  }
  return result;
}
