__int64 __fastcall sub_217EF90(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_QWORD *)a1 = *(_QWORD *)(v2 + 24);
  return a1;
}
