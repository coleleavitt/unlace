__int64 __fastcall sub_417220(__int64 a1, const char *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  sub_414580(*(void **)(v2 + 240), a2);
  *(_QWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 248) = v2 + 232;
  *(_QWORD *)(v2 + 256) = v2 + 232;
  *(_QWORD *)(v2 + 264) = 0;
  result = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(result + 272) = 1;
  return result;
}
