__int64 __fastcall sub_153BE0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  int v10; // [rsp+8h] [rbp-30h]
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  v1 = sub_15CFF0(a1 + 440);
  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 40) + 16LL))(*(_QWORD *)(v1 + 40));
  v3 = (unsigned int)*(__int16 *)(v1 + 30);
  v4 = v2;
  LODWORD(v2) = *(__int16 *)(v1 + 28);
  v9 = v4;
  v10 = v2;
  sub_152D00(a1, (__int64)&v9, v3, v5, v6, v7);
  return qfree();
}

