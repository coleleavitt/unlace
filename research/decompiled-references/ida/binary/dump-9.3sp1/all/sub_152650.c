char __fastcall sub_152650(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  char v6; // bl
  unsigned __int8 v8[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v4 = *(_DWORD *)(a3 + 4);
  v9 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 4) > v4 )
  {
    sub_123A40((__int64)v8, (unsigned __int8 *)a1, a3, a4);
    sub_1279B0((unsigned __int64)v8, a2, -1, *(_DWORD *)(a3 + 4));
    v6 = sub_125B60(v8, a3, 0);
    sub_11CDA0((__int64)v8);
    return v6;
  }
  if ( *(_DWORD *)(a1 + 4) < v4 )
  {
    sub_123A40((__int64)v8, (unsigned __int8 *)a3, a3, a4);
    sub_1279B0((unsigned __int64)v8, a2, -1, *(_DWORD *)(a1 + 4));
    v6 = sub_125B60(v8, a1, 0);
    sub_11CDA0((__int64)v8);
    return v6;
  }
  return sub_125B60((unsigned __int8 *)a1, a3, 0);
}
