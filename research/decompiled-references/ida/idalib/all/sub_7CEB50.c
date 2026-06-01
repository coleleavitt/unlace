__int64 __fastcall sub_7CEB50(__int64 a1)
{
  __int64 result; // rax

  result = qmutex_create();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = result;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_OWORD *)a1 = 0;
  return result;
}
