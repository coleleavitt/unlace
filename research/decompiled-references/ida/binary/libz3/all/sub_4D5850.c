__int64 __fastcall sub_4D5850(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  void (*v3)(void); // rdx

  v2 = *a1;
  if ( *((_DWORD *)a1 + 6) )
  {
    v3 = *(void (**)(void))(v2 + 160);
    if ( (char *)v3 == (char *)sub_4D9400 )
      (*(void (__fastcall **)(__int64 *, _QWORD))(v2 + 168))(a1, *a2);
    else
      v3();
    v2 = *a1;
  }
  return (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v2 + 40))(a1, a2);
}

