__int64 __fastcall sub_1F6FE30(__int64 a1, __int64 a2)
{
  int v3; // r12d

  sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_DWORD *)a2, *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  v3 = *(_DWORD *)(a2 + 8);
  sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a2 + 4), *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), v3, *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  sub_183F100(*(_QWORD *)a1 + 24LL, *(_QWORD *)(a2 + 16));
  return sub_183F100(*(_QWORD *)a1 + 24LL, *(_QWORD *)(a2 + 24));
}
