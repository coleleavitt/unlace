_QWORD *__fastcall sub_112D0D0(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v3; // rbp
  __int64 v4; // rdi
  _QWORD *v5; // [rsp+0h] [rbp-20h]

  result = (_QWORD *)a1[218];
  if ( !result )
  {
    v3 = sub_112CF10(a1);
    v5 = (_QWORD *)operator new(0x28u);
    sub_112B250(v5, (__int64)"Offload::Linker", (__int64)"linker", (__int64)a1);
    result = v5;
    v4 = a1[218];
    *v5 = &off_2C37E28;
    v5[4] = v3;
    a1[218] = v5;
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      return (_QWORD *)a1[218];
    }
  }
  return result;
}
