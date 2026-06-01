bool __fastcall sub_F3F090(__int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  bool result; // al
  __int64 (*v4)(); // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 (*v7)(); // rax
  __int64 v8; // rax

  v1 = sub_F3DED0(a1);
  v2 = sub_E6C380(*(_QWORD *)(a1 + 40));
  result = 0;
  if ( v1 != (_QWORD *)v2 )
  {
    v4 = *(__int64 (**)())(*v1 + 32LL);
    if ( v4 == sub_9DD400 )
    {
      v5 = v2;
      v6 = sub_B4CD20((__int64)v1);
      v7 = *(__int64 (**)())(*(_QWORD *)v2 + 32LL);
      if ( v7 == sub_9DD400 )
      {
LABEL_4:
        v8 = sub_B4CD20(v5);
        return v6 != v8;
      }
    }
    else
    {
      v5 = v2;
      v6 = ((__int64 (__fastcall *)(_QWORD *))v4)(v1);
      v7 = *(__int64 (**)())(*(_QWORD *)v2 + 32LL);
      if ( v7 == sub_9DD400 )
        goto LABEL_4;
    }
    v8 = ((__int64 (__fastcall *)(__int64))v7)(v5);
    return v6 != v8;
  }
  return result;
}

