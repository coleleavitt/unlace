__int64 __fastcall sub_1FC10E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 result; // rax

  sub_1F95F90(a1 + 8, a2[23]);
  sub_1FC0D10(a1, (__int64)a2);
  v5 = a2[12];
  if ( (((unsigned __int8)v5 | (unsigned __int8)(v5 >> 1)) & 1) != 0
    || (result = (__int64)sub_7052B0(a2 + 12, (__int64)a2, v5, v2, v3, v4)) == 0 )
  {
    sub_1F92A90(*(_QWORD *)(a1 + 16), *(_QWORD *)(a2[13] + 192) & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
    result = sub_9B9C90(*(_QWORD *)(a1 + 24), (*(__int64 *)(a2[13] + 192) >> 2) & 1);
  }
  *(_DWORD *)(a1 + 224) = 110;
  return result;
}
