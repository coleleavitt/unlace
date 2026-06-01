_QWORD *__fastcall sub_9BD2D0(__int64 **a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  _QWORD *result; // rax
  __int64 v15; // rax
  void *v16[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v17[56]; // [rsp+10h] [rbp-38h] BYREF

  v5 = sub_C709A0(a2);
  sub_B62CC0(v16, v5 + 40);
  if ( sub_990D60((__int64)v16, "get") || *(_DWORD *)(a2 + 16) )
  {
    if ( v16[0] != v17 )
      operator delete(v16[0]);
    v15 = sub_C70940(a2);
    return sub_9BCE00(a1, a2, a3, v15);
  }
  else
  {
    if ( v16[0] != v17 )
      operator delete(v16[0]);
    v6 = sub_C70940(a2);
    v8 = sub_9BB7E0((__int64)a1, v6, a3, v7);
    v11 = *a1;
    v12 = v8;
    v13 = **a1;
    v11[10] += 24;
    result = (_QWORD *)((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v11[1] >= (unsigned __int64)(result + 3) && v13 )
      *v11 = (__int64)(result + 3);
    else
      result = (_QWORD *)sub_962430((__int64)v11, 24, 24, 4, v9, v10);
    result[2] = v12;
    *result = 327701;
    result[1] = 0;
  }
  return result;
}

