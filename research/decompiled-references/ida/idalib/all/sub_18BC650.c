__int64 __fastcall sub_18BC650(__int64 a1, void (__fastcall ****a2)(_QWORD))
{
  __int64 (__fastcall *v2)(__int64, __int64); // rax

  v2 = (__int64 (__fastcall *)(__int64, __int64))(*a2)[10];
  if ( v2 == sub_18BA910 )
    (**a2[2])(a1);
  else
    ((void (__fastcall *)(__int64))v2)(a1);
  return a1;
}
