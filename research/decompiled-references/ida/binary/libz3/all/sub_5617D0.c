__int64 __fastcall sub_5617D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 5000;
  *(_QWORD *)a1 = &off_1C50F78;
  v2 = *a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = v2;
  v3 = sub_64B220(a2);
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 40) = v3;
  result = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 56) = a2 + 82;
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = result;
  *(_QWORD *)(a1 + 88) = 0;
  return result;
}

