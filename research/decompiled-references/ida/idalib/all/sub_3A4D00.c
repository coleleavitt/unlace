unsigned __int64 __fastcall sub_3A4D00(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ecx
  __int64 v5; // [rsp+8h] [rbp-20h] BYREF
  __int64 v6; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6 = 1;
  v2 = *(_QWORD *)(qword_2CCB598 + 1536);
  v3 = *(_DWORD *)(v2 + 1800);
  v5 = a1;
  sub_3A42A0((_QWORD *)(v2 + 1736), &v5, &v6, v3);
  return v7 - __readfsqword(0x28u);
}
