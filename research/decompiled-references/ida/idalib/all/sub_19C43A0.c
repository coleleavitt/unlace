bool __fastcall sub_19C43A0(_QWORD *a1, _QWORD *a2)
{
  __int64 (*v2)(void); // rax
  __int64 v3; // rbp
  __int64 (__fastcall *v4)(__int64); // rax

  v2 = *(__int64 (**)(void))(*a1 + 32LL);
  if ( (char *)v2 == (char *)sub_A55E60 )
  {
    v3 = a1[12];
    v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 32LL);
    if ( v4 == sub_A55E60 )
      return v3 == a2[12];
  }
  else
  {
    v3 = v2();
    v4 = *(__int64 (__fastcall **)(__int64))(*a2 + 32LL);
    if ( v4 == sub_A55E60 )
      return v3 == a2[12];
  }
  return v3 == v4((__int64)a2);
}
