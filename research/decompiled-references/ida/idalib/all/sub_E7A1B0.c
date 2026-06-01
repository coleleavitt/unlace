_BYTE *__fastcall sub_E7A1B0(__int64 *a1)
{
  __int64 v2; // rdi
  _BYTE *v3; // rax
  void *v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  _BYTE *result; // rax
  void *v8; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-10h]
  char v10; // [rsp+Ch] [rbp-Ch]

  v2 = *(_QWORD *)(*a1 + 8);
  v3 = *(_BYTE **)(v2 + 32);
  if ( (unsigned __int64)v3 >= *(_QWORD *)(v2 + 24) )
  {
    sub_227BA10(v2, 48);
  }
  else
  {
    *(_QWORD *)(v2 + 32) = v3 + 1;
    *v3 = 48;
  }
  v4 = (void *)a1[1];
  v5 = *a1;
  v10 = 0;
  v9 = 64;
  v8 = v4;
  sub_E79C70(v5, (__int64)&v8);
  if ( v9 > 0x40 && v8 )
    operator delete[](v8);
  v6 = *(_QWORD *)(*a1 + 8);
  result = *(_BYTE **)(v6 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v6 + 24) )
    return (_BYTE *)sub_227BA10(v6, 64);
  *(_QWORD *)(v6 + 32) = result + 1;
  *result = 64;
  return result;
}
