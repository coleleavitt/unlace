__int64 __fastcall set_auto_state(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdi
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = **(_QWORD **)(qword_2CCB598 + 1672);
  v5 = a1;
  v2 = *(_QWORD *)(v1 + 1536);
  v3 = *(_DWORD *)(v2 + 144);
  sub_3A2DF0((unsigned int *)(v2 + 144), &v5, 0x76u);
  return v3;
}
