_QWORD *__fastcall sub_246C0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  v2 = operator new(0x20u);
  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 72);
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)(v2 + 16) = v3;
  *(_QWORD *)v2 = off_AA0C8;
  *(_QWORD *)(v2 + 24) = v4;
  *a1 = v2;
  return a1;
}
