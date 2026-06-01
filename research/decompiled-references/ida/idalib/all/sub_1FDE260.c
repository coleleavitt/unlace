__int64 __fastcall sub_1FDE260(_QWORD **a1)
{
  _QWORD *v1; // rax
  _QWORD *v3; // [rsp+10h] [rbp-18h] BYREF
  __int64 v4; // [rsp+18h] [rbp-10h] BYREF

  v1 = *a1;
  *a1 = nullptr;
  v3 = v1;
  sub_A05760(&v4, &v3);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
  return 0;
}
