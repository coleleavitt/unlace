bool __fastcall sub_F62DD0(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  bool result; // al
  __int64 (__fastcall *v4)(_QWORD *); // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rax

  v1 = sub_F61C10(a1);
  v2 = sub_E900C0(*(_QWORD *)(a1 + 40));
  result = 0;
  if ( v1 != (_QWORD *)v2 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD *))(*v1 + 32LL);
    if ( (char *)v4 == (char *)sub_A01140 )
    {
      v5 = v2;
      v6 = sub_B70A60((__int64)v1);
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL);
      if ( v7 == sub_A01140 )
      {
LABEL_4:
        v8 = sub_B70A60(v5);
        return v6 != v8;
      }
    }
    else
    {
      v5 = v2;
      v6 = v4(v1);
      v7 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL);
      if ( v7 == sub_A01140 )
        goto LABEL_4;
    }
    v8 = v7(v5);
    return v6 != v8;
  }
  return result;
}
