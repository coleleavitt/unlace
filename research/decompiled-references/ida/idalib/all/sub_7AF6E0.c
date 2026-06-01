__int64 __fastcall sub_7AF6E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 1736);
  v3 = *(_QWORD *)(v2 + 2128);
  *(_QWORD *)(v2 + 2128) = a2;
  return v3;
}
