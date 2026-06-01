__int64 __fastcall sub_5DA440(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 50;
  *(_QWORD *)a1 = &off_1C525D8;
  result = *a2;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 40) = a2 + 82;
  *(_QWORD *)(a1 + 48) = result;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = result;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  return result;
}

