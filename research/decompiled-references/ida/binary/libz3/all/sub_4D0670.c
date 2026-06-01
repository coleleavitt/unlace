_QWORD *__fastcall sub_4D0670(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64); // rdx
  __int64 (*v8)(void); // rax
  __int64 v9; // rdi
  __int64 v10; // rax

  v6 = a2[7];
  *a1 = 0;
  a1[1] = v6;
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*a2 + 216LL);
  if ( v7 == sub_4D0400 )
  {
    v8 = *(__int64 (**)(void))(*a2 + 200LL);
    if ( (char *)v8 == (char *)sub_4D0080 )
      v9 = (__int64)(a2 + 8);
    else
      v9 = v8();
    v10 = sub_4C3050(v9, a3);
  }
  else
  {
    v10 = v7((__int64)a2, a3);
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 144LL))(v10, a1);
  return a1;
}

