char __fastcall sub_14BF90(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  char v5; // bl
  unsigned __int8 v7[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v3 = *(_DWORD *)(a3 + 4);
  v8 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 4) > v3 )
  {
    sub_11D380((__int64)v7, (unsigned __int8 *)a1);
    sub_1212F0((unsigned __int64)v7, a2, -1, *(_DWORD *)(a3 + 4));
    v5 = sub_11F4A0(v7, a3, 0);
    sub_1166E0((__int64)v7);
    return v5;
  }
  if ( *(_DWORD *)(a1 + 4) < v3 )
  {
    sub_11D380((__int64)v7, (unsigned __int8 *)a3);
    sub_1212F0((unsigned __int64)v7, a2, -1, *(_DWORD *)(a1 + 4));
    v5 = sub_11F4A0(v7, a1, 0);
    sub_1166E0((__int64)v7);
    return v5;
  }
  return sub_11F4A0((unsigned __int8 *)a1, a3, 0);
}
