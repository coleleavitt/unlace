__int64 *__fastcall sub_592CA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx

  v2 = sub_186B270(0x40u);
  v3 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)v2 = &off_1C51CC0;
  *(_DWORD *)(v2 + 24) = v3;
  *(_QWORD *)(v2 + 16) = a2;
  *(_QWORD *)(v2 + 40) = a2;
  *(_QWORD *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 32) = &off_1C680D8;
  *(_QWORD *)(v2 + 56) = v2;
  *a1 = v2;
  *(_DWORD *)(v2 + 8) = 1;
  return a1;
}

