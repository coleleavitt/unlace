__int64 __fastcall sub_7BF110(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_7B9AC0((_QWORD *)a1, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  sub_7B9AC0((_QWORD *)(a1 + 24), a2 + 24);
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  sub_7B9AC0((_QWORD *)(a1 + 48), a2 + 48);
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_7B9AC0((_QWORD *)(a1 + 72), a2 + 72);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  result = *(unsigned int *)(a2 + 112);
  *(_DWORD *)(a1 + 112) = result;
  return result;
}

