__int64 __fastcall sub_778740(_QWORD *a1, const char *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  char v4; // dl
  void (*v5)(); // rax

  v2 = sub_778200((__int64)a1, a2);
  result = 3;
  if ( v4 )
  {
    if ( v2 == -1 )
    {
      return 2;
    }
    else
    {
      v5 = *(void (**)())(*a1 + 104LL);
      if ( v5 != nullsub_236 )
        ((void (__fastcall *)(_QWORD *, _QWORD, __int64))v5)(a1, a1[12], v2);
      a1[12] = v2;
      return 0;
    }
  }
  return result;
}
