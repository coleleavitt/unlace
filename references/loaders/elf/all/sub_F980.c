__int64 __fastcall sub_F980(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 600LL);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL);
  *(_QWORD *)(result + 104) = sub_11AA0;
  *(_QWORD *)(result + 112) = v2;
  return result;
}
