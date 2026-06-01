__int64 __fastcall sub_5E84E0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rax

  *(_QWORD *)(a1 + 32) = a2;
  v3 = a1 + 40;
  *(_QWORD *)(v3 - 40) = off_1C52698;
  v4 = *a2;
  *(_DWORD *)(v3 - 32) = a3;
  *(_BYTE *)(v3 - 28) = 0;
  *(_QWORD *)(v3 - 24) = 0;
  *(_QWORD *)(v3 - 16) = v4;
  return sub_1684300(v3, v4);
}

