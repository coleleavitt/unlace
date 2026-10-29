__int64 __fastcall sub_112B530(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 (*v4)(); // rax

  v2 = 1;
  v3 = a1[9];
  v4 = *(__int64 (**)())(*a1 + 152LL);
  if ( v4 != sub_112B290 )
    v2 = ((unsigned __int8 (__fastcall *)(_QWORD *, __int64, __int64 (*)(), __int64))v4)(a1, a2, sub_112B290, 1);
  return sub_21B7850(v3, 874, 1189, v2);
}
