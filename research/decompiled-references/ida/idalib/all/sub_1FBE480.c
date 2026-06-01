unsigned __int64 __fastcall sub_1FBE480(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v5[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_1F95F90(a1 + 8, a2[18]);
  sub_1FBE1E0(a1, (__int64)a2);
  v2 = a2[9];
  if ( (((unsigned __int8)v2 | (unsigned __int8)(v2 >> 1)) & 1) != 0
    || (v3 = v2 & 0xFFFFFFFFFFFFFFFELL, (result = v2 & 0xFFFFFFFFFFFFFFFCLL) == 0)
    && (v5[0] = v3, (result = sub_B7BB70(v5)) == 0) )
  {
    sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2[10] + 152LL) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
    result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2[10] + 152LL) >> 2) & 1);
  }
  *(_DWORD *)(a1 + 224) = 113;
  return result;
}
