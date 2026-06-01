_QWORD *__fastcall sub_17DDD0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  result = (_QWORD *)operator new(0x20u);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *result = off_234CD0;
  result[1] = a2;
  result[2] = v3;
  result[3] = v4;
  return result;
}

