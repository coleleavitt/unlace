__int64 __fastcall sub_1837830(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = a2;
  result = sub_BC78F0((_BYTE *)a1, a2);
  *(_QWORD *)(a1 + 48) = v2;
  return result;
}
