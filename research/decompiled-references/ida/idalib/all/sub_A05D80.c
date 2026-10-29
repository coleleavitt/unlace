__int64 __fastcall sub_A05D80(_BYTE *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // [rsp+10h] [rbp-18h] BYREF
  __int64 v5; // [rsp+18h] [rbp-10h] BYREF

  if ( (a1[8] & 1) == 0 )
    return *(_QWORD *)a1;
  v3 = *(_QWORD **)a1;
  *(_QWORD *)a1 = 0;
  v4 = v3;
  sub_A05760(&v5, &v4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
  return v1;
}
