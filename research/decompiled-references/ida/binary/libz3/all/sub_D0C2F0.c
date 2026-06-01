__int64 __fastcall sub_D0C2F0(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 *v3; // rdi
  __int64 v4; // rdx

  v2 = (_QWORD *)sub_186B270(0x10u);
  v3 = *(__int64 **)(a1 + 16);
  v4 = *v3;
  *(_QWORD *)(a1 + 16) = v2;
  *v2 = v4;
  return sub_186B220(v3);
}

