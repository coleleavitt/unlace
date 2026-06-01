_BYTE *__fastcall sub_12140A0(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a1 + 16;
  sub_1213B80((_QWORD *)a1, *(_BYTE **)a2, *(_QWORD *)a2 + *(_QWORD *)(a2 + 8));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = a1 + 64;
  sub_1213B80((_QWORD *)(a1 + 48), *(_BYTE **)(a2 + 48), *(_QWORD *)(a2 + 48) + *(_QWORD *)(a2 + 56));
  *(_QWORD *)(a1 + 80) = a1 + 96;
  sub_1213B80((_QWORD *)(a1 + 80), *(_BYTE **)(a2 + 80), *(_QWORD *)(a2 + 80) + *(_QWORD *)(a2 + 88));
  *(_QWORD *)(a1 + 112) = a1 + 128;
  return sub_1213B80((_QWORD *)(a1 + 112), *(_BYTE **)(a2 + 112), *(_QWORD *)(a2 + 112) + *(_QWORD *)(a2 + 120));
}
