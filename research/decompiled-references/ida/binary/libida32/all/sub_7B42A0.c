__int64 __fastcall sub_7B42A0(__int64 a1, __int64 *a2)
{
  int v3; // esi
  int v5[2]; // [rsp+0h] [rbp-18h] BYREF
  int v6[2]; // [rsp+8h] [rbp-10h]

  *(_QWORD *)v6 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 60);
  *(_QWORD *)v5 = a1;
  return sub_7B3600((_QWORD **)v5, v3, a2);
}

