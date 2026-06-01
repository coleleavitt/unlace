_QWORD *__fastcall sub_E17E00(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r9
  int v8; // r12d
  _QWORD *result; // rax
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  __int64 v11[4]; // [rsp+18h] [rbp-20h] BYREF

  v10 = a2;
  v2 = sub_EFEE90(&v10, 0);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  }
  else
  {
    v3 = sub_A92560(*(_QWORD **)(*(_QWORD *)a1 + 8LL), v10, 0);
    v10 = v3;
  }
  v8 = a1[10];
  v11[0] = v3;
  a1[10] = v8 + 1;
  result = sub_E177B0((__int64)(a1 + 58), v11, v4, v5, v6, v7);
  *(_DWORD *)result = v8;
  return result;
}

