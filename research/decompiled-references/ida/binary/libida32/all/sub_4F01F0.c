unsigned __int64 __fastcall sub_4F01F0(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v1 = *(_DWORD *)a1;
  v4 = __readfsqword(0x28u);
  sub_4EF9B0(*(_QWORD *)(a1 + 40), (unsigned int *)a1);
  v3 = v1;
  netnode_kill((int)&v3);
  return v4 - __readfsqword(0x28u);
}

