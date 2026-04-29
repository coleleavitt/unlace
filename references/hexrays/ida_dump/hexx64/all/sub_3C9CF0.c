__int64 __fastcall sub_3C9CF0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  void (*v6)(); // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a1[5] + 528LL) + 8LL * (int)a3);
  result = 0;
  if ( *(_QWORD *)(v4 + 400) > 1u )
  {
    sub_66AC0(a2, (__int64)"node: { title: \"%d\" label: \"%s\" ", a3, *(const char **)(v4 + 392));
    v6 = *(void (**)())(*a1 + 48LL);
    if ( v6 != nullsub_1 )
      ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v6)(a1, a2, a3);
    sub_66AC0(a2, (__int64)" }\n");
    return 1;
  }
  return result;
}
