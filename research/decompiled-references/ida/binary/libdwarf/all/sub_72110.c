__int64 __fastcall sub_72110(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  _QWORD *v3; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v2 & 7;
  v3 = (_QWORD *)(v1 - (v2 >> 3));
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)a1 = *v3;
  return 0;
}

