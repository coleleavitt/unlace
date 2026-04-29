__int64 __fastcall sub_3C9E30(_QWORD *a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v3)(__int64, int); // rax
  __int64 result; // rax
  unsigned int v5; // edi

  v3 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 136LL);
  if ( v3 == sub_3C8610 )
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
    sub_3C8350(v5);
    return sub_66AC0();
  }
  return result;
}
