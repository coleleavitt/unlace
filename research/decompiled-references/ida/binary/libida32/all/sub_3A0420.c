unsigned __int64 __fastcall sub_3A0420(unsigned int a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ecx
  unsigned int v5; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v6; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6 = 1;
  v2 = *(_QWORD *)(qword_2CA1698 + 1344);
  v3 = *(_DWORD *)(v2 + 1768);
  v5 = a1;
  sub_39F820((_QWORD *)(v2 + 1704), &v5, &v6, v3);
  return v7 - __readfsqword(0x28u);
}

