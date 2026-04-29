__int64 __fastcall sub_1E0250(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+8h] [rbp-20h]
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v2 = *a2;
  v3 = *((unsigned int *)a2 + 2);
  v8 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v7 = 5;
  v6 = v2 - *(_QWORD *)(v4 + 1440);
  return (unsigned __int8)sub_1DFD90(*(_QWORD *)(a1 + 16), a1 + 24, &v6, v3) ^ 1u;
}
