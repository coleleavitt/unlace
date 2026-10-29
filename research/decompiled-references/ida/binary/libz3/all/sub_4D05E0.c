__int64 __fastcall sub_4D05E0(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rdx
  __int64 (*v3)(void); // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 216LL);
  if ( (char *)v2 == (char *)sub_4D0400 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 200LL);
    if ( (char *)v3 == (char *)sub_4D0080 )
      v4 = a1 + 64;
    else
      v4 = v3();
    v5 = sub_4C3050(v4, a2);
  }
  else
  {
    v5 = v2();
  }
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  else
    return 1;
}

