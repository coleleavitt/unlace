__int64 __fastcall sub_157D800(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 i; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v7[184]; // [rsp+0h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(a2 + 448);
  result = 5LL * *(unsigned int *)(a2 + 456);
  for ( i = v2 + 40LL * *(unsigned int *)(a2 + 456); i != v2; result = sub_15F7200(v7) )
  {
    v5 = *(unsigned int *)(v2 + 24);
    v6 = v2;
    v2 += 40;
    sub_168CDE0(v7, a1 + 8, v5, v6, 0);
  }
  return result;
}
