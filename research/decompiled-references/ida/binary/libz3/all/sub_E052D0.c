_QWORD *__fastcall sub_E052D0(__int64 a1, char *a2)
{
  _QWORD *result; // rax
  __int64 (__fastcall *v3)(__int64); // rax
  __int64 v4; // rdi

  result = sub_E04ED0(a1 + 424, a2);
  if ( *(_BYTE *)(a1 + 240) )
  {
    sub_1875400(*(_QWORD *)(a1 + 496));
    v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL);
    if ( v3 == sub_25D2E0 )
    {
      return (_QWORD *)sub_180B140(*(_QWORD *)(a1 + 496));
    }
    else
    {
      v4 = v3(a1);
      return (_QWORD *)sub_180B140(v4);
    }
  }
  return result;
}

