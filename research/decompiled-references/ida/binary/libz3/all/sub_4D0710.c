__int64 __fastcall sub_4D0710(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (*v4)(void); // rdx
  __int64 (*v5)(void); // rax
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // r12d

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 216LL);
  if ( (char *)v4 == (char *)sub_4D0400 )
  {
    v5 = *(__int64 (**)(void))(*(_QWORD *)a1 + 200LL);
    if ( (char *)v5 == (char *)sub_4D0080 )
      v6 = a1 + 64;
    else
      v6 = v5();
    v7 = sub_4C3050(v6, a2);
  }
  else
  {
    v7 = v4();
  }
  if ( !v7 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 112LL))(v7);
  if ( !(_BYTE)v8 )
    return 0;
  *a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 96LL))(v7);
  return v8;
}

