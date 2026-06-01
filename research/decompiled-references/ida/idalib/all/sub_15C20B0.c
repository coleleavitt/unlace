_QWORD *__fastcall sub_15C20B0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // [rsp+8h] [rbp-10h] BYREF

  v1 = *a1;
  v2 = *a1;
  if ( (*a1 & 1) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFELL);
  v3 = *(_QWORD *)(v2 + 40);
  v8 = v3;
  if ( (v3 & 7) != 0 )
  {
    v4 = sub_B85750(&v8);
    v1 = *a1;
  }
  else
  {
    v4 = *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  }
  result = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFELL);
  v6 = v1 & 0xFFFFFFFFFFFFFFFELL;
  v7 = 0;
  if ( v6 != *result )
    v7 = (v6 - 8) | 1;
  *a1 = v7;
  return result;
}
