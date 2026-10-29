unsigned __int64 __fastcall sub_4FC910(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  __int64 v4; // rbx
  int v6; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v4 = *(_QWORD *)(a2 + 1576);
  v7 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(v4 + 64);
  if ( (unsigned __int8)sub_419CF0(a2, &v6, a3, a4) )
    *(_DWORD *)(v4 + 64) = v6;
  return v7 - __readfsqword(0x28u);
}

