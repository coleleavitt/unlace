__int64 __fastcall sub_16FE630(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = v2;
  return 1;
}
