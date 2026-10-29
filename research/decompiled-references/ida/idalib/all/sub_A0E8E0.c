_QWORD *__fastcall sub_A0E8E0(_QWORD **a1)
{
  _QWORD *v1; // rax
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+10h] [rbp-18h] BYREF
  __int64 v4; // [rsp+18h] [rbp-10h] BYREF

  v1 = *a1;
  *a1 = nullptr;
  v3 = v1;
  result = sub_A05760(&v4, &v3);
  if ( v3 )
    return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
  return result;
}
