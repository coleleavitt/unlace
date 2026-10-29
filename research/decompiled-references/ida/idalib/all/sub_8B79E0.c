__int64 __fastcall sub_8B79E0(__int64 a1, _BYTE *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 32) = v2 + 1;
  *a2 = *(_BYTE *)(v3 + v2);
  return 1;
}
