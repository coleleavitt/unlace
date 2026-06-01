__int64 *__fastcall sub_1F19370(__int64 a1)
{
  __int64 *v1; // r13
  unsigned __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // r12
  _DWORD *v9; // rdx
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v1 = nullptr;
  v2 = sub_1F16500(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), (_DWORD *)(a1 + 24));
  if ( (v2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v6 = sub_A81BC0(*(_QWORD **)(*(_QWORD *)(a1 + 8) + 144LL), v2, 0, v3, v4, v5);
    v7 = *v6;
    v1 = v6;
    v8 = v6 + 1;
    for ( v11[0] = a1; v7; v8 = v9 )
    {
      sub_1F191F0(v11, v7, v8);
      v7 = sub_F6C7E0(v7, v8);
    }
  }
  return v1;
}
