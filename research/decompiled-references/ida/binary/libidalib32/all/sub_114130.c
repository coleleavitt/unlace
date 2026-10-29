__int64 __fastcall sub_114130(_QWORD *a1)
{
  __int64 (__fastcall *v1)(_QWORD); // rdx
  _QWORD *v2; // rdi

  v1 = (__int64 (__fastcall *)(_QWORD))a1[2];
  v2 = (_QWORD *)(a1[1] + a1[3]);
  if ( ((unsigned __int8)v1 & 1) != 0 )
    v1 = *(__int64 (__fastcall **)(_QWORD))((char *)v1 + *v2 - 1);
  return v1(v2);
}

